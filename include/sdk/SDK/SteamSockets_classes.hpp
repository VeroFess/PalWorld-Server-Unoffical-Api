#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x33B0 - 0x3398)
// Class SteamSockets.SteamSocketsNetConnection
class USteamSocketsNetConnection : public UNetConnection
{
public:
	uint8                                        Pad_AA5[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetConnection* GetDefaultObj();

};

// 0x10 (0x7F8 - 0x7E8)
// Class SteamSockets.SteamSocketsNetDriver
class USteamSocketsNetDriver : public UNetDriver
{
public:
	uint8                                        Pad_AAD[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetDriver* GetDefaultObj();

};

}


