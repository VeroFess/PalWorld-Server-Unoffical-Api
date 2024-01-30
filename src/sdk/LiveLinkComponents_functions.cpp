#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkComponents.LiveLinkComponentSettings
// (None)

class UClass* ULiveLinkComponentSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkComponentSettings");

	return Clss;
}


// LiveLinkComponentSettings LiveLinkComponents.Default__LiveLinkComponentSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkComponentSettings* ULiveLinkComponentSettings::GetDefaultObj()
{
	static class ULiveLinkComponentSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkComponentSettings*>(ULiveLinkComponentSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkControllerBase
// (None)

class UClass* ULiveLinkControllerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkControllerBase");

	return Clss;
}


// LiveLinkControllerBase LiveLinkComponents.Default__LiveLinkControllerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkControllerBase* ULiveLinkControllerBase::GetDefaultObj()
{
	static class ULiveLinkControllerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkControllerBase*>(ULiveLinkControllerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkLightController
// (None)

class UClass* ULiveLinkLightController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkLightController");

	return Clss;
}


// LiveLinkLightController LiveLinkComponents.Default__LiveLinkLightController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkLightController* ULiveLinkLightController::GetDefaultObj()
{
	static class ULiveLinkLightController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkLightController*>(ULiveLinkLightController::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkTransformController
// (None)

class UClass* ULiveLinkTransformController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTransformController");

	return Clss;
}


// LiveLinkTransformController LiveLinkComponents.Default__LiveLinkTransformController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTransformController* ULiveLinkTransformController::GetDefaultObj()
{
	static class ULiveLinkTransformController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTransformController*>(ULiveLinkTransformController::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkComponents.LiveLinkComponentController
// (None)

class UClass* ULiveLinkComponentController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkComponentController");

	return Clss;
}


// LiveLinkComponentController LiveLinkComponents.Default__LiveLinkComponentController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkComponentController* ULiveLinkComponentController::GetDefaultObj()
{
	static class ULiveLinkComponentController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkComponentController*>(ULiveLinkComponentController::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentationInSubjectRepresentation                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULiveLinkComponentController::SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponentController", "SetSubjectRepresentation");

	Params::ULiveLinkComponentController_SetSubjectRepresentation_Params Parms{};

	Parms.InSubjectRepresentation = InSubjectRepresentation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLiveLinkSubjectRepresentationReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLiveLinkSubjectRepresentation ULiveLinkComponentController::GetSubjectRepresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponentController", "GetSubjectRepresentation");

	Params::ULiveLinkComponentController_GetSubjectRepresentation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


