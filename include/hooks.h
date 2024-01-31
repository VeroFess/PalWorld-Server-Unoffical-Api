#include "SDK.hpp"
#include "funchook.h"

typedef SDK::APlayerController *(*SpawnPlayActorType)(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);

extern SpawnPlayActorType engine_spawn_play_actor;

SDK::APlayerController *spawn_play_actor_proxy(SDK::UWorld *that, SDK::UPlayer *player, SDK::ENetRole role, const SDK::FURL *url, const SDK::FUniqueNetIdRepl *uid, SDK::FString *error, uint8_t index);

bool install_hooks();