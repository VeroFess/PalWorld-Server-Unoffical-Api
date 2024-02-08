#include "events.h"
#include "console.h"

void install_test_event_handler() {
    dispatcher.appendListener(EVENT_PRE_LOGIN, [](const pal_loader_basic_event &e) -> bool {
        auto ev = static_cast<const user_login_event &>(e);
        pal_async_log->info("player {} login from {}", ev.get_user_name().toStdString(), ev.get_remote_address().str());
        return false;
    });

    dispatcher.appendListener(EVENT_PRE_ADDITEM, [](const pal_loader_basic_event &e) -> bool {
        auto ev = static_cast<const user_pre_additem_event &>(e);
        pal_async_log->info("player {} want add {} x {}", ev.get_player().get_name().toStdString(), ev.get_item(), ev.get_count());
        return false;
    });

    dispatcher.appendListener(EVENT_PRE_ATTACK, [](const pal_loader_basic_event &e) -> bool {
        auto ev = static_cast<const user_pre_attack_event &>(e);
        pal_async_log->info("player {} want attack {} with damage {}", ev.get_source().get_name().toStdString(), (int)ev.get_target().get_type(), ev.get_info().get_damage());
        return false;
    });
}