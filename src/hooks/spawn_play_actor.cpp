#include "hooks.h"
#include "spdlog/spdlog.h"
#include "engine_functions.h"
#include "utils.h"

SDK::APlayerController *spawn_play_actor_proxy(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index) {
    static SDK::UPalUtility *utility = nullptr;
    if (!utility) {
        utility = SDK::UPalUtility::GetDefaultObj();
    }

    auto controller = engine_spawn_play_actor(that, player, role, url, uid, error, index);
    if (!controller) {
        return nullptr;
    }

    auto state_raw = controller->PlayerState;

    if (!state_raw) {
        spdlog::warn("state is null!");
        return nullptr;
    }

    if (!state_raw->IsA(SDK::APalPlayerState::StaticClass())) {
        spdlog::warn("state not a APalPlayerState!");
        return nullptr;
    }

    std::string address = std::string("[UNK]");

    if (controller->NetConnection) {
        auto fsaddress = LowLevelGetRemoteAddress(static_cast<SDK::UIpConnection *>(controller->NetConnection), true);

        if (fsaddress && fsaddress->IsValid() && fsaddress->Num() > 1) {
            address = fsaddress->ToString();
        }
    }

    auto     state    = static_cast<SDK::APalPlayerState *>(state_raw);
    auto     raw_name = state->GetPlayerName();
    uint32_t pid      = 0;

    if (state->PlayerUId.A != 0) {
        pid = static_cast<uint32_t>(state->PlayerUId.A);
    } else if (state->LoginTryingPlayerUId_InServer.A != 0) {
        pid = static_cast<uint32_t>(state->LoginTryingPlayerUId_InServer.A);
    } else {
        pid = state->GetPlayerId();
    }

    std::string name = utf16_to_local_codepage(raw_name.Data, raw_name.NumElements);

    spdlog::info("[Event::Login] player {} login from {} with id {:08x}, ", name, address, static_cast<uint32_t>(pid));

    // if we return null, connection will close

    return controller;
}