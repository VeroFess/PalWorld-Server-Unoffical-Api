#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TcpMessaging.TcpMessagingSettings
// (None)

class UClass* UTcpMessagingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TcpMessagingSettings");

	return Clss;
}


// TcpMessagingSettings TcpMessaging.Default__TcpMessagingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UTcpMessagingSettings* UTcpMessagingSettings::GetDefaultObj()
{
	static class UTcpMessagingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UTcpMessagingSettings*>(UTcpMessagingSettings::StaticClass()->DefaultObject);

	return Default;
}

}


