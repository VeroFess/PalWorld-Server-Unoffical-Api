#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C
// (None)

class UClass* UDmgTypeBP_Environmental_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeBP_Environmental_C");

	return Clss;
}


// DmgTypeBP_Environmental_C DmgTypeBP_Environmental.Default__DmgTypeBP_Environmental_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeBP_Environmental_C* UDmgTypeBP_Environmental_C::GetDefaultObj()
{
	static class UDmgTypeBP_Environmental_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeBP_Environmental_C*>(UDmgTypeBP_Environmental_C::StaticClass()->DefaultObject);

	return Default;
}

}


