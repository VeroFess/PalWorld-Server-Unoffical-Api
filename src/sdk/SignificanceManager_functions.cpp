#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SignificanceManager.SignificanceManager
// (None)

class UClass* USignificanceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SignificanceManager");

	return Clss;
}


// SignificanceManager SignificanceManager.Default__SignificanceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USignificanceManager* USignificanceManager::GetDefaultObj()
{
	static class USignificanceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USignificanceManager*>(USignificanceManager::StaticClass()->DefaultObject);

	return Default;
}

}


