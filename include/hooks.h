#include "SDK.hpp"
#include "funchook.h"

typedef SDK::APlayerController *(*SpawnPlayActorType)(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);
typedef void (*SendDamageToServerImplementationType)(SDK::APalPlayerState *that, SDK::APalCharacter *Target, SDK::FPalDamageInfo *info);
typedef void (*RequestAddItemToServerImplementationType)(SDK::UPalNetworkPlayerComponent *that, const SDK::FName StaticItemId, int Count, bool isAssignPassive);
typedef void (*UpdateCharacterNickNameToServerImplementationType)(SDK::UPalNetworkIndividualComponent *that, const SDK::FPalInstanceID *id, const SDK::FString *newNickName);

extern SpawnPlayActorType                                engine_spawn_play_actor;
extern SendDamageToServerImplementationType              engine_send_damage_to_server;
extern RequestAddItemToServerImplementationType          engine_add_item_to_server;
extern UpdateCharacterNickNameToServerImplementationType engine_update_character_nickname_to_server;

SDK::APlayerController *spawn_play_actor_proxy(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);
void                    send_damage_to_server_implementation_proxy(SDK::APalPlayerState *that, SDK::APalCharacter *Target, SDK::FPalDamageInfo *info);
void                    add_item_to_server_implementation_proxy(SDK::UPalNetworkPlayerComponent *that, const SDK::FName StaticItemId, int Count, bool isAssignPassive);
void                    update_character_nickname_to_server_implementation_proxy(SDK::UPalNetworkIndividualComponent *that, const SDK::FPalInstanceID *id, const SDK::FString *newNickName);

bool install_hooks();