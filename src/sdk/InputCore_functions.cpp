#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InputCore.InputCoreTypes
// (None)

class UClass* UInputCoreTypes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputCoreTypes");

	return Clss;
}


// InputCoreTypes InputCore.Default__InputCoreTypes
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputCoreTypes* UInputCoreTypes::GetDefaultObj()
{
	static class UInputCoreTypes* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputCoreTypes*>(UInputCoreTypes::StaticClass()->DefaultObject);

	return Default;
}

}


