#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PL_MainWorld5.PL_MainWorld5_C
// (Actor)

class UClass* APL_MainWorld5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PL_MainWorld5_C");

	return Clss;
}


// PL_MainWorld5_C PL_MainWorld5.Default__PL_MainWorld5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APL_MainWorld5_C* APL_MainWorld5_C::GetDefaultObj()
{
	static class APL_MainWorld5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APL_MainWorld5_C*>(APL_MainWorld5_C::StaticClass()->DefaultObject);

	return Default;
}

}


