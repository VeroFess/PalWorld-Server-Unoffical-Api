#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PRESET_IvySingleStrand_BP.PRESET_IvySingleStrand_BP_C
// (Actor)

class UClass* APRESET_IvySingleStrand_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PRESET_IvySingleStrand_BP_C");

	return Clss;
}


// PRESET_IvySingleStrand_BP_C PRESET_IvySingleStrand_BP.Default__PRESET_IvySingleStrand_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APRESET_IvySingleStrand_BP_C* APRESET_IvySingleStrand_BP_C::GetDefaultObj()
{
	static class APRESET_IvySingleStrand_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APRESET_IvySingleStrand_BP_C*>(APRESET_IvySingleStrand_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


