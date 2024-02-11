#include <cstdint>
#include "SDKDirect.h"
#include "folly/String.h"
#include "folly/FBString.h"
#include "folly/IPAddress.h"
#include "eventpp/eventdispatcher.h"

#include "utils.h"
#include "types.h"

enum pal_event_basic_types : uint8_t {
    EVENT_PRE,
    EVENT_POST,
    EVENT_ASYNC,
    EVENT_DEBUG = 0xFF,
};

enum pal_event_subsystem_types : uint8_t {
    LOADER,
    ENGINE,
    GAME_USERAUTH,
    GAME_GAMEPLAY,
};

enum pal_event_types : uint16_t {
    LOGIN,
    ATTACK,
    ADDITEM
};

#define BUILD_PAL_EVENT_ID(B, S, E) uint32_t((B) << 24 | (S) << 16 | (E))

enum pal_avalable_event_types : uint32_t {
    EVENT_PRE_LOGIN    = BUILD_PAL_EVENT_ID(EVENT_PRE, GAME_USERAUTH, LOGIN),
    EVENT_LOGIN_ASYNC  = BUILD_PAL_EVENT_ID(EVENT_ASYNC, GAME_USERAUTH, LOGIN),
    EVENT_PRE_ATTACK   = BUILD_PAL_EVENT_ID(EVENT_PRE, GAME_GAMEPLAY, ATTACK),
    EVENT_POST_ATTACK  = BUILD_PAL_EVENT_ID(EVENT_POST, GAME_GAMEPLAY, ATTACK),
    EVENT_ATTACK_ASYNC = BUILD_PAL_EVENT_ID(EVENT_ASYNC, GAME_GAMEPLAY, ATTACK),
    EVENT_PRE_ADDITEM  = BUILD_PAL_EVENT_ID(EVENT_PRE, GAME_GAMEPLAY, ADDITEM),
};

struct pal_loader_basic_event {
        const pal_event_basic_types     basic_type;
        const pal_event_subsystem_types subsystem_type;
        const pal_event_types           type;

        pal_loader_basic_event() = delete;

        pal_loader_basic_event(pal_event_basic_types b_type, pal_event_subsystem_types s_type, pal_event_types e_type)
            : basic_type(b_type), subsystem_type(s_type), type(e_type) {}
};

struct user_login_event_async : pal_loader_basic_event {
    private:
        folly::fbstring  user_name;
        folly::IPAddress remote_address;

    public:
        user_login_event_async() = delete;

        user_login_event_async(const folly::fbstring user_name, const folly::IPAddress remote_address)
            : pal_loader_basic_event(EVENT_ASYNC, GAME_USERAUTH, LOGIN),
              user_name(user_name),
              remote_address(remote_address) {}

        const folly::fbstring &get_user_name() {
            return user_name;
        };

        const folly::IPAddress &get_remote_address() {
            return remote_address;
        };
};

struct user_login_event : pal_loader_basic_event {
    private:
        folly::fbstring  user_name;
        folly::IPAddress remote_address;

    public:
        user_login_event() = delete;

        user_login_event(const folly::fbstring &user_name, const folly::IPAddress &remote_address)
            : pal_loader_basic_event(EVENT_PRE, GAME_USERAUTH, LOGIN),
              user_name(user_name),
              remote_address(remote_address) {}

        const folly::fbstring &get_user_name() {
            return user_name;
        };

        const folly::IPAddress &get_remote_address() {
            return remote_address;
        };
};

struct user_pre_attack_event : pal_loader_basic_event {
    private:
        pal_loader_user                 source;
        pal_loader_character            target;
        pal_loader_editable_damage_info info;
        int                             real_damage;

    public:
        user_pre_attack_event() = delete;

        user_pre_attack_event(pal_loader_user &source, pal_loader_character &target, SDK::FPalDamageInfo *info, int real_damage)
            : pal_loader_basic_event(EVENT_PRE, GAME_GAMEPLAY, ATTACK),
              source(source),
              target(target), info(info), real_damage(real_damage) {}

        pal_loader_user &get_source() {
            return source;
        };

        pal_loader_character &get_target() {
            return target;
        };

        pal_loader_editable_damage_info &get_info() {
            return info;
        };

        int get_real_damage() {
            return real_damage;
        }
};

struct user_pre_additem_event : pal_loader_basic_event {
    private:
        pal_loader_user player;
        std::string     item;
        int             count;
        bool            is_assign_passive;

    public:
        user_pre_additem_event() = delete;

        // todo: make event editable
        user_pre_additem_event(pal_loader_user &player, const std::string &item, int count, bool is_assign_passive)
            : pal_loader_basic_event(EVENT_PRE, GAME_GAMEPLAY, ADDITEM),
              player(player),
              item(item),
              count(count),
              is_assign_passive(is_assign_passive) {}

        pal_loader_user &get_player() {
            return player;
        };

        std::string &get_item() {
            return item;
        };

        int &get_count() {
            return count;
        };

        bool &get_is_assign_passive() {
            return is_assign_passive;
        };
};

struct pal_loader_event_policies {
        static uint32_t getEvent(const pal_loader_basic_event &e) {
            return e.basic_type << 24 | e.subsystem_type << 16 | e.type;
        }
};

extern eventpp::EventDispatcher<uint32_t, bool(const pal_loader_basic_event &e), pal_loader_event_policies> dispatcher;

void install_test_event_handler();