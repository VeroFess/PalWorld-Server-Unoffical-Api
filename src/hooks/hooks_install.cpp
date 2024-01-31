#include "hooks.h"

SpawnPlayActorType engine_spawn_play_actor;

bool install_hooks() {
    funchook_t *funchook = funchook_create();
    int         rv;

    engine_spawn_play_actor = reinterpret_cast<SpawnPlayActorType>(uintptr_t(GetImageBaseOffset()) + Offsets::SpawnPlayActor);
    rv                      = funchook_prepare(funchook, (void **)&engine_spawn_play_actor, spawn_play_actor_proxy);
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