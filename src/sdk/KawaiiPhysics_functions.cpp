#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
// (None)

class UClass* UKawaiiPhysicsLimitsDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KawaiiPhysicsLimitsDataAsset");

	return Clss;
}


// KawaiiPhysicsLimitsDataAsset KawaiiPhysics.Default__KawaiiPhysicsLimitsDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UKawaiiPhysicsLimitsDataAsset* UKawaiiPhysicsLimitsDataAsset::GetDefaultObj()
{
	static class UKawaiiPhysicsLimitsDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UKawaiiPhysicsLimitsDataAsset*>(UKawaiiPhysicsLimitsDataAsset::StaticClass()->DefaultObject);

	return Default;
}

}


