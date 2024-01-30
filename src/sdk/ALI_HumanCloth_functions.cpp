#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_HumanCloth.ALI_HumanCloth_C
// (None)

class UClass* IALI_HumanCloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_HumanCloth_C");

	return Clss;
}


// ALI_HumanCloth_C ALI_HumanCloth.Default__ALI_HumanCloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_HumanCloth_C* IALI_HumanCloth_C::GetDefaultObj()
{
	static class IALI_HumanCloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_HumanCloth_C*>(IALI_HumanCloth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_HumanCloth.ALI_HumanCloth_C.ClothLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ClothLayer                                                       (Parm, OutParm, NoDestructor)

void IALI_HumanCloth_C::ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_HumanCloth_C", "ClothLayer");

	Params::IALI_HumanCloth_C_ClothLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ClothLayer != nullptr)
		*ClothLayer = std::move(Parms.ClothLayer);

}

}


