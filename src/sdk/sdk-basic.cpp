#include "SDKDirect.h"
#include <chrono>
#include <thread>

SDK::UWorld              *SDK::World       = nullptr;
SDK::APalGameStateInGame *SDK::StateInGame = nullptr;

bool SDK::sdk_init() {
    UObject::GObjects              = reinterpret_cast<TUObjectArray *>(uintptr_t(GetImageBaseOffset()) + Offsets::GObjects);
    World                          = *reinterpret_cast<SDK::UWorld **>(uintptr_t(GetImageBaseOffset()) + Offsets::GWorld);
    StateInGame                    = GetPalGameStateInGame();
    constexpr size_t MAX_TRY_TIMES = 10;

    for (size_t times = 0; times < MAX_TRY_TIMES; times++) {
        if (World == nullptr) {
            World = *reinterpret_cast<SDK::UWorld **>(uintptr_t(GetImageBaseOffset()) + Offsets::GWorld);
        }

        if (World != nullptr) {
            StateInGame = GetPalGameStateInGame();
            if (StateInGame != nullptr) {
                return true;
            }
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return false;
}
