#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SteamSockets.SteamSocketsNetConnection
// (None)

class UClass* USteamSocketsNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamSocketsNetConnection");

	return Clss;
}


// SteamSocketsNetConnection SteamSockets.Default__SteamSocketsNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamSocketsNetConnection* USteamSocketsNetConnection::GetDefaultObj()
{
	static class USteamSocketsNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamSocketsNetConnection*>(USteamSocketsNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class SteamSockets.SteamSocketsNetDriver
// (None)

class UClass* USteamSocketsNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamSocketsNetDriver");

	return Clss;
}


// SteamSocketsNetDriver SteamSockets.Default__SteamSocketsNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamSocketsNetDriver* USteamSocketsNetDriver::GetDefaultObj()
{
	static class USteamSocketsNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamSocketsNetDriver*>(USteamSocketsNetDriver::StaticClass()->DefaultObject);

	return Default;
}

}


