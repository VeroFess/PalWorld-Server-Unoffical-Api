#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_HumanHair.ALI_HumanHair_C
// (None)

class UClass* IALI_HumanHair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_HumanHair_C");

	return Clss;
}


// ALI_HumanHair_C ALI_HumanHair.Default__ALI_HumanHair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_HumanHair_C* IALI_HumanHair_C::GetDefaultObj()
{
	static class IALI_HumanHair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_HumanHair_C*>(IALI_HumanHair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_HumanHair.ALI_HumanHair_C.HairLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   HairLayer                                                        (Parm, OutParm, NoDestructor)

void IALI_HumanHair_C::HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_HumanHair_C", "HairLayer");

	Params::IALI_HumanHair_C_HairLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (HairLayer != nullptr)
		*HairLayer = std::move(Parms.HairLayer);

}

}


