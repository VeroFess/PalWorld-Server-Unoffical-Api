#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Localization.LocalizationSettings
// (None)

class UClass* ULocalizationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalizationSettings");

	return Clss;
}


// LocalizationSettings Localization.Default__LocalizationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocalizationSettings* ULocalizationSettings::GetDefaultObj()
{
	static class ULocalizationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalizationSettings*>(ULocalizationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Localization.LocalizationTargetSet
// (None)

class UClass* ULocalizationTargetSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalizationTargetSet");

	return Clss;
}


// LocalizationTargetSet Localization.Default__LocalizationTargetSet
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocalizationTargetSet* ULocalizationTargetSet::GetDefaultObj()
{
	static class ULocalizationTargetSet* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalizationTargetSet*>(ULocalizationTargetSet::StaticClass()->DefaultObject);

	return Default;
}


// Class Localization.LocalizationTarget
// (None)

class UClass* ULocalizationTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalizationTarget");

	return Clss;
}


// LocalizationTarget Localization.Default__LocalizationTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocalizationTarget* ULocalizationTarget::GetDefaultObj()
{
	static class ULocalizationTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalizationTarget*>(ULocalizationTarget::StaticClass()->DefaultObject);

	return Default;
}

}


