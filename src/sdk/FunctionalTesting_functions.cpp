#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FunctionalTesting.AutomationViewSettings
// (None)

class UClass* UAutomationViewSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationViewSettings");

	return Clss;
}


// AutomationViewSettings FunctionalTesting.Default__AutomationViewSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationViewSettings* UAutomationViewSettings::GetDefaultObj()
{
	static class UAutomationViewSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationViewSettings*>(UAutomationViewSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.AutomationEditorTask
// (None)

class UClass* UAutomationEditorTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationEditorTask");

	return Clss;
}


// AutomationEditorTask FunctionalTesting.Default__AutomationEditorTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationEditorTask* UAutomationEditorTask::GetDefaultObj()
{
	static class UAutomationEditorTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationEditorTask*>(UAutomationEditorTask::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.AutomationEditorTask.IsValidTask
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationEditorTask::IsValidTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationEditorTask", "IsValidTask");

	Params::UAutomationEditorTask_IsValidTask_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationEditorTask.IsTaskDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationEditorTask::IsTaskDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationEditorTask", "IsTaskDone");

	Params::UAutomationEditorTask_IsTaskDone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FunctionalTesting.AutomationBlueprintFunctionLibrary
// (None)

class UClass* UAutomationBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationBlueprintFunctionLibrary");

	return Clss;
}


// AutomationBlueprintFunctionLibrary FunctionalTesting.Default__AutomationBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationBlueprintFunctionLibrary* UAutomationBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UAutomationBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationBlueprintFunctionLibrary*>(UAutomationBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeHighResScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ResX                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ResY                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACameraActor*                Camera                                                           (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaskEnabled                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCaptureHDR                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComparisonTolerance    ComparisonTolerance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ComparisonNotes                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutomationEditorTask*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutomationEditorTask* UAutomationBlueprintFunctionLibrary::TakeHighResScreenshot(int32 ResX, int32 ResY, const class FString& Filename, class ACameraActor* Camera, bool bMaskEnabled, bool bCaptureHDR, enum class EComparisonTolerance ComparisonTolerance, const class FString& ComparisonNotes, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "TakeHighResScreenshot");

	Params::UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Params Parms{};

	Parms.ResX = ResX;
	Parms.ResY = ResY;
	Parms.Filename = Filename;
	Parms.Camera = Camera;
	Parms.bMaskEnabled = bMaskEnabled;
	Parms.bCaptureHDR = bCaptureHDR;
	Parms.ComparisonTolerance = ComparisonTolerance;
	Parms.ComparisonNotes = ComparisonNotes;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotOfUI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptionsOptions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotOfUI(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name, struct FAutomationScreenshotOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "TakeAutomationScreenshotOfUI");

	Params::UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Name = Name;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ACameraActor*                Camera                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NameOverride                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Notes                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptionsOptions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, const class FString& Notes, struct FAutomationScreenshotOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "TakeAutomationScreenshotAtCamera");

	Params::UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Camera = Camera;
	Parms.NameOverride = NameOverride;
	Parms.Notes = Notes;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Notes                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptionsOptions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name, const class FString& Notes, struct FAutomationScreenshotOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "TakeAutomationScreenshot");

	Params::UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Name = Name;
	Parms.Notes = Notes;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetTestTelemetryStorage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      StorageName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::SetTestTelemetryStorage(const class FString& StorageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "SetTestTelemetryStorage");

	Params::UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Params Parms{};

	Parms.StorageName = StorageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToLow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToLow(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "SetScalabilityQualityToLow");

	Params::UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToEpic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToEpic(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "SetScalabilityQualityToEpic");

	Params::UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityLevelRelativeToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::SetScalabilityQualityLevelRelativeToMax(class UObject* WorldContextObject, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "SetScalabilityQualityLevelRelativeToMax");

	Params::UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetEditorViewportVisualizeBuffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        BufferName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::SetEditorViewportVisualizeBuffer(class FName BufferName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "SetEditorViewportVisualizeBuffer");

	Params::UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Params Parms{};

	Parms.BufferName = BufferName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetEditorViewportViewMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EViewModeIndex          Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::SetEditorViewportViewMode(enum class EViewModeIndex Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "SetEditorViewportViewMode");

	Params::UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        StatName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutomationBlueprintFunctionLibrary::GetStatIncMax(class FName StatName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "GetStatIncMax");

	Params::UAutomationBlueprintFunctionLibrary_GetStatIncMax_Params Parms{};

	Parms.StatName = StatName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncAverage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        StatName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutomationBlueprintFunctionLibrary::GetStatIncAverage(class FName StatName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "GetStatIncAverage");

	Params::UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Params Parms{};

	Parms.StatName = StatName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        StatName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutomationBlueprintFunctionLibrary::GetStatExcMax(class FName StatName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "GetStatExcMax");

	Params::UAutomationBlueprintFunctionLibrary_GetStatExcMax_Params Parms{};

	Parms.StatName = StatName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcAverage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        StatName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutomationBlueprintFunctionLibrary::GetStatExcAverage(class FName StatName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "GetStatExcAverage");

	Params::UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Params Parms{};

	Parms.StatName = StatName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatCallCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        StatName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutomationBlueprintFunctionLibrary::GetStatCallCount(class FName StatName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "GetStatCallCount");

	Params::UAutomationBlueprintFunctionLibrary_GetStatCallCount_Params Parms{};

	Parms.StatName = StatName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForRendering
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EComparisonTolerance    Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAutomationScreenshotOptions UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForRendering(enum class EComparisonTolerance Tolerance, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "GetDefaultScreenshotOptionsForRendering");

	Params::UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Params Parms{};

	Parms.Tolerance = Tolerance;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForGameplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EComparisonTolerance    Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptionsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAutomationScreenshotOptions UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForGameplay(enum class EComparisonTolerance Tolerance, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "GetDefaultScreenshotOptionsForGameplay");

	Params::UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Params Parms{};

	Parms.Tolerance = Tolerance;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.FinishLoadingBeforeScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "FinishLoadingBeforeScreenshot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.EnableStatGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        GroupName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::EnableStatGroup(class UObject* WorldContextObject, class FName GroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "EnableStatGroup");

	Params::UAutomationBlueprintFunctionLibrary_EnableStatGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupName = GroupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.DisableStatGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        GroupName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::DisableStatGroup(class UObject* WorldContextObject, class FName GroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "DisableStatGroup");

	Params::UAutomationBlueprintFunctionLibrary_DisableStatGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupName = GroupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.CompareImageAgainstReference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ImageFilePath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ComparisonName                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComparisonTolerance    ComparisonTolerance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ComparisonNotes                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationBlueprintFunctionLibrary::CompareImageAgainstReference(const class FString& ImageFilePath, const class FString& ComparisonName, enum class EComparisonTolerance ComparisonTolerance, const class FString& ComparisonNotes, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "CompareImageAgainstReference");

	Params::UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Params Parms{};

	Parms.ImageFilePath = ImageFilePath;
	Parms.ComparisonName = ComparisonName;
	Parms.ComparisonTolerance = ComparisonTolerance;
	Parms.ComparisonNotes = ComparisonNotes;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AutomationWaitForLoading
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAutomationWaitForLoadingOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::AutomationWaitForLoading(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FAutomationWaitForLoadingOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "AutomationWaitForLoading");

	Params::UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AreAutomatedTestsRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationBlueprintFunctionLibrary::AreAutomatedTestsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "AreAutomatedTestsRunning");

	Params::UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AddTestTelemetryData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DataPoint                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Measurement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Context                                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::AddTestTelemetryData(const class FString& DataPoint, float Measurement, const class FString& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "AddTestTelemetryData");

	Params::UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Params Parms{};

	Parms.DataPoint = DataPoint;
	Parms.Measurement = Measurement;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AddExpectedLogError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ExpectedPatternString                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Occurrences                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ExactMatch                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationBlueprintFunctionLibrary::AddExpectedLogError(const class FString& ExpectedPatternString, int32 Occurrences, bool ExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationBlueprintFunctionLibrary", "AddExpectedLogError");

	Params::UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Params Parms{};

	Parms.ExpectedPatternString = ExpectedPatternString;
	Parms.Occurrences = Occurrences;
	Parms.ExactMatch = ExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FunctionalTesting.FuncTestRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UFuncTestRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FuncTestRenderingComponent");

	return Clss;
}


