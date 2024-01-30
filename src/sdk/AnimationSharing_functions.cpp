#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimationSharing.AnimationSharingStateProcessor
// (None)

class UClass* UAnimationSharingStateProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationSharingStateProcessor");

	return Clss;
}


// AnimationSharingStateProcessor AnimationSharing.Default__AnimationSharingStateProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationSharingStateProcessor* UAnimationSharingStateProcessor::GetDefaultObj()
{
	static class UAnimationSharingStateProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationSharingStateProcessor*>(UAnimationSharingStateProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              OutState                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              CurrentState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              OnDemandState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldProcess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationSharingStateProcessor::ProcessActorState(int32* OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationSharingStateProcessor", "ProcessActorState");

	Params::UAnimationSharingStateProcessor_ProcessActorState_Params Parms{};

	Parms.InActor = InActor;
	Parms.CurrentState = CurrentState;
	Parms.OnDemandState = OnDemandState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutState != nullptr)
		*OutState = Parms.OutState;

	if (bShouldProcess != nullptr)
		*bShouldProcess = Parms.bShouldProcess;

}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UEnum*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationSharingStateProcessor", "GetAnimationStateEnum");

	Params::UAnimationSharingStateProcessor_GetAnimationStateEnum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimationSharing.AnimSharingStateInstance
// (None)

class UClass* UAnimSharingStateInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSharingStateInstance");

	return Clss;
}


// AnimSharingStateInstance AnimationSharing.Default__AnimSharingStateInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSharingStateInstance* UAnimSharingStateInstance::GetDefaultObj()
{
	static class UAnimSharingStateInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSharingStateInstance*>(UAnimSharingStateInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              Actors                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSharingStateInstance", "GetInstancedActors");

	Params::UAnimSharingStateInstance_GetInstancedActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actors != nullptr)
		*Actors = std::move(Parms.Actors);

}


// Class AnimationSharing.AnimSharingTransitionInstance
// (None)

class UClass* UAnimSharingTransitionInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSharingTransitionInstance");

	return Clss;
}


// AnimSharingTransitionInstance AnimationSharing.Default__AnimSharingTransitionInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSharingTransitionInstance* UAnimSharingTransitionInstance::GetDefaultObj()
{
	static class UAnimSharingTransitionInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSharingTransitionInstance*>(UAnimSharingTransitionInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimationSharing.AnimSharingAdditiveInstance
// (None)

class UClass* UAnimSharingAdditiveInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSharingAdditiveInstance");

	return Clss;
}


// AnimSharingAdditiveInstance AnimationSharing.Default__AnimSharingAdditiveInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSharingAdditiveInstance* UAnimSharingAdditiveInstance::GetDefaultObj()
{
	static class UAnimSharingAdditiveInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSharingAdditiveInstance*>(UAnimSharingAdditiveInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimationSharing.AnimSharingInstance
// (None)

class UClass* UAnimSharingInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSharingInstance");

	return Clss;
}


// AnimSharingInstance AnimationSharing.Default__AnimSharingInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSharingInstance* UAnimSharingInstance::GetDefaultObj()
{
	static class UAnimSharingInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSharingInstance*>(UAnimSharingInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimationSharing.AnimationSharingManager
// (None)

class UClass* UAnimationSharingManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationSharingManager");

	return Clss;
}


// AnimationSharingManager AnimationSharing.Default__AnimationSharingManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationSharingManager* UAnimationSharingManager::GetDefaultObj()
{
	static class UAnimationSharingManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationSharingManager*>(UAnimationSharingManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeleton*                   SharingSkeleton                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationSharingManager", "RegisterActorWithSkeletonBP");

	Params::UAnimationSharingManager_RegisterActorWithSkeletonBP_Params Parms{};

	Parms.InActor = InActor;
	Parms.SharingSkeleton = SharingSkeleton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingManager*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationSharingManager", "GetAnimationSharingManager");

	Params::UAnimationSharingManager_GetAnimationSharingManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingSetup*      Setup                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnimationSharingManager::CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationSharingManager", "CreateAnimationSharingManager");

	Params::UAnimationSharingManager_CreateAnimationSharingManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Setup = Setup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnimationSharingManager::AnimationSharingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationSharingManager", "AnimationSharingEnabled");

	Params::UAnimationSharingManager_AnimationSharingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimationSharing.AnimationSharingSetup
// (None)

class UClass* UAnimationSharingSetup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationSharingSetup");

	return Clss;
}


// AnimationSharingSetup AnimationSharing.Default__AnimationSharingSetup
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationSharingSetup* UAnimationSharingSetup::GetDefaultObj()
{
	static class UAnimationSharingSetup* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationSharingSetup*>(UAnimationSharingSetup::StaticClass()->DefaultObject);

	return Default;
}

}


