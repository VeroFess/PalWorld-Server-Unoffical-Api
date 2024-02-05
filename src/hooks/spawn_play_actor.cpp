#include "hooks.h"
#include "spdlog/spdlog.h"
#include "engine_functions.h"
#include "utils.h"
#include "console.h"
#include "SDKDirect.h"
#include "folly/IPAddress.h"
#include "events.h"

SDK::APlayerController *spawn_play_actor_proxy(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index) {
    auto controller = engine_spawn_play_actor(that, player, role, url, uid, error, index);
    if (!controller) {
        return nullptr;
    }

    // Verified
    auto state_raw = controller->PlayerState;
    static_assert(offsetof(SDK::APlayerController, PlayerState) == 0x298);

    SDK::FString  fs_address;
    engine_char_t fs_address_buffer[64] = { 0 };

    fs_address.Data        = fs_address_buffer;
    fs_address.MaxElements = 64;
    fs_address.NumElements = 0;

    fs_address.ResetNum();

#ifdef __linux
    GetPlayerNetworkAddress(&fs_address, controller);
#else
    GetPlayerNetworkAddress(controller, &fs_address);
#endif

    std::string address = fs_address.ToString();

    auto state = static_cast<SDK::APalPlayerState *>(state_raw);

    SDK::FString  fs_user_name;
    engine_char_t fs_user_name_buffer[64] = { 0 };

    fs_user_name.Data        = fs_user_name_buffer;
    fs_user_name.MaxElements = 64;
    fs_user_name.NumElements = 0;

    SDK::GetPlayerName(state, &fs_user_name);

    std::string user_name = utf16_to_local_codepage(fs_user_name.Data, fs_user_name.NumElements);

    auto ip_remote = folly::IPAddress::tryFromString(folly::fbstring(address));
    if (ip_remote.hasError()) {
        pal_async_log->warn("[Event::Login] player {} login blocked from {}. reason: invalid ip address", user_name, address);
        return nullptr;
    }

    auto ip_address_value = ip_remote.value();

    folly::fbstring fbs_user_name = folly::fbstring(user_name);

    user_login_event event_sync(fbs_user_name, ip_address_value);

    std::thread async_event_thread([&] {
        user_login_event_async event_async(fbs_user_name, ip_address_value);
        dispatcher.dispatch(event_async);
    });
    async_event_thread.detach();

    bool all_event_pass = dispatcher.forEachIf(EVENT_PRE_LOGIN, [&](const eventpp::EventDispatcher<uint32_t, bool(pal_loader_basic_event & e), pal_loader_event_policies>::Callback &cb) -> bool {
        if (cb(dynamic_cast<pal_loader_basic_event &>(event_sync))) {
            return false;
        }
        return true;
    });

    if (!all_event_pass) {
        pal_async_log->warn("[Event::Login] player {} login blocked from {}. reason: block by plugin", user_name, address);
        return nullptr;
    }

    pal_async_log->info("[Event::Login] player {} login from {}", user_name, address);
    return controller;
}