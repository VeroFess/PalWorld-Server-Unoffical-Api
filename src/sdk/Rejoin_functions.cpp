#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Rejoin.RejoinCheck
// (None)

class UClass* URejoinCheck::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RejoinCheck");

	return Clss;
}


// RejoinCheck Rejoin.Default__RejoinCheck
// (Public, ClassDefaultObject, ArchetypeObject)

class URejoinCheck* URejoinCheck::GetDefaultObj()
{
	static class URejoinCheck* Default = nullptr;

	if (!Default)
		Default = static_cast<URejoinCheck*>(URejoinCheck::StaticClass()->DefaultObject);

	return Default;
}

}


