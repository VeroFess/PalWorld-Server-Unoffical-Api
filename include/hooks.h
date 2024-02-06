#include "SDK.hpp"
#include "funchook.h"

typedef SDK::APlayerController *(*SpawnPlayActorType)(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);
typedef void (*SendDamageToServerImplementationType)(SDK::APalPlayerState *that, SDK::APalCharacter *Target, SDK::FPalDamageInfo *info);

extern SpawnPlayActorType                   engine_spawn_play_actor;
extern SendDamageToServerImplementationType engine_send_damage_to_server;

SDK::APlayerController *spawn_play_actor_proxy(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);
void                    send_damage_to_server_implementation_proxy(SDK::APalPlayerState *that, SDK::APalCharacter *Target, SDK::FPalDamageInfo *info);

bool install_hooks();