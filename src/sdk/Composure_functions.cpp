#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Composure.CompEditorImagePreviewInterface
// (None)

class UClass* ICompEditorImagePreviewInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompEditorImagePreviewInterface");

	return Clss;
}


// CompEditorImagePreviewInterface Composure.Default__CompEditorImagePreviewInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICompEditorImagePreviewInterface* ICompEditorImagePreviewInterface::GetDefaultObj()
{
	static class ICompEditorImagePreviewInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICompEditorImagePreviewInterface*>(ICompEditorImagePreviewInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompImageColorPickerInterface
// (None)

class UClass* ICompImageColorPickerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompImageColorPickerInterface");

	return Clss;
}


// CompImageColorPickerInterface Composure.Default__CompImageColorPickerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICompImageColorPickerInterface* ICompImageColorPickerInterface::GetDefaultObj()
{
	static class ICompImageColorPickerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICompImageColorPickerInterface*>(ICompImageColorPickerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.ComposurePipelineBaseActor
// (Actor)

class UClass* AComposurePipelineBaseActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePipelineBaseActor");

	return Clss;
}


// ComposurePipelineBaseActor Composure.Default__ComposurePipelineBaseActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AComposurePipelineBaseActor* AComposurePipelineBaseActor::GetDefaultObj()
{
	static class AComposurePipelineBaseActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AComposurePipelineBaseActor*>(AComposurePipelineBaseActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposurePipelineBaseActor.SetAutoRunChildrenAndSelf
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAutoRunChildAndSelf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AComposurePipelineBaseActor::SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePipelineBaseActor", "SetAutoRunChildrenAndSelf");

	Params::AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Params Parms{};

	Parms.bAutoRunChildAndSelf = bAutoRunChildAndSelf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposurePipelineBaseActor.SetAutoRun
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewAutoRunVal                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AComposurePipelineBaseActor::SetAutoRun(bool bNewAutoRunVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePipelineBaseActor", "SetAutoRun");

	Params::AComposurePipelineBaseActor_SetAutoRun_Params Parms{};

	Parms.bNewAutoRunVal = bNewAutoRunVal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposurePipelineBaseActor.IsActivelyRunning
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AComposurePipelineBaseActor::IsActivelyRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePipelineBaseActor", "IsActivelyRunning");

	Params::AComposurePipelineBaseActor_IsActivelyRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposurePipelineBaseActor.EnqueueRendering
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCameraCutThisFrame                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AComposurePipelineBaseActor::EnqueueRendering(bool bCameraCutThisFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePipelineBaseActor", "EnqueueRendering");

	Params::AComposurePipelineBaseActor_EnqueueRendering_Params Parms{};

	Parms.bCameraCutThisFrame = bCameraCutThisFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposurePipelineBaseActor.AreChildrenAndSelfAutoRun
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AComposurePipelineBaseActor::AreChildrenAndSelfAutoRun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePipelineBaseActor", "AreChildrenAndSelfAutoRun");

	Params::AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.CompositingElement
// (Actor)

class UClass* ACompositingElement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingElement");

	return Clss;
}


// CompositingElement Composure.Default__CompositingElement
// (Public, ClassDefaultObject, ArchetypeObject)

class ACompositingElement* ACompositingElement::GetDefaultObj()
{
	static class ACompositingElement* Default = nullptr;

	if (!Default)
		Default = static_cast<ACompositingElement*>(ACompositingElement::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingElement.SetTargetCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACameraActor*                NewCameraActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACompositingElement::SetTargetCamera(class ACameraActor* NewCameraActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "SetTargetCamera");

	Params::ACompositingElement_SetTargetCamera_Params Parms{};

	Parms.NewCameraActor = NewCameraActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElement.SetRenderResolution
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint                   NewResolution                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACompositingElement::SetRenderResolution(const struct FIntPoint& NewResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "SetRenderResolution");

	Params::ACompositingElement_SetRenderResolution_Params Parms{};

	Parms.NewResolution = NewResolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElement.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewOpacity                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACompositingElement::SetOpacity(float NewOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "SetOpacity");

	Params::ACompositingElement_SetOpacity_Params Parms{};

	Parms.NewOpacity = NewOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElement.SetElementName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACompositingElement::SetElementName(class FName NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "SetElementName");

	Params::ACompositingElement_SetElementName_Params Parms{};

	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElement.SetEditorColorPickingTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      PickingTarget                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACompositingElement::SetEditorColorPickingTarget(class UTextureRenderTarget2D* PickingTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "SetEditorColorPickingTarget");

	Params::ACompositingElement_SetEditorColorPickingTarget_Params Parms{};

	Parms.PickingTarget = PickingTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElement.SetEditorColorPickerDisplayImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    PickerDisplayImage                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACompositingElement::SetEditorColorPickerDisplayImage(class UTexture* PickerDisplayImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "SetEditorColorPickerDisplayImage");

	Params::ACompositingElement_SetEditorColorPickerDisplayImage_Params Parms{};

	Parms.PickerDisplayImage = PickerDisplayImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElement.RequestNamedRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ReferenceName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RenderPercentage                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETargetUsageFlags       UsageTag                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ACompositingElement::RequestNamedRenderTarget(class FName ReferenceName, float RenderPercentage, enum class ETargetUsageFlags UsageTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "RequestNamedRenderTarget");

	Params::ACompositingElement_RequestNamedRenderTarget_Params Parms{};

	Parms.ReferenceName = ReferenceName;
	Parms.RenderPercentage = RenderPercentage;
	Parms.UsageTag = UsageTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.RenderCompositingMaterialToTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCompositingMaterial        CompMaterial                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ResultLookupName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ACompositingElement::RenderCompositingMaterialToTarget(struct FCompositingMaterial& CompMaterial, class UTextureRenderTarget2D* RenderTarget, class FName ResultLookupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "RenderCompositingMaterialToTarget");

	Params::ACompositingElement_RenderCompositingMaterialToTarget_Params Parms{};

	Parms.CompMaterial = CompMaterial;
	Parms.RenderTarget = RenderTarget;
	Parms.ResultLookupName = ResultLookupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.RenderCompositingMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCompositingMaterial        CompMaterial                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              RenderScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ResultLookupName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETargetUsageFlags       UsageTag                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* ACompositingElement::RenderCompositingMaterial(struct FCompositingMaterial& CompMaterial, float RenderScale, class FName ResultLookupName, enum class ETargetUsageFlags UsageTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "RenderCompositingMaterial");

	Params::ACompositingElement_RenderCompositingMaterial_Params Parms{};

	Parms.CompMaterial = CompMaterial;
	Parms.RenderScale = RenderScale;
	Parms.ResultLookupName = ResultLookupName;
	Parms.UsageTag = UsageTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.RenderCompElement
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCameraCutThisFrame                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* ACompositingElement::RenderCompElement(bool bCameraCutThisFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "RenderCompElement");

	Params::ACompositingElement_RenderCompElement_Params Parms{};

	Parms.bCameraCutThisFrame = bCameraCutThisFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.ReleaseOwnedTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      OwnedTarget                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACompositingElement::ReleaseOwnedTarget(class UTextureRenderTarget2D* OwnedTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "ReleaseOwnedTarget");

	Params::ACompositingElement_ReleaseOwnedTarget_Params Parms{};

	Parms.OwnedTarget = OwnedTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.RegisterPassResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ReferenceName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    PassResult                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetAsLatestRenderResult                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACompositingElement::RegisterPassResult(class FName ReferenceName, class UTexture* PassResult, bool bSetAsLatestRenderResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "RegisterPassResult");

	Params::ACompositingElement_RegisterPassResult_Params Parms{};

	Parms.ReferenceName = ReferenceName;
	Parms.PassResult = PassResult;
	Parms.bSetAsLatestRenderResult = bSetAsLatestRenderResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElement.IsSubElement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACompositingElement::IsSubElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "IsSubElement");

	Params::ACompositingElement_IsSubElement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetTransformsList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCompositingElementTransform*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UCompositingElementTransform*> ACompositingElement::GetTransformsList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetTransformsList");

	Params::ACompositingElement_GetTransformsList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetRenderResolution
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntPoint ACompositingElement::GetRenderResolution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetRenderResolution");

	Params::ACompositingElement_GetRenderResolution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetRenderPriority
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ACompositingElement::GetRenderPriority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetRenderPriority");

	Params::ACompositingElement_GetRenderPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetOutputsList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCompositingElementOutput*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UCompositingElementOutput*> ACompositingElement::GetOutputsList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetOutputsList");

	Params::ACompositingElement_GetOutputsList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetOpacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ACompositingElement::GetOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetOpacity");

	Params::ACompositingElement_GetOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetLatestRenderResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* ACompositingElement::GetLatestRenderResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetLatestRenderResult");

	Params::ACompositingElement_GetLatestRenderResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetInputsList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCompositingElementInput*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UCompositingElementInput*> ACompositingElement::GetInputsList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetInputsList");

	Params::ACompositingElement_GetInputsList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetElementParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACompositingElement*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ACompositingElement* ACompositingElement::GetElementParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetElementParent");

	Params::ACompositingElement_GetElementParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetCompElementName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ACompositingElement::GetCompElementName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetCompElementName");

	Params::ACompositingElement_GetCompElementName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.GetChildElements
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ACompositingElement*> ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ACompositingElement*> ACompositingElement::GetChildElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "GetChildElements");

	Params::ACompositingElement_GetChildElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.FindTransformPass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCompositingElementTransform>TransformType                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    PassResult                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OptionalPassName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementTransform*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementTransform* ACompositingElement::FindTransformPass(TSubclassOf<class UCompositingElementTransform> TransformType, class UTexture** PassResult, class FName OptionalPassName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "FindTransformPass");

	Params::ACompositingElement_FindTransformPass_Params Parms{};

	Parms.TransformType = TransformType;
	Parms.OptionalPassName = OptionalPassName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PassResult != nullptr)
		*PassResult = Parms.PassResult;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.FindTargetCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACameraActor*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ACameraActor* ACompositingElement::FindTargetCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "FindTargetCamera");

	Params::ACompositingElement_FindTargetCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.FindOutputPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCompositingElementOutput>OutputType                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OptionalPassName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementOutput*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementOutput* ACompositingElement::FindOutputPass(TSubclassOf<class UCompositingElementOutput> OutputType, class FName OptionalPassName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "FindOutputPass");

	Params::ACompositingElement_FindOutputPass_Params Parms{};

	Parms.OutputType = OutputType;
	Parms.OptionalPassName = OptionalPassName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.FindNamedRenderResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PassName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSearchSubElements                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* ACompositingElement::FindNamedRenderResult(class FName PassName, bool bSearchSubElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "FindNamedRenderResult");

	Params::ACompositingElement_FindNamedRenderResult_Params Parms{};

	Parms.PassName = PassName;
	Parms.bSearchSubElements = bSearchSubElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.FindInputPass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCompositingElementInput>InputType                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    PassResult                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OptionalPassName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementInput*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementInput* ACompositingElement::FindInputPass(TSubclassOf<class UCompositingElementInput> InputType, class UTexture** PassResult, class FName OptionalPassName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "FindInputPass");

	Params::ACompositingElement_FindInputPass_Params Parms{};

	Parms.InputType = InputType;
	Parms.OptionalPassName = OptionalPassName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PassResult != nullptr)
		*PassResult = Parms.PassResult;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.DeletePass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCompositingElementPass*     PassToDelete                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACompositingElement::DeletePass(class UCompositingElementPass* PassToDelete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "DeletePass");

	Params::ACompositingElement_DeletePass_Params Parms{};

	Parms.PassToDelete = PassToDelete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.CreateNewTransformPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PassName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCompositingElementTransform>TransformType                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementTransform*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementTransform* ACompositingElement::CreateNewTransformPass(class FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "CreateNewTransformPass");

	Params::ACompositingElement_CreateNewTransformPass_Params Parms{};

	Parms.PassName = PassName;
	Parms.TransformType = TransformType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.CreateNewOutputPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PassName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCompositingElementOutput>OutputType                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementOutput*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementOutput* ACompositingElement::CreateNewOutputPass(class FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "CreateNewOutputPass");

	Params::ACompositingElement_CreateNewOutputPass_Params Parms{};

	Parms.PassName = PassName;
	Parms.OutputType = OutputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.CreateNewInputPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PassName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCompositingElementInput>InputType                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementInput*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementInput* ACompositingElement::CreateNewInputPass(class FName PassName, TSubclassOf<class UCompositingElementInput> InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "CreateNewInputPass");

	Params::ACompositingElement_CreateNewInputPass_Params Parms{};

	Parms.PassName = PassName;
	Parms.InputType = InputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.AddNewTransformPass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        PassName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCompositingElementTransform>TransformType                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementTransform*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementTransform* ACompositingElement::AddNewTransformPass(class FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "AddNewTransformPass");

	Params::ACompositingElement_AddNewTransformPass_Params Parms{};

	Parms.PassName = PassName;
	Parms.TransformType = TransformType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.AddNewOutputPass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        PassName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCompositingElementOutput>OutputType                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementOutput*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementOutput* ACompositingElement::AddNewOutputPass(class FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "AddNewOutputPass");

	Params::ACompositingElement_AddNewOutputPass_Params Parms{};

	Parms.PassName = PassName;
	Parms.OutputType = OutputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElement.AddNewInputPass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        PassName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCompositingElementInput>InputType                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingElementInput*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingElementInput* ACompositingElement::AddNewInputPass(class FName PassName, TSubclassOf<class UCompositingElementInput> InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElement", "AddNewInputPass");

	Params::ACompositingElement_AddNewInputPass_Params Parms{};

	Parms.PassName = PassName;
	Parms.InputType = InputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.CompositingCaptureBase
// (Actor)

class UClass* ACompositingCaptureBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingCaptureBase");

	return Clss;
}


// CompositingCaptureBase Composure.Default__CompositingCaptureBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ACompositingCaptureBase* ACompositingCaptureBase::GetDefaultObj()
{
	static class ACompositingCaptureBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ACompositingCaptureBase*>(ACompositingCaptureBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingCaptureBase.UpdateDistortion
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ACompositingCaptureBase::UpdateDistortion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingCaptureBase", "UpdateDistortion");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Composure.CompositingPickerAsyncTask
// (None)

class UClass* UCompositingPickerAsyncTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingPickerAsyncTask");

	return Clss;
}


// CompositingPickerAsyncTask Composure.Default__CompositingPickerAsyncTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingPickerAsyncTask* UCompositingPickerAsyncTask::GetDefaultObj()
{
	static class UCompositingPickerAsyncTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingPickerAsyncTask*>(UCompositingPickerAsyncTask::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingPickerAsyncTask.OpenCompositingPicker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      PickerTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    DisplayImage                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        WindowTitle                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bAverageColorOnDrag                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseImplicitGamma                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCompositingPickerAsyncTask* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCompositingPickerAsyncTask* UCompositingPickerAsyncTask::OpenCompositingPicker(class UTextureRenderTarget2D* PickerTarget, class UTexture* DisplayImage, class FText WindowTitle, bool bAverageColorOnDrag, bool bUseImplicitGamma)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingPickerAsyncTask", "OpenCompositingPicker");

	Params::UCompositingPickerAsyncTask_OpenCompositingPicker_Params Parms{};

	Parms.PickerTarget = PickerTarget;
	Parms.DisplayImage = DisplayImage;
	Parms.WindowTitle = WindowTitle;
	Parms.bAverageColorOnDrag = bAverageColorOnDrag;
	Parms.bUseImplicitGamma = bUseImplicitGamma;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.CompositingElementPass
// (None)

class UClass* UCompositingElementPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingElementPass");

	return Clss;
}


// CompositingElementPass Composure.Default__CompositingElementPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingElementPass* UCompositingElementPass::GetDefaultObj()
{
	static class UCompositingElementPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingElementPass*>(UCompositingElementPass::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingElementPass.SetPassEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSetEnabledTo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompositingElementPass::SetPassEnabled(bool bSetEnabledTo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "SetPassEnabled");

	Params::UCompositingElementPass_SetPassEnabled_Params Parms{};

	Parms.bSetEnabledTo = bSetEnabledTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElementPass.Reset
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UCompositingElementPass::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElementPass.RequestRenderTarget
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint                   Dimensions                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextureRenderTargetFormatFormat                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UCompositingElementPass::RequestRenderTarget(const struct FIntPoint& Dimensions, enum class ETextureRenderTargetFormat Format)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "RequestRenderTarget");

	Params::UCompositingElementPass_RequestRenderTarget_Params Parms{};

	Parms.Dimensions = Dimensions;
	Parms.Format = Format;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElementPass.RequestNativelyFormattedTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              RenderScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UCompositingElementPass::RequestNativelyFormattedTarget(float RenderScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "RequestNativelyFormattedTarget");

	Params::UCompositingElementPass_RequestNativelyFormattedTarget_Params Parms{};

	Parms.RenderScale = RenderScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElementPass.ReleaseRenderTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      AssignedTarget                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCompositingElementPass::ReleaseRenderTarget(class UTextureRenderTarget2D* AssignedTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "ReleaseRenderTarget");

	Params::UCompositingElementPass_ReleaseRenderTarget_Params Parms{};

	Parms.AssignedTarget = AssignedTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElementPass.OnFrameEnd
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UCompositingElementPass::OnFrameEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "OnFrameEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElementPass.OnFrameBegin
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCameraCutThisFrame                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompositingElementPass::OnFrameBegin(bool bCameraCutThisFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "OnFrameBegin");

	Params::UCompositingElementPass_OnFrameBegin_Params Parms{};

	Parms.bCameraCutThisFrame = bCameraCutThisFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElementPass.OnEnabled
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCompositingElementPass::OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "OnEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElementPass.OnDisabled
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCompositingElementPass::OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "OnDisabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElementPass.IsPassEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCompositingElementPass::IsPassEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementPass", "IsPassEnabled");

	Params::UCompositingElementPass_IsPassEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.CompositingElementInput
// (None)

class UClass* UCompositingElementInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingElementInput");

	return Clss;
}


// CompositingElementInput Composure.Default__CompositingElementInput
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingElementInput* UCompositingElementInput::GetDefaultObj()
{
	static class UCompositingElementInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingElementInput*>(UCompositingElementInput::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingElementInput.GenerateInput
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UCompositingElementInput::GenerateInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementInput", "GenerateInput");

	Params::UCompositingElementInput_GenerateInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.CompositingMediaInput
// (None)

class UClass* UCompositingMediaInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingMediaInput");

	return Clss;
}


// CompositingMediaInput Composure.Default__CompositingMediaInput
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingMediaInput* UCompositingMediaInput::GetDefaultObj()
{
	static class UCompositingMediaInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingMediaInput*>(UCompositingMediaInput::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.MediaTextureCompositingInput
// (None)

class UClass* UMediaTextureCompositingInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaTextureCompositingInput");

	return Clss;
}


// MediaTextureCompositingInput Composure.Default__MediaTextureCompositingInput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaTextureCompositingInput* UMediaTextureCompositingInput::GetDefaultObj()
{
	static class UMediaTextureCompositingInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaTextureCompositingInput*>(UMediaTextureCompositingInput::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompositingInputInterface
// (None)

class UClass* ICompositingInputInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingInputInterface");

	return Clss;
}


// CompositingInputInterface Composure.Default__CompositingInputInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICompositingInputInterface* ICompositingInputInterface::GetDefaultObj()
{
	static class ICompositingInputInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICompositingInputInterface*>(ICompositingInputInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingInputInterface.OnFrameEnd
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCompositingInputInterfaceProxy*Proxy                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICompositingInputInterface::OnFrameEnd(class UCompositingInputInterfaceProxy* Proxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingInputInterface", "OnFrameEnd");

	Params::ICompositingInputInterface_OnFrameEnd_Params Parms{};

	Parms.Proxy = Proxy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingInputInterface.OnFrameBegin
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCompositingInputInterfaceProxy*Proxy                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCameraCutThisFrame                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICompositingInputInterface::OnFrameBegin(class UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingInputInterface", "OnFrameBegin");

	Params::ICompositingInputInterface_OnFrameBegin_Params Parms{};

	Parms.Proxy = Proxy;
	Parms.bCameraCutThisFrame = bCameraCutThisFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingInputInterface.GenerateInput
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCompositingInputInterfaceProxy*Proxy                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* ICompositingInputInterface::GenerateInput(class UCompositingInputInterfaceProxy* Proxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingInputInterface", "GenerateInput");

	Params::ICompositingInputInterface_GenerateInput_Params Parms{};

	Parms.Proxy = Proxy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.CompositingInputInterfaceProxy
// (None)

class UClass* UCompositingInputInterfaceProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingInputInterfaceProxy");

	return Clss;
}


// CompositingInputInterfaceProxy Composure.Default__CompositingInputInterfaceProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingInputInterfaceProxy* UCompositingInputInterfaceProxy::GetDefaultObj()
{
	static class UCompositingInputInterfaceProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingInputInterfaceProxy*>(UCompositingInputInterfaceProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompositingElementOutput
// (None)

class UClass* UCompositingElementOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingElementOutput");

	return Clss;
}


// CompositingElementOutput Composure.Default__CompositingElementOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingElementOutput* UCompositingElementOutput::GetDefaultObj()
{
	static class UCompositingElementOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingElementOutput*>(UCompositingElementOutput::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingElementOutput.RelayOutput
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    FinalResult                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComposurePostProcessingPassProxy*PostProcessProxy                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompositingElementOutput::RelayOutput(class UTexture* FinalResult, class UComposurePostProcessingPassProxy* PostProcessProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementOutput", "RelayOutput");

	Params::UCompositingElementOutput_RelayOutput_Params Parms{};

	Parms.FinalResult = FinalResult;
	Parms.PostProcessProxy = PostProcessProxy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Composure.ColorConverterOutputPass
// (None)

class UClass* UColorConverterOutputPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorConverterOutputPass");

	return Clss;
}


// ColorConverterOutputPass Composure.Default__ColorConverterOutputPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UColorConverterOutputPass* UColorConverterOutputPass::GetDefaultObj()
{
	static class UColorConverterOutputPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorConverterOutputPass*>(UColorConverterOutputPass::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompositingMediaCaptureOutput
// (None)

class UClass* UCompositingMediaCaptureOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingMediaCaptureOutput");

	return Clss;
}


// CompositingMediaCaptureOutput Composure.Default__CompositingMediaCaptureOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingMediaCaptureOutput* UCompositingMediaCaptureOutput::GetDefaultObj()
{
	static class UCompositingMediaCaptureOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingMediaCaptureOutput*>(UCompositingMediaCaptureOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.RenderTargetCompositingOutput
// (None)

class UClass* URenderTargetCompositingOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RenderTargetCompositingOutput");

	return Clss;
}


// RenderTargetCompositingOutput Composure.Default__RenderTargetCompositingOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class URenderTargetCompositingOutput* URenderTargetCompositingOutput::GetDefaultObj()
{
	static class URenderTargetCompositingOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<URenderTargetCompositingOutput*>(URenderTargetCompositingOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.EXRFileCompositingOutput
// (None)

class UClass* UEXRFileCompositingOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EXRFileCompositingOutput");

	return Clss;
}


// EXRFileCompositingOutput Composure.Default__EXRFileCompositingOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UEXRFileCompositingOutput* UEXRFileCompositingOutput::GetDefaultObj()
{
	static class UEXRFileCompositingOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UEXRFileCompositingOutput*>(UEXRFileCompositingOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompositingElementTransform
// (None)

class UClass* UCompositingElementTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingElementTransform");

	return Clss;
}


// CompositingElementTransform Composure.Default__CompositingElementTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingElementTransform* UCompositingElementTransform::GetDefaultObj()
{
	static class UCompositingElementTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingElementTransform*>(UCompositingElementTransform::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingElementTransform.FindNamedPrePassResult
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        PassLookupName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UCompositingElementTransform::FindNamedPrePassResult(class FName PassLookupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementTransform", "FindNamedPrePassResult");

	Params::UCompositingElementTransform_FindNamedPrePassResult_Params Parms{};

	Parms.PassLookupName = PassLookupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElementTransform.ApplyTransform
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    Input                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComposurePostProcessingPassProxy*PostProcessProxy                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACameraActor*                TargetCamera                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UCompositingElementTransform::ApplyTransform(class UTexture* Input, class UComposurePostProcessingPassProxy* PostProcessProxy, class ACameraActor* TargetCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementTransform", "ApplyTransform");

	Params::UCompositingElementTransform_ApplyTransform_Params Parms{};

	Parms.Input = Input;
	Parms.PostProcessProxy = PostProcessProxy;
	Parms.TargetCamera = TargetCamera;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.CompositingPostProcessPass
// (None)

class UClass* UCompositingPostProcessPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingPostProcessPass");

	return Clss;
}


// CompositingPostProcessPass Composure.Default__CompositingPostProcessPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingPostProcessPass* UCompositingPostProcessPass::GetDefaultObj()
{
	static class UCompositingPostProcessPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingPostProcessPass*>(UCompositingPostProcessPass::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompositingElementMaterialPass
// (None)

class UClass* UCompositingElementMaterialPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingElementMaterialPass");

	return Clss;
}


// CompositingElementMaterialPass Composure.Default__CompositingElementMaterialPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingElementMaterialPass* UCompositingElementMaterialPass::GetDefaultObj()
{
	static class UCompositingElementMaterialPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingElementMaterialPass*>(UCompositingElementMaterialPass::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingElementMaterialPass.SetParameterMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TextureParamName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ComposureLayerName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCompositingElementMaterialPass::SetParameterMapping(class FName TextureParamName, class FName ComposureLayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementMaterialPass", "SetParameterMapping");

	Params::UCompositingElementMaterialPass_SetParameterMapping_Params Parms{};

	Parms.TextureParamName = TextureParamName;
	Parms.ComposureLayerName = ComposureLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.CompositingElementMaterialPass.SetMaterialInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompositingElementMaterialPass::SetMaterialInterface(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementMaterialPass", "SetMaterialInterface");

	Params::UCompositingElementMaterialPass_SetMaterialInterface_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.CompositingElementMaterialPass.ApplyMaterialParams
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompositingElementMaterialPass::ApplyMaterialParams(class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingElementMaterialPass", "ApplyMaterialParams");

	Params::UCompositingElementMaterialPass_ApplyMaterialParams_Params Parms{};

	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Composure.CompositingTonemapPass
// (None)

class UClass* UCompositingTonemapPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingTonemapPass");

	return Clss;
}


// CompositingTonemapPass Composure.Default__CompositingTonemapPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingTonemapPass* UCompositingTonemapPass::GetDefaultObj()
{
	static class UCompositingTonemapPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingTonemapPass*>(UCompositingTonemapPass::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.MultiPassChromaKeyer
// (None)

class UClass* UMultiPassChromaKeyer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiPassChromaKeyer");

	return Clss;
}


// MultiPassChromaKeyer Composure.Default__MultiPassChromaKeyer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiPassChromaKeyer* UMultiPassChromaKeyer::GetDefaultObj()
{
	static class UMultiPassChromaKeyer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiPassChromaKeyer*>(UMultiPassChromaKeyer::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.MultiPassDespill
// (None)

class UClass* UMultiPassDespill::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiPassDespill");

	return Clss;
}


// MultiPassDespill Composure.Default__MultiPassDespill
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiPassDespill* UMultiPassDespill::GetDefaultObj()
{
	static class UMultiPassDespill* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiPassDespill*>(UMultiPassDespill::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.AlphaTransformPass
// (None)

class UClass* UAlphaTransformPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlphaTransformPass");

	return Clss;
}


// AlphaTransformPass Composure.Default__AlphaTransformPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UAlphaTransformPass* UAlphaTransformPass::GetDefaultObj()
{
	static class UAlphaTransformPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlphaTransformPass*>(UAlphaTransformPass::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompositingOpenColorIOPass
// (None)

class UClass* UCompositingOpenColorIOPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingOpenColorIOPass");

	return Clss;
}


// CompositingOpenColorIOPass Composure.Default__CompositingOpenColorIOPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositingOpenColorIOPass* UCompositingOpenColorIOPass::GetDefaultObj()
{
	static class UCompositingOpenColorIOPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositingOpenColorIOPass*>(UCompositingOpenColorIOPass::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.ComposureBlueprintLibrary
// (None)

class UClass* UComposureBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposureBlueprintLibrary");

	return Clss;
}


// ComposureBlueprintLibrary Composure.Default__ComposureBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposureBlueprintLibrary* UComposureBlueprintLibrary::GetDefaultObj()
{
	static class UComposureBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposureBlueprintLibrary*>(UComposureBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FComposureUVMapSettings     UVMapSettings                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::SetUVMapSettingsToMaterialParameters(struct FComposureUVMapSettings& UVMapSettings, class UMaterialInstanceDynamic* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "SetUVMapSettingsToMaterialParameters");

	Params::UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Params Parms{};

	Parms.UVMapSettings = UVMapSettings;
	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposureBlueprintLibrary.RequestRedrawComposureViewport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UComposureBlueprintLibrary::RequestRedrawComposureViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "RequestRedrawComposureViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposureBlueprintLibrary.RenameComposureElement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        OriginalElementName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NewElementName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComposureBlueprintLibrary::RenameComposureElement(class FName OriginalElementName, class FName NewElementName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "RenameComposureElement");

	Params::UComposureBlueprintLibrary_RenameComposureElement_Params Parms{};

	Parms.OriginalElementName = OriginalElementName;
	Parms.NewElementName = NewElementName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposureBlueprintLibrary.RefreshComposureElementList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UComposureBlueprintLibrary::RefreshComposureElementList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "RefreshComposureElementList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposureBlueprintLibrary.IsComposureElementDrawing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ACompositingElement*         CompElement                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComposureBlueprintLibrary::IsComposureElementDrawing(class ACompositingElement* CompElement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "IsComposureElementDrawing");

	Params::UComposureBlueprintLibrary_IsComposureElementDrawing_Params Parms{};

	Parms.CompElement = CompElement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::InvertUVDisplacementMapEncodingParameters(struct FVector2D& In, struct FVector2D* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "InvertUVDisplacementMapEncodingParameters");

	Params::UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ChromaticAberrationAmount                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   RedGreenUVFactors                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, struct FVector2D* RedGreenUVFactors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "GetRedGreenUVFactorsFromChromaticAberration");

	Params::UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Params Parms{};

	Parms.ChromaticAberrationAmount = ChromaticAberrationAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RedGreenUVFactors != nullptr)
		*RedGreenUVFactors = std::move(Parms.RedGreenUVFactors);

}


// Function Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComposurePostMoveSettings  PostMoveSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              HorizontalFOVAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AspectRatio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMatrix                     ProjectionMatrix                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::GetProjectionMatrixFromPostMoveSettings(struct FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, struct FMatrix* ProjectionMatrix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "GetProjectionMatrixFromPostMoveSettings");

	Params::UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Params Parms{};

	Parms.PostMoveSettings = PostMoveSettings;
	Parms.HorizontalFOVAngle = HorizontalFOVAngle;
	Parms.AspectRatio = AspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProjectionMatrix != nullptr)
		*ProjectionMatrix = std::move(Parms.ProjectionMatrix);

}


// Function Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DisplayGamma                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::GetPlayerDisplayGamma(class APlayerCameraManager* PlayerCameraManager, float* DisplayGamma)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "GetPlayerDisplayGamma");

	Params::UComposureBlueprintLibrary_GetPlayerDisplayGamma_Params Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DisplayGamma != nullptr)
		*DisplayGamma = Parms.DisplayGamma;

}


// Function Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComposurePostMoveSettings  PostMoveSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              AspectRatio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMatrix                     CropingUVTransformationMatrix                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FMatrix                     UncropingUVTransformationMatrix                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::GetCroppingUVTransformationMatrixFromPostMoveSettings(struct FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, struct FMatrix* CropingUVTransformationMatrix, struct FMatrix* UncropingUVTransformationMatrix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "GetCroppingUVTransformationMatrixFromPostMoveSettings");

	Params::UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Params Parms{};

	Parms.PostMoveSettings = PostMoveSettings;
	Parms.AspectRatio = AspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CropingUVTransformationMatrix != nullptr)
		*CropingUVTransformationMatrix = std::move(Parms.CropingUVTransformationMatrix);

	if (UncropingUVTransformationMatrix != nullptr)
		*UncropingUVTransformationMatrix = std::move(Parms.UncropingUVTransformationMatrix);

}


// Function Composure.ComposureBlueprintLibrary.GetComposureElement
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ElementName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACompositingElement*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ACompositingElement* UComposureBlueprintLibrary::GetComposureElement(class FName ElementName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "GetComposureElement");

	Params::UComposureBlueprintLibrary_GetComposureElement_Params Parms{};

	Parms.ElementName = ElementName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposureBlueprintLibrary.DeleteComposureElementAndChildren
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ElementToDelete                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::DeleteComposureElementAndChildren(class FName ElementToDelete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "DeleteComposureElementAndChildren");

	Params::UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Params Parms{};

	Parms.ElementToDelete = ElementToDelete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComposurePlayerCompositingTarget*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UComposurePlayerCompositingTarget* UComposureBlueprintLibrary::CreatePlayerCompositingTarget(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "CreatePlayerCompositingTarget");

	Params::UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposureBlueprintLibrary.CreateComposureElement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ElementName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ACompositingElement>ClassType                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      LevelContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACompositingElement*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ACompositingElement* UComposureBlueprintLibrary::CreateComposureElement(class FName ElementName, TSubclassOf<class ACompositingElement> ClassType, class AActor* LevelContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "CreateComposureElement");

	Params::UComposureBlueprintLibrary_CreateComposureElement_Params Parms{};

	Parms.ElementName = ElementName;
	Parms.ClassType = ClassType;
	Parms.LevelContext = LevelContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*            SrcCamera                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneCaptureComponent2D*    DstCaptureComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OriginalFocalLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverscanFactor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureBlueprintLibrary::CopyCameraSettingsToSceneCapture(class UCameraComponent* SrcCamera, class USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "CopyCameraSettingsToSceneCapture");

	Params::UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Params Parms{};

	Parms.SrcCamera = SrcCamera;
	Parms.DstCaptureComponent = DstCaptureComponent;
	Parms.OriginalFocalLength = OriginalFocalLength;
	Parms.OverscanFactor = OverscanFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposureBlueprintLibrary.AttachComposureElement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ParentName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ChildName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComposureBlueprintLibrary::AttachComposureElement(class FName ParentName, class FName ChildName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureBlueprintLibrary", "AttachComposureElement");

	Params::UComposureBlueprintLibrary_AttachComposureElement_Params Parms{};

	Parms.ParentName = ParentName;
	Parms.ChildName = ChildName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.ComposureGameSettings
// (None)

class UClass* UComposureGameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposureGameSettings");

	return Clss;
}


// ComposureGameSettings Composure.Default__ComposureGameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposureGameSettings* UComposureGameSettings::GetDefaultObj()
{
	static class UComposureGameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposureGameSettings*>(UComposureGameSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.ComposurePostProcessPass
// (SceneComponent)

class UClass* UComposurePostProcessPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePostProcessPass");

	return Clss;
}


// ComposurePostProcessPass Composure.Default__ComposurePostProcessPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposurePostProcessPass* UComposurePostProcessPass::GetDefaultObj()
{
	static class UComposurePostProcessPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposurePostProcessPass*>(UComposurePostProcessPass::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposurePostProcessPass.SetSetupMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposurePostProcessPass::SetSetupMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePostProcessPass", "SetSetupMaterial");

	Params::UComposurePostProcessPass_SetSetupMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposurePostProcessPass.SetOutputRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposurePostProcessPass::SetOutputRenderTarget(class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePostProcessPass", "SetOutputRenderTarget");

	Params::UComposurePostProcessPass_SetOutputRenderTarget_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposurePostProcessPass.GetSetupMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UComposurePostProcessPass::GetSetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePostProcessPass", "GetSetupMaterial");

	Params::UComposurePostProcessPass_GetSetupMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposurePostProcessPass.GetOutputRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UComposurePostProcessPass::GetOutputRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePostProcessPass", "GetOutputRenderTarget");

	Params::UComposurePostProcessPass_GetOutputRenderTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.ComposureLensBloomPass
// (SceneComponent)

class UClass* UComposureLensBloomPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposureLensBloomPass");

	return Clss;
}


// ComposureLensBloomPass Composure.Default__ComposureLensBloomPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposureLensBloomPass* UComposureLensBloomPass::GetDefaultObj()
{
	static class UComposureLensBloomPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposureLensBloomPass*>(UComposureLensBloomPass::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureLensBloomPass::SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureLensBloomPass", "SetTonemapperReplacingMaterial");

	Params::UComposureLensBloomPass_SetTonemapperReplacingMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposureLensBloomPass.BloomToRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComposureLensBloomPass::BloomToRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureLensBloomPass", "BloomToRenderTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Composure.ComposurePostProcessPassPolicy
// (None)

class UClass* UComposurePostProcessPassPolicy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePostProcessPassPolicy");

	return Clss;
}


// ComposurePostProcessPassPolicy Composure.Default__ComposurePostProcessPassPolicy
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposurePostProcessPassPolicy* UComposurePostProcessPassPolicy::GetDefaultObj()
{
	static class UComposurePostProcessPassPolicy* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposurePostProcessPassPolicy*>(UComposurePostProcessPassPolicy::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposurePostProcessPassPolicy.SetupPostProcess
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D*    SceneCapture                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          TonemapperOverride                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposurePostProcessPassPolicy::SetupPostProcess(class USceneCaptureComponent2D* SceneCapture, class UMaterialInterface** TonemapperOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePostProcessPassPolicy", "SetupPostProcess");

	Params::UComposurePostProcessPassPolicy_SetupPostProcess_Params Parms{};

	Parms.SceneCapture = SceneCapture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TonemapperOverride != nullptr)
		*TonemapperOverride = Parms.TonemapperOverride;

}


// Class Composure.ComposureLensBloomPassPolicy
// (None)

class UClass* UComposureLensBloomPassPolicy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposureLensBloomPassPolicy");

	return Clss;
}


// ComposureLensBloomPassPolicy Composure.Default__ComposureLensBloomPassPolicy
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposureLensBloomPassPolicy* UComposureLensBloomPassPolicy::GetDefaultObj()
{
	static class UComposureLensBloomPassPolicy* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposureLensBloomPassPolicy*>(UComposureLensBloomPassPolicy::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.ComposurePlayerCompositingCameraModifier
// (None)

class UClass* UComposurePlayerCompositingCameraModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePlayerCompositingCameraModifier");

	return Clss;
}


// ComposurePlayerCompositingCameraModifier Composure.Default__ComposurePlayerCompositingCameraModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposurePlayerCompositingCameraModifier* UComposurePlayerCompositingCameraModifier::GetDefaultObj()
{
	static class UComposurePlayerCompositingCameraModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposurePlayerCompositingCameraModifier*>(UComposurePlayerCompositingCameraModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.ComposurePlayerCompositingInterface
// (None)

class UClass* IComposurePlayerCompositingInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePlayerCompositingInterface");

	return Clss;
}


// ComposurePlayerCompositingInterface Composure.Default__ComposurePlayerCompositingInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IComposurePlayerCompositingInterface* IComposurePlayerCompositingInterface::GetDefaultObj()
{
	static class IComposurePlayerCompositingInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IComposurePlayerCompositingInterface*>(IComposurePlayerCompositingInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.ComposurePlayerCompositingTarget
// (None)

class UClass* UComposurePlayerCompositingTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePlayerCompositingTarget");

	return Clss;
}


// ComposurePlayerCompositingTarget Composure.Default__ComposurePlayerCompositingTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposurePlayerCompositingTarget* UComposurePlayerCompositingTarget::GetDefaultObj()
{
	static class UComposurePlayerCompositingTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposurePlayerCompositingTarget*>(UComposurePlayerCompositingTarget::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposurePlayerCompositingTarget.SetRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposurePlayerCompositingTarget::SetRenderTarget(class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePlayerCompositingTarget", "SetRenderTarget");

	Params::UComposurePlayerCompositingTarget_SetRenderTarget_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerCameraManager*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerCameraManager* UComposurePlayerCompositingTarget::SetPlayerCameraManager(class APlayerCameraManager* PlayerCameraManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePlayerCompositingTarget", "SetPlayerCameraManager");

	Params::UComposurePlayerCompositingTarget_SetPlayerCameraManager_Params Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerCameraManager* UComposurePlayerCompositingTarget::GetPlayerCameraManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePlayerCompositingTarget", "GetPlayerCameraManager");

	Params::UComposurePlayerCompositingTarget_GetPlayerCameraManager_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.ComposureCompositingTargetComponent
// (None)

class UClass* UComposureCompositingTargetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposureCompositingTargetComponent");

	return Clss;
}


// ComposureCompositingTargetComponent Composure.Default__ComposureCompositingTargetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposureCompositingTargetComponent* UComposureCompositingTargetComponent::GetDefaultObj()
{
	static class UComposureCompositingTargetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposureCompositingTargetComponent*>(UComposureCompositingTargetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposureCompositingTargetComponent.SetDisplayTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    DisplayTexture                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposureCompositingTargetComponent::SetDisplayTexture(class UTexture* DisplayTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureCompositingTargetComponent", "SetDisplayTexture");

	Params::UComposureCompositingTargetComponent_SetDisplayTexture_Params Parms{};

	Parms.DisplayTexture = DisplayTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Composure.ComposureCompositingTargetComponent.GetDisplayTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UComposureCompositingTargetComponent::GetDisplayTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureCompositingTargetComponent", "GetDisplayTexture");

	Params::UComposureCompositingTargetComponent_GetDisplayTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Composure.ComposurePostProcessBlendable
// (None)

class UClass* UComposurePostProcessBlendable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePostProcessBlendable");

	return Clss;
}


// ComposurePostProcessBlendable Composure.Default__ComposurePostProcessBlendable
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposurePostProcessBlendable* UComposurePostProcessBlendable::GetDefaultObj()
{
	static class UComposurePostProcessBlendable* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposurePostProcessBlendable*>(UComposurePostProcessBlendable::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.ComposurePostProcessingPassProxy
// (SceneComponent)

class UClass* UComposurePostProcessingPassProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposurePostProcessingPassProxy");

	return Clss;
}


// ComposurePostProcessingPassProxy Composure.Default__ComposurePostProcessingPassProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposurePostProcessingPassProxy* UComposurePostProcessingPassProxy::GetDefaultObj()
{
	static class UComposurePostProcessingPassProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposurePostProcessingPassProxy*>(UComposurePostProcessingPassProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposurePostProcessingPassProxy.Execute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    PrePassInput                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComposurePostProcessPassPolicy*PostProcessPass                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComposurePostProcessingPassProxy::Execute(class UTexture* PrePassInput, class UComposurePostProcessPassPolicy* PostProcessPass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposurePostProcessingPassProxy", "Execute");

	Params::UComposurePostProcessingPassProxy_Execute_Params Parms{};

	Parms.PrePassInput = PrePassInput;
	Parms.PostProcessPass = PostProcessPass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Composure.ComposureTonemapperPass
// (SceneComponent)

class UClass* UComposureTonemapperPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposureTonemapperPass");

	return Clss;
}


// ComposureTonemapperPass Composure.Default__ComposureTonemapperPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposureTonemapperPass* UComposureTonemapperPass::GetDefaultObj()
{
	static class UComposureTonemapperPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposureTonemapperPass*>(UComposureTonemapperPass::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.ComposureTonemapperPass.TonemapToRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComposureTonemapperPass::TonemapToRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComposureTonemapperPass", "TonemapToRenderTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Composure.ComposureTonemapperPassPolicy
// (None)

class UClass* UComposureTonemapperPassPolicy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComposureTonemapperPassPolicy");

	return Clss;
}


// ComposureTonemapperPassPolicy Composure.Default__ComposureTonemapperPassPolicy
// (Public, ClassDefaultObject, ArchetypeObject)

class UComposureTonemapperPassPolicy* UComposureTonemapperPassPolicy::GetDefaultObj()
{
	static class UComposureTonemapperPassPolicy* Default = nullptr;

	if (!Default)
		Default = static_cast<UComposureTonemapperPassPolicy*>(UComposureTonemapperPassPolicy::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.CompositingTextureLookupTable
// (None)

class UClass* ICompositingTextureLookupTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositingTextureLookupTable");

	return Clss;
}


// CompositingTextureLookupTable Composure.Default__CompositingTextureLookupTable
// (Public, ClassDefaultObject, ArchetypeObject)

class ICompositingTextureLookupTable* ICompositingTextureLookupTable::GetDefaultObj()
{
	static class ICompositingTextureLookupTable* Default = nullptr;

	if (!Default)
		Default = static_cast<ICompositingTextureLookupTable*>(ICompositingTextureLookupTable::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.CompositingTextureLookupTable.FindNamedPassResult
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        LookupName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    OutTexture                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ICompositingTextureLookupTable::FindNamedPassResult(class FName LookupName, class UTexture** OutTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompositingTextureLookupTable", "FindNamedPassResult");

	Params::ICompositingTextureLookupTable_FindNamedPassResult_Params Parms{};

	Parms.LookupName = LookupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTexture != nullptr)
		*OutTexture = Parms.OutTexture;

	return Parms.ReturnValue;

}


// Class Composure.MovieSceneComposureExportClient
// (None)

class UClass* IMovieSceneComposureExportClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComposureExportClient");

	return Clss;
}


// MovieSceneComposureExportClient Composure.Default__MovieSceneComposureExportClient
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneComposureExportClient* IMovieSceneComposureExportClient::GetDefaultObj()
{
	static class IMovieSceneComposureExportClient* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneComposureExportClient*>(IMovieSceneComposureExportClient::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.MovieSceneComposureExportClient.InitializeForExport
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMovieSceneComposureExportInitializer*ExportInitializer                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IMovieSceneComposureExportClient::InitializeForExport(class UMovieSceneComposureExportInitializer* ExportInitializer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneComposureExportClient", "InitializeForExport");

	Params::IMovieSceneComposureExportClient_InitializeForExport_Params Parms{};

	Parms.ExportInitializer = ExportInitializer;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Composure.MovieSceneComposureExportInitializer
// (None)

class UClass* UMovieSceneComposureExportInitializer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComposureExportInitializer");

	return Clss;
}


// MovieSceneComposureExportInitializer Composure.Default__MovieSceneComposureExportInitializer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComposureExportInitializer* UMovieSceneComposureExportInitializer::GetDefaultObj()
{
	static class UMovieSceneComposureExportInitializer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComposureExportInitializer*>(UMovieSceneComposureExportInitializer::StaticClass()->DefaultObject);

	return Default;
}


// Function Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ACompositingElement*         CompShotElement                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneCaptureComponent2D*    SceneCapture                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              BuffersToExport                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMovieSceneComposureExportInitializer::ExportSceneCaptureBuffers(class ACompositingElement* CompShotElement, class USceneCaptureComponent2D* SceneCapture, TArray<class FString>& BuffersToExport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneComposureExportInitializer", "ExportSceneCaptureBuffers");

	Params::UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Params Parms{};

	Parms.CompShotElement = CompShotElement;
	Parms.SceneCapture = SceneCapture;
	Parms.BuffersToExport = BuffersToExport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Composure.MovieSceneComposureExportTrack
// (None)

class UClass* UMovieSceneComposureExportTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComposureExportTrack");

	return Clss;
}


// MovieSceneComposureExportTrack Composure.Default__MovieSceneComposureExportTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComposureExportTrack* UMovieSceneComposureExportTrack::GetDefaultObj()
{
	static class UMovieSceneComposureExportTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComposureExportTrack*>(UMovieSceneComposureExportTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.MovieSceneComposureExportSection
// (None)

class UClass* UMovieSceneComposureExportSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComposureExportSection");

	return Clss;
}


// MovieSceneComposureExportSection Composure.Default__MovieSceneComposureExportSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComposureExportSection* UMovieSceneComposureExportSection::GetDefaultObj()
{
	static class UMovieSceneComposureExportSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComposureExportSection*>(UMovieSceneComposureExportSection::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.MovieSceneComposurePostMoveSettingsSection
// (None)

class UClass* UMovieSceneComposurePostMoveSettingsSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComposurePostMoveSettingsSection");

	return Clss;
}


// MovieSceneComposurePostMoveSettingsSection Composure.Default__MovieSceneComposurePostMoveSettingsSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComposurePostMoveSettingsSection* UMovieSceneComposurePostMoveSettingsSection::GetDefaultObj()
{
	static class UMovieSceneComposurePostMoveSettingsSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComposurePostMoveSettingsSection*>(UMovieSceneComposurePostMoveSettingsSection::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.MovieSceneComposurePostMoveSettingsTrack
// (None)

class UClass* UMovieSceneComposurePostMoveSettingsTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComposurePostMoveSettingsTrack");

	return Clss;
}


// MovieSceneComposurePostMoveSettingsTrack Composure.Default__MovieSceneComposurePostMoveSettingsTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComposurePostMoveSettingsTrack* UMovieSceneComposurePostMoveSettingsTrack::GetDefaultObj()
{
	static class UMovieSceneComposurePostMoveSettingsTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComposurePostMoveSettingsTrack*>(UMovieSceneComposurePostMoveSettingsTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.PlayerViewportCompositingOutput
// (None)

class UClass* UPlayerViewportCompositingOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerViewportCompositingOutput");

	return Clss;
}


// PlayerViewportCompositingOutput Composure.Default__PlayerViewportCompositingOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerViewportCompositingOutput* UPlayerViewportCompositingOutput::GetDefaultObj()
{
	static class UPlayerViewportCompositingOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerViewportCompositingOutput*>(UPlayerViewportCompositingOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Composure.PlayerCompOutputCameraModifier
// (None)

class UClass* UPlayerCompOutputCameraModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCompOutputCameraModifier");

	return Clss;
}


// PlayerCompOutputCameraModifier Composure.Default__PlayerCompOutputCameraModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerCompOutputCameraModifier* UPlayerCompOutputCameraModifier::GetDefaultObj()
{
	static class UPlayerCompOutputCameraModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerCompOutputCameraModifier*>(UPlayerCompOutputCameraModifier::StaticClass()->DefaultObject);

	return Default;
}

}


