#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PRESET_Flowers1_BP.PRESET_Flowers1_BP_C
// (Actor)

class UClass* APRESET_Flowers1_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PRESET_Flowers1_BP_C");

	return Clss;
}


// PRESET_Flowers1_BP_C PRESET_Flowers1_BP.Default__PRESET_Flowers1_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APRESET_Flowers1_BP_C* APRESET_Flowers1_BP_C::GetDefaultObj()
{
	static class APRESET_Flowers1_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APRESET_Flowers1_BP_C*>(APRESET_Flowers1_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


