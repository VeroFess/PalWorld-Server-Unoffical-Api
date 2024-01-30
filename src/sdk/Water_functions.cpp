#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Water.BuoyancyComponent
// (None)

class UClass* UBuoyancyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuoyancyComponent");

	return Clss;
}


// BuoyancyComponent Water.Default__BuoyancyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuoyancyComponent* UBuoyancyComponent::GetDefaultObj()
{
	static class UBuoyancyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuoyancyComponent*>(UBuoyancyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.BuoyancyComponent.OnPontoonExitedWater
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon           Pontoon                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonExitedWater(struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "OnPontoonExitedWater");

	Params::UBuoyancyComponent_OnPontoonExitedWater_Params Parms{};

	Parms.Pontoon = Pontoon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.BuoyancyComponent.OnPontoonEnteredWater
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon           Pontoon                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "OnPontoonEnteredWater");

	Params::UBuoyancyComponent_OnPontoonEnteredWater_Params Parms{};

	Parms.Pontoon = Pontoon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.BuoyancyComponent.IsOverlappingWaterBody
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuoyancyComponent::IsOverlappingWaterBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "IsOverlappingWaterBody");

	Params::UBuoyancyComponent_IsOverlappingWaterBody_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.BuoyancyComponent.IsInWaterBody
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuoyancyComponent::IsInWaterBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "IsInWaterBody");

	Params::UBuoyancyComponent_IsInWaterBody_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     OutWaterPlaneLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterPlaneNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterSurfacePosition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutWaterDepth                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWaterBodyIdx                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterVelocity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "GetLastWaterSurfaceInfo");

	Params::UBuoyancyComponent_GetLastWaterSurfaceInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWaterPlaneLocation != nullptr)
		*OutWaterPlaneLocation = std::move(Parms.OutWaterPlaneLocation);

	if (OutWaterPlaneNormal != nullptr)
		*OutWaterPlaneNormal = std::move(Parms.OutWaterPlaneNormal);

	if (OutWaterSurfacePosition != nullptr)
		*OutWaterSurfacePosition = std::move(Parms.OutWaterSurfacePosition);

	if (OutWaterDepth != nullptr)
		*OutWaterDepth = Parms.OutWaterDepth;

	if (OutWaterBodyIdx != nullptr)
		*OutWaterBodyIdx = Parms.OutWaterBodyIdx;

	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = std::move(Parms.OutWaterVelocity);

}


// Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWaterBodyComponent*> ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UWaterBodyComponent*> UBuoyancyComponent::GetCurrentWaterBodyComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "GetCurrentWaterBodyComponents");

	Params::UBuoyancyComponent_GetCurrentWaterBodyComponents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.BuoyancyManager
// (Actor)

class UClass* ABuoyancyManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuoyancyManager");

	return Clss;
}


// BuoyancyManager Water.Default__BuoyancyManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ABuoyancyManager* ABuoyancyManager::GetDefaultObj()
{
	static class ABuoyancyManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuoyancyManager*>(ABuoyancyManager::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.BuoyancyManager.GetBuoyancyComponentManager
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABuoyancyManager*            Manager                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ABuoyancyManager::GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager** Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyManager", "GetBuoyancyComponentManager");

	Params::ABuoyancyManager_GetBuoyancyComponentManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Manager != nullptr)
		*Manager = Parms.Manager;

	return Parms.ReturnValue;

}


// Class Water.EnvQueryTest_InsideWaterBody
// (None)

class UClass* UEnvQueryTest_InsideWaterBody::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_InsideWaterBody");

	return Clss;
}


// EnvQueryTest_InsideWaterBody Water.Default__EnvQueryTest_InsideWaterBody
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_InsideWaterBody* UEnvQueryTest_InsideWaterBody::GetDefaultObj()
{
	static class UEnvQueryTest_InsideWaterBody* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_InsideWaterBody*>(UEnvQueryTest_InsideWaterBody::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.GerstnerWaterWaveGeneratorBase
// (None)

class UClass* UGerstnerWaterWaveGeneratorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GerstnerWaterWaveGeneratorBase");

	return Clss;
}


// GerstnerWaterWaveGeneratorBase Water.Default__GerstnerWaterWaveGeneratorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UGerstnerWaterWaveGeneratorBase* UGerstnerWaterWaveGeneratorBase::GetDefaultObj()
{
	static class UGerstnerWaterWaveGeneratorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGerstnerWaterWaveGeneratorBase*>(UGerstnerWaterWaveGeneratorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<struct FGerstnerWave>       OutWaves                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GerstnerWaterWaveGeneratorBase", "GenerateGerstnerWaves");

	Params::UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWaves != nullptr)
		*OutWaves = std::move(Parms.OutWaves);

}


// Class Water.GerstnerWaterWaveGeneratorSimple
// (None)

class UClass* UGerstnerWaterWaveGeneratorSimple::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GerstnerWaterWaveGeneratorSimple");

	return Clss;
}


