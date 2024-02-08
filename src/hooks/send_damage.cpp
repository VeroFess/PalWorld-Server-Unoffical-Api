#include "hooks.h"
#include "spdlog/spdlog.h"
#include "engine_functions.h"
#include "utils.h"
#include "console.h"
#include "SDKDirect.h"
#include "folly/IPAddress.h"
#include "events.h"
#include "types.h"

// This event is untested! Please submit feedback!
void send_damage_to_server_implementation_proxy(SDK::APalPlayerState *that, SDK::APalCharacter *target, SDK::FPalDamageInfo *info) {
    static SDK::UClass *funnel_character_class = nullptr;
    if (funnel_character_class == nullptr) {
        funnel_character_class = SDK::APalFunnelCharacter::StaticClass();
    }

    static SDK::UClass *player_character_class = nullptr;
    if (player_character_class == nullptr) {
        player_character_class = SDK::APalPlayerCharacter::StaticClass();
    }

    static SDK::UClass *npc_character_class = nullptr;
    if (npc_character_class == nullptr) {
        npc_character_class = SDK::APalNPC::StaticClass();
    }

    static SDK::UClass *monster_character_class = nullptr;
    if (monster_character_class == nullptr) {
        monster_character_class = SDK::APalMonsterCharacter::StaticClass();
    }

    static SDK::UClass *spectator_character_class = nullptr;
    if (spectator_character_class == nullptr) {
        spectator_character_class = SDK::APalSpectator::StaticClass();
    }

    pal_loader_character_type target_type = invalid;

    if (target->IsA(funnel_character_class)) {
        target_type = pal_loader_character_type::funnel;
    } else if (target->IsA(player_character_class)) {
        target_type = pal_loader_character_type::player;
    } else if (target->IsA(spectator_character_class)) {
        target_type = pal_loader_character_type::spectator;
    } else if (target->IsA(npc_character_class)) {
        if (target->IsA(monster_character_class)) {
            target_type = pal_loader_character_type::monster;
        } else {
            target_type = pal_loader_character_type::npc;
        }
    }

    pal_loader_character target_object(target_type);

    if (target_type == pal_loader_character_type::player) {
        target_object = pal_loader_user(reinterpret_cast<SDK::APalPlayerCharacter *>(target));
    }

    pal_loader_user source(that->PlayerId);

    user_pre_attack_event pre_attack(source, target_object, info);

    bool all_event_pass = dispatcher.forEachIf(EVENT_PRE_ATTACK, [&](const eventpp::EventDispatcher<uint32_t, bool(pal_loader_basic_event & e), pal_loader_event_policies>::Callback &cb) -> bool {
        if (cb(dynamic_cast<pal_loader_basic_event &>(pre_attack))) {
            return false;
        }
        return true;
    });

    if (!all_event_pass) {
        pal_async_log->warn("[Event::SendDamage] player {} damage blocked . reason: block by plugin", source.get_name().toStdString());
        return;
    }

    if (!pre_attack.get_source().valid()) {
        pal_async_log->warn("[Event::SendDamage] player {} damage blocked . reason: player kicked", source.get_name().toStdString());
        return;
    }

    engine_send_damage_to_server(that, target, info);
}
