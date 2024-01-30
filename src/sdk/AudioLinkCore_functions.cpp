#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioLinkCore.AudioLinkSettingsAbstract
// (None)

class UClass* UAudioLinkSettingsAbstract::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioLinkSettingsAbstract");

	return Clss;
}


// AudioLinkSettingsAbstract AudioLinkCore.Default__AudioLinkSettingsAbstract
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioLinkSettingsAbstract* UAudioLinkSettingsAbstract::GetDefaultObj()
{
	static class UAudioLinkSettingsAbstract* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioLinkSettingsAbstract*>(UAudioLinkSettingsAbstract::StaticClass()->DefaultObject);

	return Default;
}

}


