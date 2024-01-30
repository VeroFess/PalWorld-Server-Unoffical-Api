#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DLSS.DLSSOverrideSettings
// (None)

class UClass* UDLSSOverrideSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLSSOverrideSettings");

	return Clss;
}


// DLSSOverrideSettings DLSS.Default__DLSSOverrideSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDLSSOverrideSettings* UDLSSOverrideSettings::GetDefaultObj()
{
	static class UDLSSOverrideSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLSSOverrideSettings*>(UDLSSOverrideSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class DLSS.DLSSSettings
// (None)

class UClass* UDLSSSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLSSSettings");

	return Clss;
}


// DLSSSettings DLSS.Default__DLSSSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDLSSSettings* UDLSSSettings::GetDefaultObj()
{
	static class UDLSSSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLSSSettings*>(UDLSSSettings::StaticClass()->DefaultObject);

	return Default;
}

}


