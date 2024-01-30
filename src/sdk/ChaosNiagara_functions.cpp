#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// (None)

class UClass* UNiagaraDataInterfaceChaosDestruction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceChaosDestruction");

	return Clss;
}


// NiagaraDataInterfaceChaosDestruction ChaosNiagara.Default__NiagaraDataInterfaceChaosDestruction
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceChaosDestruction* UNiagaraDataInterfaceChaosDestruction::GetDefaultObj()
{
	static class UNiagaraDataInterfaceChaosDestruction* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceChaosDestruction*>(UNiagaraDataInterfaceChaosDestruction::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
// (None)

class UClass* UNiagaraDataInterfaceGeometryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceGeometryCollection");

	return Clss;
}


// NiagaraDataInterfaceGeometryCollection ChaosNiagara.Default__NiagaraDataInterfaceGeometryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceGeometryCollection* UNiagaraDataInterfaceGeometryCollection::GetDefaultObj()
{
	static class UNiagaraDataInterfaceGeometryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceGeometryCollection*>(UNiagaraDataInterfaceGeometryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
// (None)

class UClass* UNiagaraDataInterfacePhysicsField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfacePhysicsField");

	return Clss;
}


// NiagaraDataInterfacePhysicsField ChaosNiagara.Default__NiagaraDataInterfacePhysicsField
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfacePhysicsField* UNiagaraDataInterfacePhysicsField::GetDefaultObj()
{
	static class UNiagaraDataInterfacePhysicsField* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfacePhysicsField*>(UNiagaraDataInterfacePhysicsField::StaticClass()->DefaultObject);

	return Default;
}

}


