#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EyeTracker.EyeTrackerFunctionLibrary
// (None)

class UClass* UEyeTrackerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EyeTrackerFunctionLibrary");

	return Clss;
}


// EyeTrackerFunctionLibrary EyeTracker.Default__EyeTrackerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEyeTrackerFunctionLibrary* UEyeTrackerFunctionLibrary::GetDefaultObj()
{
	static class UEyeTrackerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEyeTrackerFunctionLibrary*>(UEyeTrackerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "SetEyeTrackedPlayer");

	Params::UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "IsStereoGazeDataAvailable");

	Params::UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "IsEyeTrackerConnected");

	Params::UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEyeTrackerStereoGazeData   OutGazeData                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetStereoGazeData");

	Params::UEyeTrackerFunctionLibrary_GetStereoGazeData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGazeData != nullptr)
		*OutGazeData = std::move(Parms.OutGazeData);

	return Parms.ReturnValue;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEyeTrackerGazeData         OutGazeData                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetGazeData");

	Params::UEyeTrackerFunctionLibrary_GetGazeData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGazeData != nullptr)
		*OutGazeData = std::move(Parms.OutGazeData);

	return Parms.ReturnValue;

}

}


