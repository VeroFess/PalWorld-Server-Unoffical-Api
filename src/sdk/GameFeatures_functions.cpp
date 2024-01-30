#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameFeatures.GameFeatureStateChangeObserver
// (None)

class UClass* IGameFeatureStateChangeObserver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureStateChangeObserver");

	return Clss;
}


// GameFeatureStateChangeObserver GameFeatures.Default__GameFeatureStateChangeObserver
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameFeatureStateChangeObserver* IGameFeatureStateChangeObserver::GetDefaultObj()
{
	static class IGameFeatureStateChangeObserver* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameFeatureStateChangeObserver*>(IGameFeatureStateChangeObserver::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeatureAction
// (None)

class UClass* UGameFeatureAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction");

	return Clss;
}


// GameFeatureAction GameFeatures.Default__GameFeatureAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction* UGameFeatureAction::GetDefaultObj()
{
	static class UGameFeatureAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction*>(UGameFeatureAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeatureAction_AddCheats
// (None)

class UClass* UGameFeatureAction_AddCheats::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddCheats");

	return Clss;
}


// GameFeatureAction_AddCheats GameFeatures.Default__GameFeatureAction_AddCheats
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddCheats* UGameFeatureAction_AddCheats::GetDefaultObj()
{
	static class UGameFeatureAction_AddCheats* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddCheats*>(UGameFeatureAction_AddCheats::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeatureAction_AddComponents
// (None)

class UClass* UGameFeatureAction_AddComponents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddComponents");

	return Clss;
}


// GameFeatureAction_AddComponents GameFeatures.Default__GameFeatureAction_AddComponents
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddComponents* UGameFeatureAction_AddComponents::GetDefaultObj()
{
	static class UGameFeatureAction_AddComponents* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddComponents*>(UGameFeatureAction_AddComponents::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeatureAction_AddWPContent
// (None)

class UClass* UGameFeatureAction_AddWPContent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddWPContent");

	return Clss;
}


// GameFeatureAction_AddWPContent GameFeatures.Default__GameFeatureAction_AddWPContent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddWPContent* UGameFeatureAction_AddWPContent::GetDefaultObj()
{
	static class UGameFeatureAction_AddWPContent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddWPContent*>(UGameFeatureAction_AddWPContent::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeatureAction_DataRegistry
// (None)

class UClass* UGameFeatureAction_DataRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_DataRegistry");

	return Clss;
}


// GameFeatureAction_DataRegistry GameFeatures.Default__GameFeatureAction_DataRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_DataRegistry* UGameFeatureAction_DataRegistry::GetDefaultObj()
{
	static class UGameFeatureAction_DataRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_DataRegistry*>(UGameFeatureAction_DataRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeatureAction_DataRegistrySource
// (None)

class UClass* UGameFeatureAction_DataRegistrySource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_DataRegistrySource");

	return Clss;
}


// GameFeatureAction_DataRegistrySource GameFeatures.Default__GameFeatureAction_DataRegistrySource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_DataRegistrySource* UGameFeatureAction_DataRegistrySource::GetDefaultObj()
{
	static class UGameFeatureAction_DataRegistrySource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_DataRegistrySource*>(UGameFeatureAction_DataRegistrySource::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeatureData
// (None)

class UClass* UGameFeatureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureData");

	return Clss;
}


// GameFeatureData GameFeatures.Default__GameFeatureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureData* UGameFeatureData::GetDefaultObj()
{
	static class UGameFeatureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureData*>(UGameFeatureData::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeaturePluginStateMachine
// (None)

class UClass* UGameFeaturePluginStateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeaturePluginStateMachine");

	return Clss;
}


// GameFeaturePluginStateMachine GameFeatures.Default__GameFeaturePluginStateMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeaturePluginStateMachine* UGameFeaturePluginStateMachine::GetDefaultObj()
{
	static class UGameFeaturePluginStateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeaturePluginStateMachine*>(UGameFeaturePluginStateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeaturesProjectPolicies
// (None)

class UClass* UGameFeaturesProjectPolicies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeaturesProjectPolicies");

	return Clss;
}


// GameFeaturesProjectPolicies GameFeatures.Default__GameFeaturesProjectPolicies
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeaturesProjectPolicies* UGameFeaturesProjectPolicies::GetDefaultObj()
{
	static class UGameFeaturesProjectPolicies* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeaturesProjectPolicies*>(UGameFeaturesProjectPolicies::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.DefaultGameFeaturesProjectPolicies
// (None)

class UClass* UDefaultGameFeaturesProjectPolicies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultGameFeaturesProjectPolicies");

	return Clss;
}


// DefaultGameFeaturesProjectPolicies GameFeatures.Default__DefaultGameFeaturesProjectPolicies
// (Public, ClassDefaultObject, ArchetypeObject)

class UDefaultGameFeaturesProjectPolicies* UDefaultGameFeaturesProjectPolicies::GetDefaultObj()
{
	static class UDefaultGameFeaturesProjectPolicies* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultGameFeaturesProjectPolicies*>(UDefaultGameFeaturesProjectPolicies::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeaturesSubsystem
// (None)

class UClass* UGameFeaturesSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeaturesSubsystem");

	return Clss;
}


// GameFeaturesSubsystem GameFeatures.Default__GameFeaturesSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeaturesSubsystem* UGameFeaturesSubsystem::GetDefaultObj()
{
	static class UGameFeaturesSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeaturesSubsystem*>(UGameFeaturesSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GameFeatures.GameFeaturesSubsystemSettings
// (None)

class UClass* UGameFeaturesSubsystemSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeaturesSubsystemSettings");

	return Clss;
}


// GameFeaturesSubsystemSettings GameFeatures.Default__GameFeaturesSubsystemSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeaturesSubsystemSettings* UGameFeaturesSubsystemSettings::GetDefaultObj()
{
	static class UGameFeaturesSubsystemSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeaturesSubsystemSettings*>(UGameFeaturesSubsystemSettings::StaticClass()->DefaultObject);

	return Default;
}

}


