#pragma once

#include <stdint.h>

namespace Offsets {
    extern int32_t GWorld;
    extern int32_t GEngine;

    // void __fastcall FName::AppendString(FName *this, FString *Out)
    extern int32_t FNameAppendString;

    // void __fastcall UEngine::ForceGarbageCollection(UEngine *this, bool bForcePurge)
    extern int32_t ForceGarbageCollection;

    // bool __fastcall UPalUtility::KickPlayer(const UObject *WorldContextObject, const FGuid *PlayerUId, const FText *KickReason)
    extern int32_t KickPlayer;

    // const FText *__fastcall FText::GetEmpty()
    extern int32_t GetEmptyFText;

    // __int64 __fastcall UWorld::SpawnPlayActor()
    extern int32_t SpawnPlayActor;

    // AGameStateBase *__fastcall UPalUtility::GetPalGameStateInGame(const UObject *a1)
    extern int32_t GetGameState;

    // void __fastcall UPalUtility::SendSystemAnnounce(const UObject *WorldContextObject, void **Message)
    extern int32_t SendAnnounce;

    // void __fastcall UPalUtility::GetAllPlayerCharacters(const UObject *WorldContextObject, TArray<APalCharacter *,TSizedDefaultAllocator<32>>*OutPlayers)
    extern int32_t GetCharacters;

    // AController *__fastcall UPalUtility::GetController(const UObject *WorldContextObject, AActor *Actor)
    extern int32_t GetController;

    // APalPlayerState *__fastcall UPalUtility::GetPlayerStateByPlayer(const APalPlayerCharacter *Player)
    extern int32_t GetPlayerState;

    // FString *__fastcall APlayerState::GetPlayerName(APlayerState *this, FString *result)
    extern int32_t GetPlayerName;

    // const FGuid *__fastcall APalPlayerState::GetPlayerUId(APalPlayerState *this)
    extern int32_t GetPlayerUID;

    // String *__fastcall APalGameStateInGame::GetWorldName(APalGameStateInGame *this, FString *result)
    extern int32_t GetWorldName;

    // APlayerState *__fastcall AController::GetPlayerState<APlayerState>(AController *this)
    extern int32_t GetPlayerStateFromController;

    // FString *__fastcall APlayerController::GetPlayerNetworkAddress(APlayerController *this, FString *result)
    extern int32_t GetPlayerNetworkAddress;
} // namespace Offsets

bool offset_init();
