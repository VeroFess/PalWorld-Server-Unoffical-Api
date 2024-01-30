#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AutomationTest.AutomationTestExcludelist
// (None)

class UClass* UAutomationTestExcludelist::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationTestExcludelist");

	return Clss;
}


// AutomationTestExcludelist AutomationTest.Default__AutomationTestExcludelist
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationTestExcludelist* UAutomationTestExcludelist::GetDefaultObj()
{
	static class UAutomationTestExcludelist* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationTestExcludelist*>(UAutomationTestExcludelist::StaticClass()->DefaultObject);

	return Default;
}

}


