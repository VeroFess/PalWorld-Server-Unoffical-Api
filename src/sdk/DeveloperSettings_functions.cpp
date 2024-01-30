#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DeveloperSettings.DeveloperSettings
// (None)

class UClass* UDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeveloperSettings");

	return Clss;
}


// DeveloperSettings DeveloperSettings.Default__DeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeveloperSettings* UDeveloperSettings::GetDefaultObj()
{
	static class UDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeveloperSettings*>(UDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class DeveloperSettings.PlatformSettings
// (None)

class UClass* UPlatformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformSettings");

	return Clss;
}


// PlatformSettings DeveloperSettings.Default__PlatformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformSettings* UPlatformSettings::GetDefaultObj()
{
	static class UPlatformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformSettings*>(UPlatformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class DeveloperSettings.DeveloperSettingsBackedByCVars
// (None)

class UClass* UDeveloperSettingsBackedByCVars::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeveloperSettingsBackedByCVars");

	return Clss;
}


// DeveloperSettingsBackedByCVars DeveloperSettings.Default__DeveloperSettingsBackedByCVars
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeveloperSettingsBackedByCVars* UDeveloperSettingsBackedByCVars::GetDefaultObj()
{
	static class UDeveloperSettingsBackedByCVars* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeveloperSettingsBackedByCVars*>(UDeveloperSettingsBackedByCVars::StaticClass()->DefaultObject);

	return Default;
}


// Class DeveloperSettings.PlatformSettingsManager
// (None)

class UClass* UPlatformSettingsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformSettingsManager");

	return Clss;
}


// PlatformSettingsManager DeveloperSettings.Default__PlatformSettingsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformSettingsManager* UPlatformSettingsManager::GetDefaultObj()
{
	static class UPlatformSettingsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformSettingsManager*>(UPlatformSettingsManager::StaticClass()->DefaultObject);

	return Default;
}

}


