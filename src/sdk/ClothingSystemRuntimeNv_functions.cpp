#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClothingSystemRuntimeNv.ClothConfigNv
// (None)

class UClass* UClothConfigNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothConfigNv");

	return Clss;
}


// ClothConfigNv ClothingSystemRuntimeNv.Default__ClothConfigNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothConfigNv* UClothConfigNv::GetDefaultObj()
{
	static class UClothConfigNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothConfigNv*>(UClothConfigNv::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// (None)

class UClass* UClothingSimulationFactoryNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationFactoryNv");

	return Clss;
}


// ClothingSimulationFactoryNv ClothingSystemRuntimeNv.Default__ClothingSimulationFactoryNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationFactoryNv* UClothingSimulationFactoryNv::GetDefaultObj()
{
	static class UClothingSimulationFactoryNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationFactoryNv*>(UClothingSimulationFactoryNv::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// (None)

class UClass* UClothingSimulationInteractorNv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingSimulationInteractorNv");

	return Clss;
}


// ClothingSimulationInteractorNv ClothingSystemRuntimeNv.Default__ClothingSimulationInteractorNv
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingSimulationInteractorNv* UClothingSimulationInteractorNv::GetDefaultObj()
{
	static class UClothingSimulationInteractorNv* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingSimulationInteractorNv*>(UClothingSimulationInteractorNv::StaticClass()->DefaultObject);

	return Default;
}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// (None)

class UClass* UClothPhysicalMeshDataNv_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothPhysicalMeshDataNv_Legacy");

	return Clss;
}


// ClothPhysicalMeshDataNv_Legacy ClothingSystemRuntimeNv.Default__ClothPhysicalMeshDataNv_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothPhysicalMeshDataNv_Legacy* UClothPhysicalMeshDataNv_Legacy::GetDefaultObj()
{
	static class UClothPhysicalMeshDataNv_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothPhysicalMeshDataNv_Legacy*>(UClothPhysicalMeshDataNv_Legacy::StaticClass()->DefaultObject);

	return Default;
}

}


