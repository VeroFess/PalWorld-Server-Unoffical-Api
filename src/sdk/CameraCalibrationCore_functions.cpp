#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CameraCalibrationCore.CalibrationPointComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UCalibrationPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CalibrationPointComponent");

	return Clss;
}


// CalibrationPointComponent CameraCalibrationCore.Default__CalibrationPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCalibrationPointComponent* UCalibrationPointComponent::GetDefaultObj()
{
	static class UCalibrationPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCalibrationPointComponent*>(UCalibrationPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraCalibrationCore.CalibrationPointComponent.RebuildVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCalibrationPointComponent::RebuildVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CalibrationPointComponent", "RebuildVertices");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InSubpointName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutNamespacedName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCalibrationPointComponent::NamespacedSubpointName(const class FString& InSubpointName, class FString* OutNamespacedName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CalibrationPointComponent", "NamespacedSubpointName");

	Params::UCalibrationPointComponent_NamespacedSubpointName_Params Parms{};

	Parms.InSubpointName = InSubpointName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutNamespacedName != nullptr)
		*OutNamespacedName = std::move(Parms.OutNamespacedName);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InPointName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCalibrationPointComponent::GetWorldLocation(const class FString& InPointName, struct FVector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CalibrationPointComponent", "GetWorldLocation");

	Params::UCalibrationPointComponent_GetWorldLocation_Params Parms{};

	Parms.InPointName = InPointName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutNamespacedNames                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCalibrationPointComponent::GetNamespacedPointNames(TArray<class FString>* OutNamespacedNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CalibrationPointComponent", "GetNamespacedPointNames");

	Params::UCalibrationPointComponent_GetNamespacedPointNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutNamespacedNames != nullptr)
		*OutNamespacedNames = std::move(Parms.OutNamespacedNames);

}


// Class CameraCalibrationCore.CameraCalibrationCheckerboard
// (Actor)

class UClass* ACameraCalibrationCheckerboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraCalibrationCheckerboard");

	return Clss;
}


// CameraCalibrationCheckerboard CameraCalibrationCore.Default__CameraCalibrationCheckerboard
// (Public, ClassDefaultObject, ArchetypeObject)

class ACameraCalibrationCheckerboard* ACameraCalibrationCheckerboard::GetDefaultObj()
{
	static class ACameraCalibrationCheckerboard* Default = nullptr;

