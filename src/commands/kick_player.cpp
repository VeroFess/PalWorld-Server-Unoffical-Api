#include "commands.h"
#include "SDKDirect.h"
#include "utils.h"
#include "engine_functions.h"

void kick_handle(std::vector<folly::fbstring> &user_input) {
    if (user_input.empty()) {
        return;
    }

    auto                              kick_uid = user_input[0];
    SDK::TArray<SDK::APalCharacter *> player_characters;
    SDK::GetAllPlayerCharacters(&player_characters);

    if (player_characters.IsValid()) {
        for (int i = 0; i < player_characters.Num(); i++) {
            SDK::FString  fs_user_name;
            engine_char_t fs_user_name_buffer[64] = { 0 };
            char          hex_uid[9]              = {};

            fs_user_name.Data        = fs_user_name_buffer;
            fs_user_name.MaxElements = 64;
            fs_user_name.NumElements = 0;

            auto        character = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);
            auto        state     = SDK::GetPlayerStateByPlayer(character);
            auto        uid       = SDK::GetPlayerUID(state);
            auto        raw_name  = SDK::GetPlayerName(state, &fs_user_name);
            std::string name      = utf16_to_local_codepage(raw_name->Data, raw_name->NumElements);

#ifdef __linux
            sprintf(hex_uid, "%08x", static_cast<uint32_t>(uid->A));
#else
            sprintf_s(hex_uid, "%08x", static_cast<uint32_t>(uid->A));
#endif

            if (kick_uid == folly::fbstring(hex_uid)) {
                SDK::FText *reason = GetEmptyFText();

                auto kicked = KickPlayer(SDK::World, uid, reason);

                if (kicked) {
                    spdlog::info("[CMD::Kick] player {} kicked", name);
                }
            }
        }
    }
}