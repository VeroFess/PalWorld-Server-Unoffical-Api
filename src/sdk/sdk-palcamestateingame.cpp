#include "SDKDirect.h"

typedef SDK::FString *(*GetWorldNameType)(SDK::APalGameStateInGame *that);

GetWorldNameType GetWorldNamePrivete = nullptr;

SDK::FString *SDK::GetWorldName() {
    if (GetWorldNamePrivete == nullptr) {
        GetWorldNamePrivete = reinterpret_cast<GetWorldNameType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetWorldName);
    }

    return GetWorldNamePrivete(StateInGame);
}
