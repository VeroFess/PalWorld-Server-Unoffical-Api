#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieRenderPipelineCore.MoviePipelineSetting
// (None)

class UClass* UMoviePipelineSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineSetting");

	return Clss;
}


// MoviePipelineSetting MovieRenderPipelineCore.Default__MoviePipelineSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineSetting* UMoviePipelineSetting::GetDefaultObj()
{
	static class UMoviePipelineSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineSetting*>(UMoviePipelineSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting::SetIsEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "SetIsEnabled");

	Params::UMoviePipelineSetting_SetIsEnabled_Params Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineSetting::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "IsEnabled");

	Params::UMoviePipelineSetting_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              InOutUnrealURLParams                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InOutCommandLineArgs                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InOutDeviceProfileCvars                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InOutExecCmds                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMoviePipelineSetting::BuildNewProcessCommandLineArgs(TArray<class FString>& InOutUnrealURLParams, TArray<class FString>& InOutCommandLineArgs, TArray<class FString>& InOutDeviceProfileCvars, TArray<class FString>& InOutExecCmds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "BuildNewProcessCommandLineArgs");

	Params::UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params Parms{};

	Parms.InOutUnrealURLParams = InOutUnrealURLParams;
	Parms.InOutCommandLineArgs = InOutCommandLineArgs;
	Parms.InOutDeviceProfileCvars = InOutDeviceProfileCvars;
	Parms.InOutExecCmds = InOutExecCmds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InOutUnrealURLParams                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InOutCommandLineArgs                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting::BuildNewProcessCommandLine(class FString& InOutUnrealURLParams, class FString& InOutCommandLineArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "BuildNewProcessCommandLine");

	Params::UMoviePipelineSetting_BuildNewProcessCommandLine_Params Parms{};

	Parms.InOutUnrealURLParams = InOutUnrealURLParams;
	Parms.InOutCommandLineArgs = InOutCommandLineArgs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
// (None)

class UClass* UMoviePipelineViewFamilySetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineViewFamilySetting");

	return Clss;
}


