#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NiagaraCore.NiagaraMergeable
// (None)

class UClass* UNiagaraMergeable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraMergeable");

	return Clss;
}


// NiagaraMergeable NiagaraCore.Default__NiagaraMergeable
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraMergeable* UNiagaraMergeable::GetDefaultObj()
{
	static class UNiagaraMergeable* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraMergeable*>(UNiagaraMergeable::StaticClass()->DefaultObject);

	return Default;
}


// Class NiagaraCore.NiagaraDataInterfaceBase
// (None)

class UClass* UNiagaraDataInterfaceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceBase");

	return Clss;
}


// NiagaraDataInterfaceBase NiagaraCore.Default__NiagaraDataInterfaceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceBase* UNiagaraDataInterfaceBase::GetDefaultObj()
{
	static class UNiagaraDataInterfaceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceBase*>(UNiagaraDataInterfaceBase::StaticClass()->DefaultObject);

	return Default;
}

}


