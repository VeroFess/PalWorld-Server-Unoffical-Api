#include "hooks.h"
#include "spdlog/spdlog.h"
#include "engine_functions.h"
#include "utils.h"
#include "SDKDirect.h"

SDK::APlayerController *spawn_play_actor_proxy(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index) {
    auto controller = engine_spawn_play_actor(that, player, role, url, uid, error, index);
    if (!controller) {
        return nullptr;
    }

    // Verified
    auto state_raw = controller->PlayerState;
    static_assert(offsetof(SDK::APlayerController, PlayerState) == 0x298);
    ;

    SDK::FString faddress;

#ifdef __linux
    char16_t faddress_buffer[64] = { 0 };
#else
    wchar_t faddress_buffer[64]  = { 0 };
#endif

    faddress.Data        = faddress_buffer;
    faddress.MaxElements = 64;
    faddress.NumElements = 0;

    faddress.ResetNum();

#ifdef __linux
    auto faddress_ret = GetPlayerNetworkAddress(&faddress, controller);
#else
    auto    faddress_ret         = GetPlayerNetworkAddress(controller, &faddress);
#endif

    std::string address = faddress_ret->ToString();

    auto state = static_cast<SDK::APalPlayerState *>(state_raw);

    SDK::FString fraw_name;

#ifdef __linux
    char16_t fraw_name_buffer[64] = { 0 };
#else
    wchar_t fraw_name_buffer[64] = { 0 };
#endif

    fraw_name.Data        = fraw_name_buffer;
    fraw_name.MaxElements = 64;
    fraw_name.NumElements = 0;

    SDK::GetPlayerName(state, &fraw_name);

    std::string name = utf16_to_local_codepage(fraw_name.Data, fraw_name.NumElements);

    spdlog::info("[Event::Login] player {} login from {}", name, address);

    // if we return null, connection will close

    return controller;
}