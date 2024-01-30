#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Foliage.FoliageInstancedStaticMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UFoliageInstancedStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageInstancedStaticMeshComponent");

	return Clss;
}


// FoliageInstancedStaticMeshComponent Foliage.Default__FoliageInstancedStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageInstancedStaticMeshComponent* UFoliageInstancedStaticMeshComponent::GetDefaultObj()
{
	static class UFoliageInstancedStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageInstancedStaticMeshComponent*>(UFoliageInstancedStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageType
// (None)

class UClass* UFoliageType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType");

	return Clss;
}


// FoliageType Foliage.Default__FoliageType
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType* UFoliageType::GetDefaultObj()
{
	static class UFoliageType* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType*>(UFoliageType::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageType_InstancedStaticMesh
// (None)

class UClass* UFoliageType_InstancedStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType_InstancedStaticMesh");

	return Clss;
}


// FoliageType_InstancedStaticMesh Foliage.Default__FoliageType_InstancedStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType_InstancedStaticMesh* UFoliageType_InstancedStaticMesh::GetDefaultObj()
{
	static class UFoliageType_InstancedStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType_InstancedStaticMesh*>(UFoliageType_InstancedStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageComponent
// (None)

class UClass* UProceduralFoliageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageComponent");

	return Clss;
}


// ProceduralFoliageComponent Foliage.Default__ProceduralFoliageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageComponent* UProceduralFoliageComponent::GetDefaultObj()
{
	static class UProceduralFoliageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageComponent*>(UProceduralFoliageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageEditPresetData
// (None)

class UClass* UFoliageEditPresetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageEditPresetData");

	return Clss;
}


// FoliageEditPresetData Foliage.Default__FoliageEditPresetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageEditPresetData* UFoliageEditPresetData::GetDefaultObj()
{
	static class UFoliageEditPresetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageEditPresetData*>(UFoliageEditPresetData::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageType_Actor
// (None)

class UClass* UFoliageType_Actor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType_Actor");

	return Clss;
}


// FoliageType_Actor Foliage.Default__FoliageType_Actor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType_Actor* UFoliageType_Actor::GetDefaultObj()
{
	static class UFoliageType_Actor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType_Actor*>(UFoliageType_Actor::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.InstancedFoliageActor
// (Actor)

class UClass* AInstancedFoliageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstancedFoliageActor");

	return Clss;
}


// InstancedFoliageActor Foliage.Default__InstancedFoliageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInstancedFoliageActor* AInstancedFoliageActor::GetDefaultObj()
{
	static class AInstancedFoliageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInstancedFoliageActor*>(AInstancedFoliageActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.InteractiveFoliageComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UInteractiveFoliageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveFoliageComponent");

	return Clss;
}


// InteractiveFoliageComponent Foliage.Default__InteractiveFoliageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveFoliageComponent* UInteractiveFoliageComponent::GetDefaultObj()
{
	static class UInteractiveFoliageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveFoliageComponent*>(UInteractiveFoliageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageStatistics
// (None)

class UClass* UFoliageStatistics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageStatistics");

	return Clss;
}


// FoliageStatistics Foliage.Default__FoliageStatistics
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageStatistics* UFoliageStatistics::GetDefaultObj()
{
	static class UFoliageStatistics* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageStatistics*>(UFoliageStatistics::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CenterPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");

	Params::UFoliageStatistics_FoliageOverlappingSphereCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.CenterPosition = CenterPosition;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          OutTransforms                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFoliageStatistics::FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box, TArray<struct FTransform>* OutTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxTransforms");

	Params::UFoliageStatistics_FoliageOverlappingBoxTransforms_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = Box;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTransforms != nullptr)
		*OutTransforms = std::move(Parms.OutTransforms);

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxCount");

	Params::UFoliageStatistics_FoliageOverlappingBoxCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = Box;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Foliage.GrassInstancedStaticMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UGrassInstancedStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrassInstancedStaticMeshComponent");

	return Clss;
}


// GrassInstancedStaticMeshComponent Foliage.Default__GrassInstancedStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGrassInstancedStaticMeshComponent* UGrassInstancedStaticMeshComponent::GetDefaultObj()
{
	static class UGrassInstancedStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrassInstancedStaticMeshComponent*>(UGrassInstancedStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.InteractiveFoliageActor
// (Actor)

class UClass* AInteractiveFoliageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveFoliageActor");

	return Clss;
}


// InteractiveFoliageActor Foliage.Default__InteractiveFoliageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInteractiveFoliageActor* AInteractiveFoliageActor::GetDefaultObj()
{
	static class AInteractiveFoliageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteractiveFoliageActor*>(AInteractiveFoliageActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Other                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OverlapInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractiveFoliageActor", "CapsuleTouched");

	Params::AInteractiveFoliageActor_CapsuleTouched_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.OverlapInfo = OverlapInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Foliage.ProceduralFoliageBlockingVolume
// (Actor)

class UClass* AProceduralFoliageBlockingVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageBlockingVolume");

	return Clss;
}


// ProceduralFoliageBlockingVolume Foliage.Default__ProceduralFoliageBlockingVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralFoliageBlockingVolume* AProceduralFoliageBlockingVolume::GetDefaultObj()
{
	static class AProceduralFoliageBlockingVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralFoliageBlockingVolume*>(AProceduralFoliageBlockingVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageSpawner
// (None)

class UClass* UProceduralFoliageSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageSpawner");

	return Clss;
}


// ProceduralFoliageSpawner Foliage.Default__ProceduralFoliageSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageSpawner* UProceduralFoliageSpawner::GetDefaultObj()
{
	static class UProceduralFoliageSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageSpawner*>(UProceduralFoliageSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumSteps                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralFoliageSpawner::Simulate(int32 NumSteps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralFoliageSpawner", "Simulate");

	Params::UProceduralFoliageSpawner_Simulate_Params Parms{};

	Parms.NumSteps = NumSteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Foliage.ProceduralFoliageTile
// (None)

class UClass* UProceduralFoliageTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageTile");

	return Clss;
}


// ProceduralFoliageTile Foliage.Default__ProceduralFoliageTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageTile* UProceduralFoliageTile::GetDefaultObj()
{
	static class UProceduralFoliageTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageTile*>(UProceduralFoliageTile::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageVolume
// (Actor)

class UClass* AProceduralFoliageVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageVolume");

	return Clss;
}


// ProceduralFoliageVolume Foliage.Default__ProceduralFoliageVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralFoliageVolume* AProceduralFoliageVolume::GetDefaultObj()
{
	static class AProceduralFoliageVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralFoliageVolume*>(AProceduralFoliageVolume::StaticClass()->DefaultObject);

	return Default;
}

}


