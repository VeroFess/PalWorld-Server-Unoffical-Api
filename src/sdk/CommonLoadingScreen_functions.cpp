#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonLoadingScreen.CommonLoadingScreenSettings
// (None)

class UClass* UCommonLoadingScreenSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonLoadingScreenSettings");

	return Clss;
}


// CommonLoadingScreenSettings CommonLoadingScreen.Default__CommonLoadingScreenSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonLoadingScreenSettings* UCommonLoadingScreenSettings::GetDefaultObj()
{
	static class UCommonLoadingScreenSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonLoadingScreenSettings*>(UCommonLoadingScreenSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonLoadingScreen.LoadingProcessInterface
// (None)

class UClass* ILoadingProcessInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingProcessInterface");

	return Clss;
}


// LoadingProcessInterface CommonLoadingScreen.Default__LoadingProcessInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ILoadingProcessInterface* ILoadingProcessInterface::GetDefaultObj()
{
	static class ILoadingProcessInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ILoadingProcessInterface*>(ILoadingProcessInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonLoadingScreen.LoadingProcessTask
// (None)

class UClass* ULoadingProcessTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingProcessTask");

	return Clss;
}


// LoadingProcessTask CommonLoadingScreen.Default__LoadingProcessTask
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingProcessTask* ULoadingProcessTask::GetDefaultObj()
{
	static class ULoadingProcessTask* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingProcessTask*>(ULoadingProcessTask::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonLoadingScreen.LoadingProcessTask.Unregister
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULoadingProcessTask::Unregister()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingProcessTask", "Unregister");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonLoadingScreen.LoadingProcessTask.SetShowLoadingScreenReason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InReason                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadingProcessTask::SetShowLoadingScreenReason(const class FString& InReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingProcessTask", "SetShowLoadingScreenReason");

	Params::ULoadingProcessTask_SetShowLoadingScreenReason_Params Parms{};

	Parms.InReason = InReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonLoadingScreen.LoadingProcessTask.CreateLoadingScreenProcessTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ShowLoadingScreenReason                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoadingProcessTask*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoadingProcessTask* ULoadingProcessTask::CreateLoadingScreenProcessTask(class UObject* WorldContextObject, const class FString& ShowLoadingScreenReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingProcessTask", "CreateLoadingScreenProcessTask");

	Params::ULoadingProcessTask_CreateLoadingScreenProcessTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ShowLoadingScreenReason = ShowLoadingScreenReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonLoadingScreen.LoadingScreenManager
// (None)

class UClass* ULoadingScreenManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenManager");

	return Clss;
}


// LoadingScreenManager CommonLoadingScreen.Default__LoadingScreenManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingScreenManager* ULoadingScreenManager::GetDefaultObj()
{
	static class ULoadingScreenManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreenManager*>(ULoadingScreenManager::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonLoadingScreen.LoadingScreenManager.GetDebugReasonForShowingOrHidingLoadingScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULoadingScreenManager::GetDebugReasonForShowingOrHidingLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "GetDebugReasonForShowingOrHidingLoadingScreen");

	Params::ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


