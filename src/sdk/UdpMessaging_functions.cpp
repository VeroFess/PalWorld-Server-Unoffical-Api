#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UdpMessaging.UdpMessagingSettings
// (None)

class UClass* UUdpMessagingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdpMessagingSettings");

	return Clss;
}


// UdpMessagingSettings UdpMessaging.Default__UdpMessagingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdpMessagingSettings* UUdpMessagingSettings::GetDefaultObj()
{
	static class UUdpMessagingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdpMessagingSettings*>(UUdpMessagingSettings::StaticClass()->DefaultObject);

	return Default;
}

}


