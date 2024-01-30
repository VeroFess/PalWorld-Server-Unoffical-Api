#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PhysicsCore.PhysicalMaterialPropertyBase
// (None)

class UClass* UPhysicalMaterialPropertyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicalMaterialPropertyBase");

	return Clss;
}


// PhysicalMaterialPropertyBase PhysicsCore.Default__PhysicalMaterialPropertyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicalMaterialPropertyBase* UPhysicalMaterialPropertyBase::GetDefaultObj()
{
	static class UPhysicalMaterialPropertyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicalMaterialPropertyBase*>(UPhysicalMaterialPropertyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class PhysicsCore.BodySetupCore
// (None)

class UClass* UBodySetupCore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodySetupCore");

	return Clss;
}


// BodySetupCore PhysicsCore.Default__BodySetupCore
// (Public, ClassDefaultObject, ArchetypeObject)

class UBodySetupCore* UBodySetupCore::GetDefaultObj()
{
	static class UBodySetupCore* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodySetupCore*>(UBodySetupCore::StaticClass()->DefaultObject);

	return Default;
}


// Class PhysicsCore.ChaosPhysicalMaterial
// (None)

class UClass* UChaosPhysicalMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosPhysicalMaterial");

	return Clss;
}


// ChaosPhysicalMaterial PhysicsCore.Default__ChaosPhysicalMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosPhysicalMaterial* UChaosPhysicalMaterial::GetDefaultObj()
{
	static class UChaosPhysicalMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosPhysicalMaterial*>(UChaosPhysicalMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class PhysicsCore.PhysicalMaterial
// (None)

class UClass* UPhysicalMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicalMaterial");

	return Clss;
}


// PhysicalMaterial PhysicsCore.Default__PhysicalMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicalMaterial* UPhysicalMaterial::GetDefaultObj()
{
	static class UPhysicalMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicalMaterial*>(UPhysicalMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class PhysicsCore.PhysicsSettingsCore
// (None)

class UClass* UPhysicsSettingsCore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsSettingsCore");

	return Clss;
}


// PhysicsSettingsCore PhysicsCore.Default__PhysicsSettingsCore
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsSettingsCore* UPhysicsSettingsCore::GetDefaultObj()
{
	static class UPhysicsSettingsCore* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsSettingsCore*>(UPhysicsSettingsCore::StaticClass()->DefaultObject);

	return Default;
}

}


