#include "SDKDirect.h"
#include "engine_functions.h"

ForceGarbageCollectionType                   ForceGarbageCollection                   = nullptr;
GetPlayerNetworkAddressType                  GetPlayerNetworkAddress                  = nullptr;
KickPlayerType                               KickPlayer                               = nullptr;
GetEmptyFTextType                            GetEmptyFText                            = nullptr;
GetPlayerStateFromControllerType             GetPlayerStateFromController             = nullptr;
NetworkComponentGetOwnerPlayerControllerType NetworkComponentGetOwnerPlayerController = nullptr;
UniqueNetIdToStringType                      UniqueNetIdToString                      = nullptr;
UniqueNetIdWrapperOperatorType               UniqueNetIdWrapperOperator               = nullptr;
SDK::UEngine                                *Engine                                   = nullptr;

void engine_init() {
    Engine                                   = *reinterpret_cast<SDK::UEngine **>(uintptr_t(GetImageBaseOffset()) + Offsets::GEngine);
    ForceGarbageCollection                   = reinterpret_cast<ForceGarbageCollectionType>(uintptr_t(GetImageBaseOffset()) + Offsets::ForceGarbageCollection);
    GetPlayerNetworkAddress                  = reinterpret_cast<GetPlayerNetworkAddressType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetPlayerNetworkAddress);
    KickPlayer                               = reinterpret_cast<KickPlayerType>(uintptr_t(GetImageBaseOffset()) + Offsets::KickPlayer);
    GetEmptyFText                            = reinterpret_cast<GetEmptyFTextType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetEmptyFText);
    GetPlayerStateFromController             = reinterpret_cast<GetPlayerStateFromControllerType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetPlayerStateFromController);
    NetworkComponentGetOwnerPlayerController = reinterpret_cast<NetworkComponentGetOwnerPlayerControllerType>(uintptr_t(GetImageBaseOffset()) + Offsets::NetworkComponentGetOwnerPlayerController);
    UniqueNetIdToString                      = reinterpret_cast<UniqueNetIdToStringType>(uintptr_t(GetImageBaseOffset()) + Offsets::UniqueNetIdToString);
    UniqueNetIdWrapperOperator               = reinterpret_cast<UniqueNetIdWrapperOperatorType>(uintptr_t(GetImageBaseOffset()) + Offsets::UniqueNetIdWrapperOperator);
}