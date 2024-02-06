#include "SDKDirect.h"

SDK::UWorld              *SDK::World       = nullptr;
SDK::APalGameStateInGame *SDK::StateInGame = nullptr;

bool SDK::sdk_init() {
    UObject::GObjects = reinterpret_cast<TUObjectArray *>(uintptr_t(GetImageBaseOffset()) + Offsets::GObjects);
    World             = *reinterpret_cast<SDK::UWorld **>(uintptr_t(GetImageBaseOffset()) + Offsets::GWorld);
    StateInGame       = GetPalGameStateInGame();

    if (!StateInGame) {
        return false;
    }
}
