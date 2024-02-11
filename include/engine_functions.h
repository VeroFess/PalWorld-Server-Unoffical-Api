#include "SDK.hpp"

typedef void (*ForceGarbageCollectionType)(SDK::UEngine *engine, bool bForcePurge);
typedef bool (*KickPlayerType)(const SDK::UObject *WorldContextObject, const SDK::FGuid *PlayerUId, const SDK::FText *KickReason);
typedef SDK::FText *(*GetEmptyFTextType)();
typedef SDK::APlayerState *(*GetPlayerStateFromControllerType)(SDK::AController *that);
typedef SDK::APalPlayerController *(*NetworkComponentGetOwnerPlayerControllerType)(const SDK::UActorComponent *Component);

typedef SDK::FString *(*UniqueNetIdToStringType)(SDK::FUniqueNetIdWrapper *that, SDK::FString *result);
typedef SDK::FUniqueNetIdWrapper *(*UniqueNetIdWrapperOperatorType)(SDK::FUniqueNetIdWrapper *that);

typedef int (*CalcDamageType)(const SDK::FPalDamageInfo *DamageInfo, const SDK::AActor *defender);

#ifdef __linux
typedef SDK::FString *(*GetPlayerNetworkAddressType)(SDK::FString *buffer, SDK::APlayerController *that);
#else
typedef SDK::FString *(*GetPlayerNetworkAddressType)(SDK::APlayerController *that, SDK::FString *buffer);
#endif

extern ForceGarbageCollectionType                   ForceGarbageCollection;
extern GetPlayerNetworkAddressType                  GetPlayerNetworkAddress;
extern KickPlayerType                               KickPlayer;
extern GetEmptyFTextType                            GetEmptyFText;
extern GetPlayerStateFromControllerType             GetPlayerStateFromController;
extern NetworkComponentGetOwnerPlayerControllerType NetworkComponentGetOwnerPlayerController;
extern UniqueNetIdToStringType                      UniqueNetIdToString;
extern UniqueNetIdWrapperOperatorType               UniqueNetIdWrapperOperator;
extern CalcDamageType                               CalcDamage;

extern SDK::UEngine *Engine;

void engine_init();