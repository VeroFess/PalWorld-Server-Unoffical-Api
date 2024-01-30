#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_PalmiSubFunction.ALI_PalmiSubFunction_C
// (None)

class UClass* IALI_PalmiSubFunction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_PalmiSubFunction_C");

	return Clss;
}


// ALI_PalmiSubFunction_C ALI_PalmiSubFunction.Default__ALI_PalmiSubFunction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_PalmiSubFunction_C* IALI_PalmiSubFunction_C::GetDefaultObj()
{
	static class IALI_PalmiSubFunction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_PalmiSubFunction_C*>(IALI_PalmiSubFunction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_PalmiSubFunction.ALI_PalmiSubFunction_C.LeftHandAttach
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LeftHandAttach                                                   (Parm, OutParm, NoDestructor)

void IALI_PalmiSubFunction_C::LeftHandAttach(const struct FPoseLink& InPose, struct FPoseLink* LeftHandAttach)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_PalmiSubFunction_C", "LeftHandAttach");

	Params::IALI_PalmiSubFunction_C_LeftHandAttach_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (LeftHandAttach != nullptr)
		*LeftHandAttach = std::move(Parms.LeftHandAttach);

}

}


