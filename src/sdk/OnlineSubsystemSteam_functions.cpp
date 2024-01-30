#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// (None)

class UClass* USteamAuthComponentModuleInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamAuthComponentModuleInterface");

	return Clss;
}


// SteamAuthComponentModuleInterface OnlineSubsystemSteam.Default__SteamAuthComponentModuleInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamAuthComponentModuleInterface* USteamAuthComponentModuleInterface::GetDefaultObj()
{
	static class USteamAuthComponentModuleInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamAuthComponentModuleInterface*>(USteamAuthComponentModuleInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemSteam.SteamNetConnection
// (None)

class UClass* USteamNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamNetConnection");

	return Clss;
}


// SteamNetConnection OnlineSubsystemSteam.Default__SteamNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamNetConnection* USteamNetConnection::GetDefaultObj()
{
	static class USteamNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamNetConnection*>(USteamNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemSteam.SteamNetDriver
// (None)

class UClass* USteamNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamNetDriver");

	return Clss;
}


// SteamNetDriver OnlineSubsystemSteam.Default__SteamNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamNetDriver* USteamNetDriver::GetDefaultObj()
{
	static class USteamNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamNetDriver*>(USteamNetDriver::StaticClass()->DefaultObject);

	return Default;
}

}