// MoviePipelineViewFamilySetting MovieRenderPipelineCore.Default__MoviePipelineViewFamilySetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineViewFamilySetting* UMoviePipelineViewFamilySetting::GetDefaultObj()
{
	static class UMoviePipelineViewFamilySetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineViewFamilySetting*>(UMoviePipelineViewFamilySetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
// (None)

class UClass* UMoviePipelineCameraSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCameraSetting");

	return Clss;
}


// MoviePipelineCameraSetting MovieRenderPipelineCore.Default__MoviePipelineCameraSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCameraSetting* UMoviePipelineCameraSetting::GetDefaultObj()
{
	static class UMoviePipelineCameraSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCameraSetting*>(UMoviePipelineCameraSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineGameMode
// (Actor)

class UClass* AMoviePipelineGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineGameMode");

	return Clss;
}


// MoviePipelineGameMode MovieRenderPipelineCore.Default__MoviePipelineGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoviePipelineGameMode* AMoviePipelineGameMode::GetDefaultObj()
{
	static class AMoviePipelineGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoviePipelineGameMode*>(AMoviePipelineGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
// (None)

class UClass* UMoviePipelineHighResSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineHighResSetting");

	return Clss;
}


// MoviePipelineHighResSetting MovieRenderPipelineCore.Default__MoviePipelineHighResSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineHighResSetting* UMoviePipelineHighResSetting::GetDefaultObj()
{
	static class UMoviePipelineHighResSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineHighResSetting*>(UMoviePipelineHighResSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
// (None)

class UClass* UMoviePipelineInProcessExecutorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineInProcessExecutorSettings");

	return Clss;
}


// MoviePipelineInProcessExecutorSettings MovieRenderPipelineCore.Default__MoviePipelineInProcessExecutorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineInProcessExecutorSettings* UMoviePipelineInProcessExecutorSettings::GetDefaultObj()
{
	static class UMoviePipelineInProcessExecutorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineInProcessExecutorSettings*>(UMoviePipelineInProcessExecutorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineOutputBase
// (None)

class UClass* UMoviePipelineOutputBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineOutputBase");

	return Clss;
}


// MoviePipelineOutputBase MovieRenderPipelineCore.Default__MoviePipelineOutputBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineOutputBase* UMoviePipelineOutputBase::GetDefaultObj()
{
	static class UMoviePipelineOutputBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineOutputBase*>(UMoviePipelineOutputBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
// (None)

class UClass* UMoviePipelineSetting_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineSetting_BlueprintBase");

	return Clss;
}


// MoviePipelineSetting_BlueprintBase MovieRenderPipelineCore.Default__MoviePipelineSetting_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineSetting_BlueprintBase* UMoviePipelineSetting_BlueprintBase::GetDefaultObj()
{
	static class UMoviePipelineSetting_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineSetting_BlueprintBase*>(UMoviePipelineSetting_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting_BlueprintBase::ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveTeardownForPipelineImpl");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params Parms{};

	Parms.InPipeline = InPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting_BlueprintBase::ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveSetupForPipelineImpl");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params Parms{};

	Parms.InPipeline = InPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FMoviePipelineFormatArgs    InOutFormatArgs                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMoviePipelineFormatArgs    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMoviePipelineFormatArgs UMoviePipelineSetting_BlueprintBase::ReceiveGetFormatArguments(struct FMoviePipelineFormatArgs& InOutFormatArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveGetFormatArguments");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params Parms{};

	Parms.InOutFormatArgs = InOutFormatArgs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoviePipelineSetting_BlueprintBase::OnEngineTickBeginFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "OnEngineTickBeginFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MovieRenderPipelineCore.MovieRenderDebugWidget
// (None)

class UClass* UMovieRenderDebugWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieRenderDebugWidget");

	return Clss;
}


// MovieRenderDebugWidget MovieRenderPipelineCore.Default__MovieRenderDebugWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieRenderDebugWidget* UMovieRenderDebugWidget::GetDefaultObj()
{
	static class UMovieRenderDebugWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieRenderDebugWidget*>(UMovieRenderDebugWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              ForPipeline                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieRenderDebugWidget::OnInitializedForPipeline(class UMoviePipeline* ForPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieRenderDebugWidget", "OnInitializedForPipeline");

	Params::UMovieRenderDebugWidget_OnInitializedForPipeline_Params Parms{};

	Parms.ForPipeline = ForPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MovieRenderPipelineCore.MoviePipeline
// (None)

class UClass* UMoviePipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipeline");

	return Clss;
}


// MoviePipeline MovieRenderPipelineCore.Default__MoviePipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipeline* UMoviePipeline::GetDefaultObj()
{
	static class UMoviePipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipeline*>(UMoviePipeline::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipeline.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bError                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipeline::Shutdown(bool bError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "Shutdown");

	Params::UMoviePipeline_Shutdown_Params Parms{};

	Parms.bError = bError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipeline::SetInitializationTime(struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "SetInitializationTime");

	Params::UMoviePipeline_SetInitializationTime_Params Parms{};

	Parms.InDateTime = InDateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsError                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipeline::RequestShutdown(bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "RequestShutdown");

	Params::UMoviePipeline_RequestShutdown_Params Parms{};

	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipeline::OnMoviePipelineFinishedImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "OnMoviePipelineFinishedImpl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipeline::IsShutdownRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "IsShutdownRequested");

	Params::UMoviePipeline_IsShutdownRequested_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipeline::Initialize(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "Initialize");

	Params::UMoviePipeline_Initialize_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UMoviePipeline::GetPreviewTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPreviewTexture");

	Params::UMoviePipeline_GetPreviewTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineMasterConfig*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineMasterConfig* UMoviePipeline::GetPipelineMasterConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPipelineMasterConfig");

	Params::UMoviePipeline_GetPipelineMasterConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UMoviePipeline::GetInitializationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetInitializationTime");

	Params::UMoviePipeline_GetInitializationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipeline::GetCurrentJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetCurrentJob");

	Params::UMoviePipeline_GetCurrentJob_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
// (None)

class UClass* UMoviePipelineCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCustomTimeStep");

	return Clss;
}


// MoviePipelineCustomTimeStep MovieRenderPipelineCore.Default__MoviePipelineCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCustomTimeStep* UMoviePipelineCustomTimeStep::GetDefaultObj()
{
	static class UMoviePipelineCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCustomTimeStep*>(UMoviePipelineCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
// (None)

class UClass* UMoviePipelineAntiAliasingSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineAntiAliasingSetting");

	return Clss;
}


// MoviePipelineAntiAliasingSetting MovieRenderPipelineCore.Default__MoviePipelineAntiAliasingSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineAntiAliasingSetting* UMoviePipelineAntiAliasingSetting::GetDefaultObj()
{
	static class UMoviePipelineAntiAliasingSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineAntiAliasingSetting*>(UMoviePipelineAntiAliasingSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
// (None)

class UClass* UMoviePipelineBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBlueprintLibrary");

	return Clss;
}


// MoviePipelineBlueprintLibrary MovieRenderPipelineCore.Default__MoviePipelineBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBlueprintLibrary* UMoviePipelineBlueprintLibrary::GetDefaultObj()
{
	static class UMoviePipelineBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBlueprintLibrary*>(UMoviePipelineBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShotsChanged                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "UpdateJobShotListFromSequence");

	Params::UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShotsChanged != nullptr)
		*bShotsChanged = Parms.bShotsChanged;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMoviePipelineFilenameResolveParamsInParams                                                         (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoviePipelineBlueprintLibrary::ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "ResolveVersionNumber");

	Params::UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params Parms{};

	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InFormatString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoviePipelineFilenameResolveParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      OutFinalPath                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoviePipelineFormatArgs    OutMergedFormatArgs                                              (Parm, OutParm, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments(const class FString& InFormatString, struct FMoviePipelineFilenameResolveParams& InParams, class FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "ResolveFilenameFormatArguments");

	Params::UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params Parms{};

	Parms.InFormatString = InFormatString;
	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFinalPath != nullptr)
		*OutFinalPath = std::move(Parms.OutFinalPath);

	if (OutMergedFormatArgs != nullptr)
		*OutMergedFormatArgs = std::move(Parms.OutMergedFormatArgs);

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InManifestFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineQueue*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineQueue* UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(const class FString& InManifestFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "LoadManifestFileFromString");

	Params::UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params Parms{};

	Parms.InManifestFilePath = InManifestFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovieRenderPipelineStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::GetPipelineState(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetPipelineState");

	Params::UMoviePipelineBlueprintLibrary_GetPipelineState_Params Parms{};

	Parms.InPipeline = InPipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutCurrentIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutTotalCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetOverallSegmentCounts");

	Params::UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCurrentIndex != nullptr)
		*OutCurrentIndex = Parms.OutCurrentIndex;

	if (OutTotalCount != nullptr)
		*OutTotalCount = Parms.OutTotalCount;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutCurrentIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutTotalCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetOverallOutputFrames");

	Params::UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCurrentIndex != nullptr)
		*OutCurrentIndex = Parms.OutCurrentIndex;

	if (OutTotalCount != nullptr)
		*OutTotalCount = Parms.OutTotalCount;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoviePipelineBlueprintLibrary::GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMoviePipelineEngineChangelistLabel");

	Params::UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode UMoviePipelineBlueprintLibrary::GetMasterTimecode(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMasterTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMasterFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineBlueprintLibrary::GetMapPackageName(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMapPackageName");

	Params::UMoviePipelineBlueprintLibrary_GetMapPackageName_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoviePipelineBlueprintLibrary::GetJobName(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobName");

	Params::UMoviePipelineBlueprintLibrary_GetJobName_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UMoviePipelineBlueprintLibrary::GetJobInitializationTime(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobInitializationTime");

	Params::UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoviePipelineBlueprintLibrary::GetJobAuthor(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobAuthor");

	Params::UMoviePipelineBlueprintLibrary_GetJobAuthor_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   OutEstimate                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetEstimatedTimeRemaining");

	Params::UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params Parms{};

	Parms.InPipeline = InPipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEstimate != nullptr)
		*OutEstimate = std::move(Parms.OutEstimate);

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMoviePipelineMasterConfig*  InMasterConfig                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorShot*  InPipelineExecutorShot                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntPoint UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetEffectiveOutputResolution");

	Params::UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params Parms{};

	Parms.InMasterConfig = InMasterConfig;
	Parms.InPipelineExecutorShot = InPipelineExecutorShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentShotTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentShotFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* UMoviePipelineBlueprintLibrary::GetCurrentSequence(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSequence");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoviePipelineSegmentWorkMetricsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentWorkMetrics");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovieRenderShotState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieRenderShotState UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentState");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        OutOuterName                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// class FText                        OutInnerName                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentName");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOuterName != nullptr)
		*OutOuterName = Parms.OutOuterName;

	if (OutInnerName != nullptr)
		*OutInnerName = Parms.OutInnerName;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentFocusDistance");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentFocalLength");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorShot*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorShot* UMoviePipelineBlueprintLibrary::GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentExecutorShot");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCurrentAperture(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentAperture");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCompletionPercentage(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCompletionPercentage");

	Params::UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params Parms{};

	Parms.InPipeline = InPipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InSettingType                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineMasterConfig*  InMasterConfig                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorShot*  InShot                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineSetting*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineSetting* UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(TSubclassOf<class UMoviePipelineSetting> InSettingType, class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "FindOrGetDefaultSettingForShot");

	Params::UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params Parms{};

	Parms.InSettingType = InSettingType;
	Parms.InMasterConfig = InMasterConfig;
	Parms.InShot = InShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneSequence*         InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* UMoviePipelineBlueprintLibrary::DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "DuplicateSequence");

	Params::UMoviePipelineBlueprintLibrary_DuplicateSequence_Params Parms{};

	Parms.Outer = Outer;
	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineColorSetting
// (None)

class UClass* UMoviePipelineColorSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineColorSetting");

	return Clss;
}


// MoviePipelineColorSetting MovieRenderPipelineCore.Default__MoviePipelineColorSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineColorSetting* UMoviePipelineColorSetting::GetDefaultObj()
{
	static class UMoviePipelineColorSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineColorSetting*>(UMoviePipelineColorSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
// (None)

class UClass* UMoviePipelineCommandLineEncoder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCommandLineEncoder");

	return Clss;
}


// MoviePipelineCommandLineEncoder MovieRenderPipelineCore.Default__MoviePipelineCommandLineEncoder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCommandLineEncoder* UMoviePipelineCommandLineEncoder::GetDefaultObj()
{
	static class UMoviePipelineCommandLineEncoder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCommandLineEncoder*>(UMoviePipelineCommandLineEncoder::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
// (None)

class UClass* UMoviePipelineCommandLineEncoderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCommandLineEncoderSettings");

	return Clss;
}


// MoviePipelineCommandLineEncoderSettings MovieRenderPipelineCore.Default__MoviePipelineCommandLineEncoderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCommandLineEncoderSettings* UMoviePipelineCommandLineEncoderSettings::GetDefaultObj()
{
	static class UMoviePipelineCommandLineEncoderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCommandLineEncoderSettings*>(UMoviePipelineCommandLineEncoderSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineConfigBase
// (None)

class UClass* UMoviePipelineConfigBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineConfigBase");

	return Clss;
}


// MoviePipelineConfigBase MovieRenderPipelineCore.Default__MoviePipelineConfigBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineConfigBase* UMoviePipelineConfigBase::GetDefaultObj()
{
	static class UMoviePipelineConfigBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineConfigBase*>(UMoviePipelineConfigBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineSetting*       InSetting                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineConfigBase::RemoveSetting(class UMoviePipelineSetting* InSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "RemoveSetting");

	Params::UMoviePipelineConfigBase_RemoveSetting_Params Parms{};

	Parms.InSetting = InSetting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::GetUserSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "GetUserSettings");

	Params::UMoviePipelineConfigBase_GetUserSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindSettingsByClass");

	Params::UMoviePipelineConfigBase_FindSettingsByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineSetting*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineSetting* UMoviePipelineConfigBase::FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindSettingByClass");

	Params::UMoviePipelineConfigBase_FindSettingByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineSetting*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineSetting* UMoviePipelineConfigBase::FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindOrAddSettingByClass");

	Params::UMoviePipelineConfigBase_FindOrAddSettingByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineConfigBase*    InConfig                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineConfigBase::CopyFrom(class UMoviePipelineConfigBase* InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "CopyFrom");

	Params::UMoviePipelineConfigBase_CopyFrom_Params Parms{};

	Parms.InConfig = InConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
// (None)

class UClass* UMoviePipelineDebugSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDebugSettings");

	return Clss;
}


// MoviePipelineDebugSettings MovieRenderPipelineCore.Default__MoviePipelineDebugSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDebugSettings* UMoviePipelineDebugSettings::GetDefaultObj()
{
	static class UMoviePipelineDebugSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDebugSettings*>(UMoviePipelineDebugSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
// (None)

class UClass* UMoviePipelineExecutorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorBase");

	return Clss;
}


// MoviePipelineExecutorBase MovieRenderPipelineCore.Default__MoviePipelineExecutorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorBase* UMoviePipelineExecutorBase::GetDefaultObj()
{
	static class UMoviePipelineExecutorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorBase*>(UMoviePipelineExecutorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetStatusProgress");

	Params::UMoviePipelineExecutorBase_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::SetStatusMessage(const class FString& InStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetStatusMessage");

	Params::UMoviePipelineExecutorBase_SetStatusMessage_Params Parms{};

	Parms.InStatus = InStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InPipelineClass                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::SetMoviePipelineClass(class UClass* InPipelineClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetMoviePipelineClass");

	Params::UMoviePipelineExecutorBase_SetMoviePipelineClass_Params Parms{};

	Parms.InPipelineClass = InPipelineClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::SendSocketMessage(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SendSocketMessage");

	Params::UMoviePipelineExecutorBase_SendSocketMessage_Params Parms{};

	Parms.InMessage = InMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InURL                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InVerb                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMessage                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> InHeaders                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoviePipelineExecutorBase::SendHTTPRequest(const class FString& InURL, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString>& InHeaders)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SendHTTPRequest");

	Params::UMoviePipelineExecutorBase_SendHTTPRequest_Params Parms{};

	Parms.InURL = InURL;
	Parms.InVerb = InVerb;
	Parms.InMessage = InMessage;
	Parms.InHeaders = InHeaders;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipelineExecutorBase::OnExecutorFinishedImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnExecutorFinishedImpl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
// (Native, Protected, BlueprintCallable)
// Parameters:
// class UMoviePipeline*              ErroredPipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFatal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ErrorReason                                                      (Parm, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, class FText ErrorReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnExecutorErroredImpl");

	Params::UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params Parms{};

	Parms.ErroredPipeline = ErroredPipeline;
	Parms.bFatal = bFatal;
	Parms.ErrorReason = ErrorReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::OnBeginFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnBeginFrame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::IsSocketConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "IsSocketConnected");

	Params::UMoviePipelineExecutorBase_IsSocketConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::IsRendering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "IsRendering");

	Params::UMoviePipelineExecutorBase_IsRendering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineExecutorBase::GetStatusProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "GetStatusProgress");

	Params::UMoviePipelineExecutorBase_GetStatusProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorBase::GetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "GetStatusMessage");

	Params::UMoviePipelineExecutorBase_GetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*         InPipelineQueue                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::Execute(class UMoviePipelineQueue* InPipelineQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "Execute");

	Params::UMoviePipelineExecutorBase_Execute_Params Parms{};

	Parms.InPipelineQueue = InPipelineQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipelineExecutorBase::DisconnectSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "DisconnectSocket");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      InHostName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InPort                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::ConnectSocket(const class FString& InHostName, int32 InPort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "ConnectSocket");

	Params::UMoviePipelineExecutorBase_ConnectSocket_Params Parms{};

	Parms.InHostName = InHostName;
	Parms.InPort = InPort;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::CancelCurrentJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "CancelCurrentJob");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::CancelAllJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "CancelAllJobs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
// (None)

class UClass* UMoviePipelineFCPXMLExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineFCPXMLExporter");

	return Clss;
}


// MoviePipelineFCPXMLExporter MovieRenderPipelineCore.Default__MoviePipelineFCPXMLExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineFCPXMLExporter* UMoviePipelineFCPXMLExporter::GetDefaultObj()
{
	static class UMoviePipelineFCPXMLExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineFCPXMLExporter*>(UMoviePipelineFCPXMLExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
// (None)

class UClass* UMoviePipelineGameOverrideSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineGameOverrideSetting");

	return Clss;
}


// MoviePipelineGameOverrideSetting MovieRenderPipelineCore.Default__MoviePipelineGameOverrideSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineGameOverrideSetting* UMoviePipelineGameOverrideSetting::GetDefaultObj()
{
	static class UMoviePipelineGameOverrideSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineGameOverrideSetting*>(UMoviePipelineGameOverrideSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
// (None)

class UClass* UMoviePipelineLinearExecutorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineLinearExecutorBase");

	return Clss;
}


// MoviePipelineLinearExecutorBase MovieRenderPipelineCore.Default__MoviePipelineLinearExecutorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineLinearExecutorBase* UMoviePipelineLinearExecutorBase::GetDefaultObj()
{
	static class UMoviePipelineLinearExecutorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineLinearExecutorBase*>(UMoviePipelineLinearExecutorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
// (None)

class UClass* UMoviePipelineInProcessExecutor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineInProcessExecutor");

	return Clss;
}


// MoviePipelineInProcessExecutor MovieRenderPipelineCore.Default__MoviePipelineInProcessExecutor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineInProcessExecutor* UMoviePipelineInProcessExecutor::GetDefaultObj()
{
	static class UMoviePipelineInProcessExecutor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineInProcessExecutor*>(UMoviePipelineInProcessExecutor::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineMasterConfig
// (None)

class UClass* UMoviePipelineMasterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineMasterConfig");

	return Clss;
}


// MoviePipelineMasterConfig MovieRenderPipelineCore.Default__MoviePipelineMasterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineMasterConfig* UMoviePipelineMasterConfig::GetDefaultObj()
{
	static class UMoviePipelineMasterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineMasterConfig*>(UMoviePipelineMasterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineMasterConfig::InitializeTransientSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineMasterConfig", "InitializeTransientSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetTransientSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineMasterConfig", "GetTransientSettings");

	Params::UMoviePipelineMasterConfig_GetTransientSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              InSequence                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameRate UMoviePipelineMasterConfig::GetEffectiveFrameRate(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineMasterConfig", "GetEffectiveFrameRate");

	Params::UMoviePipelineMasterConfig_GetEffectiveFrameRate_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeTransientSettings                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineMasterConfig", "GetAllSettings");

	Params::UMoviePipelineMasterConfig_GetAllSettings_Params Parms{};

	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;
	Parms.bIncludeTransientSettings = bIncludeTransientSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
// (None)

class UClass* UMoviePipelineOutputSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineOutputSetting");

	return Clss;
}


// MoviePipelineOutputSetting MovieRenderPipelineCore.Default__MoviePipelineOutputSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineOutputSetting* UMoviePipelineOutputSetting::GetDefaultObj()
{
	static class UMoviePipelineOutputSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineOutputSetting*>(UMoviePipelineOutputSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
// (None)

class UClass* UMoviePipelinePythonHostExecutor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelinePythonHostExecutor");

	return Clss;
}


// MoviePipelinePythonHostExecutor MovieRenderPipelineCore.Default__MoviePipelinePythonHostExecutor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelinePythonHostExecutor* UMoviePipelinePythonHostExecutor::GetDefaultObj()
{
	static class UMoviePipelinePythonHostExecutor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelinePythonHostExecutor*>(UMoviePipelinePythonHostExecutor::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelinePythonHostExecutor::OnMapLoad(class UWorld* InWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "OnMapLoad");

	Params::UMoviePipelinePythonHostExecutor_OnMapLoad_Params Parms{};

	Parms.InWorld = InWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UMoviePipelinePythonHostExecutor::GetLastLoadedWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "GetLastLoadedWorld");

	Params::UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*         InPipelineQueue                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelinePythonHostExecutor::ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "ExecuteDelayed");

	Params::UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params Parms{};

	Parms.InPipelineQueue = InPipelineQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
// (None)

class UClass* UMoviePipelineExecutorShot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorShot");

	return Clss;
}


// MoviePipelineExecutorShot MovieRenderPipelineCore.Default__MoviePipelineExecutorShot
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorShot* UMoviePipelineExecutorShot::GetDefaultObj()
{
	static class UMoviePipelineExecutorShot* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorShot*>(UMoviePipelineExecutorShot::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorShot::ShouldRender()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "ShouldRender");

	Params::UMoviePipelineExecutorShot_ShouldRender_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetStatusProgress");

	Params::UMoviePipelineExecutorShot_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetStatusMessage(const class FString& InStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetStatusMessage");

	Params::UMoviePipelineExecutorShot_SetStatusMessage_Params Parms{};

	Parms.InStatus = InStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig*    InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetShotOverridePresetOrigin");

	Params::UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig*    InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetShotOverrideConfiguration");

	Params::UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineExecutorShot::GetStatusProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetStatusProgress");

	Params::UMoviePipelineExecutorShot_GetStatusProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorShot::GetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetStatusMessage");

	Params::UMoviePipelineExecutorShot_GetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverridePresetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetShotOverridePresetOrigin");

	Params::UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverrideConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetShotOverrideConfiguration");

	Params::UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InCameraIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorShot::GetCameraName(int32 InCameraIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetCameraName");

	Params::UMoviePipelineExecutorShot_GetCameraName_Params Parms{};

	Parms.InCameraIndex = InCameraIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineShotConfig>InConfigType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "AllocateNewShotOverrideConfig");

	Params::UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params Parms{};

	Parms.InConfigType = InConfigType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
// (None)

class UClass* UMoviePipelineExecutorJob::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorJob");

	return Clss;
}


// MoviePipelineExecutorJob MovieRenderPipelineCore.Default__MoviePipelineExecutorJob
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorJob* UMoviePipelineExecutorJob::GetDefaultObj()
{
	static class UMoviePipelineExecutorJob* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorJob*>(UMoviePipelineExecutorJob::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetStatusProgress");

	Params::UMoviePipelineExecutorJob_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetStatusMessage(const class FString& InStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetStatusMessage");

	Params::UMoviePipelineExecutorJob_SetStatusMessage_Params Parms{};

	Parms.InStatus = InStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             InSequence                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetSequence(const struct FSoftObjectPath& InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetSequence");

	Params::UMoviePipelineExecutorJob_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineMasterConfig*  InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetPresetOrigin");

	Params::UMoviePipelineExecutorJob_SetPresetOrigin_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetIsEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetIsEnabled");

	Params::UMoviePipelineExecutorJob_SetIsEnabled_Params Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInConsumed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetConsumed(bool bInConsumed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetConsumed");

	Params::UMoviePipelineExecutorJob_SetConsumed_Params Parms{};

	Parms.bInConsumed = bInConsumed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineMasterConfig*  InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetConfiguration(class UMoviePipelineMasterConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetConfiguration");

	Params::UMoviePipelineExecutorJob_SetConfiguration_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorJob::OnDuplicated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "OnDuplicated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorJob::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "IsEnabled");

	Params::UMoviePipelineExecutorJob_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorJob::IsConsumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "IsConsumed");

	Params::UMoviePipelineExecutorJob_IsConsumed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineExecutorJob::GetStatusProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetStatusProgress");

	Params::UMoviePipelineExecutorJob_GetStatusProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorJob::GetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetStatusMessage");

	Params::UMoviePipelineExecutorJob_GetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineMasterConfig*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetPresetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetPresetOrigin");

	Params::UMoviePipelineExecutorJob_GetPresetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineMasterConfig*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetConfiguration");

	Params::UMoviePipelineExecutorJob_GetConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineQueue
// (None)

class UClass* UMoviePipelineQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineQueue");

	return Clss;
}


// MoviePipelineQueue MovieRenderPipelineCore.Default__MoviePipelineQueue
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineQueue* UMoviePipelineQueue::GetDefaultObj()
{
	static class UMoviePipelineQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineQueue*>(UMoviePipelineQueue::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueue::SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "SetJobIndex");

	Params::UMoviePipelineQueue_SetJobIndex_Params Parms{};

	Parms.InJob = InJob;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineExecutorJob*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "GetJobs");

	Params::UMoviePipelineQueue_GetJobs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DuplicateJob");

	Params::UMoviePipelineQueue_DuplicateJob_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueue::DeleteJob(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DeleteJob");

	Params::UMoviePipelineQueue_DeleteJob_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineQueue::DeleteAllJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DeleteAllJobs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineQueue*         InQueue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueue::CopyFrom(class UMoviePipelineQueue* InQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "CopyFrom");

	Params::UMoviePipelineQueue_CopyFrom_Params Parms{};

	Parms.InQueue = InQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineExecutorJob>InJobType                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "AllocateNewJob");

	Params::UMoviePipelineQueue_AllocateNewJob_Params Parms{};

	Parms.InJobType = InJobType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
// (None)

class UClass* UMoviePipelineQueueEngineSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineQueueEngineSubsystem");

	return Clss;
}


// MoviePipelineQueueEngineSubsystem MovieRenderPipelineCore.Default__MoviePipelineQueueEngineSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineQueueEngineSubsystem* UMoviePipelineQueueEngineSubsystem::GetDefaultObj()
{
	static class UMoviePipelineQueueEngineSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineQueueEngineSubsystem*>(UMoviePipelineQueueEngineSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMovieRenderDebugWidget>InProgressWidgetClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRenderPlayerViewport                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueueEngineSubsystem::SetConfiguration(TSubclassOf<class UMovieRenderDebugWidget> InProgressWidgetClass, bool bRenderPlayerViewport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "SetConfiguration");

	Params::UMoviePipelineQueueEngineSubsystem_SetConfiguration_Params Parms{};

	Parms.InProgressWidgetClass = InProgressWidgetClass;
	Parms.bRenderPlayerViewport = bRenderPlayerViewport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorBase*  InExecutor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderQueueWithExecutorInstance");

	Params::UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params Parms{};

	Parms.InExecutor = InExecutor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineExecutorBase>InExecutorType                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorBase*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderQueueWithExecutor");

	Params::UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params Parms{};

	Parms.InExecutorType = InExecutorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueueEngineSubsystem::RenderJob(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderJob");

	Params::UMoviePipelineQueueEngineSubsystem_RenderJob_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineQueueEngineSubsystem::IsRendering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "IsRendering");

	Params::UMoviePipelineQueueEngineSubsystem_IsRendering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineQueue*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineQueue* UMoviePipelineQueueEngineSubsystem::GetQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "GetQueue");

	Params::UMoviePipelineQueueEngineSubsystem_GetQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorBase*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::GetActiveExecutor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "GetActiveExecutor");

	Params::UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipelineQueueEngineSubsystem::AllocateJob(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "AllocateJob");

	Params::UMoviePipelineQueueEngineSubsystem_AllocateJob_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineRenderPass
// (None)

class UClass* UMoviePipelineRenderPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineRenderPass");

	return Clss;
}


// MoviePipelineRenderPass MovieRenderPipelineCore.Default__MoviePipelineRenderPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineRenderPass* UMoviePipelineRenderPass::GetDefaultObj()
{
	static class UMoviePipelineRenderPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineRenderPass*>(UMoviePipelineRenderPass::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineShotConfig
// (None)

class UClass* UMoviePipelineShotConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineShotConfig");

	return Clss;
}


// MoviePipelineShotConfig MovieRenderPipelineCore.Default__MoviePipelineShotConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineShotConfig* UMoviePipelineShotConfig::GetDefaultObj()
{
	static class UMoviePipelineShotConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineShotConfig*>(UMoviePipelineShotConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
// (None)

class UClass* UMoviePipelineVideoOutputBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineVideoOutputBase");

	return Clss;
}


// MoviePipelineVideoOutputBase MovieRenderPipelineCore.Default__MoviePipelineVideoOutputBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineVideoOutputBase* UMoviePipelineVideoOutputBase::GetDefaultObj()
{
	static class UMoviePipelineVideoOutputBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineVideoOutputBase*>(UMoviePipelineVideoOutputBase::StaticClass()->DefaultObject);

	return Default;
}

}


