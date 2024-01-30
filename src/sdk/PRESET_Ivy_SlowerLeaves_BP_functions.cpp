#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PRESET_Ivy_SlowerLeaves_BP.PRESET_Ivy_SlowerLeaves_BP_C
// (Actor)

class UClass* APRESET_Ivy_SlowerLeaves_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PRESET_Ivy_SlowerLeaves_BP_C");

	return Clss;
}


// PRESET_Ivy_SlowerLeaves_BP_C PRESET_Ivy_SlowerLeaves_BP.Default__PRESET_Ivy_SlowerLeaves_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APRESET_Ivy_SlowerLeaves_BP_C* APRESET_Ivy_SlowerLeaves_BP_C::GetDefaultObj()
{
	static class APRESET_Ivy_SlowerLeaves_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APRESET_Ivy_SlowerLeaves_BP_C*>(APRESET_Ivy_SlowerLeaves_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