// GerstnerWaterWaveGeneratorSimple Water.Default__GerstnerWaterWaveGeneratorSimple
// (Public, ClassDefaultObject, ArchetypeObject)

class UGerstnerWaterWaveGeneratorSimple* UGerstnerWaterWaveGeneratorSimple::GetDefaultObj()
{
	static class UGerstnerWaterWaveGeneratorSimple* Default = nullptr;

	if (!Default)
		Default = static_cast<UGerstnerWaterWaveGeneratorSimple*>(UGerstnerWaterWaveGeneratorSimple::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.GerstnerWaterWaveGeneratorSpectrum
// (None)

class UClass* UGerstnerWaterWaveGeneratorSpectrum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GerstnerWaterWaveGeneratorSpectrum");

	return Clss;
}


// GerstnerWaterWaveGeneratorSpectrum Water.Default__GerstnerWaterWaveGeneratorSpectrum
// (Public, ClassDefaultObject, ArchetypeObject)

class UGerstnerWaterWaveGeneratorSpectrum* UGerstnerWaterWaveGeneratorSpectrum::GetDefaultObj()
{
	static class UGerstnerWaterWaveGeneratorSpectrum* Default = nullptr;

	if (!Default)
		Default = static_cast<UGerstnerWaterWaveGeneratorSpectrum*>(UGerstnerWaterWaveGeneratorSpectrum::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterWavesBase
// (None)

class UClass* UWaterWavesBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterWavesBase");

	return Clss;
}


// WaterWavesBase Water.Default__WaterWavesBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterWavesBase* UWaterWavesBase::GetDefaultObj()
{
	static class UWaterWavesBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterWavesBase*>(UWaterWavesBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterWaves
// (None)

class UClass* UWaterWaves::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterWaves");

	return Clss;
}


// WaterWaves Water.Default__WaterWaves
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterWaves* UWaterWaves::GetDefaultObj()
{
	static class UWaterWaves* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterWaves*>(UWaterWaves::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.GerstnerWaterWaves
// (None)

class UClass* UGerstnerWaterWaves::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GerstnerWaterWaves");

	return Clss;
}


// GerstnerWaterWaves Water.Default__GerstnerWaterWaves
// (Public, ClassDefaultObject, ArchetypeObject)

class UGerstnerWaterWaves* UGerstnerWaterWaves::GetDefaultObj()
{
	static class UGerstnerWaterWaves* Default = nullptr;

	if (!Default)
		Default = static_cast<UGerstnerWaterWaves*>(UGerstnerWaterWaves::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.GerstnerWaterWaveSubsystem
// (None)

class UClass* UGerstnerWaterWaveSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GerstnerWaterWaveSubsystem");

	return Clss;
}


// GerstnerWaterWaveSubsystem Water.Default__GerstnerWaterWaveSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGerstnerWaterWaveSubsystem* UGerstnerWaterWaveSubsystem::GetDefaultObj()
{
	static class UGerstnerWaterWaveSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGerstnerWaterWaveSubsystem*>(UGerstnerWaterWaveSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.LakeCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULakeCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LakeCollisionComponent");

	return Clss;
}


// LakeCollisionComponent Water.Default__LakeCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULakeCollisionComponent* ULakeCollisionComponent::GetDefaultObj()
{
	static class ULakeCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULakeCollisionComponent*>(ULakeCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.NiagaraDataInterfaceWater
// (None)

class UClass* UNiagaraDataInterfaceWater::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceWater");

	return Clss;
}


// NiagaraDataInterfaceWater Water.Default__NiagaraDataInterfaceWater
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceWater* UNiagaraDataInterfaceWater::GetDefaultObj()
{
	static class UNiagaraDataInterfaceWater* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceWater*>(UNiagaraDataInterfaceWater::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.NiagaraWaterFunctionLibrary
// (None)

class UClass* UNiagaraWaterFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraWaterFunctionLibrary");

	return Clss;
}


// NiagaraWaterFunctionLibrary Water.Default__NiagaraWaterFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraWaterFunctionLibrary* UNiagaraWaterFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraWaterFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraWaterFunctionLibrary*>(UNiagaraWaterFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWaterBodyComponent*         WaterBodyComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraWaterFunctionLibrary::SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBodyComponent");

	Params::UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.WaterBodyComponent = WaterBodyComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWaterBody*                  WaterBody                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraWaterFunctionLibrary::SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBody");

	Params::UNiagaraWaterFunctionLibrary_SetWaterBody_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.WaterBody = WaterBody;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Water.OceanCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOceanCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OceanCollisionComponent");

	return Clss;
}


// OceanCollisionComponent Water.Default__OceanCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOceanCollisionComponent* UOceanCollisionComponent::GetDefaultObj()
{
	static class UOceanCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOceanCollisionComponent*>(UOceanCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.OceanBoxCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOceanBoxCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OceanBoxCollisionComponent");

	return Clss;
}


// OceanBoxCollisionComponent Water.Default__OceanBoxCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOceanBoxCollisionComponent* UOceanBoxCollisionComponent::GetDefaultObj()
{
	static class UOceanBoxCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOceanBoxCollisionComponent*>(UOceanBoxCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBody
// (Actor)

class UClass* AWaterBody::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBody");

	return Clss;
}


// WaterBody Water.Default__WaterBody
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBody* AWaterBody::GetDefaultObj()
{
	static class AWaterBody* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBody*>(AWaterBody::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterBody.SetWaterWaves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWaterWavesBase*             InWaterWaves                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWaterBody::SetWaterWaves(class UWaterWavesBase* InWaterWaves)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "SetWaterWaves");

	Params::AWaterBody_SetWaterWaves_Params Parms{};

	Parms.InWaterWaves = InWaterWaves;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterBody.SetWaterMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWaterBody::SetWaterMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "SetWaterMaterial");

	Params::AWaterBody_SetWaterMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterBody.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShapeOrPositionChanged                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeightmapSettingsChanged                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "OnWaterBodyChanged");

	Params::AWaterBody_OnWaterBodyChanged_Params Parms{};

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AWaterBody::GetWaterVelocityVectorAtSplineInputKey(float InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterVelocityVectorAtSplineInputKey");

	Params::AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Params Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterVelocityAtSplineInputKey
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWaterBody::GetWaterVelocityAtSplineInputKey(float InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterVelocityAtSplineInputKey");

	Params::AWaterBody_GetWaterVelocityAtSplineInputKey_Params Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBody::GetWaterSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterSpline");

	Params::AWaterBody_GetWaterSpline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterMaterialInstance");

	Params::AWaterBody_GetWaterMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterBodyType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWaterBodyType          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWaterBodyType AWaterBody::GetWaterBodyType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterBodyType");

	Params::AWaterBody_GetWaterBodyType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterBodyComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterBodyComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterBodyComponent* AWaterBody::GetWaterBodyComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterBodyComponent");

	Params::AWaterBody_GetWaterBodyComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetRiverToOceanTransitionMaterialInstance");

	Params::AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetRiverToLakeTransitionMaterialInstance");

	Params::AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyIsland*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetIslands");

	Params::AWaterBody_GetIslands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetExclusionVolumes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyExclusionVolume*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetExclusionVolumes");

	Params::AWaterBody_GetExclusionVolumes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetAudioIntensityAtSplineInputKey
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWaterBody::GetAudioIntensityAtSplineInputKey(float InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetAudioIntensityAtSplineInputKey");

	Params::AWaterBody_GetAudioIntensityAtSplineInputKey_Params Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.WaterBodyGenerator
// (None)

class UClass* UWaterBodyGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyGenerator");

	return Clss;
}


// WaterBodyGenerator Water.Default__WaterBodyGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyGenerator* UWaterBodyGenerator::GetDefaultObj()
{
	static class UWaterBodyGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyGenerator*>(UWaterBodyGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterBodyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyComponent");

	return Clss;
}


// WaterBodyComponent Water.Default__WaterBodyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyComponent* UWaterBodyComponent::GetDefaultObj()
{
	static class UWaterBodyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyComponent*>(UWaterBodyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InWaterMaterial                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          InUnderWaterPostProcessMaterial                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBodyComponent::SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "SetWaterAndUnderWaterPostProcessMaterial");

	Params::UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Params Parms{};

	Parms.InWaterMaterial = InWaterMaterial;
	Parms.InUnderWaterPostProcessMaterial = InUnderWaterPostProcessMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterBodyComponent.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShapeOrPositionChanged                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeightmapSettingsChanged                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBodyComponent::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "OnWaterBodyChanged");

	Params::UWaterBodyComponent_OnWaterBodyChanged_Params Parms{};

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterBodyComponent.GetWaterWaves
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterWavesBase*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterWavesBase* UWaterBodyComponent::GetWaterWaves()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterWaves");

	Params::UWaterBodyComponent_GetWaterWaves_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterBodyComponent::GetWaterVelocityAtSplineInputKey(float InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterVelocityAtSplineInputKey");

	Params::UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Params Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     InLocation                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterSurfaceLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterSurfaceNormal                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterVelocity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutWaterDepth                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDepth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBodyComponent::GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector* OutWaterSurfaceLocation, struct FVector* OutWaterSurfaceNormal, struct FVector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterSurfaceInfoAtLocation");

	Params::UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.bIncludeDepth = bIncludeDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWaterSurfaceLocation != nullptr)
		*OutWaterSurfaceLocation = std::move(Parms.OutWaterSurfaceLocation);

	if (OutWaterSurfaceNormal != nullptr)
		*OutWaterSurfaceNormal = std::move(Parms.OutWaterSurfaceNormal);

	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = std::move(Parms.OutWaterVelocity);

	if (OutWaterDepth != nullptr)
		*OutWaterDepth = Parms.OutWaterDepth;

}


// Function Water.WaterBodyComponent.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* UWaterBodyComponent::GetWaterSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterSpline");

	Params::UWaterBodyComponent_GetWaterSpline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterMaterialInstance");

	Params::UWaterBodyComponent_GetWaterMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UWaterBodyComponent::GetWaterMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterMaterial");

	Params::UWaterBodyComponent_GetWaterMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterLODMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterLODMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterLODMaterialInstance");

	Params::UWaterBodyComponent_GetWaterLODMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterInfoMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterInfoMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterInfoMaterialInstance");

	Params::UWaterBodyComponent_GetWaterInfoMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterBodyActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AWaterBody*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AWaterBody* UWaterBodyComponent::GetWaterBodyActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterBodyActor");

	Params::UWaterBodyComponent_GetWaterBodyActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetUnderwaterPostProcessMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetUnderwaterPostProcessMaterialInstance");

	Params::UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetStandardRenderableComponents
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetStandardRenderableComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetStandardRenderableComponents");

	Params::UWaterBodyComponent_GetStandardRenderableComponents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToOceanTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetRiverToOceanTransitionMaterialInstance");

	Params::UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToLakeTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetRiverToLakeTransitionMaterialInstance");

	Params::UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetMaxWaveHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterBodyComponent::GetMaxWaveHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetMaxWaveHeight");

	Params::UWaterBodyComponent_GetMaxWaveHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyIsland*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AWaterBodyIsland*> UWaterBodyComponent::GetIslands()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetIslands");

	Params::UWaterBodyComponent_GetIslands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetExclusionVolumes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyExclusionVolume*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AWaterBodyExclusionVolume*> UWaterBodyComponent::GetExclusionVolumes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetExclusionVolumes");

	Params::UWaterBodyComponent_GetExclusionVolumes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetCollisionComponents
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInOnlyEnabledComponents                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UPrimitiveComponent*> ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetCollisionComponents(bool bInOnlyEnabledComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyComponent", "GetCollisionComponents");

	Params::UWaterBodyComponent_GetCollisionComponents_Params Parms{};

	Parms.bInOnlyEnabledComponents = bInOnlyEnabledComponents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.CustomMeshGenerator
// (None)

class UClass* UCustomMeshGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomMeshGenerator");

	return Clss;
}


// CustomMeshGenerator Water.Default__CustomMeshGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomMeshGenerator* UCustomMeshGenerator::GetDefaultObj()
{
	static class UCustomMeshGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomMeshGenerator*>(UCustomMeshGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyCustom
// (Actor)

class UClass* AWaterBodyCustom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyCustom");

	return Clss;
}


// WaterBodyCustom Water.Default__WaterBodyCustom
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyCustom* AWaterBodyCustom::GetDefaultObj()
{
	static class AWaterBodyCustom* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyCustom*>(AWaterBodyCustom::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyCustomComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterBodyCustomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyCustomComponent");

	return Clss;
}


// WaterBodyCustomComponent Water.Default__WaterBodyCustomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyCustomComponent* UWaterBodyCustomComponent::GetDefaultObj()
{
	static class UWaterBodyCustomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyCustomComponent*>(UWaterBodyCustomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyExclusionVolume
// (Actor)

class UClass* AWaterBodyExclusionVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyExclusionVolume");

	return Clss;
}


// WaterBodyExclusionVolume Water.Default__WaterBodyExclusionVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyExclusionVolume* AWaterBodyExclusionVolume::GetDefaultObj()
{
	static class AWaterBodyExclusionVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyExclusionVolume*>(AWaterBodyExclusionVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyHLODBuilder
// (None)

class UClass* UWaterBodyHLODBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyHLODBuilder");

	return Clss;
}


// WaterBodyHLODBuilder Water.Default__WaterBodyHLODBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyHLODBuilder* UWaterBodyHLODBuilder::GetDefaultObj()
{
	static class UWaterBodyHLODBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyHLODBuilder*>(UWaterBodyHLODBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyIsland
// (Actor)

class UClass* AWaterBodyIsland::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyIsland");

	return Clss;
}


// WaterBodyIsland Water.Default__WaterBodyIsland
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyIsland* AWaterBodyIsland::GetDefaultObj()
{
	static class AWaterBodyIsland* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyIsland*>(AWaterBodyIsland::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterBodyIsland.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyIsland", "GetWaterSpline");

	Params::AWaterBodyIsland_GetWaterSpline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.LakeGenerator
// (None)

class UClass* ULakeGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LakeGenerator");

	return Clss;
}


// LakeGenerator Water.Default__LakeGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class ULakeGenerator* ULakeGenerator::GetDefaultObj()
{
	static class ULakeGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<ULakeGenerator*>(ULakeGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyLake
// (Actor)

class UClass* AWaterBodyLake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyLake");

	return Clss;
}


// WaterBodyLake Water.Default__WaterBodyLake
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyLake* AWaterBodyLake::GetDefaultObj()
{
	static class AWaterBodyLake* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyLake*>(AWaterBodyLake::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyLakeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterBodyLakeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyLakeComponent");

	return Clss;
}


// WaterBodyLakeComponent Water.Default__WaterBodyLakeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyLakeComponent* UWaterBodyLakeComponent::GetDefaultObj()
{
	static class UWaterBodyLakeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyLakeComponent*>(UWaterBodyLakeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.OceanGenerator
// (None)

class UClass* UOceanGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OceanGenerator");

	return Clss;
}


// OceanGenerator Water.Default__OceanGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UOceanGenerator* UOceanGenerator::GetDefaultObj()
{
	static class UOceanGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UOceanGenerator*>(UOceanGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyOcean
// (Actor)

class UClass* AWaterBodyOcean::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyOcean");

	return Clss;
}


// WaterBodyOcean Water.Default__WaterBodyOcean
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyOcean* AWaterBodyOcean::GetDefaultObj()
{
	static class AWaterBodyOcean* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyOcean*>(AWaterBodyOcean::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyOceanComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterBodyOceanComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyOceanComponent");

	return Clss;
}


// WaterBodyOceanComponent Water.Default__WaterBodyOceanComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyOceanComponent* UWaterBodyOceanComponent::GetDefaultObj()
{
	static class UWaterBodyOceanComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyOceanComponent*>(UWaterBodyOceanComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.RiverGenerator
// (None)

class UClass* URiverGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RiverGenerator");

	return Clss;
}


// RiverGenerator Water.Default__RiverGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class URiverGenerator* URiverGenerator::GetDefaultObj()
{
	static class URiverGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<URiverGenerator*>(URiverGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyRiver
// (Actor)

class UClass* AWaterBodyRiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyRiver");

	return Clss;
}


// WaterBodyRiver Water.Default__WaterBodyRiver
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyRiver* AWaterBodyRiver::GetDefaultObj()
{
	static class AWaterBodyRiver* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyRiver*>(AWaterBodyRiver::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyRiverComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterBodyRiverComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyRiverComponent");

	return Clss;
}


// WaterBodyRiverComponent Water.Default__WaterBodyRiverComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyRiverComponent* UWaterBodyRiverComponent::GetDefaultObj()
{
	static class UWaterBodyRiverComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyRiverComponent*>(UWaterBodyRiverComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBrushActorInterface
// (None)

class UClass* IWaterBrushActorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBrushActorInterface");

	return Clss;
}


// WaterBrushActorInterface Water.Default__WaterBrushActorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IWaterBrushActorInterface* IWaterBrushActorInterface::GetDefaultObj()
{
	static class IWaterBrushActorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IWaterBrushActorInterface*>(IWaterBrushActorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterMeshComponent");

	return Clss;
}


// WaterMeshComponent Water.Default__WaterMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterMeshComponent* UWaterMeshComponent::GetDefaultObj()
{
	static class UWaterMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterMeshComponent*>(UWaterMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterMeshComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterMeshComponent::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterMeshComponent", "IsEnabled");

	Params::UWaterMeshComponent_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.WaterRuntimeSettings
// (None)

class UClass* UWaterRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterRuntimeSettings");

	return Clss;
}


// WaterRuntimeSettings Water.Default__WaterRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterRuntimeSettings* UWaterRuntimeSettings::GetDefaultObj()
{
	static class UWaterRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterRuntimeSettings*>(UWaterRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterSplineComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSplineComponent");

	return Clss;
}


// WaterSplineComponent Water.Default__WaterSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSplineComponent* UWaterSplineComponent::GetDefaultObj()
{
	static class UWaterSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSplineComponent*>(UWaterSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterSplineMetadata
// (None)

class UClass* UWaterSplineMetadata::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSplineMetadata");

	return Clss;
}


// WaterSplineMetadata Water.Default__WaterSplineMetadata
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSplineMetadata* UWaterSplineMetadata::GetDefaultObj()
{
	static class UWaterSplineMetadata* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSplineMetadata*>(UWaterSplineMetadata::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterSubsystem
// (None)

class UClass* UWaterSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSubsystem");

	return Clss;
}


// WaterSubsystem Water.Default__WaterSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSubsystem* UWaterSubsystem::GetDefaultObj()
{
	static class UWaterSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSubsystem*>(UWaterSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterSubsystem.SetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFloodHeight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "SetOceanFloodHeight");

	Params::UWaterSubsystem_SetOceanFloodHeight_Params Parms{};

	Parms.InFloodHeight = InFloodHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterSubsystem.PrintToWaterLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWarning                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterSubsystem::PrintToWaterLog(const class FString& Message, bool bWarning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "PrintToWaterLog");

	Params::UWaterSubsystem_PrintToWaterLog_Params Parms{};

	Parms.Message = Message;
	Parms.bWarning = bWarning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterSubsystem.IsWaterRenderingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsWaterRenderingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "IsWaterRenderingEnabled");

	Params::UWaterSubsystem_IsWaterRenderingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "IsUnderwaterPostProcessEnabled");

	Params::UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "IsShallowWaterSimulationEnabled");

	Params::UWaterSubsystem_IsShallowWaterSimulationEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetWaterTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetWaterTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetWaterTimeSeconds");

	Params::UWaterSubsystem_GetWaterTimeSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetSmoothedWorldTimeSeconds");

	Params::UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterSimulationRenderTargetSize");

	Params::UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxImpulseForces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxImpulseForces");

	Params::UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxDynamicForces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxDynamicForces");

	Params::UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanTotalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanTotalHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanTotalHeight");

	Params::UWaterSubsystem_GetOceanTotalHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanFloodHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanFloodHeight");

	Params::UWaterSubsystem_GetOceanFloodHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanBaseHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanBaseHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanBaseHeight");

	Params::UWaterSubsystem_GetOceanBaseHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetCameraUnderwaterDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetCameraUnderwaterDepth");

	Params::UWaterSubsystem_GetCameraUnderwaterDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.WaterWavesAsset
// (None)

class UClass* UWaterWavesAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterWavesAsset");

	return Clss;
}


// WaterWavesAsset Water.Default__WaterWavesAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterWavesAsset* UWaterWavesAsset::GetDefaultObj()
{
	static class UWaterWavesAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterWavesAsset*>(UWaterWavesAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterWavesAssetReference
// (None)

class UClass* UWaterWavesAssetReference::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterWavesAssetReference");

	return Clss;
}


// WaterWavesAssetReference Water.Default__WaterWavesAssetReference
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterWavesAssetReference* UWaterWavesAssetReference::GetDefaultObj()
{
	static class UWaterWavesAssetReference* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterWavesAssetReference*>(UWaterWavesAssetReference::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterZone
// (Actor)

class UClass* AWaterZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterZone");

	return Clss;
}


// WaterZone Water.Default__WaterZone
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterZone* AWaterZone::GetDefaultObj()
{
	static class AWaterZone* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterZone*>(AWaterZone::StaticClass()->DefaultObject);

	return Default;
}

}


