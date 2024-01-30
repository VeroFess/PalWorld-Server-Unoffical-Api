#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NiagaraUIRenderer.NiagaraSystemWidget
// (None)

class UClass* UNiagaraSystemWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSystemWidget");

	return Clss;
}


// NiagaraSystemWidget NiagaraUIRenderer.Default__NiagaraSystemWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSystemWidget* UNiagaraSystemWidget::GetDefaultObj()
{
	static class UNiagaraSystemWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSystemWidget*>(UNiagaraSystemWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewTickWhenPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::UpdateTickWhenPaused(bool NewTickWhenPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "UpdateTickWhenPaused");

	Params::UNiagaraSystemWidget_UpdateTickWhenPaused_Params Parms{};

	Parms.NewTickWhenPaused = NewTickWhenPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              NewNiagaraSystem                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "UpdateNiagaraSystemReference");

	Params::UNiagaraSystemWidget_UpdateNiagaraSystemReference_Params Parms{};

	Parms.NewNiagaraSystem = NewNiagaraSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.SetRemapMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          OriginalMaterial                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          RemapMaterial                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::SetRemapMaterial(class UMaterialInterface* OriginalMaterial, class UMaterialInterface* RemapMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "SetRemapMaterial");

	Params::UNiagaraSystemWidget_SetRemapMaterial_Params Parms{};

	Parms.OriginalMaterial = OriginalMaterial;
	Parms.RemapMaterial = RemapMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.SetDesiredWidgetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   NewDesiredSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::SetDesiredWidgetSize(const struct FVector2D& NewDesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "SetDesiredWidgetSize");

	Params::UNiagaraSystemWidget_SetDesiredWidgetSize_Params Parms{};

	Parms.NewDesiredSize = NewDesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetRemapMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          OriginalMaterial                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UNiagaraSystemWidget::GetRemapMaterial(class UMaterialInterface* OriginalMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "GetRemapMaterial");

	Params::UNiagaraSystemWidget_GetRemapMaterial_Params Parms{};

	Parms.OriginalMaterial = OriginalMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNiagaraUIComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "GetNiagaraComponent");

	Params::UNiagaraSystemWidget_GetNiagaraComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraSystemWidget::DeactivateSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "DeactivateSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Reset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::ActivateSystem(bool Reset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "ActivateSystem");

	Params::UNiagaraSystemWidget_ActivateSystem_Params Parms{};

	Parms.Reset = Reset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NiagaraUIRenderer.NiagaraUIActor
// (Actor)

class UClass* ANiagaraUIActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraUIActor");

	return Clss;
}


// NiagaraUIActor NiagaraUIRenderer.Default__NiagaraUIActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraUIActor* ANiagaraUIActor::GetDefaultObj()
{
	static class ANiagaraUIActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraUIActor*>(ANiagaraUIActor::StaticClass()->DefaultObject);

	return Default;
}


// Class NiagaraUIRenderer.NiagaraUIComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNiagaraUIComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraUIComponent");

	return Clss;
}


// NiagaraUIComponent NiagaraUIRenderer.Default__NiagaraUIComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraUIComponent* UNiagaraUIComponent::GetDefaultObj()
{
	static class UNiagaraUIComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraUIComponent*>(UNiagaraUIComponent::StaticClass()->DefaultObject);

	return Default;
}

}


