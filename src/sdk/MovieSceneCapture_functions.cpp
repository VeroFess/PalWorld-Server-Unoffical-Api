#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// (None)

class UClass* UMovieSceneCaptureProtocolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCaptureProtocolBase");

	return Clss;
}


// MovieSceneCaptureProtocolBase MovieSceneCapture.Default__MovieSceneCaptureProtocolBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCaptureProtocolBase* UMovieSceneCaptureProtocolBase::GetDefaultObj()
{
	static class UMovieSceneCaptureProtocolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCaptureProtocolBase*>(UMovieSceneCaptureProtocolBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneCaptureProtocolBase::IsCapturing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureProtocolBase", "IsCapturing");

	Params::UMovieSceneCaptureProtocolBase_IsCapturing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieSceneCaptureProtocolStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureProtocolBase", "GetState");

	Params::UMovieSceneCaptureProtocolBase_GetState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// (None)

class UClass* UMovieSceneAudioCaptureProtocolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAudioCaptureProtocolBase");

	return Clss;
}


// MovieSceneAudioCaptureProtocolBase MovieSceneCapture.Default__MovieSceneAudioCaptureProtocolBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAudioCaptureProtocolBase* UMovieSceneAudioCaptureProtocolBase::GetDefaultObj()
{
	static class UMovieSceneAudioCaptureProtocolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAudioCaptureProtocolBase*>(UMovieSceneAudioCaptureProtocolBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.NullAudioCaptureProtocol
// (None)

class UClass* UNullAudioCaptureProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NullAudioCaptureProtocol");

	return Clss;
}


// NullAudioCaptureProtocol MovieSceneCapture.Default__NullAudioCaptureProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UNullAudioCaptureProtocol* UNullAudioCaptureProtocol::GetDefaultObj()
{
	static class UNullAudioCaptureProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UNullAudioCaptureProtocol*>(UNullAudioCaptureProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// (None)

class UClass* UMasterAudioSubmixCaptureProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MasterAudioSubmixCaptureProtocol");

	return Clss;
}


// MasterAudioSubmixCaptureProtocol MovieSceneCapture.Default__MasterAudioSubmixCaptureProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UMasterAudioSubmixCaptureProtocol* UMasterAudioSubmixCaptureProtocol::GetDefaultObj()
{
	static class UMasterAudioSubmixCaptureProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UMasterAudioSubmixCaptureProtocol*>(UMasterAudioSubmixCaptureProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// (None)

class UClass* UMovieSceneImageCaptureProtocolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneImageCaptureProtocolBase");

	return Clss;
}


// MovieSceneImageCaptureProtocolBase MovieSceneCapture.Default__MovieSceneImageCaptureProtocolBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneImageCaptureProtocolBase* UMovieSceneImageCaptureProtocolBase::GetDefaultObj()
{
	static class UMovieSceneImageCaptureProtocolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneImageCaptureProtocolBase*>(UMovieSceneImageCaptureProtocolBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// (None)

class UClass* UCompositionGraphCaptureProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositionGraphCaptureProtocol");

	return Clss;
}


// CompositionGraphCaptureProtocol MovieSceneCapture.Default__CompositionGraphCaptureProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositionGraphCaptureProtocol* UCompositionGraphCaptureProtocol::GetDefaultObj()
{
	static class UCompositionGraphCaptureProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositionGraphCaptureProtocol*>(UCompositionGraphCaptureProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MovieSceneCaptureInterface
// (None)

class UClass* IMovieSceneCaptureInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCaptureInterface");

	return Clss;
}


// MovieSceneCaptureInterface MovieSceneCapture.Default__MovieSceneCaptureInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneCaptureInterface* IMovieSceneCaptureInterface::GetDefaultObj()
{
	static class IMovieSceneCaptureInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneCaptureInterface*>(IMovieSceneCaptureInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.FrameGrabberProtocol
// (None)

class UClass* UFrameGrabberProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrameGrabberProtocol");

	return Clss;
}


// FrameGrabberProtocol MovieSceneCapture.Default__FrameGrabberProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UFrameGrabberProtocol* UFrameGrabberProtocol::GetDefaultObj()
{
	static class UFrameGrabberProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrameGrabberProtocol*>(UFrameGrabberProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.ImageSequenceProtocol
// (None)

class UClass* UImageSequenceProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageSequenceProtocol");

	return Clss;
}


// ImageSequenceProtocol MovieSceneCapture.Default__ImageSequenceProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageSequenceProtocol* UImageSequenceProtocol::GetDefaultObj()
{
	static class UImageSequenceProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageSequenceProtocol*>(UImageSequenceProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.CompressedImageSequenceProtocol
// (None)

class UClass* UCompressedImageSequenceProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompressedImageSequenceProtocol");

	return Clss;
}


// CompressedImageSequenceProtocol MovieSceneCapture.Default__CompressedImageSequenceProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompressedImageSequenceProtocol* UCompressedImageSequenceProtocol::GetDefaultObj()
{
	static class UCompressedImageSequenceProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompressedImageSequenceProtocol*>(UCompressedImageSequenceProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// (None)

class UClass* UImageSequenceProtocol_BMP::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageSequenceProtocol_BMP");

	return Clss;
}


// ImageSequenceProtocol_BMP MovieSceneCapture.Default__ImageSequenceProtocol_BMP
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageSequenceProtocol_BMP* UImageSequenceProtocol_BMP::GetDefaultObj()
{
	static class UImageSequenceProtocol_BMP* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageSequenceProtocol_BMP*>(UImageSequenceProtocol_BMP::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// (None)

class UClass* UImageSequenceProtocol_PNG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageSequenceProtocol_PNG");

	return Clss;
}


// ImageSequenceProtocol_PNG MovieSceneCapture.Default__ImageSequenceProtocol_PNG
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageSequenceProtocol_PNG* UImageSequenceProtocol_PNG::GetDefaultObj()
{
	static class UImageSequenceProtocol_PNG* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageSequenceProtocol_PNG*>(UImageSequenceProtocol_PNG::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// (None)

class UClass* UImageSequenceProtocol_JPG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageSequenceProtocol_JPG");

	return Clss;
}


// ImageSequenceProtocol_JPG MovieSceneCapture.Default__ImageSequenceProtocol_JPG
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageSequenceProtocol_JPG* UImageSequenceProtocol_JPG::GetDefaultObj()
{
	static class UImageSequenceProtocol_JPG* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageSequenceProtocol_JPG*>(UImageSequenceProtocol_JPG::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// (None)

class UClass* UImageSequenceProtocol_EXR::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageSequenceProtocol_EXR");

	return Clss;
}


// ImageSequenceProtocol_EXR MovieSceneCapture.Default__ImageSequenceProtocol_EXR
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageSequenceProtocol_EXR* UImageSequenceProtocol_EXR::GetDefaultObj()
{
	static class UImageSequenceProtocol_EXR* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageSequenceProtocol_EXR*>(UImageSequenceProtocol_EXR::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MovieSceneCapture
// (None)

class UClass* UMovieSceneCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCapture");

	return Clss;
}


// MovieSceneCapture MovieSceneCapture.Default__MovieSceneCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCapture* UMovieSceneCapture::GetDefaultObj()
{
	static class UMovieSceneCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCapture*>(UMovieSceneCapture::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMovieSceneCaptureProtocolBase>ProtocolType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCapture::SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCapture", "SetImageCaptureProtocolType");

	Params::UMovieSceneCapture_SetImageCaptureProtocolType_Params Parms{};

	Parms.ProtocolType = ProtocolType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMovieSceneCaptureProtocolBase>ProtocolType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCapture::SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCapture", "SetAudioCaptureProtocolType");

	Params::UMovieSceneCapture_SetAudioCaptureProtocolType_Params Parms{};

	Parms.ProtocolType = ProtocolType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCapture", "GetImageCaptureProtocol");

	Params::UMovieSceneCapture_GetImageCaptureProtocol_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCapture", "GetAudioCaptureProtocol");

	Params::UMovieSceneCapture_GetAudioCaptureProtocol_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneCapture.LevelCapture
// (None)

class UClass* ULevelCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelCapture");

	return Clss;
}


// LevelCapture MovieSceneCapture.Default__LevelCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelCapture* ULevelCapture::GetDefaultObj()
{
	static class ULevelCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelCapture*>(ULevelCapture::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// (None)

class UClass* UMovieSceneCaptureEnvironment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCaptureEnvironment");

	return Clss;
}


// MovieSceneCaptureEnvironment MovieSceneCapture.Default__MovieSceneCaptureEnvironment
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCaptureEnvironment* UMovieSceneCaptureEnvironment::GetDefaultObj()
{
	static class UMovieSceneCaptureEnvironment* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCaptureEnvironment*>(UMovieSceneCaptureEnvironment::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureEnvironment", "IsCaptureInProgress");

	Params::UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureFrameNumber");

	Params::UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureElapsedTime");

	Params::UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneImageCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureEnvironment", "FindImageCaptureProtocol");

	Params::UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneAudioCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureEnvironment", "FindAudioCaptureProtocol");

	Params::UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneCapture.UserDefinedCaptureProtocol
// (None)

class UClass* UUserDefinedCaptureProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserDefinedCaptureProtocol");

	return Clss;
}


// UserDefinedCaptureProtocol MovieSceneCapture.Default__UserDefinedCaptureProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserDefinedCaptureProtocol* UUserDefinedCaptureProtocol::GetDefaultObj()
{
	static class UUserDefinedCaptureProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserDefinedCaptureProtocol*>(UUserDefinedCaptureProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "StopCapturingFinalPixels");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCapturedPixelsID           StreamID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "StartCapturingFinalPixels");

	Params::UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params Parms{};

	Parms.StreamID = StreamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                    Buffer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           BufferID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, struct FCapturedPixelsID& BufferID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "ResolveBuffer");

	Params::UUserDefinedCaptureProtocol_ResolveBuffer_Params Parms{};

	Parms.Buffer = Buffer;
	Parms.BufferID = BufferID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnWarmUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnStartCapture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserDefinedCaptureProtocol::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnSetup");

	Params::UUserDefinedCaptureProtocol_OnSetup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnPreTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPreTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCapturedPixels             Pixels                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFrameMetrics               FrameMetrics                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPixelsReceived");

	Params::UUserDefinedCaptureProtocol_OnPixelsReceived_Params Parms{};

	Parms.Pixels = Pixels;
	Parms.ID = ID;
	Parms.FrameMetrics = FrameMetrics;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPauseCapture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnFinalize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnFinalize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnCaptureFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserDefinedCaptureProtocol::OnCanFinalize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnCanFinalize");

	Params::UUserDefinedCaptureProtocol_OnCanFinalize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnBeginFinalize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameMetrics               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "GetCurrentFrameMetrics");

	Params::UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameMetrics               InFrameMetrics                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserDefinedCaptureProtocol::GenerateFilename(struct FFrameMetrics& InFrameMetrics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "GenerateFilename");

	Params::UUserDefinedCaptureProtocol_GenerateFilename_Params Parms{};

	Parms.InFrameMetrics = InFrameMetrics;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// (None)

class UClass* UUserDefinedImageCaptureProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserDefinedImageCaptureProtocol");

	return Clss;
}


// UserDefinedImageCaptureProtocol MovieSceneCapture.Default__UserDefinedImageCaptureProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserDefinedImageCaptureProtocol* UUserDefinedImageCaptureProtocol::GetDefaultObj()
{
	static class UUserDefinedImageCaptureProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserDefinedImageCaptureProtocol*>(UUserDefinedImageCaptureProtocol::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCapturedPixels             PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           StreamID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFrameMetrics               FrameMetrics                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bCopyImageData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "WriteImageToDisk");

	Params::UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params Parms{};

	Parms.PixelData = PixelData;
	Parms.StreamID = StreamID;
	Parms.FrameMetrics = FrameMetrics;
	Parms.bCopyImageData = bCopyImageData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForCurrentFrame");

	Params::UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                    Buffer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           StreamID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, struct FCapturedPixelsID& StreamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForBuffer");

	Params::UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params Parms{};

	Parms.Buffer = Buffer;
	Parms.StreamID = StreamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneCapture.VideoCaptureProtocol
// (None)

class UClass* UVideoCaptureProtocol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VideoCaptureProtocol");

	return Clss;
}


// VideoCaptureProtocol MovieSceneCapture.Default__VideoCaptureProtocol
// (Public, ClassDefaultObject, ArchetypeObject)

class UVideoCaptureProtocol* UVideoCaptureProtocol::GetDefaultObj()
{
	static class UVideoCaptureProtocol* Default = nullptr;

	if (!Default)
		Default = static_cast<UVideoCaptureProtocol*>(UVideoCaptureProtocol::StaticClass()->DefaultObject);

	return Default;
}

}


