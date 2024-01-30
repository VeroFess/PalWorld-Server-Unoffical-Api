#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FacialAnimation.AudioCurveSourceComponent
// (SceneComponent)

class UClass* UAudioCurveSourceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCurveSourceComponent");

	return Clss;
}


// AudioCurveSourceComponent FacialAnimation.Default__AudioCurveSourceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCurveSourceComponent* UAudioCurveSourceComponent::GetDefaultObj()
{
	static class UAudioCurveSourceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCurveSourceComponent*>(UAudioCurveSourceComponent::StaticClass()->DefaultObject);

	return Default;
}

}


