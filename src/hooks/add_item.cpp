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
void add_item_to_server_implementation_proxy(SDK::UPalNetworkPlayerComponent *that, const SDK::FName static_item_id, int count, bool is_assign_passive) {
    auto controller = NetworkComponentGetOwnerPlayerController(that);

    pal_loader_user player(controller);

    user_pre_additem_event pre_additem_event(player, static_item_id.ToString(), count, is_assign_passive);

    bool all_event_pass = dispatcher.forEachIf(EVENT_PRE_ADDITEM, [&](const eventpp::EventDispatcher<uint32_t, bool(pal_loader_basic_event & e), pal_loader_event_policies>::Callback &cb) -> bool {
        if (cb(dynamic_cast<pal_loader_basic_event &>(pre_additem_event))) {
            return false;
        }
        return true;
    });

    if (!all_event_pass) {
        pal_async_log->warn("[Event::AddItem] player {} add item blocked . reason: block by plugin", player.get_name().toStdString());
        return;
    }

    engine_add_item_to_server(that, static_item_id, count, is_assign_passive);
}
