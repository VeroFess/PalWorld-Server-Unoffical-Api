#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PRESET_IvySingleLeaf1_BP.PRESET_IvySingleLeaf1_BP_C
// (Actor)

class UClass* APRESET_IvySingleLeaf1_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PRESET_IvySingleLeaf1_BP_C");

	return Clss;
}


// PRESET_IvySingleLeaf1_BP_C PRESET_IvySingleLeaf1_BP.Default__PRESET_IvySingleLeaf1_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APRESET_IvySingleLeaf1_BP_C* APRESET_IvySingleLeaf1_BP_C::GetDefaultObj()
{
	static class APRESET_IvySingleLeaf1_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APRESET_IvySingleLeaf1_BP_C*>(APRESET_IvySingleLeaf1_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


