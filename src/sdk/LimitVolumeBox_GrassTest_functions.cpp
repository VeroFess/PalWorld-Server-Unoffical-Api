#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LimitVolumeBox_GrassTest.LimitVolumeBox_GrassTest_C
// (Actor)

class UClass* ALimitVolumeBox_GrassTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimitVolumeBox_GrassTest_C");

	return Clss;
}


// LimitVolumeBox_GrassTest_C LimitVolumeBox_GrassTest.Default__LimitVolumeBox_GrassTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALimitVolumeBox_GrassTest_C* ALimitVolumeBox_GrassTest_C::GetDefaultObj()
{
	static class ALimitVolumeBox_GrassTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALimitVolumeBox_GrassTest_C*>(ALimitVolumeBox_GrassTest_C::StaticClass()->DefaultObject);

	return Default;
}

}


