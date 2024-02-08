#include "hooks.h"

SpawnPlayActorType                                engine_spawn_play_actor;
SendDamageToServerImplementationType              engine_send_damage_to_server;
RequestAddItemToServerImplementationType          engine_add_item_to_server;
UpdateCharacterNickNameToServerImplementationType engine_update_character_nickname_to_server;

bool install_hooks() {
    funchook_t *funchook = funchook_create();
    int         rv;

    engine_spawn_play_actor = reinterpret_cast<SpawnPlayActorType>(uintptr_t(GetImageBaseOffset()) + Offsets::SpawnPlayActor);
    rv                      = funchook_prepare(funchook, (void **)&engine_spawn_play_actor, (void *)spawn_play_actor_proxy);
    if (rv != 0) {
        goto clean_and_exit;
    }

    engine_send_damage_to_server = reinterpret_cast<SendDamageToServerImplementationType>(uintptr_t(GetImageBaseOffset()) + Offsets::SendDamageToServer);
    rv                           = funchook_prepare(funchook, (void **)&engine_send_damage_to_server, (void *)send_damage_to_server_implementation_proxy);
    if (rv != 0) {
        goto clean_and_exit;
    }

    engine_add_item_to_server = reinterpret_cast<RequestAddItemToServerImplementationType>(uintptr_t(GetImageBaseOffset()) + Offsets::AddItemToServer);
    rv                        = funchook_prepare(funchook, (void **)&engine_add_item_to_server, (void *)add_item_to_server_implementation_proxy);
    if (rv != 0) {
        goto clean_and_exit;
    }

    engine_update_character_nickname_to_server = reinterpret_cast<UpdateCharacterNickNameToServerImplementationType>(uintptr_t(GetImageBaseOffset()) + Offsets::UpdateName);
    rv                                         = funchook_prepare(funchook, (void **)&engine_update_character_nickname_to_server, (void *)update_character_nickname_to_server_implementation_proxy);
    if (rv != 0) {
        goto clean_and_exit;
    }

    rv = funchook_install(funchook, 0);
    if (rv != 0) {
        goto clean_and_exit;
    }

    return true;

clean_and_exit:
    if (funchook) {
        funchook_destroy(funchook);
    }

    return false;
}