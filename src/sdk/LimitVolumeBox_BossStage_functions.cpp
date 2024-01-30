#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LimitVolumeBox_BossStage.LimitVolumeBox_BossStage_C
// (Actor)

class UClass* ALimitVolumeBox_BossStage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimitVolumeBox_BossStage_C");

	return Clss;
}


// LimitVolumeBox_BossStage_C LimitVolumeBox_BossStage.Default__LimitVolumeBox_BossStage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALimitVolumeBox_BossStage_C* ALimitVolumeBox_BossStage_C::GetDefaultObj()
{
	static class ALimitVolumeBox_BossStage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALimitVolumeBox_BossStage_C*>(ALimitVolumeBox_BossStage_C::StaticClass()->DefaultObject);

	return Default;
}

}


