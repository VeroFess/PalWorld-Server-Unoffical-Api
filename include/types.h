#pragma once

#include <cstdint>
#include "SDKDirect.h"
#include "folly/String.h"
#include "folly/FBString.h"
#include "folly/IPAddress.h"
#include "eventpp/eventdispatcher.h"
#include "utils.h"
#include "engine_functions.h"

enum pal_loader_element_type : uint8_t {
    none        = 0,
    normal      = 1,
    fire        = 2,
    water       = 3,
    leaf        = 4,
    electricity = 5,
    ice         = 6,
    earth       = 7,
    dark        = 8,
    dragon      = 9,
};

enum class pal_loader_attack_type : uint8_t {
    waza        = 0,
    weapon      = 1,
    turret      = 2,
    slip_damage = 3,
    mine        = 4,
};

struct pal_loader_editable_damage_info {
    private:
        SDK::FPalDamageInfo *inner;

    public:
        pal_loader_editable_damage_info() = delete;

        pal_loader_editable_damage_info(SDK::FPalDamageInfo *inner_init) {
            inner = inner_init;
        }

    public:
        pal_loader_element_type get_element_type() {
            return pal_loader_element_type(static_cast<uint8_t>(inner->AttackElementType));
        }

        void set_element_type(pal_loader_element_type type) {
            if (static_cast<uint8_t>(type) < static_cast<uint8_t>(SDK::EPalElementType::MAX)) {
                inner->AttackElementType = static_cast<SDK::EPalElementType>(type);
            }
        }

        pal_loader_attack_type get_attack_type() {
            return pal_loader_attack_type(static_cast<uint8_t>(inner->AttackType));
        }

        void set_element_type(pal_loader_attack_type type) {
            if (static_cast<uint8_t>(type) < static_cast<uint8_t>(SDK::EPalAttackType::EPalAttackType_MAX)) {
                inner->AttackType = static_cast<SDK::EPalAttackType>(type);
            }
        }

        int32_t get_damage() {
            return inner->NativeDamageValue;
        }

        void set_damage(int32_t damage) {
            inner->NativeDamageValue = damage;
        }

        bool get_no_damage() {
            return inner->NoDamage;
        }

        void set_no_damage(bool no_damage) {
            inner->NoDamage = no_damage;
        }
};

struct pal_loader_damage_info {
        SDK::FPalDamageInfo inner;

    public:
        pal_loader_damage_info() = delete;

        pal_loader_damage_info(SDK::FPalDamageInfo *inner_init) {
            memcpy(&inner, inner_init, sizeof(SDK::FPalDamageInfo));
        }

    public:
        pal_loader_element_type get_element_type() {
            return pal_loader_element_type(static_cast<uint8_t>(inner.AttackElementType));
        }

        pal_loader_attack_type get_attack_type() {
            return pal_loader_attack_type(static_cast<uint8_t>(inner.AttackType));
        }

        int32_t get_damage() {
            return inner.NativeDamageValue;
        }

        bool get_no_damage() {
            return inner.NoDamage;
        }
};

enum pal_loader_character_type : uint8_t {
    invalid,
    player,
    funnel,
    npc,
    monster,
    spectator,
};

struct pal_loader_character {
    private:
        pal_loader_character_type type;

    public:
        pal_loader_character() = delete;

        pal_loader_character(pal_loader_character_type type_init) {
            type = type_init;
        }

    public:
        pal_loader_character_type get_type() {
            return type;
        };
};

struct pal_loader_user : pal_loader_character {
    private:
        int32 id;
        int32 uuid_p1;
        int32 uuid_p2;
        int32 uuid_p3;
        int32 uuid_p4;

    private:
        // caches
        folly::IPAddress remote_address;

    public:
        inline bool operator==(const pal_loader_user &that) const {
            return id == that.id && uuid_p1 == that.uuid_p1 && uuid_p2 == that.uuid_p2 && uuid_p3 == that.uuid_p3 && uuid_p4 == that.uuid_p4;
        }

        inline bool operator!=(const pal_loader_user &that) const {
            return id != that.id || uuid_p1 != that.uuid_p1 || uuid_p2 != that.uuid_p2 || uuid_p3 != that.uuid_p3 || uuid_p4 != that.uuid_p4;
        }

        operator uint64_t() const {
            return uint64_t(uuid_p1) << 32 | uuid_p4;
        }

    private:
        inline SDK::APlayerController *get_controller() const {
            return SDK::GetPlayerControllerByPlayerId(id);
        }

