#pragma once

#include <stdint.h>

namespace Offsets {
    constexpr int32_t GObjects = 0x088E9AE0;
    constexpr int32_t GWorld   = 0x08A556A0;
    constexpr int32_t GEngine  = 0x08A51D10;

    // void __fastcall FName::AppendString(FName *this, FString *Out)
    constexpr int32_t FNameAppendString = 0x02D7BA00;

    // void __fastcall UEngine::ForceGarbageCollection(UEngine *this, bool bForcePurge)
    constexpr int32_t ForceGarbageCollection = 0x04F46C00;

    // bool __fastcall UPalUtility::KickPlayer(const UObject *WorldContextObject, const FGuid *PlayerUId, const FText *KickReason)
    constexpr int32_t KickPlayer = 0x02B81F00;

    // const FText *__fastcall FText::GetEmpty()
    constexpr int32_t GetEmptyFText = 0x02C80460;

    // __int64 __fastcall UWorld::SpawnPlayActor()
    constexpr int32_t SpawnPlayActor = 0x04B2FB80;

    // AGameStateBase *__fastcall UPalUtility::GetPalGameStateInGame(const UObject *a1)
    constexpr int32_t GetGameState = 0x02B72880;

    // void __fastcall UPalUtility::SendSystemAnnounce(const UObject *WorldContextObject, void **Message)
    constexpr int32_t SendAnnounce = 0x02B90020;

    // void __fastcall UPalUtility::GetAllPlayerCharacters(const UObject *WorldContextObject, TArray<APalCharacter *,TSizedDefaultAllocator<32>>*OutPlayers)
    constexpr int32_t GetCharacters = 0x02B65360;

    // AController *__fastcall UPalUtility::GetController(const UObject *WorldContextObject, AActor *Actor)
    constexpr int32_t GetController = 0x02B68AC0;

    // APalPlayerState *__fastcall UPalUtility::GetPlayerStateByPlayer(const APalPlayerCharacter *Player)
    constexpr int32_t GetPlayerState = 0x02B75450;

    // FString *__fastcall APlayerState::GetPlayerName(APlayerState *this, FString *result)
    constexpr int32_t GetPlayerName = 0x04D3F490;

    // const FGuid *__fastcall APalPlayerState::GetPlayerUId(APalPlayerState *this)
    constexpr int32_t GetPlayerUID = 0x02B043D0;

    // String *__fastcall APalGameStateInGame::GetWorldName(APalGameStateInGame *this, FString *result)
    constexpr int32_t GetWorldName = 0x00000000;

    // APlayerState *__fastcall AController::GetPlayerState<APlayerState>(AController *this)
    constexpr int32_t GetPlayerStateFromController = 0x00000000;

    // FString *__fastcall APlayerController::GetPlayerNetworkAddress(APlayerController *this, FString *result)
    constexpr int32_t GetPlayerNetworkAddress = 0x04D3F5B0;

    // APalPlayerController *__fastcall UPalUtility::GetPlayerControllerByPlayerId(const UObject *WorldContextObject, const int PlayerId)
    constexpr int32_t GetPlayerControllerById = 0x02B73D10;

    // void __fastcall APalPlayerState::SendDamage_ToServer_Implementation(APalPlayerState *this, APalCharacter *Target, const FPalDamageInfo *info)
    constexpr int32_t SendDamageToServer = 0x02B160A5;

    // APalPlayerController *__fastcall UPalNetworkComponentUtility::GetOwnerPlayerController(const UActorComponent *Component)
    constexpr int32_t NetworkComponentGetOwnerPlayerController = 0x028AEE70;

    //__int64 __fastcall UPalNetworkPlayerComponent::RequestAddItem_ToServer_Implementation(const UActorComponent *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
    constexpr int32_t AddItemToServer = 0x028EB2A0;
} // namespace Offsets
