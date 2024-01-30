#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AvfMediaFactory.AvfMediaSettings
// (None)

class UClass* UAvfMediaSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AvfMediaSettings");

	return Clss;
}


// AvfMediaSettings AvfMediaFactory.Default__AvfMediaSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAvfMediaSettings* UAvfMediaSettings::GetDefaultObj()
{
	static class UAvfMediaSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAvfMediaSettings*>(UAvfMediaSettings::StaticClass()->DefaultObject);

	return Default;
}

}


