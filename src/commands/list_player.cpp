#include "commands.h"
#include "SDKDirect.h"
#include "utils.h"
#include "engine_functions.h"

void list_handle(std::vector<folly::fbstring> &user_input) {
    SDK::TArray<SDK::APalCharacter *> player_characters;

    SDK::GetAllPlayerCharacters(&player_characters);

    if (player_characters.IsValid()) {
        spdlog::info("[CMD::List] current {} player online", player_characters.Num());

        for (int i = 0; i < player_characters.Num(); i++) {
            auto character  = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);
            auto controller = static_cast<SDK::APlayerController *>(SDK::GetController(character));

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

            auto state = SDK::GetPlayerStateByPlayer(character);

            SDK::FString  fs_user_name;
            engine_char_t fs_user_name_buffer[64] = { 0 };

            fs_user_name.Data        = fs_user_name_buffer;
            fs_user_name.MaxElements = 64;
            fs_user_name.NumElements = 0;

            SDK::GetPlayerName(state, &fs_user_name);

            auto uid = SDK::GetPlayerUID(state);

            std::string name = utf16_to_local_codepage(fs_user_name.Data, fs_user_name.NumElements);

            spdlog::info("[CMD::List] {}, {:08x}, {}", name, static_cast<uint32_t>(uid->A), address);
        }
    }
}