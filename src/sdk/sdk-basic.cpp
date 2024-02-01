#include "SDKDirect.h"

SDK::UWorld              *SDK::World       = nullptr;
SDK::APalGameStateInGame *SDK::StateInGame = nullptr;

bool SDK::sdk_init() {
    World       = *reinterpret_cast<SDK::UWorld **>(uintptr_t(GetImageBaseOffset()) + Offsets::GWorld);
    StateInGame = GetPalGameStateInGame(World);

    if (!StateInGame) {
        return false;
    }
}
