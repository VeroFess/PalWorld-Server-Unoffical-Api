#include "SDKDirect.h"
#include <chrono>
#include <thread>

SDK::UWorld              *SDK::World       = nullptr;
SDK::APalGameStateInGame *SDK::StateInGame = nullptr;

constexpr size_t MAX_TRY_TIMES = 10;

bool SDK::sdk_init() {

    for (size_t times = 0; times < MAX_TRY_TIMES; times++) {
        if (World == nullptr) {
            World = *reinterpret_cast<SDK::UWorld **>(uintptr_t(GetImageBaseOffset()) + Offsets::GWorld);
        }

        if (World != nullptr) {
            StateInGame = GetPalGameStateInGame(World);
            if (StateInGame != nullptr) {
                return true;
            }
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return false;
}
