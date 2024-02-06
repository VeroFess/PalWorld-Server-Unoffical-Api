#include "commands.h"
#include "SDKDirect.h"
#include "utils.h"
#include "engine_functions.h"
#include "types.h"

void kick_handle(std::vector<folly::fbstring> &user_input) {
    if (user_input.empty()) {
        return;
    }

    auto                              kick_uid = user_input[0];
    SDK::TArray<SDK::APalCharacter *> player_characters;
    SDK::GetAllPlayerCharacters(&player_characters);

    if (player_characters.IsValid()) {
        for (int i = 0; i < player_characters.Num(); i++) {

            auto            character = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);
            pal_loader_user player(character);
            char            hex_uid[18] = {};

#ifdef __linux
            sprintf(hex_uid, "%016llx", player.get_id());
#else
            sprintf_s(hex_uid, "%016llx", player.get_id());
#endif

            if (kick_uid == folly::fbstring(hex_uid)) {
                auto name   = player.get_name();
                auto kicked = player.kick();

                if (kicked) {
                    spdlog::info("[CMD::Kick] player {} kicked", name.toStdString());
                }
            }
        }
    }
}