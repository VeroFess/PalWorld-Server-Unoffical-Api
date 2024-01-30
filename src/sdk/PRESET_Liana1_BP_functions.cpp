#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PRESET_Liana1_BP.PRESET_Liana1_BP_C
// (Actor)

class UClass* APRESET_Liana1_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PRESET_Liana1_BP_C");

	return Clss;
}


// PRESET_Liana1_BP_C PRESET_Liana1_BP.Default__PRESET_Liana1_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APRESET_Liana1_BP_C* APRESET_Liana1_BP_C::GetDefaultObj()
{
	static class APRESET_Liana1_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APRESET_Liana1_BP_C*>(APRESET_Liana1_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


