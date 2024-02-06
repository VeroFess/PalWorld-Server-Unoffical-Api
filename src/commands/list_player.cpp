#include "commands.h"
#include "SDKDirect.h"
#include "utils.h"
#include "types.h"
#include "engine_functions.h"

void list_handle(std::vector<folly::fbstring> &user_input) {
    SDK::TArray<SDK::APalCharacter *> player_characters;

    SDK::GetAllPlayerCharacters(&player_characters);

    if (player_characters.IsValid()) {
        spdlog::info("[CMD::List] current {} player online", player_characters.Num());

        for (int i = 0; i < player_characters.Num(); i++) {
            auto character = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);

            pal_loader_user player(character);

            spdlog::info("[CMD::List] {}, {:08x}, {}", player.get_name(), player.get_id(), player.get_address().str());
        }
    }
}