#pragma once

#include <string>
#include <fstream>

bool setting_init(std::string setting_path);

class Setting
{
public:
    static Setting& getInstance();

    bool readSettingFile(std::string setting_path);

    std::ifstream setting_stream;

    // signature
    std::string signatureGWorld;
    std::string signatureGEngine;
    std::string signatureFNameAppendString;
    std::string signatureForceGarbageCollection;
    std::string signatureKickPlayer;
    std::string signatureGetEmptyFText;
    std::string signatureSpawnPlayActor;
    std::string signatureGetGameState;
    std::string signatureSendAnnounce;
    std::string signatureGetCharacters;
    std::string signatureGetController;
    std::string signatureGetPlayerState;
    std::string signatureGetPlayerName;
    std::string signatureGetPlayerUID;
    std::string signatureGetWorldName;
    std::string signatureGetPlayerStateFromController;
    std::string signatureGetPlayerNetworkAddress;

private:
    Setting();
    Setting(const Setting&);
    Setting& operator=(const Setting&);
};