// FuncTestRenderingComponent FunctionalTesting.Default__FuncTestRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFuncTestRenderingComponent* UFuncTestRenderingComponent::GetDefaultObj()
{
	static class UFuncTestRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFuncTestRenderingComponent*>(UFuncTestRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.FunctionalTest
// (Actor)

class UClass* AFunctionalTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalTest");

	return Clss;
}


// FunctionalTest FunctionalTesting.Default__FunctionalTest
// (Public, ClassDefaultObject, ArchetypeObject)

class AFunctionalTest* AFunctionalTest::GetDefaultObj()
{
	static class AFunctionalTest* Default = nullptr;

	if (!Default)
		Default = static_cast<AFunctionalTest*>(AFunctionalTest::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.FunctionalTest.SetTimeLimit
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              NewTimeLimit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFunctionalTestResult   ResultWhenTimeRunsOut                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFunctionalTest::SetTimeLimit(float NewTimeLimit, enum class EFunctionalTestResult ResultWhenTimeRunsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "SetTimeLimit");

	Params::AFunctionalTest_SetTimeLimit_Params Parms{};

	Parms.NewTimeLimit = NewTimeLimit;
	Parms.ResultWhenTimeRunsOut = ResultWhenTimeRunsOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.FunctionalTest.RegisterAutoDestroyActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ActorToAutoDestroy                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFunctionalTest::RegisterAutoDestroyActor(class AActor* ActorToAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "RegisterAutoDestroyActor");

	Params::AFunctionalTest_RegisterAutoDestroyActor_Params Parms{};

	Parms.ActorToAutoDestroy = ActorToAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.FunctionalTest.ReceiveStartTest
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFunctionalTest::ReceiveStartTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "ReceiveStartTest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FunctionalTesting.FunctionalTest.ReceivePrepareTest
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFunctionalTest::ReceivePrepareTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "ReceivePrepareTest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FunctionalTesting.FunctionalTest.OnWantsReRunCheck
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::OnWantsReRunCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "OnWantsReRunCheck");

	Params::AFunctionalTest_OnWantsReRunCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.OnAdditionalTestFinishedMessageRequest
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EFunctionalTestResult   TestResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString AFunctionalTest::OnAdditionalTestFinishedMessageRequest(enum class EFunctionalTestResult TestResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "OnAdditionalTestFinishedMessageRequest");

	Params::AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Params Parms{};

	Parms.TestResult = TestResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.LogMessage
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFunctionalTest::LogMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "LogMessage");

	Params::AFunctionalTest_LogMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.FunctionalTest.IsRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "IsRunning");

	Params::AFunctionalTest_IsRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.IsReady
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "IsReady");

	Params::AFunctionalTest_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "IsEnabled");

	Params::AFunctionalTest_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.GetCurrentRerunReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName AFunctionalTest::GetCurrentRerunReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "GetCurrentRerunReason");

	Params::AFunctionalTest_GetCurrentRerunReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.FinishTest
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EFunctionalTestResult   TestResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFunctionalTest::FinishTest(enum class EFunctionalTestResult TestResult, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "FinishTest");

	Params::AFunctionalTest_FinishTest_Params Parms{};

	Parms.TestResult = TestResult;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.FunctionalTest.DebugGatherRelevantActors
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> AFunctionalTest::DebugGatherRelevantActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "DebugGatherRelevantActors");

	Params::AFunctionalTest_DebugGatherRelevantActors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertValue_Int
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComparisonMethod       ShouldBe                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertValue_Int(int32 Actual, enum class EComparisonMethod ShouldBe, int32 Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertValue_Int");

	Params::AFunctionalTest_AssertValue_Int_Params Parms{};

	Parms.Actual = Actual;
	Parms.ShouldBe = ShouldBe;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertValue_Float
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComparisonMethod       ShouldBe                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertValue_Float(float Actual, enum class EComparisonMethod ShouldBe, float Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertValue_Float");

	Params::AFunctionalTest_AssertValue_Float_Params Parms{};

	Parms.Actual = Actual;
	Parms.ShouldBe = ShouldBe;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertValue_Double
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComparisonMethod       ShouldBe                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertValue_Double(double Actual, enum class EComparisonMethod ShouldBe, double Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertValue_Double");

	Params::AFunctionalTest_AssertValue_Double_Params Parms{};

	Parms.Actual = Actual;
	Parms.ShouldBe = ShouldBe;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertValue_DateTime
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   Actual                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComparisonMethod       ShouldBe                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   Expected                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertValue_DateTime(const struct FDateTime& Actual, enum class EComparisonMethod ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertValue_DateTime");

	Params::AFunctionalTest_AssertValue_DateTime_Params Parms{};

	Parms.Actual = Actual;
	Parms.ShouldBe = ShouldBe;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertTrue
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertTrue");

	Params::AFunctionalTest_AssertTrue_Params Parms{};

	Parms.Condition = Condition;
	Parms.Message = Message;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector4
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                    Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    NotExpected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Vector4(const struct FVector4& Actual, const struct FVector4& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Vector4");

	Params::AFunctionalTest_AssertNotEqual_Vector4_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector2D
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NotExpected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Vector2D");

	Params::AFunctionalTest_AssertNotEqual_Vector2D_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NotExpected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Vector");

	Params::AFunctionalTest_AssertNotEqual_Vector_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Transform
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Actual                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  NotExpected                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Transform(struct FTransform& Actual, struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Transform");

	Params::AFunctionalTest_AssertNotEqual_Transform_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_String
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Actual                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NotExpected                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_String");

	Params::AFunctionalTest_AssertNotEqual_String_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Rotator
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    NotExpected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Rotator");

	Params::AFunctionalTest_AssertNotEqual_Rotator_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Quat
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       Actual                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       NotExpected                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Quat(const struct FQuat& Actual, const struct FQuat& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Quat");

	Params::AFunctionalTest_AssertNotEqual_Quat_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Plane
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPlane                      Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlane                      NotExpected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Plane(const struct FPlane& Actual, const struct FPlane& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Plane");

	Params::AFunctionalTest_AssertNotEqual_Plane_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Matrix
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMatrix                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FMatrix                     NotExpected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Matrix(const struct FMatrix& Actual, const struct FMatrix& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Matrix");

	Params::AFunctionalTest_AssertNotEqual_Matrix_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Box2D
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox2D                      Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox2D                      NotExpected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertNotEqual_Box2D(const struct FBox2D& Actual, const struct FBox2D& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertNotEqual_Box2D");

	Params::AFunctionalTest_AssertNotEqual_Box2D_Params Parms{};

	Parms.Actual = Actual;
	Parms.NotExpected = NotExpected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertIsValid
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertIsValid");

	Params::AFunctionalTest_AssertIsValid_Params Parms{};

	Parms.Object = Object;
	Parms.Message = Message;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertFalse
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertFalse");

	Params::AFunctionalTest_AssertFalse_Params Parms{};

	Parms.Condition = Condition;
	Parms.Message = Message;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Vector4
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                    Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Vector4(const struct FVector4& Actual, const struct FVector4& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Vector4");

	Params::AFunctionalTest_AssertEqual_Vector4_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Vector2D
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Vector2D");

	Params::AFunctionalTest_AssertEqual_Vector2D_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Vector
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Vector");

	Params::AFunctionalTest_AssertEqual_Vector_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Transform
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Actual                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Expected                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Transform(struct FTransform& Actual, struct FTransform& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Transform");

	Params::AFunctionalTest_AssertEqual_Transform_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_TraceQueryResults
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTraceQueryTestResults*      Actual                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTraceQueryTestResults*      Expected                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_TraceQueryResults(class UTraceQueryTestResults* Actual, class UTraceQueryTestResults* Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_TraceQueryResults");

	Params::AFunctionalTest_AssertEqual_TraceQueryResults_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_String
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Actual                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Expected                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_String");

	Params::AFunctionalTest_AssertEqual_String_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Rotator
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Rotator");

	Params::AFunctionalTest_AssertEqual_Rotator_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Quat
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       Actual                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Expected                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Quat");

	Params::AFunctionalTest_AssertEqual_Quat_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Plane
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPlane                      Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlane                      Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Plane(const struct FPlane& Actual, const struct FPlane& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Plane");

	Params::AFunctionalTest_AssertEqual_Plane_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Object
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Actual                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Expected                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Object");

	Params::AFunctionalTest_AssertEqual_Object_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Name
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Name(class FName Actual, class FName Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Name");

	Params::AFunctionalTest_AssertEqual_Name_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Matrix
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMatrix                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FMatrix                     Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Matrix(const struct FMatrix& Actual, const struct FMatrix& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Matrix");

	Params::AFunctionalTest_AssertEqual_Matrix_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Int
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Int(int32 Actual, int32 Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Int");

	Params::AFunctionalTest_AssertEqual_Int_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Float
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Float");

	Params::AFunctionalTest_AssertEqual_Float_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Double
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Double(double Actual, double Expected, const class FString& What, double Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Double");

	Params::AFunctionalTest_AssertEqual_Double_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Box2D
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox2D                      Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox2D                      Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Box2D(const struct FBox2D& Actual, const struct FBox2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Box2D");

	Params::AFunctionalTest_AssertEqual_Box2D_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.Tolerance = Tolerance;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Bool
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      What                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalTest::AssertEqual_Bool(bool Actual, bool Expected, const class FString& What, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AssertEqual_Bool");

	Params::AFunctionalTest_AssertEqual_Bool_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.What = What;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.FunctionalTest.AddWarning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFunctionalTest::AddWarning(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AddWarning");

	Params::AFunctionalTest_AddWarning_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.FunctionalTest.AddRerun
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFunctionalTest::AddRerun(class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AddRerun");

	Params::AFunctionalTest_AddRerun_Params Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.FunctionalTest.AddError
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFunctionalTest::AddError(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTest", "AddError");

	Params::AFunctionalTest_AddError_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FunctionalTesting.FunctionalAITestBase
// (Actor)

class UClass* AFunctionalAITestBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalAITestBase");

	return Clss;
}


// FunctionalAITestBase FunctionalTesting.Default__FunctionalAITestBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AFunctionalAITestBase* AFunctionalAITestBase::GetDefaultObj()
{
	static class AFunctionalAITestBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AFunctionalAITestBase*>(AFunctionalAITestBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.FunctionalAITestBase.IsOneOfSpawnedPawns
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFunctionalAITestBase::IsOneOfSpawnedPawns(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalAITestBase", "IsOneOfSpawnedPawns");

	Params::AFunctionalAITestBase_IsOneOfSpawnedPawns_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FunctionalTesting.FunctionalAITest
// (Actor)

class UClass* AFunctionalAITest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalAITest");

	return Clss;
}


// FunctionalAITest FunctionalTesting.Default__FunctionalAITest
// (Public, ClassDefaultObject, ArchetypeObject)

class AFunctionalAITest* AFunctionalAITest::GetDefaultObj()
{
	static class AFunctionalAITest* Default = nullptr;

	if (!Default)
		Default = static_cast<AFunctionalAITest*>(AFunctionalAITest::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.AutomationPerformaceHelper
// (None)

class UClass* UAutomationPerformaceHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomationPerformaceHelper");

	return Clss;
}


// AutomationPerformaceHelper FunctionalTesting.Default__AutomationPerformaceHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomationPerformaceHelper* UAutomationPerformaceHelper::GetDefaultObj()
{
	static class UAutomationPerformaceHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomationPerformaceHelper*>(UAutomationPerformaceHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.AutomationPerformaceHelper.WriteLogFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CaptureDir                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CaptureExtension                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationPerformaceHelper::WriteLogFile(const class FString& CaptureDir, const class FString& CaptureExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "WriteLogFile");

	Params::UAutomationPerformaceHelper_WriteLogFile_Params Parms{};

	Parms.CaptureDir = CaptureDir;
	Parms.CaptureExtension = CaptureExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.TriggerGPUTraceIfRecordFallsBelowBudget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::TriggerGPUTraceIfRecordFallsBelowBudget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "TriggerGPUTraceIfRecordFallsBelowBudget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationPerformaceHelper::Tick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "Tick");

	Params::UAutomationPerformaceHelper_Tick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.StopCPUProfiling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::StopCPUProfiling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "StopCPUProfiling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.StartCPUProfiling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::StartCPUProfiling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "StartCPUProfiling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.Sample
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationPerformaceHelper::Sample(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "Sample");

	Params::UAutomationPerformaceHelper_Sample_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.OnBeginTests
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::OnBeginTests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "OnBeginTests");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.OnAllTestsComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::OnAllTestsComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "OnAllTestsComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationPerformaceHelper::IsRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "IsRecording");

	Params::UAutomationPerformaceHelper_IsRecording_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinRenderThreadBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationPerformaceHelper::IsCurrentRecordWithinRenderThreadBudget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "IsCurrentRecordWithinRenderThreadBudget");

	Params::UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGPUBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationPerformaceHelper::IsCurrentRecordWithinGPUBudget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "IsCurrentRecordWithinGPUBudget");

	Params::UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGameThreadBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutomationPerformaceHelper::IsCurrentRecordWithinGameThreadBudget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "IsCurrentRecordWithinGameThreadBudget");

	Params::UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.AutomationPerformaceHelper.EndStatsFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::EndStatsFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "EndStatsFile");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.EndRecordingBaseline
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::EndRecordingBaseline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "EndRecordingBaseline");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.EndRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutomationPerformaceHelper::EndRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "EndRecording");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.BeginStatsFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RecordName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationPerformaceHelper::BeginStatsFile(const class FString& RecordName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "BeginStatsFile");

	Params::UAutomationPerformaceHelper_BeginStatsFile_Params Parms{};

	Parms.RecordName = RecordName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.BeginRecordingBaseline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RecordName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationPerformaceHelper::BeginRecordingBaseline(const class FString& RecordName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "BeginRecordingBaseline");

	Params::UAutomationPerformaceHelper_BeginRecordingBaseline_Params Parms{};

	Parms.RecordName = RecordName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.AutomationPerformaceHelper.BeginRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RecordName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InGPUBudget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRenderThreadBudget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InGameThreadBudget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationPerformaceHelper::BeginRecording(const class FString& RecordName, float InGPUBudget, float InRenderThreadBudget, float InGameThreadBudget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutomationPerformaceHelper", "BeginRecording");

	Params::UAutomationPerformaceHelper_BeginRecording_Params Parms{};

	Parms.RecordName = RecordName;
	Parms.InGPUBudget = InGPUBudget;
	Parms.InRenderThreadBudget = InRenderThreadBudget;
	Parms.InGameThreadBudget = InGameThreadBudget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FunctionalTesting.FunctionalTestGameMode
// (Actor)

class UClass* AFunctionalTestGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalTestGameMode");

	return Clss;
}


// FunctionalTestGameMode FunctionalTesting.Default__FunctionalTestGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AFunctionalTestGameMode* AFunctionalTestGameMode::GetDefaultObj()
{
	static class AFunctionalTestGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AFunctionalTestGameMode*>(AFunctionalTestGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.FunctionalTestingManager
// (None)

class UClass* UFunctionalTestingManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalTestingManager");

	return Clss;
}


// FunctionalTestingManager FunctionalTesting.Default__FunctionalTestingManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFunctionalTestingManager* UFunctionalTestingManager::GetDefaultObj()
{
	static class UFunctionalTestingManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFunctionalTestingManager*>(UFunctionalTestingManager::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.FunctionalTestingManager.RunAllFunctionalTests
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewLog                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRunLooped                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FailedTestsReproString                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFunctionalTestingManager::RunAllFunctionalTests(class UObject* WorldContextObject, bool bNewLog, bool bRunLooped, const class FString& FailedTestsReproString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTestingManager", "RunAllFunctionalTests");

	Params::UFunctionalTestingManager_RunAllFunctionalTests_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bNewLog = bNewLog;
	Parms.bRunLooped = bRunLooped;
	Parms.FailedTestsReproString = FailedTestsReproString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FunctionalTesting.PhasedAutomationActorBase
// (Actor)

class UClass* APhasedAutomationActorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhasedAutomationActorBase");

	return Clss;
}


// PhasedAutomationActorBase FunctionalTesting.Default__PhasedAutomationActorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class APhasedAutomationActorBase* APhasedAutomationActorBase::GetDefaultObj()
{
	static class APhasedAutomationActorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<APhasedAutomationActorBase*>(APhasedAutomationActorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingComplete
// (Event, Public, BlueprintEvent)
// Parameters:

void APhasedAutomationActorBase::OnFunctionalTestingComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhasedAutomationActorBase", "OnFunctionalTestingComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingBegin
// (Event, Public, BlueprintEvent)
// Parameters:

void APhasedAutomationActorBase::OnFunctionalTestingBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhasedAutomationActorBase", "OnFunctionalTestingBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Class FunctionalTesting.FunctionalTestLevelScript
// (Actor)

class UClass* AFunctionalTestLevelScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalTestLevelScript");

	return Clss;
}


// FunctionalTestLevelScript FunctionalTesting.Default__FunctionalTestLevelScript
// (Public, ClassDefaultObject, ArchetypeObject)

class AFunctionalTestLevelScript* AFunctionalTestLevelScript::GetDefaultObj()
{
	static class AFunctionalTestLevelScript* Default = nullptr;

	if (!Default)
		Default = static_cast<AFunctionalTestLevelScript*>(AFunctionalTestLevelScript::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.FunctionalTestUtilityLibrary
// (None)

class UClass* UFunctionalTestUtilityLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalTestUtilityLibrary");

	return Clss;
}


// FunctionalTestUtilityLibrary FunctionalTesting.Default__FunctionalTestUtilityLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFunctionalTestUtilityLibrary* UFunctionalTestUtilityLibrary::GetDefaultObj()
{
	static class UFunctionalTestUtilityLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFunctionalTestUtilityLibrary*>(UFunctionalTestUtilityLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.FunctionalTestUtilityLibrary.TraceChannelTestUtil
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTraceChannelTestBatchOptionsBatchOptions                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SphereCapsuleRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleHalfHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoxHalfSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        ProfileName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIgnoreSelf                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDrawDebugTrace         DrawDebugType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                TraceColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                TraceHitColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DrawTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTraceQueryTestResults*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTraceQueryTestResults* UFunctionalTestUtilityLibrary::TraceChannelTestUtil(class UObject* WorldContextObject, struct FTraceChannelTestBatchOptions& BatchOptions, const struct FVector& Start, const struct FVector& End, float SphereCapsuleRadius, float CapsuleHalfHeight, const struct FVector& BoxHalfSize, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, const TArray<enum class EObjectTypeQuery>& ObjectTypes, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, bool bIgnoreSelf, enum class EDrawDebugTrace DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FunctionalTestUtilityLibrary", "TraceChannelTestUtil");

	Params::UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.BatchOptions = BatchOptions;
	Parms.Start = Start;
	Parms.End = End;
	Parms.SphereCapsuleRadius = SphereCapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.BoxHalfSize = BoxHalfSize;
	Parms.Orientation = Orientation;
	Parms.TraceChannel = TraceChannel;
	Parms.ObjectTypes = ObjectTypes;
	Parms.ProfileName = ProfileName;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;
	Parms.bIgnoreSelf = bIgnoreSelf;
	Parms.DrawDebugType = DrawDebugType;
	Parms.TraceColor = TraceColor;
	Parms.TraceHitColor = TraceHitColor;
	Parms.DrawTime = DrawTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FunctionalTesting.ScreenshotFunctionalTestBase
// (Actor)

class UClass* AScreenshotFunctionalTestBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScreenshotFunctionalTestBase");

	return Clss;
}


// ScreenshotFunctionalTestBase FunctionalTesting.Default__ScreenshotFunctionalTestBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AScreenshotFunctionalTestBase* AScreenshotFunctionalTestBase::GetDefaultObj()
{
	static class AScreenshotFunctionalTestBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AScreenshotFunctionalTestBase*>(AScreenshotFunctionalTestBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.FunctionalUIScreenshotTest
// (Actor)

class UClass* AFunctionalUIScreenshotTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FunctionalUIScreenshotTest");

	return Clss;
}


// FunctionalUIScreenshotTest FunctionalTesting.Default__FunctionalUIScreenshotTest
// (Public, ClassDefaultObject, ArchetypeObject)

class AFunctionalUIScreenshotTest* AFunctionalUIScreenshotTest::GetDefaultObj()
{
	static class AFunctionalUIScreenshotTest* Default = nullptr;

	if (!Default)
		Default = static_cast<AFunctionalUIScreenshotTest*>(AFunctionalUIScreenshotTest::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.GroundTruthData
// (None)

class UClass* UGroundTruthData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroundTruthData");

	return Clss;
}


// GroundTruthData FunctionalTesting.Default__GroundTruthData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroundTruthData* UGroundTruthData::GetDefaultObj()
{
	static class UGroundTruthData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroundTruthData*>(UGroundTruthData::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.GroundTruthData.SaveObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     GroundTruth                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroundTruthData::SaveObject(class UObject* GroundTruth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroundTruthData", "SaveObject");

	Params::UGroundTruthData_SaveObject_Params Parms{};

	Parms.GroundTruth = GroundTruth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FunctionalTesting.GroundTruthData.LoadObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGroundTruthData::LoadObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroundTruthData", "LoadObject");

	Params::UGroundTruthData_LoadObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FunctionalTesting.GroundTruthData.CanModify
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGroundTruthData::CanModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroundTruthData", "CanModify");

	Params::UGroundTruthData_CanModify_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FunctionalTesting.ScreenshotFunctionalTest
// (Actor)

class UClass* AScreenshotFunctionalTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScreenshotFunctionalTest");

	return Clss;
}


// ScreenshotFunctionalTest FunctionalTesting.Default__ScreenshotFunctionalTest
// (Public, ClassDefaultObject, ArchetypeObject)

class AScreenshotFunctionalTest* AScreenshotFunctionalTest::GetDefaultObj()
{
	static class AScreenshotFunctionalTest* Default = nullptr;

	if (!Default)
		Default = static_cast<AScreenshotFunctionalTest*>(AScreenshotFunctionalTest::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.TestPhaseComponent
// (SceneComponent)

class UClass* UTestPhaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestPhaseComponent");

	return Clss;
}


// TestPhaseComponent FunctionalTesting.Default__TestPhaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestPhaseComponent* UTestPhaseComponent::GetDefaultObj()
{
	static class UTestPhaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestPhaseComponent*>(UTestPhaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FunctionalTesting.TraceQueryTestResults
// (None)

class UClass* UTraceQueryTestResults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TraceQueryTestResults");

	return Clss;
}


// TraceQueryTestResults FunctionalTesting.Default__TraceQueryTestResults
// (Public, ClassDefaultObject, ArchetypeObject)

class UTraceQueryTestResults* UTraceQueryTestResults::GetDefaultObj()
{
	static class UTraceQueryTestResults* Default = nullptr;

	if (!Default)
		Default = static_cast<UTraceQueryTestResults*>(UTraceQueryTestResults::StaticClass()->DefaultObject);

	return Default;
}


// Function FunctionalTesting.TraceQueryTestResults.ToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTraceQueryTestResults::ToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceQueryTestResults", "ToString");

	Params::UTraceQueryTestResults_ToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


