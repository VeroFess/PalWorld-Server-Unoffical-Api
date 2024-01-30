#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AppleImageUtils.AppleImageInterface
// (None)

class UClass* IAppleImageInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AppleImageInterface");

	return Clss;
}


// AppleImageInterface AppleImageUtils.Default__AppleImageInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAppleImageInterface* IAppleImageInterface::GetDefaultObj()
{
	static class IAppleImageInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAppleImageInterface*>(IAppleImageInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// (None)

class UClass* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AppleImageUtilsBaseAsyncTaskBlueprintProxy");

	return Clss;
}


// AppleImageUtilsBaseAsyncTaskBlueprintProxy AppleImageUtils.Default__AppleImageUtilsBaseAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAppleImageUtilsBaseAsyncTaskBlueprintProxy*>(UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    SourceImage                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWantColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseGpu                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextureRotationDirectionRotate                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToTIFF");

	Params::UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Params Parms{};

	Parms.SourceImage = SourceImage;
	Parms.bWantColor = bWantColor;
	Parms.bUseGpu = bUseGpu;
	Parms.Scale = Scale;
	Parms.Rotate = Rotate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    SourceImage                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWantColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseGpu                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextureRotationDirectionRotate                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToPNG");

	Params::UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Params Parms{};

	Parms.SourceImage = SourceImage;
	Parms.bWantColor = bWantColor;
	Parms.bUseGpu = bUseGpu;
	Parms.Scale = Scale;
	Parms.Rotate = Rotate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    SourceImage                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quality                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWantColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseGpu                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextureRotationDirectionRotate                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToJPEG");

	Params::UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Params Parms{};

	Parms.SourceImage = SourceImage;
	Parms.Quality = Quality;
	Parms.bWantColor = bWantColor;
	Parms.bUseGpu = bUseGpu;
	Parms.Scale = Scale;
	Parms.Rotate = Rotate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    SourceImage                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quality                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWantColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseGpu                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextureRotationDirectionRotate                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AppleImageUtilsBaseAsyncTaskBlueprintProxy", "CreateProxyObjectForConvertToHEIF");

	Params::UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Params Parms{};

	Parms.SourceImage = SourceImage;
	Parms.Quality = Quality;
	Parms.bWantColor = bWantColor;
	Parms.bUseGpu = bUseGpu;
	Parms.Scale = Scale;
	Parms.Rotate = Rotate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


