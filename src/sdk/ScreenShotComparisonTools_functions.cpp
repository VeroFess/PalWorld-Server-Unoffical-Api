#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ScreenShotComparisonTools.ScreenShotComparisonSettings
// (None)

class UClass* UScreenShotComparisonSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScreenShotComparisonSettings");

	return Clss;
}


// ScreenShotComparisonSettings ScreenShotComparisonTools.Default__ScreenShotComparisonSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UScreenShotComparisonSettings* UScreenShotComparisonSettings::GetDefaultObj()
{
	static class UScreenShotComparisonSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UScreenShotComparisonSettings*>(UScreenShotComparisonSettings::StaticClass()->DefaultObject);

	return Default;
}

}


