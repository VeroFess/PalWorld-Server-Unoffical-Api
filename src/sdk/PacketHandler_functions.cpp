#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PacketHandler.HandlerComponentFactory
// (None)

class UClass* UHandlerComponentFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HandlerComponentFactory");

	return Clss;
}


// HandlerComponentFactory PacketHandler.Default__HandlerComponentFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UHandlerComponentFactory* UHandlerComponentFactory::GetDefaultObj()
{
	static class UHandlerComponentFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UHandlerComponentFactory*>(UHandlerComponentFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class PacketHandler.PacketHandlerProfileConfig
// (None)

class UClass* UPacketHandlerProfileConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PacketHandlerProfileConfig");

	return Clss;
}


// PacketHandlerProfileConfig PacketHandler.Default__PacketHandlerProfileConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UPacketHandlerProfileConfig* UPacketHandlerProfileConfig::GetDefaultObj()
{
	static class UPacketHandlerProfileConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UPacketHandlerProfileConfig*>(UPacketHandlerProfileConfig::StaticClass()->DefaultObject);

	return Default;
}

}


