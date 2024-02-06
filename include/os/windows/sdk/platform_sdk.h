#pragma once

#include <stdint.h>

namespace Offsets {
    constexpr int32_t GObjects = 0x0888AF60;
    constexpr int32_t GWorld   = 0x089F6B20;
    constexpr int32_t GEngine  = 0x089F3190;

    // void __fastcall FName::AppendString(FName *this, FString *Out)
    constexpr int32_t FNameAppendString = 0x02D3B1C0;

    // void __fastcall UEngine::ForceGarbageCollection(UEngine *this, bool bForcePurge)
    constexpr int32_t ForceGarbageCollection = 0x04EF6340;

    // bool __fastcall UPalUtility::KickPlayer(const UObject *WorldContextObject, const FGuid *PlayerUId, const FText *KickReason)
    constexpr int32_t KickPlayer = 0x02B46910;

    // const FText *__fastcall FText::GetEmpty()
    constexpr int32_t GetEmptyFText = 0x02C40890;

    // __int64 __fastcall UWorld::SpawnPlayActor()
    constexpr int32_t SpawnPlayActor = 0x04AE0080;

    // AGameStateBase *__fastcall UPalUtility::GetPalGameStateInGame(const UObject *a1)
    constexpr int32_t GetGameState = 0x02B374B0;

    // void __fastcall UPalUtility::SendSystemAnnounce(const UObject *WorldContextObject, void **Message)
    constexpr int32_t SendAnnounce = 0x02B53B50;

    // void __fastcall UPalUtility::GetAllPlayerCharacters(const UObject *WorldContextObject, TArray<APalCharacter *,TSizedDefaultAllocator<32>>*OutPlayers)
    constexpr int32_t GetCharacters = 0x02B2A0B0;

    // AController *__fastcall UPalUtility::GetController(const UObject *WorldContextObject, AActor *Actor)
    constexpr int32_t GetController = 0x02B2D690;

    // APalPlayerState *__fastcall UPalUtility::GetPlayerStateByPlayer(const APalPlayerCharacter *Player)
    constexpr int32_t GetPlayerState = 0x02B3A090;

    // FString *__fastcall APlayerState::GetPlayerName(APlayerState *this, FString *result)
    constexpr int32_t GetPlayerName = 0x04CEEDD0;

    // const FGuid *__fastcall APalPlayerState::GetPlayerUId(APalPlayerState *this)
    constexpr int32_t GetPlayerUID = 0x02ACBB50;

    // String *__fastcall APalGameStateInGame::GetWorldName(APalGameStateInGame *this, FString *result)
    constexpr int32_t GetWorldName = 0x00000000;

    // APlayerState *__fastcall AController::GetPlayerState<APlayerState>(AController *this)
    constexpr int32_t GetPlayerStateFromController = 0x00000000;

    // FString *__fastcall APlayerController::GetPlayerNetworkAddress(APlayerController *this, FString *result)
    constexpr int32_t GetPlayerNetworkAddress = 0x04CEEEF0;

    // APalPlayerController *__fastcall UPalUtility::GetPlayerControllerByPlayerId(const UObject *WorldContextObject, const int PlayerId)
    constexpr int32_t GetPlayerControllerById = 0x02B38960;

    // void __fastcall APalPlayerState::SendDamage_ToServer_Implementation(APalPlayerState *this, APalCharacter *Target, const FPalDamageInfo *info)
    constexpr int32_t SendDamageToServer = 0x02ADD5D0;

    // APalPlayerController *__fastcall UPalNetworkComponentUtility::GetOwnerPlayerController(const UActorComponent *Component)
    constexpr int32_t NetworkComponentGetOwnerPlayerController = 0x02881DF0;

    //__int64 __fastcall UPalNetworkPlayerComponent::RequestAddItem_ToServer_Implementation(const UActorComponent *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
    constexpr int32_t AddItemToServer = 0x028BCEE0;
} // namespace Offsets
