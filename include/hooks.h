#include "SDK.hpp"
#include "funchook.h"

typedef bool (*process_event_callback)(const char *function_name, SDK::UObject *object, SDK::UFunction *function, void *parms);

typedef SDK::APlayerController *(*SpawnPlayActorType)(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);
typedef void (*SendDamageToServerImplementationType)(SDK::APalPlayerState *that, SDK::APalCharacter *Target, SDK::FPalDamageInfo *info);
typedef void (*RequestAddItemToServerImplementationType)(SDK::UPalNetworkPlayerComponent *that, const SDK::FName StaticItemId, int Count, bool isAssignPassive);
typedef void (*UpdateCharacterNickNameToServerImplementationType)(SDK::UPalNetworkIndividualComponent *that, const SDK::FPalInstanceID *id, const SDK::FString *newNickName);
typedef void (*ProcessDamageAndPlayEffectsByDamageInfoType)(SDK::UPalDamageReactionComponent *that, const SDK::FPalDamageInfo *info);
typedef void (*ProcessEventType)(SDK::UObject *that, SDK::UFunction *Function, void *Parms);

extern SpawnPlayActorType                                engine_spawn_play_actor;
extern SendDamageToServerImplementationType              engine_send_damage_to_server;
extern RequestAddItemToServerImplementationType          engine_add_item_to_server;
extern UpdateCharacterNickNameToServerImplementationType engine_update_character_nickname_to_server;
extern ProcessDamageAndPlayEffectsByDamageInfoType       engine_process_damage_and_play_effects;
extern ProcessEventType                                  engine_process_event;

SDK::APlayerController *spawn_play_actor_proxy(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);
void                    send_damage_to_server_implementation_proxy(SDK::APalPlayerState *that, SDK::APalCharacter *Target, SDK::FPalDamageInfo *info);
void                    add_item_to_server_implementation_proxy(SDK::UPalNetworkPlayerComponent *that, const SDK::FName StaticItemId, int Count, bool isAssignPassive);
void                    update_character_nickname_to_server_implementation_proxy(SDK::UPalNetworkIndividualComponent *that, const SDK::FPalInstanceID *id, const SDK::FString *newNickName);
void                    process_damage_and_play_effects_proxy(SDK::UPalDamageReactionComponent *that, const SDK::FPalDamageInfo *info);
void                    process_event_proxy(SDK::UObject *that, SDK::UFunction *function, void *parms);

bool register_process_event_callback(const char *regex, process_event_callback callback);
bool lock_and_init_process_event();
bool install_hooks();