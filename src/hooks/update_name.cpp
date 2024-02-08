#include "hooks.h"
#include "spdlog/spdlog.h"
#include "engine_functions.h"
#include "utils.h"
#include "console.h"
#include "SDKDirect.h"
#include "folly/IPAddress.h"
#include "events.h"
#include "types.h"

#include "common_player_data.h"

void update_character_nickname_to_server_implementation_proxy(SDK::UPalNetworkIndividualComponent *that, const SDK::FPalInstanceID *id, const SDK::FString *newNickName) {
    auto controller = NetworkComponentGetOwnerPlayerController(that);

    pal_loader_user source(controller);
    pal_loader_user target(&id->PlayerUId);
    std::string     new_name = utf16_to_local_codepage(newNickName->Data, newNickName->NumElements);

    pal_async_log->warn("[Event::ChgName] player {} [SteamId: {}] want change {}'s name to {}", source.get_real_name().toStdString(), source.get_net_id().toStdString(), target.get_real_name().toStdString(), new_name);

    engine_update_character_nickname_to_server(that, id, newNickName);
}
