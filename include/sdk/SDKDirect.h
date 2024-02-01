#include "SDK.hpp"

namespace SDK {
    extern UWorld              *World;
    extern APalGameStateInGame *StateInGame;

    APalGameStateInGame *GetPalGameStateInGame(UObject *WorldContextObject);
    FString             *GetWorldName();
    void                 SendSystemAnnounce(FString &Message);
    void                 GetAllPlayerCharacters(TArray<APalCharacter *> *OutPlayers);
    AController         *GetController(AActor *Actor);
    APalPlayerState     *GetPlayerStateByPlayer(APalPlayerCharacter *Player);
    FString             *GetPlayerName(APlayerState *State, SDK::FString *Name);
    FGuid               *GetPlayerUID(APalPlayerState *playerActor);

    bool sdk_init();
} // namespace SDK