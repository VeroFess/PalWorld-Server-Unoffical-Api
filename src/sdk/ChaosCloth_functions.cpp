#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosCloth.ChaosClothConfig
// (None)

class UClass* UChaosClothConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothConfig");

	return Clss;
}


// ChaosClothConfig ChaosCloth.Default__ChaosClothConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothConfig* UChaosClothConfig::GetDefaultObj()
{
	static class UChaosClothConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothConfig*>(UChaosClothConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCloth.ChaosClothSharedSimConfig
// (None)

class UClass* UChaosClothSharedSimConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothSharedSimConfig");

	return Clss;
}


// ChaosClothSharedSimConfig ChaosCloth.Default__ChaosClothSharedSimConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothSharedSimConfig* UChaosClothSharedSimConfig::GetDefaultObj()
{
	static class UChaosClothSharedSimConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothSharedSimConfig*>(UChaosClothSharedSimConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCloth.ChaosClothingSimulationFactory
// (None)

class UClass* UChaosClothingSimulationFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothingSimulationFactory");

	return Clss;
}


// ChaosClothingSimulationFactory ChaosCloth.Default__ChaosClothingSimulationFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothingSimulationFactory* UChaosClothingSimulationFactory::GetDefaultObj()
{
	static class UChaosClothingSimulationFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothingSimulationFactory*>(UChaosClothingSimulationFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCloth.ChaosClothingInteractor
// (None)

class UClass* UChaosClothingInteractor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothingInteractor");

	return Clss;
}


// ChaosClothingInteractor ChaosCloth.Default__ChaosClothingInteractor
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothingInteractor* UChaosClothingInteractor::GetDefaultObj()
{
	static class UChaosClothingInteractor* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothingInteractor*>(UChaosClothingInteractor::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosCloth.ChaosClothingInteractor.SetWind
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Drag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Lift                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AirDensity                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WindVelocity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetWind(const struct FVector2D& Drag, const struct FVector2D& Lift, float AirDensity, const struct FVector& WindVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetWind");

	Params::UChaosClothingInteractor_SetWind_Params Parms{};

	Parms.Drag = Drag;
	Parms.Lift = Lift;
	Parms.AirDensity = AirDensity;
	Parms.WindVelocity = WindVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     LinearVelocityScale                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngularVelocityScale                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FictitiousAngularScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetVelocityScale");

	Params::UChaosClothingInteractor_SetVelocityScale_Params Parms{};

	Parms.LinearVelocityScale = LinearVelocityScale;
	Parms.AngularVelocityScale = AngularVelocityScale;
	Parms.FictitiousAngularScale = FictitiousAngularScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetPressure
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Pressure                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetPressure(const struct FVector2D& Pressure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetPressure");

	Params::UChaosClothingInteractor_SetPressure_Params Parms{};

	Parms.Pressure = Pressure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              EdgeStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BendingStiffness                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AreaStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetMaterialLinear");

	Params::UChaosClothingInteractor_SetMaterialLinear_Params Parms{};

	Parms.EdgeStiffness = EdgeStiffness;
	Parms.BendingStiffness = BendingStiffness;
	Parms.AreaStiffness = AreaStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetMaterial
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   EdgeStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   BendingStiffness                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AreaStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetMaterial(const struct FVector2D& EdgeStiffness, const struct FVector2D& BendingStiffness, const struct FVector2D& AreaStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetMaterial");

	Params::UChaosClothingInteractor_SetMaterial_Params Parms{};

	Parms.EdgeStiffness = EdgeStiffness;
	Parms.BendingStiffness = BendingStiffness;
	Parms.AreaStiffness = AreaStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TetherStiffness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TetherScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachmentLinear");

	Params::UChaosClothingInteractor_SetLongRangeAttachmentLinear_Params Parms{};

	Parms.TetherStiffness = TetherStiffness;
	Parms.TetherScale = TetherScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   TetherStiffness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   TetherScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachment(const struct FVector2D& TetherStiffness, const struct FVector2D& TetherScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachment");

	Params::UChaosClothingInteractor_SetLongRangeAttachment_Params Parms{};

	Parms.TetherStiffness = TetherStiffness;
	Parms.TetherScale = TetherScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetGravity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              GravityScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGravityOverridden                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GravityOverride                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetGravity");

	Params::UChaosClothingInteractor_SetGravity_Params Parms{};

	Parms.GravityScale = GravityScale;
	Parms.bIsGravityOverridden = bIsGravityOverridden;
	Parms.GravityOverride = GravityOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetDamping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DampingCoefficient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LocalDampingCoefficient                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetDamping(float DampingCoefficient, float LocalDampingCoefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetDamping");

	Params::UChaosClothingInteractor_SetDamping_Params Parms{};

	Parms.DampingCoefficient = DampingCoefficient;
	Parms.LocalDampingCoefficient = LocalDampingCoefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              CollisionThickness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FrictionCoefficient                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseCCD                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SelfCollisionThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetCollision");

	Params::UChaosClothingInteractor_SetCollision_Params Parms{};

	Parms.CollisionThickness = CollisionThickness;
	Parms.FrictionCoefficient = FrictionCoefficient;
	Parms.bUseCCD = bUseCCD;
	Parms.SelfCollisionThickness = SelfCollisionThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetBackstop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetBackstop(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetBackstop");

	Params::UChaosClothingInteractor_SetBackstop_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AnimDriveStiffness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDriveLinear");

	Params::UChaosClothingInteractor_SetAnimDriveLinear_Params Parms{};

	Parms.AnimDriveStiffness = AnimDriveStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   AnimDriveStiffness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AnimDriveDamping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDrive");

	Params::UChaosClothingInteractor_SetAnimDrive_Params Parms{};

	Parms.AnimDriveStiffness = AnimDriveStiffness;
	Parms.AnimDriveDamping = AnimDriveDamping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DragCoefficient                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LiftCoefficient                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WindVelocity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAerodynamics");

	Params::UChaosClothingInteractor_SetAerodynamics_Params Parms{};

	Parms.DragCoefficient = DragCoefficient;
	Parms.LiftCoefficient = LiftCoefficient;
	Parms.WindVelocity = WindVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "ResetAndTeleport");

	Params::UChaosClothingInteractor_ResetAndTeleport_Params Parms{};

	Parms.bReset = bReset;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ChaosCloth.ChaosClothingSimulationInteractor
// (None)

class UClass* UChaosClothingSimulationInteractor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosClothingSimulationInteractor");

	return Clss;
}


// ChaosClothingSimulationInteractor ChaosCloth.Default__ChaosClothingSimulationInteractor
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosClothingSimulationInteractor* UChaosClothingSimulationInteractor::GetDefaultObj()
{
	static class UChaosClothingSimulationInteractor* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosClothingSimulationInteractor*>(UChaosClothingSimulationInteractor::StaticClass()->DefaultObject);

	return Default;
}

}


