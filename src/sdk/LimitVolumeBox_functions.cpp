#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LimitVolumeBox.LimitVolumeBox_C
// (Actor)

class UClass* ALimitVolumeBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimitVolumeBox_C");

	return Clss;
}


// LimitVolumeBox_C LimitVolumeBox.Default__LimitVolumeBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALimitVolumeBox_C* ALimitVolumeBox_C::GetDefaultObj()
{
	static class ALimitVolumeBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALimitVolumeBox_C*>(ALimitVolumeBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


