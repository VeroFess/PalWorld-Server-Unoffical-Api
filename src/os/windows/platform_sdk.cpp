#include "platform_sdk.h"
#include "SDK.hpp"
#include "utils.h"
#include "setting.h"
#include "spdlog/spdlog.h"

#include <Windows.h>
#include <Psapi.h>
#include <future>

namespace Offsets {
    int32_t GWorld;
    int32_t GEngine;

    int32_t FNameAppendString;
    int32_t ForceGarbageCollection;
    int32_t KickPlayer;
    int32_t GetEmptyFText;
    int32_t SpawnPlayActor;
    int32_t GetGameState;
    int32_t SendAnnounce;
    int32_t GetCharacters;
    int32_t GetController;
    int32_t GetPlayerState;
    int32_t GetPlayerName;
    int32_t GetPlayerUID;
    int32_t GetWorldName;
    int32_t GetPlayerStateFromController;
    int32_t GetPlayerNetworkAddress;
} // namespace Offsets

bool offset_init() {
    MODULEINFO ImageBaseInfo;
    auto imageBaseOffset = GetImageBaseOffset();
    K32GetModuleInformation(GetCurrentProcess(), HMODULE(imageBaseOffset), &ImageBaseInfo, sizeof(MODULEINFO));
    if (ImageBaseInfo.lpBaseOfDll == NULL)
        return false;
    
    auto getRegOffset = [ImageBaseInfo](int32_t &offset, std::string &pattern) -> bool {
        unsigned long long patternAddr = search_pattern(
            (const unsigned char*)ImageBaseInfo.lpBaseOfDll, 
            ImageBaseInfo.SizeOfImage, 
            hexstring2shorts(pattern));
        if (0 != patternAddr) {
            int32_t regAddr = *(DWORD64 *)(patternAddr + 3);
            offset = (patternAddr + 3) + 4 + regAddr - (uintptr_t)ImageBaseInfo.lpBaseOfDll;
            return true;
        }
        return false;
    };
    auto getFunOffset = [ImageBaseInfo](int32_t &offset, std::string &pattern) -> bool {
        unsigned long long patternAddr = search_pattern(
            (const unsigned char*)ImageBaseInfo.lpBaseOfDll, 
            ImageBaseInfo.SizeOfImage, 
            hexstring2shorts(pattern));
        if (0 != patternAddr) {
            offset = patternAddr - (uintptr_t)ImageBaseInfo.lpBaseOfDll;
            return true;
        }
        return false;
    };

    auto start = std::chrono::high_resolution_clock::now();

    auto &setting = Setting::getInstance();

    std::vector<std::future<bool>> futures;
    futures.emplace_back(std::async(getRegOffset, std::ref(Offsets::GWorld), std::ref(setting.signatureGWorld)));
    futures.emplace_back(std::async(getRegOffset, std::ref(Offsets::GEngine), std::ref(setting.signatureGEngine)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::FNameAppendString), std::ref(setting.signatureFNameAppendString)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::ForceGarbageCollection), std::ref(setting.signatureForceGarbageCollection)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::KickPlayer), std::ref(setting.signatureKickPlayer)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetEmptyFText), std::ref(setting.signatureGetEmptyFText)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::SpawnPlayActor), std::ref(setting.signatureSpawnPlayActor)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetGameState), std::ref(setting.signatureGetGameState)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::SendAnnounce), std::ref(setting.signatureSendAnnounce)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetCharacters), std::ref(setting.signatureGetCharacters)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetController), std::ref(setting.signatureGetController)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetPlayerState), std::ref(setting.signatureGetPlayerState)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetPlayerName), std::ref(setting.signatureGetPlayerName)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetPlayerUID), std::ref(setting.signatureGetPlayerUID)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetWorldName), std::ref(setting.signatureGetWorldName)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetPlayerStateFromController), std::ref(setting.signatureGetPlayerStateFromController)));
    futures.emplace_back(std::async(getFunOffset, std::ref(Offsets::GetPlayerNetworkAddress), std::ref(setting.signatureGetPlayerNetworkAddress)));

    for (auto &f : futures) {
        f.get();
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    spdlog::info("Get All Offsets Time: {}", diff.count());

    spdlog::info("Offsets::GWorld: 0x{:X}", Offsets::GWorld);
    spdlog::info("Offsets::GEngine: 0x{:X}", Offsets::GEngine);
    spdlog::info("Offsets::FNameAppendString: 0x{:X}", Offsets::FNameAppendString);
    spdlog::info("Offsets::ForceGarbageCollection: 0x{:X}", Offsets::ForceGarbageCollection);
    spdlog::info("Offsets::KickPlayer: 0x{:X}", Offsets::KickPlayer);
    spdlog::info("Offsets::GetEmptyFText: 0x{:X}", Offsets::GetEmptyFText);
    spdlog::info("Offsets::SpawnPlayActor: 0x{:X}", Offsets::SpawnPlayActor);
    spdlog::info("Offsets::GetGameState: 0x{:X}", Offsets::GetGameState);
    spdlog::info("Offsets::SendAnnounce: 0x{:X}", Offsets::SendAnnounce);
    spdlog::info("Offsets::GetCharacters: 0x{:X}", Offsets::GetCharacters);
    spdlog::info("Offsets::GetController: 0x{:X}", Offsets::GetController);
    spdlog::info("Offsets::GetPlayerState: 0x{:X}", Offsets::GetPlayerState);
    spdlog::info("Offsets::GetPlayerName: 0x{:X}", Offsets::GetPlayerName);
    spdlog::info("Offsets::GetPlayerUID: 0x{:X}", Offsets::GetPlayerUID);
    spdlog::info("Offsets::GetWorldName: 0x{:X}", Offsets::GetWorldName);
    spdlog::info("Offsets::GetPlayerStateFromController: 0x{:X}", Offsets::GetPlayerStateFromController);
    spdlog::info("Offsets::GetPlayerNetworkAddress: 0x{:X}", Offsets::GetPlayerNetworkAddress);
}
