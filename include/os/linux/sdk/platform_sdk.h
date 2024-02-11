#pragma once

#include <stdint.h>

namespace Offsets {
    constexpr int32_t GObjects = 0xBAEADE8;
    constexpr int32_t GWorld   = 0xBC8AA78;
    constexpr int32_t GEngine  = 0xBC85F08;

    // void __fastcall FName::AppendString(FName *this, FString *Out)
    constexpr int32_t FNameAppendString = 0x6D17990;

    // void __fastcall UEngine::ForceGarbageCollection(UEngine *this, bool bForcePurge)
    constexpr int32_t ForceGarbageCollection = 0xA29BB90;

    // bool __fastcall UPalUtility::KickPlayer(const UObject *WorldContextObject, const FGuid *PlayerUId, const FText *KickReason)
    constexpr int32_t KickPlayer = 0x6A53BD0;

    // const FText *__fastcall FText::GetEmpty()
    constexpr int32_t GetEmptyFText = 0x6BB6A10;

    // __int64 __fastcall UWorld::SpawnPlayActor()
    constexpr int32_t SpawnPlayActor = 0x9D2DD40;

    // AGameStateBase *__fastcall UPalUtility::GetPalGameStateInGame(const UObject *a1)
    constexpr int32_t GetGameState = 0x6A26A30;

    // void __fastcall UPalUtility::SendSystemAnnounce(const UObject *WorldContextObject, void **Message)
    constexpr int32_t SendAnnounce = 0x6A54860;

    // void __fastcall UPalUtility::GetAllPlayerCharacters(const UObject *WorldContextObject, TArray<APalCharacter *,TSizedDefaultAllocator<32>>*OutPlayers)
    constexpr int32_t GetCharacters = 0x6A53D50;

    // AController *__fastcall UPalUtility::GetController(const UObject *WorldContextObject, AActor *Actor)
    constexpr int32_t GetController = 0x6A5F990;

    // APalPlayerState *__fastcall UPalUtility::GetPlayerStateByPlayer(const APalPlayerCharacter *Player)
    constexpr int32_t GetPlayerState = 0x6A5F680;

    // FString *__fastcall APlayerState::GetPlayerName(APlayerState *this, FString *result)
    constexpr int32_t GetPlayerName = 0x9FE5F70;

    // const FGuid *__fastcall APalPlayerState::GetPlayerUId(APalPlayerState *this)
    constexpr int32_t GetPlayerUID = 0x69B5060;

    // String *__fastcall APalGameStateInGame::GetWorldName(APalGameStateInGame *this, FString *result)
    constexpr int32_t GetWorldName = 0x0000000;

    // APlayerState *__fastcall AController::GetPlayerState<APlayerState>(AController *this)
    constexpr int32_t GetPlayerStateFromController = 0x0000000;

    // FString *__fastcall APlayerController::GetPlayerNetworkAddress(APlayerController *this, FString *result)
    constexpr int32_t GetPlayerNetworkAddress = 0x9FEF4F0;

    // APalPlayerController *__fastcall UPalUtility::GetPlayerControllerByPlayerId(const UObject *WorldContextObject, const int PlayerId)
    constexpr int32_t GetPlayerControllerById = 0x6A557D0;

    // void __fastcall APalPlayerState::SendDamage_ToServer_Implementation(APalPlayerState *this, APalCharacter *Target, const FPalDamageInfo *info)
    constexpr int32_t SendDamageToServer = 0x69C0F60;

    // APalPlayerController *__fastcall UPalNetworkComponentUtility::GetOwnerPlayerController(const UActorComponent *Component)
    constexpr int32_t NetworkComponentGetOwnerPlayerController = 0x66FFC20;

    //__int64 __fastcall UPalNetworkPlayerComponent::RequestAddItem_ToServer_Implementation(const UActorComponent *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
    constexpr int32_t AddItemToServer = 0x671C080;

    // void __fastcall UPalNetworkIndividualComponent::UpdateCharacterNickName_ToServer_Implementation(UPalNetworkIndividualComponent *this, const FPalInstanceID *id, const FString *newNickName)
    constexpr int32_t UpdateName = 0x6705500;

    // FString *__fastcall FUniqueNetIdWrapper::ToString(FUniqueNetIdWrapper *this, FString *result)
    constexpr int32_t UniqueNetIdToString = 0x49FBDD0;

    // don't use it!!
    // const FUniqueNetId *__fastcall FUniqueNetIdWrapper::operator*(FUniqueNetIdWrapper *this)
    constexpr int32_t UniqueNetIdWrapperOperator = 0x0;

    // __int64 __fastcall UPalUtility::CalcDamage(const FPalDamageInfo *DamageInfo, const AActor *defender)
    constexpr int32_t CalcDamage = 0x6A5D260;
} // namespace Offsets
