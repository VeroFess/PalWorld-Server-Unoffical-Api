#include "SDK.hpp"

typedef void (*ForceGarbageCollectionType)(SDK::UEngine *engine, bool bForcePurge);
typedef SDK::FString *(*LowLevelGetRemoteAddressType)(SDK::UIpConnection *connection, bool bAppendPort);
typedef bool (*KickPlayerType)(const SDK::UObject *WorldContextObject, const SDK::FGuid *PlayerUId, const SDK::FText *KickReason);
typedef SDK::FText *(*GetEmptyFTextType)();

extern ForceGarbageCollectionType   ForceGarbageCollection;
extern LowLevelGetRemoteAddressType LowLevelGetRemoteAddress;
extern KickPlayerType               KickPlayer;
extern GetEmptyFTextType            GetEmptyFText;