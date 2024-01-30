#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HoudiniEngineRuntime.HoudiniAsset
// (None)

class UClass* UHoudiniAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAsset");

	return Clss;
}


// HoudiniAsset HoudiniEngineRuntime.Default__HoudiniAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAsset* UHoudiniAsset::GetDefaultObj()
{
	static class UHoudiniAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAsset*>(UHoudiniAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetActor
// (Actor)

class UClass* AHoudiniAssetActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetActor");

	return Clss;
}


// HoudiniAssetActor HoudiniEngineRuntime.Default__HoudiniAssetActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AHoudiniAssetActor* AHoudiniAssetActor::GetDefaultObj()
{
	static class AHoudiniAssetActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AHoudiniAssetActor*>(AHoudiniAssetActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHoudiniAssetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetComponent");

	return Clss;
}


// HoudiniAssetComponent HoudiniEngineRuntime.Default__HoudiniAssetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetComponent* UHoudiniAssetComponent::GetDefaultObj()
{
	static class UHoudiniAssetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetComponent*>(UHoudiniAssetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHoudiniAssetBlueprintComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetBlueprintComponent");

	return Clss;
}


// HoudiniAssetBlueprintComponent HoudiniEngineRuntime.Default__HoudiniAssetBlueprintComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetBlueprintComponent* UHoudiniAssetBlueprintComponent::GetDefaultObj()
{
	static class UHoudiniAssetBlueprintComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetBlueprintComponent*>(UHoudiniAssetBlueprintComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniAssetBlueprintComponent::SetToggleValueAt(const class FString& Name, bool Value, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "SetToggleValueAt");

	Params::UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniAssetBlueprintComponent::SetFloatParameter(const class FString& Name, float Value, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "SetFloatParameter");

	Params::UHoudiniAssetBlueprintComponent_SetFloatParameter_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniAssetBlueprintComponent::HasParameter(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "HasParameter");

	Params::UHoudiniAssetBlueprintComponent_HasParameter_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HoudiniEngineRuntime.HoudiniAssetParameter
// (None)

class UClass* UHoudiniAssetParameter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameter");

	return Clss;
}


// HoudiniAssetParameter HoudiniEngineRuntime.Default__HoudiniAssetParameter
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameter* UHoudiniAssetParameter::GetDefaultObj()
{
	static class UHoudiniAssetParameter* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameter*>(UHoudiniAssetParameter::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// (None)

class UClass* UHoudiniAssetParameterButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterButton");

	return Clss;
}


// HoudiniAssetParameterButton HoudiniEngineRuntime.Default__HoudiniAssetParameterButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterButton* UHoudiniAssetParameterButton::GetDefaultObj()
{
	static class UHoudiniAssetParameterButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterButton*>(UHoudiniAssetParameterButton::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// (None)

class UClass* UHoudiniAssetParameterChoice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterChoice");

	return Clss;
}


// HoudiniAssetParameterChoice HoudiniEngineRuntime.Default__HoudiniAssetParameterChoice
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterChoice* UHoudiniAssetParameterChoice::GetDefaultObj()
{
	static class UHoudiniAssetParameterChoice* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterChoice*>(UHoudiniAssetParameterChoice::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// (None)

class UClass* UHoudiniAssetParameterColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterColor");

	return Clss;
}


// HoudiniAssetParameterColor HoudiniEngineRuntime.Default__HoudiniAssetParameterColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterColor* UHoudiniAssetParameterColor::GetDefaultObj()
{
	static class UHoudiniAssetParameterColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterColor*>(UHoudiniAssetParameterColor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// (None)

class UClass* UHoudiniAssetParameterFile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterFile");

	return Clss;
}


// HoudiniAssetParameterFile HoudiniEngineRuntime.Default__HoudiniAssetParameterFile
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterFile* UHoudiniAssetParameterFile::GetDefaultObj()
{
	static class UHoudiniAssetParameterFile* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterFile*>(UHoudiniAssetParameterFile::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// (None)

class UClass* UHoudiniAssetParameterFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterFloat");

	return Clss;
}


// HoudiniAssetParameterFloat HoudiniEngineRuntime.Default__HoudiniAssetParameterFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterFloat* UHoudiniAssetParameterFloat::GetDefaultObj()
{
	static class UHoudiniAssetParameterFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterFloat*>(UHoudiniAssetParameterFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// (None)

class UClass* UHoudiniAssetParameterFolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterFolder");

	return Clss;
}


// HoudiniAssetParameterFolder HoudiniEngineRuntime.Default__HoudiniAssetParameterFolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterFolder* UHoudiniAssetParameterFolder::GetDefaultObj()
{
	static class UHoudiniAssetParameterFolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterFolder*>(UHoudiniAssetParameterFolder::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// (None)

class UClass* UHoudiniAssetParameterFolderList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterFolderList");

	return Clss;
}


// HoudiniAssetParameterFolderList HoudiniEngineRuntime.Default__HoudiniAssetParameterFolderList
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterFolderList* UHoudiniAssetParameterFolderList::GetDefaultObj()
{
	static class UHoudiniAssetParameterFolderList* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterFolderList*>(UHoudiniAssetParameterFolderList::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// (None)

class UClass* UHoudiniAssetParameterInt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterInt");

	return Clss;
}


// HoudiniAssetParameterInt HoudiniEngineRuntime.Default__HoudiniAssetParameterInt
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterInt* UHoudiniAssetParameterInt::GetDefaultObj()
{
	static class UHoudiniAssetParameterInt* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterInt*>(UHoudiniAssetParameterInt::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// (None)

class UClass* UHoudiniAssetParameterLabel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterLabel");

	return Clss;
}


// HoudiniAssetParameterLabel HoudiniEngineRuntime.Default__HoudiniAssetParameterLabel
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterLabel* UHoudiniAssetParameterLabel::GetDefaultObj()
{
	static class UHoudiniAssetParameterLabel* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterLabel*>(UHoudiniAssetParameterLabel::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// (None)

class UClass* UHoudiniAssetParameterMultiparm::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterMultiparm");

	return Clss;
}


// HoudiniAssetParameterMultiparm HoudiniEngineRuntime.Default__HoudiniAssetParameterMultiparm
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterMultiparm* UHoudiniAssetParameterMultiparm::GetDefaultObj()
{
	static class UHoudiniAssetParameterMultiparm* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterMultiparm*>(UHoudiniAssetParameterMultiparm::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// (None)

class UClass* UHoudiniAssetParameterRamp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterRamp");

	return Clss;
}


// HoudiniAssetParameterRamp HoudiniEngineRuntime.Default__HoudiniAssetParameterRamp
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterRamp* UHoudiniAssetParameterRamp::GetDefaultObj()
{
	static class UHoudiniAssetParameterRamp* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterRamp*>(UHoudiniAssetParameterRamp::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// (None)

class UClass* UHoudiniAssetParameterSeparator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterSeparator");

	return Clss;
}


// HoudiniAssetParameterSeparator HoudiniEngineRuntime.Default__HoudiniAssetParameterSeparator
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterSeparator* UHoudiniAssetParameterSeparator::GetDefaultObj()
{
	static class UHoudiniAssetParameterSeparator* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterSeparator*>(UHoudiniAssetParameterSeparator::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// (None)

class UClass* UHoudiniAssetParameterString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterString");

	return Clss;
}


// HoudiniAssetParameterString HoudiniEngineRuntime.Default__HoudiniAssetParameterString
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterString* UHoudiniAssetParameterString::GetDefaultObj()
{
	static class UHoudiniAssetParameterString* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterString*>(UHoudiniAssetParameterString::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// (None)

class UClass* UHoudiniAssetParameterToggle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetParameterToggle");

	return Clss;
}


// HoudiniAssetParameterToggle HoudiniEngineRuntime.Default__HoudiniAssetParameterToggle
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetParameterToggle* UHoudiniAssetParameterToggle::GetDefaultObj()
{
	static class UHoudiniAssetParameterToggle* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetParameterToggle*>(UHoudiniAssetParameterToggle::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
// (None)

class UClass* UHoudiniAssetComponentMaterials_V1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetComponentMaterials_V1");

	return Clss;
}


// HoudiniAssetComponentMaterials_V1 HoudiniEngineRuntime.Default__HoudiniAssetComponentMaterials_V1
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetComponentMaterials_V1* UHoudiniAssetComponentMaterials_V1::GetDefaultObj()
{
	static class UHoudiniAssetComponentMaterials_V1* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetComponentMaterials_V1*>(UHoudiniAssetComponentMaterials_V1::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
// (SceneComponent)

class UClass* UHoudiniHandleComponent_V1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniHandleComponent_V1");

	return Clss;
}


// HoudiniHandleComponent_V1 HoudiniEngineRuntime.Default__HoudiniHandleComponent_V1
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniHandleComponent_V1* UHoudiniHandleComponent_V1::GetDefaultObj()
{
	static class UHoudiniHandleComponent_V1* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniHandleComponent_V1*>(UHoudiniHandleComponent_V1::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
// (SceneComponent)

class UClass* UHoudiniSplineComponent_V1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniSplineComponent_V1");

	return Clss;
}


// HoudiniSplineComponent_V1 HoudiniEngineRuntime.Default__HoudiniSplineComponent_V1
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniSplineComponent_V1* UHoudiniSplineComponent_V1::GetDefaultObj()
{
	static class UHoudiniSplineComponent_V1* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniSplineComponent_V1*>(UHoudiniSplineComponent_V1::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetInput
// (None)

class UClass* UHoudiniAssetInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetInput");

	return Clss;
}


// HoudiniAssetInput HoudiniEngineRuntime.Default__HoudiniAssetInput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetInput* UHoudiniAssetInput::GetDefaultObj()
{
	static class UHoudiniAssetInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetInput*>(UHoudiniAssetInput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// (None)

class UClass* UHoudiniAssetInstanceInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetInstanceInput");

	return Clss;
}


// HoudiniAssetInstanceInput HoudiniEngineRuntime.Default__HoudiniAssetInstanceInput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetInstanceInput* UHoudiniAssetInstanceInput::GetDefaultObj()
{
	static class UHoudiniAssetInstanceInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetInstanceInput*>(UHoudiniAssetInstanceInput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// (None)

class UClass* UHoudiniAssetInstanceInputField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetInstanceInputField");

	return Clss;
}


// HoudiniAssetInstanceInputField HoudiniEngineRuntime.Default__HoudiniAssetInstanceInputField
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetInstanceInputField* UHoudiniAssetInstanceInputField::GetDefaultObj()
{
	static class UHoudiniAssetInstanceInputField* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetInstanceInputField*>(UHoudiniAssetInstanceInputField::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
// (SceneComponent, PrimitiveComponent)

class UClass* UHoudiniAssetComponent_V1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetComponent_V1");

	return Clss;
}


// HoudiniAssetComponent_V1 HoudiniEngineRuntime.Default__HoudiniAssetComponent_V1
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniAssetComponent_V1* UHoudiniAssetComponent_V1::GetDefaultObj()
{
	static class UHoudiniAssetComponent_V1* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniAssetComponent_V1*>(UHoudiniAssetComponent_V1::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
// (SceneComponent)

class UClass* UHoudiniInstancedActorComponent_V1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInstancedActorComponent_V1");

	return Clss;
}


// HoudiniInstancedActorComponent_V1 HoudiniEngineRuntime.Default__HoudiniInstancedActorComponent_V1
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInstancedActorComponent_V1* UHoudiniInstancedActorComponent_V1::GetDefaultObj()
{
	static class UHoudiniInstancedActorComponent_V1* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInstancedActorComponent_V1*>(UHoudiniInstancedActorComponent_V1::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
// (SceneComponent)

class UClass* UHoudiniMeshSplitInstancerComponent_V1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniMeshSplitInstancerComponent_V1");

	return Clss;
}


// HoudiniMeshSplitInstancerComponent_V1 HoudiniEngineRuntime.Default__HoudiniMeshSplitInstancerComponent_V1
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniMeshSplitInstancerComponent_V1* UHoudiniMeshSplitInstancerComponent_V1::GetDefaultObj()
{
	static class UHoudiniMeshSplitInstancerComponent_V1* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniMeshSplitInstancerComponent_V1*>(UHoudiniMeshSplitInstancerComponent_V1::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// (None)

class UClass* IHoudiniEngineCopyPropertiesInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniEngineCopyPropertiesInterface");

	return Clss;
}


// HoudiniEngineCopyPropertiesInterface HoudiniEngineRuntime.Default__HoudiniEngineCopyPropertiesInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IHoudiniEngineCopyPropertiesInterface* IHoudiniEngineCopyPropertiesInterface::GetDefaultObj()
{
	static class IHoudiniEngineCopyPropertiesInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IHoudiniEngineCopyPropertiesInterface*>(IHoudiniEngineCopyPropertiesInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniHandleParameter
// (None)

class UClass* UHoudiniHandleParameter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniHandleParameter");

	return Clss;
}


// HoudiniHandleParameter HoudiniEngineRuntime.Default__HoudiniHandleParameter
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniHandleParameter* UHoudiniHandleParameter::GetDefaultObj()
{
	static class UHoudiniHandleParameter* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniHandleParameter*>(UHoudiniHandleParameter::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniHandleComponent
// (SceneComponent)

class UClass* UHoudiniHandleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniHandleComponent");

	return Clss;
}


// HoudiniHandleComponent HoudiniEngineRuntime.Default__HoudiniHandleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniHandleComponent* UHoudiniHandleComponent::GetDefaultObj()
{
	static class UHoudiniHandleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniHandleComponent*>(UHoudiniHandleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInput
// (None)

class UClass* UHoudiniInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInput");

	return Clss;
}


// HoudiniInput HoudiniEngineRuntime.Default__HoudiniInput
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UHoudiniInput* UHoudiniInput::GetDefaultObj()
{
	static class UHoudiniInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInput*>(UHoudiniInput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputObject
// (None)

class UClass* UHoudiniInputObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputObject");

	return Clss;
}


// HoudiniInputObject HoudiniEngineRuntime.Default__HoudiniInputObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputObject* UHoudiniInputObject::GetDefaultObj()
{
	static class UHoudiniInputObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputObject*>(UHoudiniInputObject::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// (None)

class UClass* UHoudiniInputStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputStaticMesh");

	return Clss;
}


// HoudiniInputStaticMesh HoudiniEngineRuntime.Default__HoudiniInputStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputStaticMesh* UHoudiniInputStaticMesh::GetDefaultObj()
{
	static class UHoudiniInputStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputStaticMesh*>(UHoudiniInputStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// (None)

class UClass* UHoudiniInputSkeletalMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSkeletalMesh");

	return Clss;
}


// HoudiniInputSkeletalMesh HoudiniEngineRuntime.Default__HoudiniInputSkeletalMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSkeletalMesh* UHoudiniInputSkeletalMesh::GetDefaultObj()
{
	static class UHoudiniInputSkeletalMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSkeletalMesh*>(UHoudiniInputSkeletalMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
// (None)

class UClass* UHoudiniInputGeometryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputGeometryCollection");

	return Clss;
}


// HoudiniInputGeometryCollection HoudiniEngineRuntime.Default__HoudiniInputGeometryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputGeometryCollection* UHoudiniInputGeometryCollection::GetDefaultObj()
{
	static class UHoudiniInputGeometryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputGeometryCollection*>(UHoudiniInputGeometryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// (None)

class UClass* UHoudiniInputSceneComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSceneComponent");

	return Clss;
}


// HoudiniInputSceneComponent HoudiniEngineRuntime.Default__HoudiniInputSceneComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSceneComponent* UHoudiniInputSceneComponent::GetDefaultObj()
{
	static class UHoudiniInputSceneComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSceneComponent*>(UHoudiniInputSceneComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// (None)

class UClass* UHoudiniInputMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputMeshComponent");

	return Clss;
}


// HoudiniInputMeshComponent HoudiniEngineRuntime.Default__HoudiniInputMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputMeshComponent* UHoudiniInputMeshComponent::GetDefaultObj()
{
	static class UHoudiniInputMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputMeshComponent*>(UHoudiniInputMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// (None)

class UClass* UHoudiniInputInstancedMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputInstancedMeshComponent");

	return Clss;
}


// HoudiniInputInstancedMeshComponent HoudiniEngineRuntime.Default__HoudiniInputInstancedMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputInstancedMeshComponent* UHoudiniInputInstancedMeshComponent::GetDefaultObj()
{
	static class UHoudiniInputInstancedMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputInstancedMeshComponent*>(UHoudiniInputInstancedMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// (None)

class UClass* UHoudiniInputSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSplineComponent");

	return Clss;
}


// HoudiniInputSplineComponent HoudiniEngineRuntime.Default__HoudiniInputSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSplineComponent* UHoudiniInputSplineComponent::GetDefaultObj()
{
	static class UHoudiniInputSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSplineComponent*>(UHoudiniInputSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
// (None)

class UClass* UHoudiniInputGeometryCollectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputGeometryCollectionComponent");

	return Clss;
}


// HoudiniInputGeometryCollectionComponent HoudiniEngineRuntime.Default__HoudiniInputGeometryCollectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputGeometryCollectionComponent* UHoudiniInputGeometryCollectionComponent::GetDefaultObj()
{
	static class UHoudiniInputGeometryCollectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputGeometryCollectionComponent*>(UHoudiniInputGeometryCollectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
// (None)

class UClass* UHoudiniInputSkeletalMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputSkeletalMeshComponent");

	return Clss;
}


// HoudiniInputSkeletalMeshComponent HoudiniEngineRuntime.Default__HoudiniInputSkeletalMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputSkeletalMeshComponent* UHoudiniInputSkeletalMeshComponent::GetDefaultObj()
{
	static class UHoudiniInputSkeletalMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputSkeletalMeshComponent*>(UHoudiniInputSkeletalMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// (None)

class UClass* UHoudiniInputHoudiniSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputHoudiniSplineComponent");

	return Clss;
}


// HoudiniInputHoudiniSplineComponent HoudiniEngineRuntime.Default__HoudiniInputHoudiniSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputHoudiniSplineComponent* UHoudiniInputHoudiniSplineComponent::GetDefaultObj()
{
	static class UHoudiniInputHoudiniSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputHoudiniSplineComponent*>(UHoudiniInputHoudiniSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// (None)

class UClass* UHoudiniInputCameraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputCameraComponent");

	return Clss;
}


// HoudiniInputCameraComponent HoudiniEngineRuntime.Default__HoudiniInputCameraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputCameraComponent* UHoudiniInputCameraComponent::GetDefaultObj()
{
	static class UHoudiniInputCameraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputCameraComponent*>(UHoudiniInputCameraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// (None)

class UClass* UHoudiniInputHoudiniAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputHoudiniAsset");

	return Clss;
}


// HoudiniInputHoudiniAsset HoudiniEngineRuntime.Default__HoudiniInputHoudiniAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputHoudiniAsset* UHoudiniInputHoudiniAsset::GetDefaultObj()
{
	static class UHoudiniInputHoudiniAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputHoudiniAsset*>(UHoudiniInputHoudiniAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputActor
// (None)

class UClass* UHoudiniInputActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputActor");

	return Clss;
}


// HoudiniInputActor HoudiniEngineRuntime.Default__HoudiniInputActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputActor* UHoudiniInputActor::GetDefaultObj()
{
	static class UHoudiniInputActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputActor*>(UHoudiniInputActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputLandscape
// (None)

class UClass* UHoudiniInputLandscape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputLandscape");

	return Clss;
}


// HoudiniInputLandscape HoudiniEngineRuntime.Default__HoudiniInputLandscape
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputLandscape* UHoudiniInputLandscape::GetDefaultObj()
{
	static class UHoudiniInputLandscape* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputLandscape*>(UHoudiniInputLandscape::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputBrush
// (None)

class UClass* UHoudiniInputBrush::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputBrush");

	return Clss;
}


// HoudiniInputBrush HoudiniEngineRuntime.Default__HoudiniInputBrush
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputBrush* UHoudiniInputBrush::GetDefaultObj()
{
	static class UHoudiniInputBrush* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputBrush*>(UHoudiniInputBrush::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputDataTable
// (None)

class UClass* UHoudiniInputDataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputDataTable");

	return Clss;
}


// HoudiniInputDataTable HoudiniEngineRuntime.Default__HoudiniInputDataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputDataTable* UHoudiniInputDataTable::GetDefaultObj()
{
	static class UHoudiniInputDataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputDataTable*>(UHoudiniInputDataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
// (None)

class UClass* UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputFoliageType_InstancedStaticMesh");

	return Clss;
}


// HoudiniInputFoliageType_InstancedStaticMesh HoudiniEngineRuntime.Default__HoudiniInputFoliageType_InstancedStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputFoliageType_InstancedStaticMesh* UHoudiniInputFoliageType_InstancedStaticMesh::GetDefaultObj()
{
	static class UHoudiniInputFoliageType_InstancedStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputFoliageType_InstancedStaticMesh*>(UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInputBlueprint
// (None)

class UClass* UHoudiniInputBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInputBlueprint");

	return Clss;
}


// HoudiniInputBlueprint HoudiniEngineRuntime.Default__HoudiniInputBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInputBlueprint* UHoudiniInputBlueprint::GetDefaultObj()
{
	static class UHoudiniInputBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInputBlueprint*>(UHoudiniInputBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// (SceneComponent)

class UClass* UHoudiniInstancedActorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniInstancedActorComponent");

	return Clss;
}


// HoudiniInstancedActorComponent HoudiniEngineRuntime.Default__HoudiniInstancedActorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniInstancedActorComponent* UHoudiniInstancedActorComponent::GetDefaultObj()
{
	static class UHoudiniInstancedActorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniInstancedActorComponent*>(UHoudiniInstancedActorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// (SceneComponent)

class UClass* UHoudiniMeshSplitInstancerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniMeshSplitInstancerComponent");

	return Clss;
}


// HoudiniMeshSplitInstancerComponent HoudiniEngineRuntime.Default__HoudiniMeshSplitInstancerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniMeshSplitInstancerComponent* UHoudiniMeshSplitInstancerComponent::GetDefaultObj()
{
	static class UHoudiniMeshSplitInstancerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniMeshSplitInstancerComponent*>(UHoudiniMeshSplitInstancerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniLandscapePtr
// (None)

class UClass* UHoudiniLandscapePtr::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniLandscapePtr");

	return Clss;
}


// HoudiniLandscapePtr HoudiniEngineRuntime.Default__HoudiniLandscapePtr
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniLandscapePtr* UHoudiniLandscapePtr::GetDefaultObj()
{
	static class UHoudiniLandscapePtr* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniLandscapePtr*>(UHoudiniLandscapePtr::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer
// (None)

class UClass* UHoudiniLandscapeEditLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniLandscapeEditLayer");

	return Clss;
}


// HoudiniLandscapeEditLayer HoudiniEngineRuntime.Default__HoudiniLandscapeEditLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniLandscapeEditLayer* UHoudiniLandscapeEditLayer::GetDefaultObj()
{
	static class UHoudiniLandscapeEditLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniLandscapeEditLayer*>(UHoudiniLandscapeEditLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniOutput
// (None)

class UClass* UHoudiniOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniOutput");

	return Clss;
}


// HoudiniOutput HoudiniEngineRuntime.Default__HoudiniOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniOutput* UHoudiniOutput::GetDefaultObj()
{
	static class UHoudiniOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniOutput*>(UHoudiniOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameter
// (None)

class UClass* UHoudiniParameter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameter");

	return Clss;
}


// HoudiniParameter HoudiniEngineRuntime.Default__HoudiniParameter
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameter* UHoudiniParameter::GetDefaultObj()
{
	static class UHoudiniParameter* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameter*>(UHoudiniParameter::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterButton
// (None)

class UClass* UHoudiniParameterButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterButton");

	return Clss;
}


// HoudiniParameterButton HoudiniEngineRuntime.Default__HoudiniParameterButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterButton* UHoudiniParameterButton::GetDefaultObj()
{
	static class UHoudiniParameterButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterButton*>(UHoudiniParameterButton::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// (None)

class UClass* UHoudiniParameterButtonStrip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterButtonStrip");

	return Clss;
}


// HoudiniParameterButtonStrip HoudiniEngineRuntime.Default__HoudiniParameterButtonStrip
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterButtonStrip* UHoudiniParameterButtonStrip::GetDefaultObj()
{
	static class UHoudiniParameterButtonStrip* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterButtonStrip*>(UHoudiniParameterButtonStrip::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterChoice
// (None)

class UClass* UHoudiniParameterChoice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterChoice");

	return Clss;
}


// HoudiniParameterChoice HoudiniEngineRuntime.Default__HoudiniParameterChoice
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterChoice* UHoudiniParameterChoice::GetDefaultObj()
{
	static class UHoudiniParameterChoice* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterChoice*>(UHoudiniParameterChoice::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterColor
// (None)

class UClass* UHoudiniParameterColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterColor");

	return Clss;
}


// HoudiniParameterColor HoudiniEngineRuntime.Default__HoudiniParameterColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterColor* UHoudiniParameterColor::GetDefaultObj()
{
	static class UHoudiniParameterColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterColor*>(UHoudiniParameterColor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFile
// (None)

class UClass* UHoudiniParameterFile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFile");

	return Clss;
}


// HoudiniParameterFile HoudiniEngineRuntime.Default__HoudiniParameterFile
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFile* UHoudiniParameterFile::GetDefaultObj()
{
	static class UHoudiniParameterFile* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFile*>(UHoudiniParameterFile::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFloat
// (None)

class UClass* UHoudiniParameterFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFloat");

	return Clss;
}


// HoudiniParameterFloat HoudiniEngineRuntime.Default__HoudiniParameterFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFloat* UHoudiniParameterFloat::GetDefaultObj()
{
	static class UHoudiniParameterFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFloat*>(UHoudiniParameterFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFolder
// (None)

class UClass* UHoudiniParameterFolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFolder");

	return Clss;
}


// HoudiniParameterFolder HoudiniEngineRuntime.Default__HoudiniParameterFolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFolder* UHoudiniParameterFolder::GetDefaultObj()
{
	static class UHoudiniParameterFolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFolder*>(UHoudiniParameterFolder::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterFolderList
// (None)

class UClass* UHoudiniParameterFolderList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterFolderList");

	return Clss;
}


// HoudiniParameterFolderList HoudiniEngineRuntime.Default__HoudiniParameterFolderList
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterFolderList* UHoudiniParameterFolderList::GetDefaultObj()
{
	static class UHoudiniParameterFolderList* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterFolderList*>(UHoudiniParameterFolderList::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterInt
// (None)

class UClass* UHoudiniParameterInt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterInt");

	return Clss;
}


// HoudiniParameterInt HoudiniEngineRuntime.Default__HoudiniParameterInt
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterInt* UHoudiniParameterInt::GetDefaultObj()
{
	static class UHoudiniParameterInt* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterInt*>(UHoudiniParameterInt::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterLabel
// (None)

class UClass* UHoudiniParameterLabel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterLabel");

	return Clss;
}


// HoudiniParameterLabel HoudiniEngineRuntime.Default__HoudiniParameterLabel
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterLabel* UHoudiniParameterLabel::GetDefaultObj()
{
	static class UHoudiniParameterLabel* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterLabel*>(UHoudiniParameterLabel::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// (None)

class UClass* UHoudiniParameterMultiParm::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterMultiParm");

	return Clss;
}


// HoudiniParameterMultiParm HoudiniEngineRuntime.Default__HoudiniParameterMultiParm
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterMultiParm* UHoudiniParameterMultiParm::GetDefaultObj()
{
	static class UHoudiniParameterMultiParm* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterMultiParm*>(UHoudiniParameterMultiParm::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// (None)

class UClass* UHoudiniParameterOperatorPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterOperatorPath");

	return Clss;
}


// HoudiniParameterOperatorPath HoudiniEngineRuntime.Default__HoudiniParameterOperatorPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterOperatorPath* UHoudiniParameterOperatorPath::GetDefaultObj()
{
	static class UHoudiniParameterOperatorPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterOperatorPath*>(UHoudiniParameterOperatorPath::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// (None)

class UClass* UHoudiniParameterRampModificationEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampModificationEvent");

	return Clss;
}


// HoudiniParameterRampModificationEvent HoudiniEngineRuntime.Default__HoudiniParameterRampModificationEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampModificationEvent* UHoudiniParameterRampModificationEvent::GetDefaultObj()
{
	static class UHoudiniParameterRampModificationEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampModificationEvent*>(UHoudiniParameterRampModificationEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// (None)

class UClass* UHoudiniParameterRampFloatPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampFloatPoint");

	return Clss;
}


// HoudiniParameterRampFloatPoint HoudiniEngineRuntime.Default__HoudiniParameterRampFloatPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampFloatPoint* UHoudiniParameterRampFloatPoint::GetDefaultObj()
{
	static class UHoudiniParameterRampFloatPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampFloatPoint*>(UHoudiniParameterRampFloatPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// (None)

class UClass* UHoudiniParameterRampColorPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampColorPoint");

	return Clss;
}


// HoudiniParameterRampColorPoint HoudiniEngineRuntime.Default__HoudiniParameterRampColorPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampColorPoint* UHoudiniParameterRampColorPoint::GetDefaultObj()
{
	static class UHoudiniParameterRampColorPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampColorPoint*>(UHoudiniParameterRampColorPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// (None)

class UClass* UHoudiniParameterRampFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampFloat");

	return Clss;
}


// HoudiniParameterRampFloat HoudiniEngineRuntime.Default__HoudiniParameterRampFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampFloat* UHoudiniParameterRampFloat::GetDefaultObj()
{
	static class UHoudiniParameterRampFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampFloat*>(UHoudiniParameterRampFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterRampColor
// (None)

class UClass* UHoudiniParameterRampColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterRampColor");

	return Clss;
}


// HoudiniParameterRampColor HoudiniEngineRuntime.Default__HoudiniParameterRampColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterRampColor* UHoudiniParameterRampColor::GetDefaultObj()
{
	static class UHoudiniParameterRampColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterRampColor*>(UHoudiniParameterRampColor::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterSeparator
// (None)

class UClass* UHoudiniParameterSeparator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterSeparator");

	return Clss;
}


// HoudiniParameterSeparator HoudiniEngineRuntime.Default__HoudiniParameterSeparator
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterSeparator* UHoudiniParameterSeparator::GetDefaultObj()
{
	static class UHoudiniParameterSeparator* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterSeparator*>(UHoudiniParameterSeparator::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterString
// (None)

class UClass* UHoudiniParameterString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterString");

	return Clss;
}


// HoudiniParameterString HoudiniEngineRuntime.Default__HoudiniParameterString
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterString* UHoudiniParameterString::GetDefaultObj()
{
	static class UHoudiniParameterString* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterString*>(UHoudiniParameterString::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniParameterToggle
// (None)

class UClass* UHoudiniParameterToggle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniParameterToggle");

	return Clss;
}


// HoudiniParameterToggle HoudiniEngineRuntime.Default__HoudiniParameterToggle
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniParameterToggle* UHoudiniParameterToggle::GetDefaultObj()
{
	static class UHoudiniParameterToggle* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniParameterToggle*>(UHoudiniParameterToggle::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.TOPNode
// (None)

class UClass* UTOPNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TOPNode");

	return Clss;
}


// TOPNode HoudiniEngineRuntime.Default__TOPNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UTOPNode* UTOPNode::GetDefaultObj()
{
	static class UTOPNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UTOPNode*>(UTOPNode::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.TOPNetwork
// (None)

class UClass* UTOPNetwork::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TOPNetwork");

	return Clss;
}


// TOPNetwork HoudiniEngineRuntime.Default__TOPNetwork
// (Public, ClassDefaultObject, ArchetypeObject)

class UTOPNetwork* UTOPNetwork::GetDefaultObj()
{
	static class UTOPNetwork* Default = nullptr;

	if (!Default)
		Default = static_cast<UTOPNetwork*>(UTOPNetwork::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// (None)

class UClass* UHoudiniPDGAssetLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniPDGAssetLink");

	return Clss;
}


// HoudiniPDGAssetLink HoudiniEngineRuntime.Default__HoudiniPDGAssetLink
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniPDGAssetLink* UHoudiniPDGAssetLink::GetDefaultObj()
{
	static class UHoudiniPDGAssetLink* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniPDGAssetLink*>(UHoudiniPDGAssetLink::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// (None)

class UClass* UHoudiniRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniRuntimeSettings");

	return Clss;
}


// HoudiniRuntimeSettings HoudiniEngineRuntime.Default__HoudiniRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniRuntimeSettings* UHoudiniRuntimeSettings::GetDefaultObj()
{
	static class UHoudiniRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniRuntimeSettings*>(UHoudiniRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniSplineComponent
// (SceneComponent)

class UClass* UHoudiniSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniSplineComponent");

	return Clss;
}


// HoudiniSplineComponent HoudiniEngineRuntime.Default__HoudiniSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniSplineComponent* UHoudiniSplineComponent::GetDefaultObj()
{
	static class UHoudiniSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniSplineComponent*>(UHoudiniSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HoudiniEngineRuntime.HoudiniStaticMesh
// (None)

class UClass* UHoudiniStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniStaticMesh");

	return Clss;
}


// HoudiniStaticMesh HoudiniEngineRuntime.Default__HoudiniStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniStaticMesh* UHoudiniStaticMesh::GetDefaultObj()
{
	static class UHoudiniStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniStaticMesh*>(UHoudiniStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InVertexIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetVertexPosition(uint32 InVertexIndex, struct FVector3f& InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetVertexPosition");

	Params::UHoudiniStaticMesh_SetVertexPosition_Params Parms{};

	Parms.InVertexIndex = InVertexIndex;
	Parms.InPosition = InPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InVTangent                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InVTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexVTangent");

	Params::UHoudiniStaticMesh_SetTriangleVertexVTangent_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InVTangent = InVTangent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InUVLayer                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InUV                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, struct FVector2D& InUV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexUV");

	Params::UHoudiniStaticMesh_SetTriangleVertexUV_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InUVLayer = InUVLayer;
	Parms.InUV = InUV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InUTangent                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InUTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexUTangent");

	Params::UHoudiniStaticMesh_SetTriangleVertexUTangent_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InUTangent = InUTangent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InNormal                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexNormal");

	Params::UHoudiniStaticMesh_SetTriangleVertexNormal_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InNormal = InNormal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                  InTriangleVertexIndices                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexIndices(uint32 InTriangleIndex, struct FIntVector& InTriangleVertexIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexIndices");

	Params::UHoudiniStaticMesh_SetTriangleVertexIndices_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndices = InTriangleVertexIndices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      InColor                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexColor");

	Params::UHoudiniStaticMesh_SetTriangleVertexColor_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InColor = InColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
// (Final, Native, Public)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMaterialID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleMaterialID");

	Params::UHoudiniStaticMesh_SetTriangleMaterialID_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InMaterialID = InMaterialID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
// (Final, Native, Public, HasOutParams)
// Parameters:
// uint32                             InMaterialIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStaticMaterial             InStaticMaterial                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetStaticMaterial(uint32 InMaterialIndex, struct FStaticMaterial& InStaticMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetStaticMaterial");

	Params::UHoudiniStaticMesh_SetStaticMaterial_Params Parms{};

	Parms.InMaterialIndex = InMaterialIndex;
	Parms.InStaticMaterial = InStaticMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
// (Final, Native, Public)
// Parameters:
// uint32                             InNumUVLayers                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetNumUVLayers(uint32 InNumUVLayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetNumUVLayers");

	Params::UHoudiniStaticMesh_SetNumUVLayers_Params Parms{};

	Parms.InNumUVLayers = InNumUVLayers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
// (Final, Native, Public)
// Parameters:
// uint32                             InNumStaticMaterials                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetNumStaticMaterials(uint32 InNumStaticMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetNumStaticMaterials");

	Params::UHoudiniStaticMesh_SetNumStaticMaterials_Params Parms{};

	Parms.InNumStaticMaterials = InNumStaticMaterials;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
// (Final, Native, Public)
// Parameters:
// bool                               bInHasTangents                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasTangents(bool bInHasTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasTangents");

	Params::UHoudiniStaticMesh_SetHasTangents_Params Parms{};

	Parms.bInHasTangents = bInHasTangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
// (Final, Native, Public)
// Parameters:
// bool                               bInHasPerFaceMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasPerFaceMaterials(bool bInHasPerFaceMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasPerFaceMaterials");

	Params::UHoudiniStaticMesh_SetHasPerFaceMaterials_Params Parms{};

	Parms.bInHasPerFaceMaterials = bInHasPerFaceMaterials;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
// (Final, Native, Public)
// Parameters:
// bool                               bInHasNormals                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasNormals(bool bInHasNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasNormals");

	Params::UHoudiniStaticMesh_SetHasNormals_Params Parms{};

	Parms.bInHasNormals = bInHasNormals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
// (Final, Native, Public)
// Parameters:
// bool                               bInHasColors                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasColors(bool bInHasColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasColors");

	Params::UHoudiniStaticMesh_SetHasColors_Params Parms{};

	Parms.bInHasColors = bInHasColors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
// (Final, Native, Public)
// Parameters:

void UHoudiniStaticMesh::Optimize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "Optimize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
// (Final, Native, Public, Const)
// Parameters:
// bool                               bInSkipVertexIndicesCheck                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::IsValid(bool bInSkipVertexIndicesCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "IsValid");

	Params::UHoudiniStaticMesh_IsValid_Params Parms{};

	Parms.bInSkipVertexIndicesCheck = bInSkipVertexIndicesCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
// (Final, Native, Public)
// Parameters:
// uint32                             InNumVertices                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InNumTriangles                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InNumUVLayers                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InInitialNumStaticMaterials                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasNormals                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasTangents                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasColors                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasPerFaceMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "Initialize");

	Params::UHoudiniStaticMesh_Initialize_Params Parms{};

	Parms.InNumVertices = InNumVertices;
	Parms.InNumTriangles = InNumTriangles;
	Parms.InNumUVLayers = InNumUVLayers;
	Parms.InInitialNumStaticMaterials = InInitialNumStaticMaterials;
	Parms.bInHasNormals = bInHasNormals;
	Parms.bInHasTangents = bInHasTangents;
	Parms.bInHasColors = bInHasColors;
	Parms.bInHasPerFaceMaterials = bInHasPerFaceMaterials;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasTangents");

	Params::UHoudiniStaticMesh_HasTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasPerFaceMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasPerFaceMaterials");

	Params::UHoudiniStaticMesh_HasPerFaceMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasNormals");

	Params::UHoudiniStaticMesh_HasNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasColors");

	Params::UHoudiniStaticMesh_HasColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexPositions");

	Params::UHoudiniStaticMesh_GetVertexPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceVTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceVTangents");

	Params::UHoudiniStaticMesh_GetVertexInstanceVTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector2D>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector2D> UHoudiniStaticMesh::GetVertexInstanceUVs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceUVs");

	Params::UHoudiniStaticMesh_GetVertexInstanceUVs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceUTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceUTangents");

	Params::UHoudiniStaticMesh_GetVertexInstanceUTangents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceNormals");

	Params::UHoudiniStaticMesh_GetVertexInstanceNormals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FColor>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FColor> UHoudiniStaticMesh::GetVertexInstanceColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceColors");

	Params::UHoudiniStaticMesh_GetVertexInstanceColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FIntVector>          ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FIntVector> UHoudiniStaticMesh::GetTriangleIndices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetTriangleIndices");

	Params::UHoudiniStaticMesh_GetTriangleIndices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FStaticMaterial>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FStaticMaterial> UHoudiniStaticMesh::GetStaticMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetStaticMaterials");

	Params::UHoudiniStaticMesh_GetStaticMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumVertices");

	Params::UHoudiniStaticMesh_GetNumVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumVertexInstances");

	Params::UHoudiniStaticMesh_GetNumVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumUVLayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumUVLayers");

	Params::UHoudiniStaticMesh_GetNumUVLayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumTriangles");

	Params::UHoudiniStaticMesh_GetNumTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumStaticMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumStaticMaterials");

	Params::UHoudiniStaticMesh_GetNumStaticMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
// (Final, Native, Public, Const)
// Parameters:
// class FName                        InMaterialSlotName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHoudiniStaticMesh::GetMaterialIndex(class FName InMaterialSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterialIndex");

	Params::UHoudiniStaticMesh_GetMaterialIndex_Params Parms{};

	Parms.InMaterialSlotName = InMaterialSlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
// (Final, Native, Public, Const)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<int32> UHoudiniStaticMesh::GetMaterialIDsPerTriangle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterialIDsPerTriangle");

	Params::UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
// (Final, Native, Public)
// Parameters:
// int32                              InMaterialIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UHoudiniStaticMesh::GetMaterial(int32 InMaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterial");

	Params::UHoudiniStaticMesh_GetMaterial_Params Parms{};

	Parms.InMaterialIndex = InMaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
// (Final, Native, Public)
// Parameters:
// bool                               bInComputeWeightedNormals                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::CalculateTangents(bool bInComputeWeightedNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalculateTangents");

	Params::UHoudiniStaticMesh_CalculateTangents_Params Parms{};

	Parms.bInComputeWeightedNormals = bInComputeWeightedNormals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
// (Final, Native, Public)
// Parameters:
// bool                               bInComputeWeightedNormals                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::CalculateNormals(bool bInComputeWeightedNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalculateNormals");

	Params::UHoudiniStaticMesh_CalculateNormals_Params Parms{};

	Parms.bInComputeWeightedNormals = bInComputeWeightedNormals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UHoudiniStaticMesh::CalcBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalcBounds");

	Params::UHoudiniStaticMesh_CalcBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FStaticMaterial             InStaticMaterial                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::AddStaticMaterial(struct FStaticMaterial& InStaticMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "AddStaticMaterial");

	Params::UHoudiniStaticMesh_AddStaticMaterial_Params Parms{};

	Parms.InStaticMaterial = InStaticMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHoudiniStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniStaticMeshComponent");

	return Clss;
}


// HoudiniStaticMeshComponent HoudiniEngineRuntime.Default__HoudiniStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniStaticMeshComponent* UHoudiniStaticMeshComponent::GetDefaultObj()
{
	static class UHoudiniStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniStaticMeshComponent*>(UHoudiniStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*          InMesh                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMeshComponent::SetMesh(class UHoudiniStaticMesh* InMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "SetMesh");

	Params::UHoudiniStaticMeshComponent_SetMesh_Params Parms{};

	Parms.InMesh = InMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
// (Final, Native, Public)
// Parameters:
// bool                               bInHoudiniIconVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "SetHoudiniIconVisible");

	Params::UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params Parms{};

	Parms.bInHoudiniIconVisible = bInHoudiniIconVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
// (Final, Native, Public)
// Parameters:

void UHoudiniStaticMeshComponent::NotifyMeshUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "NotifyMeshUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "IsHoudiniIconVisible");

	Params::UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "GetMesh");

	Params::UHoudiniStaticMeshComponent_GetMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
// (None)

class UClass* IHoudiniAssetStateEvents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniAssetStateEvents");

	return Clss;
}


// HoudiniAssetStateEvents HoudiniEngineRuntime.Default__HoudiniAssetStateEvents
// (Public, ClassDefaultObject, ArchetypeObject)

class IHoudiniAssetStateEvents* IHoudiniAssetStateEvents::GetDefaultObj()
{
	static class IHoudiniAssetStateEvents* Default = nullptr;

	if (!Default)
		Default = static_cast<IHoudiniAssetStateEvents*>(IHoudiniAssetStateEvents::StaticClass()->DefaultObject);

	return Default;
}

}


