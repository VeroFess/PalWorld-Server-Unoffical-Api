#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NetCore.NetAnalyticsAggregatorConfig
// (None)

class UClass* UNetAnalyticsAggregatorConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetAnalyticsAggregatorConfig");

	return Clss;
}


// NetAnalyticsAggregatorConfig NetCore.Default__NetAnalyticsAggregatorConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetAnalyticsAggregatorConfig* UNetAnalyticsAggregatorConfig::GetDefaultObj()
{
	static class UNetAnalyticsAggregatorConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetAnalyticsAggregatorConfig*>(UNetAnalyticsAggregatorConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class NetCore.StatePerObjectConfig
// (None)

class UClass* UStatePerObjectConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatePerObjectConfig");

	return Clss;
}


// StatePerObjectConfig NetCore.Default__StatePerObjectConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UStatePerObjectConfig* UStatePerObjectConfig::GetDefaultObj()
{
	static class UStatePerObjectConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatePerObjectConfig*>(UStatePerObjectConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class NetCore.EscalationManagerConfig
// (None)

class UClass* UEscalationManagerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EscalationManagerConfig");

	return Clss;
}


// EscalationManagerConfig NetCore.Default__EscalationManagerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UEscalationManagerConfig* UEscalationManagerConfig::GetDefaultObj()
{
	static class UEscalationManagerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UEscalationManagerConfig*>(UEscalationManagerConfig::StaticClass()->DefaultObject);

	return Default;
}

}


