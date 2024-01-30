#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_NPC_HairCloth.ALI_NPC_HairCloth_C
// (None)

class UClass* IALI_NPC_HairCloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_NPC_HairCloth_C");

	return Clss;
}


// ALI_NPC_HairCloth_C ALI_NPC_HairCloth.Default__ALI_NPC_HairCloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_NPC_HairCloth_C* IALI_NPC_HairCloth_C::GetDefaultObj()
{
	static class IALI_NPC_HairCloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_NPC_HairCloth_C*>(IALI_NPC_HairCloth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_NPC_HairCloth.ALI_NPC_HairCloth_C.NPC_HairClothLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   NPC_HairClothLayer                                               (Parm, OutParm, NoDestructor)

void IALI_NPC_HairCloth_C::NPC_HairClothLayer(const struct FPoseLink& InPose, struct FPoseLink* NPC_HairClothLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_NPC_HairCloth_C", "NPC_HairClothLayer");

	Params::IALI_NPC_HairCloth_C_NPC_HairClothLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (NPC_HairClothLayer != nullptr)
		*NPC_HairClothLayer = std::move(Parms.NPC_HairClothLayer);

}

}