	if (!Default)
		Default = static_cast<ACameraCalibrationCheckerboard*>(ACameraCalibrationCheckerboard::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraCalibrationCore.CameraCalibrationCheckerboard.Rebuild
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ACameraCalibrationCheckerboard::Rebuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationCheckerboard", "Rebuild");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CameraCalibrationCore.CameraCalibrationSettings
// (None)

class UClass* UCameraCalibrationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraCalibrationSettings");

	return Clss;
}


// CameraCalibrationSettings CameraCalibrationCore.Default__CameraCalibrationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraCalibrationSettings* UCameraCalibrationSettings::GetDefaultObj()
{
	static class UCameraCalibrationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraCalibrationSettings*>(UCameraCalibrationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.CameraCalibrationEditorSettings
// (None)

class UClass* UCameraCalibrationEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraCalibrationEditorSettings");

	return Clss;
}


// CameraCalibrationEditorSettings CameraCalibrationCore.Default__CameraCalibrationEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraCalibrationEditorSettings* UCameraCalibrationEditorSettings::GetDefaultObj()
{
	static class UCameraCalibrationEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraCalibrationEditorSettings*>(UCameraCalibrationEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.CameraCalibrationStep
// (None)

class UClass* UCameraCalibrationStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraCalibrationStep");

	return Clss;
}


// CameraCalibrationStep CameraCalibrationCore.Default__CameraCalibrationStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraCalibrationStep* UCameraCalibrationStep::GetDefaultObj()
{
	static class UCameraCalibrationStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraCalibrationStep*>(UCameraCalibrationStep::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.CameraCalibrationSubsystem
// (None)

class UClass* UCameraCalibrationSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraCalibrationSubsystem");

	return Clss;
}


// CameraCalibrationSubsystem CameraCalibrationCore.Default__CameraCalibrationSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraCalibrationSubsystem* UCameraCalibrationSubsystem::GetDefaultObj()
{
	static class UCameraCalibrationSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraCalibrationSubsystem*>(UCameraCalibrationSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCineCameraComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*Handler                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraCalibrationSubsystem::UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "UnregisterDistortionModelHandler");

	Params::UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Params Parms{};

	Parms.Component = Component;
	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULensFile*                   NewDefaultLensFile                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraCalibrationSubsystem::SetDefaultLensFile(class ULensFile* NewDefaultLensFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "SetDefaultLensFile");

	Params::UCameraCalibrationSubsystem_SetDefaultLensFile_Params Parms{};

	Parms.NewDefaultLensFile = NewDefaultLensFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ModelName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULensModel>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULensModel> UCameraCalibrationSubsystem::GetRegisteredLensModel(class FName ModelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetRegisteredLensModel");

	Params::UCameraCalibrationSubsystem_GetRegisteredLensModel_Params Parms{};

	Parms.ModelName = ModelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetOverlayMaterialNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UCameraCalibrationSubsystem::GetOverlayMaterialNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetOverlayMaterialNames");

	Params::UCameraCalibrationSubsystem_GetOverlayMaterialNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetOverlayMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OverlayName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UCameraCalibrationSubsystem::GetOverlayMaterial(class FName& OverlayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetOverlayMaterial");

	Params::UCameraCalibrationSubsystem_GetOverlayMaterial_Params Parms{};

	Parms.OverlayName = OverlayName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLensFilePicker             Picker                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class ULensFile*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensFile* UCameraCalibrationSubsystem::GetLensFile(struct FLensFilePicker& Picker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetLensFile");

	Params::UCameraCalibrationSubsystem_GetLensFile_Params Parms{};

	Parms.Picker = Picker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCineCameraComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ULensDistortionModelHandlerBase*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULensDistortionModelHandlerBase*> UCameraCalibrationSubsystem::GetDistortionModelHandlers(class UCineCameraComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetDistortionModelHandlers");

	Params::UCameraCalibrationSubsystem_GetDistortionModelHandlers_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULensFile*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensFile* UCameraCalibrationSubsystem::GetDefaultLensFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetDefaultLensFile");

	Params::UCameraCalibrationSubsystem_GetDefaultLensFile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraNodalOffsetAlgos");

	Params::UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCameraNodalOffsetAlgo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCameraNodalOffsetAlgo> UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgo(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraNodalOffsetAlgo");

	Params::UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraImageCenterAlgos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UCameraCalibrationSubsystem::GetCameraImageCenterAlgos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraImageCenterAlgos");

	Params::UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraImageCenterAlgo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCameraImageCenterAlgo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCameraImageCenterAlgo> UCameraCalibrationSubsystem::GetCameraImageCenterAlgo(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraImageCenterAlgo");

	Params::UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UCameraCalibrationSubsystem::GetCameraCalibrationSteps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraCalibrationSteps");

	Params::UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCameraCalibrationStep>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCameraCalibrationStep> UCameraCalibrationSubsystem::GetCameraCalibrationStep(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraCalibrationStep");

	Params::UCameraCalibrationSubsystem_GetCameraCalibrationStep_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDistortionHandlerPicker    DistortionHandlerPicker                                          (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class ULensModel>      LensModelClass                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindOrCreateDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, TSubclassOf<class ULensModel> LensModelClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "FindOrCreateDistortionModelHandler");

	Params::UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Params Parms{};

	Parms.DistortionHandlerPicker = DistortionHandlerPicker;
	Parms.LensModelClass = LensModelClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDistortionHandlerPicker    DistortionHandlerPicker                                          (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bUpdatePicker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "FindDistortionModelHandler");

	Params::UCameraCalibrationSubsystem_FindDistortionModelHandler_Params Parms{};

	Parms.DistortionHandlerPicker = DistortionHandlerPicker;
	Parms.bUpdatePicker = bUpdatePicker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CameraCalibrationCore.CameraImageCenterAlgo
// (None)

class UClass* UCameraImageCenterAlgo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraImageCenterAlgo");

	return Clss;
}


// CameraImageCenterAlgo CameraCalibrationCore.Default__CameraImageCenterAlgo
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraImageCenterAlgo* UCameraImageCenterAlgo::GetDefaultObj()
{
	static class UCameraImageCenterAlgo* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraImageCenterAlgo*>(UCameraImageCenterAlgo::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.CameraLensDistortionAlgo
// (None)

class UClass* UCameraLensDistortionAlgo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraLensDistortionAlgo");

	return Clss;
}


// CameraLensDistortionAlgo CameraCalibrationCore.Default__CameraLensDistortionAlgo
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraLensDistortionAlgo* UCameraLensDistortionAlgo::GetDefaultObj()
{
	static class UCameraLensDistortionAlgo* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraLensDistortionAlgo*>(UCameraLensDistortionAlgo::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.CameraNodalOffsetAlgo
// (None)

class UClass* UCameraNodalOffsetAlgo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraNodalOffsetAlgo");

	return Clss;
}


// CameraNodalOffsetAlgo CameraCalibrationCore.Default__CameraNodalOffsetAlgo
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraNodalOffsetAlgo* UCameraNodalOffsetAlgo::GetDefaultObj()
{
	static class UCameraNodalOffsetAlgo* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraNodalOffsetAlgo*>(UCameraNodalOffsetAlgo::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.LensComponent
// (None)

class UClass* ULensComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LensComponent");

	return Clss;
}


// LensComponent CameraCalibrationCore.Default__LensComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULensComponent* ULensComponent::GetDefaultObj()
{
	static class ULensComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULensComponent*>(ULensComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraCalibrationCore.LensComponent.WasNodalOffsetAppliedThisTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensComponent::WasNodalOffsetAppliedThisTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "WasNodalOffsetAppliedThisTick");

	Params::ULensComponent_WasNodalOffsetAppliedThisTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.WasDistortionEvaluated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensComponent::WasDistortionEvaluated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "WasDistortionEvaluated");

	Params::ULensComponent_WasDistortionEvaluated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.ShouldApplyNodalOffsetOnTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensComponent::ShouldApplyNodalOffsetOnTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "ShouldApplyNodalOffsetOnTick");

	Params::ULensComponent_ShouldApplyNodalOffsetOnTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.ShouldApplyDistortion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensComponent::ShouldApplyDistortion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "ShouldApplyDistortion");

	Params::ULensComponent_ShouldApplyDistortion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.SetOverscanMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Multiplier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetOverscanMultiplier(float Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetOverscanMultiplier");

	Params::ULensComponent_SetOverscanMultiplier_Params Parms{};

	Parms.Multiplier = Multiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetLensModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class ULensModel>      Model                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetLensModel(TSubclassOf<class ULensModel> Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetLensModel");

	Params::ULensComponent_SetLensModel_Params Parms{};

	Parms.Model = Model;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetLensFilePicker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLensFilePicker             LensFile                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULensComponent::SetLensFilePicker(const struct FLensFilePicker& LensFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetLensFilePicker");

	Params::ULensComponent_SetLensFilePicker_Params Parms{};

	Parms.LensFile = LensFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetLensFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULensFile*                   LensFile                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetLensFile(class ULensFile* LensFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetLensFile");

	Params::ULensComponent_SetLensFile_Params Parms{};

	Parms.LensFile = LensFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetFIZEvaluationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFIZEvaluationMode      Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetFIZEvaluationMode(enum class EFIZEvaluationMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetFIZEvaluationMode");

	Params::ULensComponent_SetFIZEvaluationMode_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetFilmbackOverrideSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFilmbackOverrideSource Setting                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetFilmbackOverrideSetting(enum class EFilmbackOverrideSource Setting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetFilmbackOverrideSetting");

	Params::ULensComponent_SetFilmbackOverrideSetting_Params Parms{};

	Parms.Setting = Setting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetDistortionState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLensDistortionState        State                                                            (Parm, NativeAccessSpecifierPublic)

void ULensComponent::SetDistortionState(const struct FLensDistortionState& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetDistortionState");

	Params::ULensComponent_SetDistortionState_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetDistortionSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDistortionSource       Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetDistortionSource(enum class EDistortionSource Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetDistortionSource");

	Params::ULensComponent_SetDistortionSource_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetCroppedFilmback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCameraFilmbackSettings     Filmback                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULensComponent::SetCroppedFilmback(const struct FCameraFilmbackSettings& Filmback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetCroppedFilmback");

	Params::ULensComponent_SetCroppedFilmback_Params Parms{};

	Parms.Filmback = Filmback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetApplyNodalOffsetOnTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bApplyNodalOffset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetApplyNodalOffsetOnTick(bool bApplyNodalOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetApplyNodalOffsetOnTick");

	Params::ULensComponent_SetApplyNodalOffsetOnTick_Params Parms{};

	Parms.bApplyNodalOffset = bApplyNodalOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.SetApplyDistortion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bApply                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::SetApplyDistortion(bool bApply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "SetApplyDistortion");

	Params::ULensComponent_SetApplyDistortion_Params Parms{};

	Parms.bApply = bApply;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.GetOverscanMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULensComponent::GetOverscanMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetOverscanMultiplier");

	Params::ULensComponent_GetOverscanMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetOriginalFocalLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULensComponent::GetOriginalFocalLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetOriginalFocalLength");

	Params::ULensComponent_GetOriginalFocalLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetLensModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class ULensModel>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULensModel> ULensComponent::GetLensModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetLensModel");

	Params::ULensComponent_GetLensModel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetLensFilePicker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLensFilePicker             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLensFilePicker ULensComponent::GetLensFilePicker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetLensFilePicker");

	Params::ULensComponent_GetLensFilePicker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetLensFileEvaluationInputs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLensFileEvaluationInputs   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLensFileEvaluationInputs ULensComponent::GetLensFileEvaluationInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetLensFileEvaluationInputs");

	Params::ULensComponent_GetLensFileEvaluationInputs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetLensFile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULensFile*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensFile* ULensComponent::GetLensFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetLensFile");

	Params::ULensComponent_GetLensFile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetFIZEvaluationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFIZEvaluationMode      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFIZEvaluationMode ULensComponent::GetFIZEvaluationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetFIZEvaluationMode");

	Params::ULensComponent_GetFIZEvaluationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetFilmbackOverrideSetting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFilmbackOverrideSource ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFilmbackOverrideSource ULensComponent::GetFilmbackOverrideSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetFilmbackOverrideSetting");

	Params::ULensComponent_GetFilmbackOverrideSetting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetDistortionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLensDistortionState        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLensDistortionState ULensComponent::GetDistortionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetDistortionState");

	Params::ULensComponent_GetDistortionState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetDistortionSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDistortionSource       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDistortionSource ULensComponent::GetDistortionSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetDistortionSource");

	Params::ULensComponent_GetDistortionSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.GetCroppedFilmback
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCameraFilmbackSettings     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FCameraFilmbackSettings ULensComponent::GetCroppedFilmback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "GetCroppedFilmback");

	Params::ULensComponent_GetCroppedFilmback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensComponent.ClearDistortionState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULensComponent::ClearDistortionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "ClearDistortionState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensComponent.ApplyNodalOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToOffset                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseManualInputs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ManualFocusInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ManualZoomInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensComponent::ApplyNodalOffset(class USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensComponent", "ApplyNodalOffset");

	Params::ULensComponent_ApplyNodalOffset_Params Parms{};

	Parms.ComponentToOffset = ComponentToOffset;
	Parms.bUseManualInputs = bUseManualInputs;
	Parms.ManualFocusInput = ManualFocusInput;
	Parms.ManualZoomInput = ManualZoomInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CameraCalibrationCore.LensDistortionModelHandlerBase
// (None)

class UClass* ULensDistortionModelHandlerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LensDistortionModelHandlerBase");

	return Clss;
}


// LensDistortionModelHandlerBase CameraCalibrationCore.Default__LensDistortionModelHandlerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ULensDistortionModelHandlerBase* ULensDistortionModelHandlerBase::GetDefaultObj()
{
	static class ULensDistortionModelHandlerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ULensDistortionModelHandlerBase*>(ULensDistortionModelHandlerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLensDistortionState        InNewState                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULensDistortionModelHandlerBase::SetDistortionState(struct FLensDistortionState& InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "SetDistortionState");

	Params::ULensDistortionModelHandlerBase_SetDistortionState_Params Parms{};

	Parms.InNewState = InNewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class ULensModel>      ModelToSupport                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensDistortionModelHandlerBase::IsModelSupported(TSubclassOf<class ULensModel>& ModelToSupport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "IsModelSupported");

	Params::ULensDistortionModelHandlerBase_IsModelSupported_Params Parms{};

	Parms.ModelToSupport = ModelToSupport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetUndistortionDisplacementMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "GetUndistortionDisplacementMap");

	Params::ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetDistortionDisplacementMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "GetDistortionDisplacementMap");

	Params::ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CameraCalibrationCore.LensFile
// (None)

class UClass* ULensFile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LensFile");

	return Clss;
}


// LensFile CameraCalibrationCore.Default__LensFile
// (Public, ClassDefaultObject, ArchetypeObject)

class ULensFile* ULensFile::GetDefaultObj()
{
	static class ULensFile* Default = nullptr;

	if (!Default)
		Default = static_cast<ULensFile*>(ULensFile::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraCalibrationCore.LensFile.RemoveZoomPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELensDataCategory       InDataCategory                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensFile::RemoveZoomPoint(enum class ELensDataCategory InDataCategory, float InFocus, float InZoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "RemoveZoomPoint");

	Params::ULensFile_RemoveZoomPoint_Params Parms{};

	Parms.InDataCategory = InDataCategory;
	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.RemoveFocusPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELensDataCategory       InDataCategory                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensFile::RemoveFocusPoint(enum class ELensDataCategory InDataCategory, float InFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "RemoveFocusPoint");

	Params::ULensFile_RemoveFocusPoint_Params Parms{};

	Parms.InDataCategory = InDataCategory;
	Parms.InFocus = InFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.HasSamples
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELensDataCategory       InDataCategory                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::HasSamples(enum class ELensDataCategory InDataCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "HasSamples");

	Params::ULensFile_HasSamples_Params Parms{};

	Parms.InDataCategory = InDataCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.HasIrisEncoderMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::HasIrisEncoderMapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "HasIrisEncoderMapping");

	Params::ULensFile_HasIrisEncoderMapping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.HasFocusEncoderMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::HasFocusEncoderMapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "HasFocusEncoderMapping");

	Params::ULensFile_HasFocusEncoderMapping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetTotalPointNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELensDataCategory       InDataCategory                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULensFile::GetTotalPointNum(enum class ELensDataCategory InDataCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetTotalPointNum");

	Params::ULensFile_GetTotalPointNum_Params Parms{};

	Parms.InDataCategory = InDataCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetSTMapPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSTMapPointInfo>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSTMapPointInfo> ULensFile::GetSTMapPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetSTMapPoints");

	Params::ULensFile_GetSTMapPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetSTMapPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSTMapInfo                  OutSTMapInfo                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetSTMapPoint(float InFocus, float InZoom, struct FSTMapInfo* OutSTMapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetSTMapPoint");

	Params::ULensFile_GetSTMapPoint_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSTMapInfo != nullptr)
		*OutSTMapInfo = std::move(Parms.OutSTMapInfo);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FNodalOffsetPointInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FNodalOffsetPointInfo> ULensFile::GetNodalOffsetPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetNodalOffsetPoints");

	Params::ULensFile_GetNodalOffsetPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNodalPointOffset           OutNodalPointOffset                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetNodalOffsetPoint(float InFocus, float InZoom, struct FNodalPointOffset* OutNodalPointOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetNodalOffsetPoint");

	Params::ULensFile_GetNodalOffsetPoint_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutNodalPointOffset != nullptr)
		*OutNodalPointOffset = std::move(Parms.OutNodalPointOffset);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetImageCenterPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FImageCenterPointInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FImageCenterPointInfo> ULensFile::GetImageCenterPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetImageCenterPoints");

	Params::ULensFile_GetImageCenterPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetImageCenterPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageCenterInfo            OutImageCenterInfo                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetImageCenterPoint(float InFocus, float InZoom, struct FImageCenterInfo* OutImageCenterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetImageCenterPoint");

	Params::ULensFile_GetImageCenterPoint_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutImageCenterInfo != nullptr)
		*OutImageCenterInfo = std::move(Parms.OutImageCenterInfo);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetFocalLengthPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFocalLengthPointInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFocalLengthPointInfo> ULensFile::GetFocalLengthPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetFocalLengthPoints");

	Params::ULensFile_GetFocalLengthPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetFocalLengthPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo            OutFocalLengthInfo                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetFocalLengthPoint(float InFocus, float InZoom, struct FFocalLengthInfo* OutFocalLengthInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetFocalLengthPoint");

	Params::ULensFile_GetFocalLengthPoint_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFocalLengthInfo != nullptr)
		*OutFocalLengthInfo = std::move(Parms.OutFocalLengthInfo);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetDistortionPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FDistortionPointInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FDistortionPointInfo> ULensFile::GetDistortionPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetDistortionPoints");

	Params::ULensFile_GetDistortionPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.GetDistortionPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDistortionInfo             OutDistortionInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetDistortionPoint(float InFocus, float InZoom, struct FDistortionInfo* OutDistortionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "GetDistortionPoint");

	Params::ULensFile_GetDistortionPoint_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDistortionInfo != nullptr)
		*OutDistortionInfo = std::move(Parms.OutDistortionInfo);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.EvaluateNormalizedIris
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InNormalizedValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULensFile::EvaluateNormalizedIris(float InNormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "EvaluateNormalizedIris");

	Params::ULensFile_EvaluateNormalizedIris_Params Parms{};

	Parms.InNormalizedValue = InNormalizedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.EvaluateNormalizedFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InNormalizedValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULensFile::EvaluateNormalizedFocus(float InNormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "EvaluateNormalizedFocus");

	Params::ULensFile_EvaluateNormalizedFocus_Params Parms{};

	Parms.InNormalizedValue = InNormalizedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.EvaluateNodalPointOffset
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNodalPointOffset           OutEvaluatedValue                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateNodalPointOffset(float InFocus, float InZoom, struct FNodalPointOffset* OutEvaluatedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "EvaluateNodalPointOffset");

	Params::ULensFile_EvaluateNodalPointOffset_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.EvaluateImageCenterParameters
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageCenterInfo            OutEvaluatedValue                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateImageCenterParameters(float InFocus, float InZoom, struct FImageCenterInfo* OutEvaluatedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "EvaluateImageCenterParameters");

	Params::ULensFile_EvaluateImageCenterParameters_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.EvaluateFocalLength
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo            OutEvaluatedValue                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateFocalLength(float InFocus, float InZoom, struct FFocalLengthInfo* OutEvaluatedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "EvaluateFocalLength");

	Params::ULensFile_EvaluateFocalLength_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.EvaluateDistortionParameters
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDistortionInfo             OutEvaluatedValue                                                (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateDistortionParameters(float InFocus, float InZoom, struct FDistortionInfo* OutEvaluatedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "EvaluateDistortionParameters");

	Params::ULensFile_EvaluateDistortionParameters_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.EvaluateDistortionData
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InFocus                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InZoom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InFilmback                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*InLensHandler                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateDistortionData(float InFocus, float InZoom, const struct FVector2D& InFilmback, class ULensDistortionModelHandlerBase* InLensHandler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "EvaluateDistortionData");

	Params::ULensFile_EvaluateDistortionData_Params Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;
	Parms.InFilmback = InFilmback;
	Parms.InLensHandler = InLensHandler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CameraCalibrationCore.LensFile.ClearData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELensDataCategory       InDataCategory                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensFile::ClearData(enum class ELensDataCategory InDataCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "ClearData");

	Params::ULensFile_ClearData_Params Parms{};

	Parms.InDataCategory = InDataCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.ClearAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULensFile::ClearAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "ClearAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.AddSTMapPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              NewFocus                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewZoom                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSTMapInfo                  NewPoint                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddSTMapPoint(float NewFocus, float NewZoom, struct FSTMapInfo& NewPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "AddSTMapPoint");

	Params::ULensFile_AddSTMapPoint_Params Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = NewPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.AddNodalOffsetPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              NewFocus                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewZoom                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNodalPointOffset           NewPoint                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddNodalOffsetPoint(float NewFocus, float NewZoom, struct FNodalPointOffset& NewPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "AddNodalOffsetPoint");

	Params::ULensFile_AddNodalOffsetPoint_Params Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = NewPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.AddImageCenterPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              NewFocus                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewZoom                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageCenterInfo            NewPoint                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddImageCenterPoint(float NewFocus, float NewZoom, struct FImageCenterInfo& NewPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "AddImageCenterPoint");

	Params::ULensFile_AddImageCenterPoint_Params Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = NewPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.AddFocalLengthPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              NewFocus                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewZoom                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo            NewFocalLength                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddFocalLengthPoint(float NewFocus, float NewZoom, struct FFocalLengthInfo& NewFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "AddFocalLengthPoint");

	Params::ULensFile_AddFocalLengthPoint_Params Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewFocalLength = NewFocalLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CameraCalibrationCore.LensFile.AddDistortionPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              NewFocus                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewZoom                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDistortionInfo             NewPoint                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo            NewFocalLength                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddDistortionPoint(float NewFocus, float NewZoom, struct FDistortionInfo& NewPoint, struct FFocalLengthInfo& NewFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensFile", "AddDistortionPoint");

	Params::ULensFile_AddDistortionPoint_Params Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = NewPoint;
	Parms.NewFocalLength = NewFocalLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CameraCalibrationCore.LensModel
// (None)

class UClass* ULensModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LensModel");

	return Clss;
}


// LensModel CameraCalibrationCore.Default__LensModel
// (Public, ClassDefaultObject, ArchetypeObject)

class ULensModel* ULensModel::GetDefaultObj()
{
	static class ULensModel* Default = nullptr;

	if (!Default)
		Default = static_cast<ULensModel*>(ULensModel::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.SphericalLensDistortionModelHandler
// (None)

class UClass* USphericalLensDistortionModelHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphericalLensDistortionModelHandler");

	return Clss;
}


// SphericalLensDistortionModelHandler CameraCalibrationCore.Default__SphericalLensDistortionModelHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class USphericalLensDistortionModelHandler* USphericalLensDistortionModelHandler::GetDefaultObj()
{
	static class USphericalLensDistortionModelHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<USphericalLensDistortionModelHandler*>(USphericalLensDistortionModelHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCore.SphericalLensModel
// (None)

class UClass* USphericalLensModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphericalLensModel");

	return Clss;
}


// SphericalLensModel CameraCalibrationCore.Default__SphericalLensModel
// (Public, ClassDefaultObject, ArchetypeObject)

class USphericalLensModel* USphericalLensModel::GetDefaultObj()
{
	static class USphericalLensModel* Default = nullptr;

	if (!Default)
		Default = static_cast<USphericalLensModel*>(USphericalLensModel::StaticClass()->DefaultObject);

	return Default;
}

}


