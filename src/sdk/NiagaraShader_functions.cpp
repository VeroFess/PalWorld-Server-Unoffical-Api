#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NiagaraShader.NiagaraScriptBase
// (None)

class UClass* UNiagaraScriptBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScriptBase");

	return Clss;
}


// NiagaraScriptBase NiagaraShader.Default__NiagaraScriptBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScriptBase* UNiagaraScriptBase::GetDefaultObj()
{
	static class UNiagaraScriptBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScriptBase*>(UNiagaraScriptBase::StaticClass()->DefaultObject);

	return Default;
}

}


