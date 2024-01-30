#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ApexDestruction.DestructibleActor
// (Actor)

class UClass* ADestructibleActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestructibleActor");

	return Clss;
}


// DestructibleActor ApexDestruction.Default__DestructibleActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADestructibleActor* ADestructibleActor::GetDefaultObj()
{
	static class ADestructibleActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADestructibleActor*>(ADestructibleActor::StaticClass()->DefaultObject);

	return Default;
}


// Class ApexDestruction.DestructibleComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent)

class UClass* UDestructibleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestructibleComponent");

	return Clss;
}


// DestructibleComponent ApexDestruction.Default__DestructibleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDestructibleComponent* UDestructibleComponent::GetDefaultObj()
{
	static class UDestructibleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDestructibleComponent*>(UDestructibleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*           NewMesh                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestructibleComponent", "SetDestructibleMesh");

	Params::UDestructibleComponent_SetDestructibleMesh_Params Parms{};

	Parms.NewMesh = NewMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDestructibleMesh*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestructibleComponent", "GetDestructibleMesh");

	Params::UDestructibleComponent_GetDestructibleMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseDamage                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HurtOrigin                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ImpulseStrength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFullDamage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestructibleComponent", "ApplyRadiusDamage");

	Params::UDestructibleComponent_ApplyRadiusDamage_Params Parms{};

	Parms.BaseDamage = BaseDamage;
	Parms.HurtOrigin = HurtOrigin;
	Parms.DamageRadius = DamageRadius;
	Parms.ImpulseStrength = ImpulseStrength;
	Parms.bFullDamage = bFullDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ApexDestruction.DestructibleComponent.ApplyDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DamageAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ImpulseDir                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ImpulseStrength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestructibleComponent", "ApplyDamage");

	Params::UDestructibleComponent_ApplyDamage_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.HitLocation = HitLocation;
	Parms.ImpulseDir = ImpulseDir;
	Parms.ImpulseStrength = ImpulseStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ApexDestruction.DestructibleFractureSettings
// (None)

class UClass* UDestructibleFractureSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestructibleFractureSettings");

	return Clss;
}


// DestructibleFractureSettings ApexDestruction.Default__DestructibleFractureSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDestructibleFractureSettings* UDestructibleFractureSettings::GetDefaultObj()
{
	static class UDestructibleFractureSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDestructibleFractureSettings*>(UDestructibleFractureSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ApexDestruction.DestructibleMesh
// (None)

class UClass* UDestructibleMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestructibleMesh");

	return Clss;
}


// DestructibleMesh ApexDestruction.Default__DestructibleMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UDestructibleMesh* UDestructibleMesh::GetDefaultObj()
{
	static class UDestructibleMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UDestructibleMesh*>(UDestructibleMesh::StaticClass()->DefaultObject);

	return Default;
}

}


