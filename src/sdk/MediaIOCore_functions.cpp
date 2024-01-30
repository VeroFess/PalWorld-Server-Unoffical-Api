#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaIOCore.MediaCapture
// (None)

class UClass* UMediaCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaCapture");

	return Clss;
}


// MediaCapture MediaIOCore.Default__MediaCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaCapture* UMediaCapture::GetDefaultObj()
{
	static class UMediaCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaCapture*>(UMediaCapture::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "UpdateTextureRenderTarget2D");

	Params::UMediaCapture_UpdateTextureRenderTarget2D_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowPendingFrameToBeProcess                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "StopCapture");

	Params::UMediaCapture_StopCapture_Params Parms{};

	Parms.bAllowPendingFrameToBeProcess = bAllowPendingFrameToBeProcess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaIOCore.MediaCapture.SetMediaOutput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaOutput*                InMediaOutput                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaCapture::SetMediaOutput(class UMediaOutput* InMediaOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "SetMediaOutput");

	Params::UMediaCapture_SetMediaOutput_Params Parms{};

	Parms.InMediaOutput = InMediaOutput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaIOCore.MediaCapture.GetState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaCaptureState      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMediaCaptureState UMediaCapture::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "GetState");

	Params::UMediaCapture_GetState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntPoint UMediaCapture::GetDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "GetDesiredSize");

	Params::UMediaCapture_GetDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPixelFormat            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPixelFormat UMediaCapture::GetDesiredPixelFormat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "GetDesiredPixelFormat");

	Params::UMediaCapture_GetDesiredPixelFormat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMediaCaptureOptions        CaptureOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "CaptureTextureRenderTarget2D");

	Params::UMediaCapture_CaptureTextureRenderTarget2D_Params Parms{};

	Parms.RenderTarget = RenderTarget;
	Parms.CaptureOptions = CaptureOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaCaptureOptions        CaptureOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaCapture", "CaptureActiveSceneViewport");

	Params::UMediaCapture_CaptureActiveSceneViewport_Params Parms{};

	Parms.CaptureOptions = CaptureOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MediaIOCore.FileMediaCapture
// (None)

class UClass* UFileMediaCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FileMediaCapture");

	return Clss;
}


// FileMediaCapture MediaIOCore.Default__FileMediaCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UFileMediaCapture* UFileMediaCapture::GetDefaultObj()
{
	static class UFileMediaCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UFileMediaCapture*>(UFileMediaCapture::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaIOCore.MediaOutput
// (None)

class UClass* UMediaOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaOutput");

	return Clss;
}


// MediaOutput MediaIOCore.Default__MediaOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaOutput* UMediaOutput::GetDefaultObj()
{
	static class UMediaOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaOutput*>(UMediaOutput::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaIOCore.MediaOutput.Validate
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      OutFailureReason                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaOutput::Validate(class FString* OutFailureReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaOutput", "Validate");

	Params::UMediaOutput_Validate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFailureReason != nullptr)
		*OutFailureReason = std::move(Parms.OutFailureReason);

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaOutput.CreateMediaCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaCapture*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaCapture* UMediaOutput::CreateMediaCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaOutput", "CreateMediaCapture");

	Params::UMediaOutput_CreateMediaCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MediaIOCore.FileMediaOutput
// (None)

class UClass* UFileMediaOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FileMediaOutput");

	return Clss;
}


// FileMediaOutput MediaIOCore.Default__FileMediaOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UFileMediaOutput* UFileMediaOutput::GetDefaultObj()
{
	static class UFileMediaOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UFileMediaOutput*>(UFileMediaOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaIOCore.MediaIOCoreSubsystem
// (None)

class UClass* UMediaIOCoreSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaIOCoreSubsystem");

	return Clss;
}


// MediaIOCoreSubsystem MediaIOCore.Default__MediaIOCoreSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaIOCoreSubsystem* UMediaIOCoreSubsystem::GetDefaultObj()
{
	static class UMediaIOCoreSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaIOCoreSubsystem*>(UMediaIOCoreSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


