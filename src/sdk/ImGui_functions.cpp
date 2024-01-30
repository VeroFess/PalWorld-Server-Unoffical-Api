#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImGui.ImGuiInputHandler
// (None)

class UClass* UImGuiInputHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImGuiInputHandler");

	return Clss;
}


// ImGuiInputHandler ImGui.Default__ImGuiInputHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UImGuiInputHandler* UImGuiInputHandler::GetDefaultObj()
{
	static class UImGuiInputHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UImGuiInputHandler*>(UImGuiInputHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class ImGui.ImGuiSettings
// (None)

class UClass* UImGuiSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImGuiSettings");

	return Clss;
}


// ImGuiSettings ImGui.Default__ImGuiSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UImGuiSettings* UImGuiSettings::GetDefaultObj()
{
	static class UImGuiSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UImGuiSettings*>(UImGuiSettings::StaticClass()->DefaultObject);

	return Default;
}

}


