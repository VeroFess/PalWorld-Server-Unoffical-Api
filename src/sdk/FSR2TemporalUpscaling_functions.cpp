#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FSR2TemporalUpscaling.FSR2Settings
// (None)

class UClass* UFSR2Settings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FSR2Settings");

	return Clss;
}


// FSR2Settings FSR2TemporalUpscaling.Default__FSR2Settings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFSR2Settings* UFSR2Settings::GetDefaultObj()
{
	static class UFSR2Settings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFSR2Settings*>(UFSR2Settings::StaticClass()->DefaultObject);

	return Default;
}

}


