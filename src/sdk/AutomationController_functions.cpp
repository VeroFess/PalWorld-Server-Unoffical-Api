#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AutomationController.AutomationControllerSettings
// (None)

class UClass* UAutomationControllerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationControllerSettings");

	return Clss;
}


// AutomationControllerSettings AutomationController.Default__AutomationControllerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationControllerSettings* UAutomationControllerSettings::GetDefaultObj()
{
	static class UAutomationControllerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationControllerSettings*>(UAutomationControllerSettings::StaticClass()->DefaultObject);

	return Default;
}

}