        void mark_user_as_invalid() {
            id      = INT32_MAX;
            uuid_p1 = INT32_MAX;
            uuid_p2 = INT32_MAX;
            uuid_p3 = INT32_MAX;
            uuid_p4 = INT32_MAX;
        }

    public:
        pal_loader_user() = delete;

        pal_loader_user(int32 id_init)
            : pal_loader_character(pal_loader_character_type::player) {
            auto controller = SDK::GetPlayerControllerByPlayerId(id_init);

            if (controller == nullptr) {
                mark_user_as_invalid();
                return;
            }

            if (controller->PlayerState == nullptr) {
                mark_user_as_invalid();
                return;
            }

            auto guid = SDK::GetPlayerUID(reinterpret_cast<SDK::APalPlayerState *>(controller->PlayerState));
            if (guid == nullptr) {
                mark_user_as_invalid();
                return;
            }

            id      = id_init;
            uuid_p1 = guid->A;
            uuid_p2 = guid->B;
            uuid_p3 = guid->C;
            uuid_p4 = guid->D;
        }

        pal_loader_user(SDK::APalPlayerCharacter *character_init)
            : pal_loader_character(pal_loader_character_type::player) {
            auto state = SDK::GetPlayerStateByPlayer(character_init);
            if (state == nullptr) {
                mark_user_as_invalid();
                return;
            }

            auto guid = SDK::GetPlayerUID(reinterpret_cast<SDK::APalPlayerState *>(state));
            if (guid == nullptr) {
                mark_user_as_invalid();
                return;
            }

            id      = state->PlayerId;
            uuid_p1 = guid->A;
            uuid_p2 = guid->B;
            uuid_p3 = guid->C;
            uuid_p4 = guid->D;
        }

    public:
        bool valid() const {
            return id != INT32_MAX && uuid_p1 != INT32_MAX && uuid_p2 != INT32_MAX && uuid_p3 != INT32_MAX && uuid_p4 != INT32_MAX;
        }

        const folly::fbstring get_name() const {
            if (!valid()) {
                return folly::fbstring("[empty]");
            }

            SDK::FString            fs_user_name;
            engine_char_t           fs_user_name_buffer[64] = { 0 };
            SDK::APlayerController *controller              = get_controller();

            if (controller == nullptr) {
                return folly::fbstring("[empty]");
            }

            if (controller->PlayerState == nullptr) {
                return folly::fbstring("[empty]");
            }

            fs_user_name.Data        = fs_user_name_buffer;
            fs_user_name.MaxElements = 64;
            fs_user_name.NumElements = 0;

            auto raw_name = SDK::GetPlayerName(controller->PlayerState, &fs_user_name);

            if (!raw_name->IsValid()) {
                return folly::fbstring("[empty]");
            }

            std::string local_name = utf16_to_local_codepage(raw_name->Data, raw_name->NumElements);

            return folly::fbstring(local_name);
        }

        const folly::IPAddress get_address() {
            if (!valid()) {
                return folly::IPAddress();
            }

            if (!remote_address.empty()) {
                return remote_address;
            }

            SDK::APlayerController *controller = get_controller();

            if (controller == nullptr) {
                return folly::IPAddress();
            }

            SDK::FString  fs_address;
            engine_char_t fs_address_buffer[64] = { 0 };

            fs_address.Data        = fs_address_buffer;
            fs_address.MaxElements = 64;
            fs_address.NumElements = 0;

#ifdef __linux
            GetPlayerNetworkAddress(&fs_address, controller);
#else
            GetPlayerNetworkAddress(controller, &fs_address);
#endif
            std::string address = fs_address.ToString();

            auto ip_remote = folly::IPAddress::tryFromString(folly::fbstring(address));
            if (ip_remote.hasError()) {
                return folly::IPAddress();
            }

            remote_address = ip_remote.value();

            return remote_address;
        }

        bool kick() {
            if (!valid()) {
                return false;
            }

            SDK::FText *reason = GetEmptyFText();
            SDK::FGuid  uid;

            uid.A = uuid_p1;
            uid.B = uuid_p2;
            uid.C = uuid_p3;
            uid.D = uuid_p4;

            auto kicked = KickPlayer(SDK::World, &uid, reason);

            if (kicked) {
                mark_user_as_invalid();
                return true;
            }

            return false;
        }

        uint64_t get_id() {
            return uint64_t(uuid_p1) << 32 | uuid_p4;
        }
};