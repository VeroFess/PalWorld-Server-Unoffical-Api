#include "SDKDirect.h"

typedef SDK::APalGameStateInGame *(*GetGameStateType)(SDK::UObject *);
typedef void (*SendSystemAnnounceType)(SDK::UObject *WorldContextObject, const SDK::FString &Message);
typedef void (*GetAllPlayerCharactersType)(SDK::UObject *WorldContextObject, SDK::TArray<SDK::APalCharacter *> *OutPlayers);
typedef SDK::AController *(*GetControllerType)(SDK::UObject *WorldContextObject, SDK::AActor *Actor);
typedef SDK::APalPlayerState *(*GetPlayerStateByPlayerType)(SDK::APalPlayerCharacter *Player);
#ifdef __linux
typedef SDK::FString *(*GetPlayerNameType)(SDK::FString *Name, SDK::APlayerState *that);
#else
typedef SDK::FString *(*GetPlayerNameType)(SDK::APlayerState *that, SDK::FString *Name);
#endif
typedef SDK::FGuid *(*GetPlayerUIDType)(SDK::APalPlayerState *playerActor);

GetGameStateType           GetGameState         = nullptr;
SendSystemAnnounceType     SendAnnounce         = nullptr;
GetAllPlayerCharactersType GetCharacters        = nullptr;
GetControllerType          GetControllerPrivate = nullptr;
GetPlayerStateByPlayerType GetPlayerState       = nullptr;
GetPlayerNameType          GetPlayerNamePrivate = nullptr;
GetPlayerUIDType           GetPlayerUIDPrivate  = nullptr;

SDK::APalGameStateInGame *SDK::GetPalGameStateInGame(UObject *WorldContextObject) {
    if (GetGameState == nullptr) {
        GetGameState = reinterpret_cast<GetGameStateType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetGameState);
    }

    return GetGameState(WorldContextObject);
}

void SDK::SendSystemAnnounce(SDK::FString &Message) {
    if (SendAnnounce == nullptr) {
        SendAnnounce = reinterpret_cast<SendSystemAnnounceType>(uintptr_t(GetImageBaseOffset()) + Offsets::SendAnnounce);
    }

    return SendAnnounce(SDK::World, Message);
}

void SDK::GetAllPlayerCharacters(TArray<SDK::APalCharacter *> *OutPlayers) {
    if (GetCharacters == nullptr) {
        GetCharacters = reinterpret_cast<GetAllPlayerCharactersType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetCharacters);
    }

    return GetCharacters(World, OutPlayers);
}

SDK::AController *SDK::GetController(SDK::AActor *Actor) {
    if (GetControllerPrivate == nullptr) {
        GetControllerPrivate = reinterpret_cast<GetControllerType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetController);
    }

    return GetControllerPrivate(World, Actor);
}

SDK::APalPlayerState *SDK::GetPlayerStateByPlayer(SDK::APalPlayerCharacter *Player) {
    if (GetPlayerState == nullptr) {
        GetPlayerState = reinterpret_cast<GetPlayerStateByPlayerType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetPlayerState);
    }

    return GetPlayerState(Player);
}

SDK::FString *SDK::GetPlayerName(SDK::APlayerState *State, SDK::FString *Name) {
    if (GetPlayerNamePrivate == nullptr) {
        GetPlayerNamePrivate = reinterpret_cast<GetPlayerNameType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetPlayerName);
    }

#ifdef __linux
    return GetPlayerNamePrivate(Name, State);
#else
    return GetPlayerNamePrivate(State, Name);
#endif
}

SDK::FGuid *SDK::GetPlayerUID(SDK::APalPlayerState *playerActor) {
    if (GetPlayerUIDPrivate == nullptr) {
        GetPlayerUIDPrivate = reinterpret_cast<GetPlayerUIDType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetPlayerUID);
    }

    return GetPlayerUIDPrivate(playerActor);
}
