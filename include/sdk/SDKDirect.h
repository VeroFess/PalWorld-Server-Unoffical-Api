#include "SDK.hpp"

#ifdef __linux
typedef char16_t engine_char_t;
#else
typedef wchar_t engine_char_t;
#endif

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