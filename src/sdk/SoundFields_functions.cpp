#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SoundFields.AmbisonicsEncodingSettings
// (None)

class UClass* UAmbisonicsEncodingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbisonicsEncodingSettings");

	return Clss;
}


// AmbisonicsEncodingSettings SoundFields.Default__AmbisonicsEncodingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbisonicsEncodingSettings* UAmbisonicsEncodingSettings::GetDefaultObj()
{
	static class UAmbisonicsEncodingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbisonicsEncodingSettings*>(UAmbisonicsEncodingSettings::StaticClass()->DefaultObject);

	return Default;
}

}


