#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UObjectPlugin.MyPluginObject
// (None)

class UClass* UMyPluginObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MyPluginObject");

	return Clss;
}


// MyPluginObject UObjectPlugin.Default__MyPluginObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UMyPluginObject* UMyPluginObject::GetDefaultObj()
{
	static class UMyPluginObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UMyPluginObject*>(UMyPluginObject::StaticClass()->DefaultObject);

	return Default;
}

}


