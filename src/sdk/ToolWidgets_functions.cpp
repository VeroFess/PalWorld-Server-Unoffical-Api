#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ToolWidgets.FilterBarContext
// (None)

class UClass* UFilterBarContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FilterBarContext");

	return Clss;
}


// FilterBarContext ToolWidgets.Default__FilterBarContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UFilterBarContext* UFilterBarContext::GetDefaultObj()
{
	static class UFilterBarContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UFilterBarContext*>(UFilterBarContext::StaticClass()->DefaultObject);

	return Default;
}

}


