#include "common_entry.h"
#include "spdlog/spdlog.h"
#include "SDKDirect.h"

#include "hooks.h"
#include "utils.h"
#include "engine_functions.h"

#include <cstdio>
#include <iostream>

std::string str_tolower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    return s;
}

void pal_loader_thread_start() {
    spdlog::info("loading ...");

    engine_init();
    SDK::sdk_init();
    install_hooks();

    spdlog::info("Unreal::GWorld           = {:x}", uintptr_t(SDK::World));
    spdlog::info("PalGameStateInGame       = {:x}", uintptr_t(SDK::StateInGame));

    while (true) {
        std::cout << "Pal Loader > ";
        std::string userInput;
        std::getline(std::cin, userInput);

        if (userInput == "state") {
            spdlog::info("[CMD::State] Lazy, add in next version Owo");
        } else if (userInput.starts_with("broadcast")) {
            auto message = userInput.substr(10);

#ifdef __linux
            auto u16str     = local_codepage_to_utf16(message);
            auto fstringMsg = SDK::FString();

            fstringMsg.Data        = (char16_t *)u16str.c_str();
            fstringMsg.NumElements = u16str.size() / sizeof(char16_t);
            fstringMsg.MaxElements = fstringMsg.NumElements;
#else
            auto fstringMsg = SDK::FString(local_codepage_to_utf16(message).c_str());
#endif

            SDK::SendSystemAnnounce(fstringMsg);

            spdlog::info("[CMD::BroadcastChatMessage] {}", message);
        } else if (userInput == "gc") {
            ForceGarbageCollection(Engine, true);

            spdlog::info("[CMD::ForceGarbageCollection] done");
        } else if (userInput == "list") {
            SDK::TArray<SDK::APalCharacter *> player_characters;

            SDK::GetAllPlayerCharacters(&player_characters);

            if (player_characters.IsValid()) {
                spdlog::info("[CMD::List] current {} player online", player_characters.Num());

                for (int i = 0; i < player_characters.Num(); i++) {
                    auto character  = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);
                    auto controller = static_cast<SDK::APlayerController *>(SDK::GetController(character));

                    SDK::FString faddress;

#ifdef __linux
                    char16_t faddress_buffer[64] = { 0 };
#else
                    wchar_t faddress_buffer[64] = { 0 };
#endif

                    faddress.Data        = faddress_buffer;
                    faddress.MaxElements = 64;
                    faddress.NumElements = 0;

#ifdef __linux
                    GetPlayerNetworkAddress(&faddress, controller);
#else
                    GetPlayerNetworkAddress(controller, &faddress);
#endif

                    std::string address = faddress.ToString();

                    auto state = SDK::GetPlayerStateByPlayer(character);

                    SDK::FString fraw_name;

#ifdef __linux
                    char16_t fraw_name_buffer[64] = { 0 };
#else
                    wchar_t fraw_name_buffer[64] = { 0 };
#endif

                    fraw_name.Data        = fraw_name_buffer;
                    fraw_name.MaxElements = 64;
                    fraw_name.NumElements = 0;

                    SDK::GetPlayerName(state, &fraw_name);

                    auto uid = SDK::GetPlayerUID(state);

                    std::string name = utf16_to_local_codepage(fraw_name.Data, fraw_name.NumElements);

                    spdlog::info("[CMD::List] {}, {:08x}, {}", name, static_cast<uint32_t>(uid->A), address);
                }
            }
        } else if (userInput.starts_with("kick")) {
            auto                              kick_uid = str_tolower(userInput.substr(5));
            SDK::TArray<SDK::APalCharacter *> player_characters;
            SDK::GetAllPlayerCharacters(&player_characters);

            if (player_characters.IsValid()) {
                for (int i = 0; i < player_characters.Num(); i++) {
                    SDK::FString fraw_name;

#ifdef __linux
                    char16_t fraw_name_buffer[64] = { 0 };
#else
                    wchar_t fraw_name_buffer[64] = { 0 };
#endif

                    char hexuid[9] = {};

                    fraw_name.Data        = fraw_name_buffer;
                    fraw_name.MaxElements = 64;
                    fraw_name.NumElements = 0;

                    auto        character = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);
                    auto        state     = SDK::GetPlayerStateByPlayer(character);
                    auto        uid       = SDK::GetPlayerUID(state);
                    auto        raw_name  = SDK::GetPlayerName(state, &fraw_name);
                    std::string name      = utf16_to_local_codepage(raw_name->Data, raw_name->NumElements);

#ifdef __linux
                    sprintf(hexuid, "%08x", static_cast<uint32_t>(uid->A));
#else
                    sprintf_s(hexuid, "%08x", static_cast<uint32_t>(uid->A));
#endif

                    if (kick_uid == std::string(hexuid)) {
                        SDK::FText *reason = GetEmptyFText();

                        auto kicked = KickPlayer(SDK::World, uid, reason);

                        if (kicked) {
                            spdlog::info("[CMD::Kick] player {} kicked", name);
                        }
                    }
                }
            }
        } else {
            spdlog::info("[CMD::???] Unknown command");
        }
    }
}