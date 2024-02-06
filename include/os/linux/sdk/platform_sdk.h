#pragma once

#include <stdint.h>

namespace Offsets {
    constexpr int32_t GObjects = 0xBAD66E8;
    constexpr int32_t GWorld   = 0xBC76378;
    constexpr int32_t GEngine  = 0xBC71808;

    // void __fastcall FName::AppendString(FName *this, FString *Out)
    constexpr int32_t FNameAppendString = 0x6D04140;

    // void __fastcall UEngine::ForceGarbageCollection(UEngine *this, bool bForcePurge)
    constexpr int32_t ForceGarbageCollection = 0xA288600;

    // bool __fastcall UPalUtility::KickPlayer(const UObject *WorldContextObject, const FGuid *PlayerUId, const FText *KickReason)
    constexpr int32_t KickPlayer = 0x6A43A30;

    // const FText *__fastcall FText::GetEmpty()
    constexpr int32_t GetEmptyFText = 0x6BA3530;

    // __int64 __fastcall UWorld::SpawnPlayActor()
    constexpr int32_t SpawnPlayActor = 0x9D1A7B0;

    // AGameStateBase *__fastcall UPalUtility::GetPalGameStateInGame(const UObject *a1)
    constexpr int32_t GetGameState = 0x6A17970;

    // void __fastcall UPalUtility::SendSystemAnnounce(const UObject *WorldContextObject, void **Message)
    constexpr int32_t SendAnnounce = 0x6A446A0;

    // void __fastcall UPalUtility::GetAllPlayerCharacters(const UObject *WorldContextObject, TArray<APalCharacter *,TSizedDefaultAllocator<32>>*OutPlayers)
    constexpr int32_t GetCharacters = 0x6A43BB0;

    // AController *__fastcall UPalUtility::GetController(const UObject *WorldContextObject, AActor *Actor)
    constexpr int32_t GetController = 0x6A4F7D0;

    // APalPlayerState *__fastcall UPalUtility::GetPlayerStateByPlayer(const APalPlayerCharacter *Player)
    constexpr int32_t GetPlayerState = 0x6A4F4C0;

    // FString *__fastcall APlayerState::GetPlayerName(APlayerState *this, FString *result)
    constexpr int32_t GetPlayerName = 0x9FD29E0;

    // const FGuid *__fastcall APalPlayerState::GetPlayerUId(APalPlayerState *this)
    constexpr int32_t GetPlayerUID = 0x69A6200;

    // String *__fastcall APalGameStateInGame::GetWorldName(APalGameStateInGame *this, FString *result)
    constexpr int32_t GetWorldName = 0x0000000;

    // APlayerState *__fastcall AController::GetPlayerState<APlayerState>(AController *this)
    constexpr int32_t GetPlayerStateFromController = 0x0000000;

    // FString *__fastcall APlayerController::GetPlayerNetworkAddress(APlayerController *this, FString *result)
    constexpr int32_t GetPlayerNetworkAddress = 0x9FDBF60;

    // APalPlayerController *__fastcall UPalUtility::GetPlayerControllerByPlayerId(const UObject *WorldContextObject, const int PlayerId)
    constexpr int32_t GetPlayerControllerById = 0x6A45610;
} // namespace Offsets
