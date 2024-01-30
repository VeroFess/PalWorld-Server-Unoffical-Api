#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SplineTarget_BP.SplineTarget_BP_C
// (Actor)

class UClass* ASplineTarget_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplineTarget_BP_C");

	return Clss;
}


// SplineTarget_BP_C SplineTarget_BP.Default__SplineTarget_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASplineTarget_BP_C* ASplineTarget_BP_C::GetDefaultObj()
{
	static class ASplineTarget_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASplineTarget_BP_C*>(ASplineTarget_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


