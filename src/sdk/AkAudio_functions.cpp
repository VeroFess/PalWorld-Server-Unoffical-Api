#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AkAudio.AkPortalComponent
// (SceneComponent)

class UClass* UAkPortalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkPortalComponent");

	return Clss;
}


// AkPortalComponent AkAudio.Default__AkPortalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkPortalComponent* UAkPortalComponent::GetDefaultObj()
{
	static class UAkPortalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkPortalComponent*>(UAkPortalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkPortalComponent.PortalPlacementValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkPortalComponent::PortalPlacementValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "PortalPlacementValid");

	Params::UAkPortalComponent_PortalPlacementValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkPortalComponent.OpenPortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkPortalComponent::OpenPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "OpenPortal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkPortalComponent.GetPrimitiveParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "GetPrimitiveParent");

	Params::UAkPortalComponent_GetPrimitiveParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkPortalComponent.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAkAcousticPortalState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAkAcousticPortalState UAkPortalComponent::GetCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "GetCurrentState");

	Params::UAkPortalComponent_GetCurrentState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkPortalComponent.ClosePortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkPortalComponent::ClosePortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "ClosePortal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkAcousticPortal
// (Actor)

class UClass* AAkAcousticPortal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAcousticPortal");

	return Clss;
}


// AkAcousticPortal AkAudio.Default__AkAcousticPortal
// (Public, ClassDefaultObject, ArchetypeObject)

class AAkAcousticPortal* AAkAcousticPortal::GetDefaultObj()
{
	static class AAkAcousticPortal* Default = nullptr;

	if (!Default)
		Default = static_cast<AAkAcousticPortal*>(AAkAcousticPortal::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkAcousticPortal.OpenPortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAkAcousticPortal::OpenPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAcousticPortal", "OpenPortal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAkAcousticPortalState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAcousticPortal", "GetCurrentState");

	Params::AAkAcousticPortal_GetCurrentState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAcousticPortal.ClosePortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAkAcousticPortal::ClosePortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAcousticPortal", "ClosePortal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkAudioType
// (None)

class UClass* UAkAudioType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAudioType");

	return Clss;
}


// AkAudioType AkAudio.Default__AkAudioType
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAudioType* UAkAudioType::GetDefaultObj()
{
	static class UAkAudioType* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAudioType*>(UAkAudioType::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAcousticTexture
// (None)

class UClass* UAkAcousticTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAcousticTexture");

	return Clss;
}


// AkAcousticTexture AkAudio.Default__AkAcousticTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAcousticTexture* UAkAcousticTexture::GetDefaultObj()
{
	static class UAkAcousticTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAcousticTexture*>(UAkAcousticTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAcousticTextureSetComponent
// (SceneComponent)

class UClass* UAkAcousticTextureSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAcousticTextureSetComponent");

	return Clss;
}


// AkAcousticTextureSetComponent AkAudio.Default__AkAcousticTextureSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAcousticTextureSetComponent* UAkAcousticTextureSetComponent::GetDefaultObj()
{
	static class UAkAcousticTextureSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAcousticTextureSetComponent*>(UAkAcousticTextureSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAmbientSound
// (Actor)

class UClass* AAkAmbientSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAmbientSound");

	return Clss;
}


// AkAmbientSound AkAudio.Default__AkAmbientSound
// (Public, ClassDefaultObject, ArchetypeObject)

class AAkAmbientSound* AAkAmbientSound::GetDefaultObj()
{
	static class AAkAmbientSound* Default = nullptr;

	if (!Default)
		Default = static_cast<AAkAmbientSound*>(AAkAmbientSound::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void AAkAmbientSound::StopAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAmbientSound", "StopAmbientSound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void AAkAmbientSound::StartAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAmbientSound", "StartAmbientSound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkAndroidInitializationSettings
// (None)

class UClass* UAkAndroidInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAndroidInitializationSettings");

	return Clss;
}


// AkAndroidInitializationSettings AkAudio.Default__AkAndroidInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAndroidInitializationSettings* UAkAndroidInitializationSettings::GetDefaultObj()
{
	static class UAkAndroidInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAndroidInitializationSettings*>(UAkAndroidInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAndroidInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkPlatformInfo
// (None)

class UClass* UAkPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkPlatformInfo");

	return Clss;
}


// AkPlatformInfo AkAudio.Default__AkPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkPlatformInfo* UAkPlatformInfo::GetDefaultObj()
{
	static class UAkPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkPlatformInfo*>(UAkPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAndroidPlatformInfo
// (None)

class UClass* UAkAndroidPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAndroidPlatformInfo");

	return Clss;
}


// AkAndroidPlatformInfo AkAudio.Default__AkAndroidPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAndroidPlatformInfo* UAkAndroidPlatformInfo::GetDefaultObj()
{
	static class UAkAndroidPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAndroidPlatformInfo*>(UAkAndroidPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAssetBase
// (None)

class UClass* UAkAssetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAssetBase");

	return Clss;
}


// AkAssetBase AkAudio.Default__AkAssetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAssetBase* UAkAssetBase::GetDefaultObj()
{
	static class UAkAssetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAssetBase*>(UAkAssetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAssetData
// (None)

class UClass* UAkAssetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAssetData");

	return Clss;
}


// AkAssetData AkAudio.Default__AkAssetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAssetData* UAkAssetData::GetDefaultObj()
{
	static class UAkAssetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAssetData*>(UAkAssetData::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAssetDataWithMedia
// (None)

class UClass* UAkAssetDataWithMedia::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAssetDataWithMedia");

	return Clss;
}


// AkAssetDataWithMedia AkAudio.Default__AkAssetDataWithMedia
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAssetDataWithMedia* UAkAssetDataWithMedia::GetDefaultObj()
{
	static class UAkAssetDataWithMedia* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAssetDataWithMedia*>(UAkAssetDataWithMedia::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAssetPlatformData
// (None)

class UClass* UAkAssetPlatformData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAssetPlatformData");

	return Clss;
}


// AkAssetPlatformData AkAudio.Default__AkAssetPlatformData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAssetPlatformData* UAkAssetPlatformData::GetDefaultObj()
{
	static class UAkAssetPlatformData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAssetPlatformData*>(UAkAssetPlatformData::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAssetDataSwitchContainerData
// (None)

class UClass* UAkAssetDataSwitchContainerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAssetDataSwitchContainerData");

	return Clss;
}


// AkAssetDataSwitchContainerData AkAudio.Default__AkAssetDataSwitchContainerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAssetDataSwitchContainerData* UAkAssetDataSwitchContainerData::GetDefaultObj()
{
	static class UAkAssetDataSwitchContainerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAssetDataSwitchContainerData*>(UAkAssetDataSwitchContainerData::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAssetDataSwitchContainer
// (None)

class UClass* UAkAssetDataSwitchContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAssetDataSwitchContainer");

	return Clss;
}


// AkAssetDataSwitchContainer AkAudio.Default__AkAssetDataSwitchContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAssetDataSwitchContainer* UAkAssetDataSwitchContainer::GetDefaultObj()
{
	static class UAkAssetDataSwitchContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAssetDataSwitchContainer*>(UAkAssetDataSwitchContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAudioEventData
// (None)

class UClass* UAkAudioEventData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAudioEventData");

	return Clss;
}


// AkAudioEventData AkAudio.Default__AkAudioEventData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAudioEventData* UAkAudioEventData::GetDefaultObj()
{
	static class UAkAudioEventData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAudioEventData*>(UAkAudioEventData::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAudioBank
// (None)

class UClass* UAkAudioBank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAudioBank");

	return Clss;
}


// AkAudioBank AkAudio.Default__AkAudioBank
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAudioBank* UAkAudioBank::GetDefaultObj()
{
	static class UAkAudioBank* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAudioBank*>(UAkAudioBank::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkAudioEvent
// (None)

class UClass* UAkAudioEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAudioEvent");

	return Clss;
}


// AkAudioEvent AkAudio.Default__AkAudioEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAudioEvent* UAkAudioEvent::GetDefaultObj()
{
	static class UAkAudioEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAudioEvent*>(UAkAudioEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkAudioEvent.GetMinimumDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMinimumDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetMinimumDuration");

	Params::UAkAudioEvent_GetMinimumDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAudioEvent.GetMaximumDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMaximumDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetMaximumDuration");

	Params::UAkAudioEvent_GetMaximumDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMaxAttenuationRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetMaxAttenuationRadius");

	Params::UAkAudioEvent_GetMaxAttenuationRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAudioEvent.GetIsInfinite
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkAudioEvent::GetIsInfinite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetIsInfinite");

	Params::UAkAudioEvent_GetIsInfinite_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkGameObject
// (SceneComponent)

class UClass* UAkGameObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkGameObject");

	return Clss;
}


// AkGameObject AkAudio.Default__AkGameObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkGameObject* UAkGameObject::GetDefaultObj()
{
	static class UAkGameObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkGameObject*>(UAkGameObject::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkGameObject.Stop
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAkGameObject::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameObject.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InterpolationTimeMs                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RTPC                                                             (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameObject::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const class FString& RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "SetRTPCValue");

	Params::UAkGameObject_SetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.Value = Value;
	Parms.InterpolationTimeMs = InterpolationTimeMs;
	Parms.RTPC = RTPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameObject::PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo, int32* PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAssociatedAkEventAsync");

	Params::UAkGameObject_PostAssociatedAkEventAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkGameObject.PostAssociatedAkEvent
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameObject::PostAssociatedAkEvent(int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAssociatedAkEvent");

	Params::UAkGameObject_PostAssociatedAkEvent_Params Parms{};

	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameObject.PostAkEventAsync
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkGameObject::PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32* PlayingID, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAkEventAsync");

	Params::UAkGameObject_PostAkEventAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkGameObject.PostAkEvent
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// class FString                      In_EventName                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameObject::PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& In_EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAkEvent");

	Params::UAkGameObject_PostAkEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.In_EventName = In_EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameObject.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          InputValueType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          OutputValueType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RTPC                                                             (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameObject::GetRTPCValue(class UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, const class FString& RTPC, int32 PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "GetRTPCValue");

	Params::UAkGameObject_GetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.InputValueType = InputValueType;
	Parms.RTPC = RTPC;
	Parms.PlayingID = PlayingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (OutputValueType != nullptr)
		*OutputValueType = Parms.OutputValueType;

}


// Class AkAudio.AkComponent
// (SceneComponent)

class UClass* UAkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkComponent");

	return Clss;
}


// AkComponent AkAudio.Default__AkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkComponent* UAkComponent::GetDefaultObj()
{
	static class UAkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkComponent*>(UAkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InUseReverbVolumes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::UseReverbVolumes(bool InUseReverbVolumes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "UseReverbVolumes");

	Params::UAkComponent_UseReverbVolumes_Params Parms{};

	Parms.InUseReverbVolumes = InUseReverbVolumes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.UseEarlyReflections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAuxBus*                   AuxBus                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Order                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BusSendGain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SpotReflectors                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AuxBusName                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "UseEarlyReflections");

	Params::UAkComponent_UseEarlyReflections_Params Parms{};

	Parms.AuxBus = AuxBus;
	Parms.Order = Order;
	Parms.BusSendGain = BusSendGain;
	Parms.MaxPathLength = MaxPathLength;
	Parms.SpotReflectors = SpotReflectors;
	Parms.AuxBusName = AuxBusName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetSwitch
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SwitchGroup                                                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SwitchState                                                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetSwitch");

	Params::UAkComponent_SetSwitch_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.SwitchGroup = SwitchGroup;
	Parms.SwitchState = SwitchState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bStopWhenOwnerDestroyed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetStopWhenOwnerDestroyed");

	Params::UAkComponent_SetStopWhenOwnerDestroyed_Params Parms{};

	Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              BusVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetOutputBusVolume");

	Params::UAkComponent_SetOutputBusVolume_Params Parms{};

	Parms.BusVolume = BusVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetListeners
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>        Listeners                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAkComponent::SetListeners(TArray<class UAkComponent*>& Listeners)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetListeners");

	Params::UAkComponent_SetListeners_Params Parms{};

	Parms.Listeners = Listeners;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetGameObjectRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              In_outerRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              In_innerRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetGameObjectRadius(float In_outerRadius, float In_innerRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetGameObjectRadius");

	Params::UAkComponent_SetGameObjectRadius_Params Parms{};

	Parms.In_outerRadius = In_outerRadius;
	Parms.In_innerRadius = In_innerRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              SendVolume                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetEarlyReflectionsVolume");

	Params::UAkComponent_SetEarlyReflectionsVolume_Params Parms{};

	Parms.SendVolume = SendVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AuxBusName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsAuxBus(const class FString& AuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetEarlyReflectionsAuxBus");

	Params::UAkComponent_SetEarlyReflectionsAuxBus_Params Parms{};

	Parms.AuxBusName = AuxBusName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetAttenuationScalingFactor");

	Params::UAkComponent_SetAttenuationScalingFactor_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.PostTrigger
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkTrigger*                  TriggerValue                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Trigger                                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostTrigger");

	Params::UAkComponent_PostTrigger_Params Parms{};

	Parms.TriggerValue = TriggerValue;
	Parms.Trigger = Trigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEndAsync");

	Params::UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params Parms{};

	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEnd");

	Params::UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params Parms{};

	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkComponent.PostAkEventByName
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      In_EventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAkEventByName(const class FString& In_EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventByName");

	Params::UAkComponent_PostAkEventByName_Params Parms{};

	Parms.In_EventName = In_EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkComponent::PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventAndWaitForEndAsync");

	Params::UAkComponent_PostAkEventAndWaitForEndAsync_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      In_EventName                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& In_EventName, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventAndWaitForEnd");

	Params::UAkComponent_PostAkEventAndWaitForEnd_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.In_EventName = In_EventName;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkComponent::GetAttenuationRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "GetAttenuationRadius");

	Params::UAkComponent_GetAttenuationRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkAudioInputComponent
// (SceneComponent)

class UClass* UAkAudioInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAudioInputComponent");

	return Clss;
}


// AkAudioInputComponent AkAudio.Default__AkAudioInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAudioInputComponent* UAkAudioInputComponent::GetDefaultObj()
{
	static class UAkAudioInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAudioInputComponent*>(UAkAudioInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioInputComponent", "PostAssociatedAudioInputEvent");

	Params::UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkAuxBus
// (None)

class UClass* UAkAuxBus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkAuxBus");

	return Clss;
}


// AkAuxBus AkAudio.Default__AkAuxBus
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkAuxBus* UAkAuxBus::GetDefaultObj()
{
	static class UAkAuxBus* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkAuxBus*>(UAkAuxBus::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkCheckBox
// (None)

class UClass* UAkCheckBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkCheckBox");

	return Clss;
}


// AkCheckBox AkAudio.Default__AkCheckBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkCheckBox* UAkCheckBox::GetDefaultObj()
{
	static class UAkCheckBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkCheckBox*>(UAkCheckBox::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkCheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsChecked                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetIsChecked");

	Params::UAkCheckBox_SetIsChecked_Params Parms{};

	Parms.InIsChecked = InIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkCheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECheckBoxState          InCheckedState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetCheckedState");

	Params::UAkCheckBox_SetCheckedState_Params Parms{};

	Parms.InCheckedState = InCheckedState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkCheckBox.SetAkItemId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkItemId(struct FGuid& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetAkItemId");

	Params::UAkCheckBox_SetAkItemId_Params Parms{};

	Parms.ItemId = ItemId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemProperty                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkBoolProperty(const class FString& ItemProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetAkBoolProperty");

	Params::UAkCheckBox_SetAkBoolProperty_Params Parms{};

	Parms.ItemProperty = ItemProperty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkCheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkCheckBox::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "IsPressed");

	Params::UAkCheckBox_IsPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkCheckBox::IsChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "IsChecked");

	Params::UAkCheckBox_IsChecked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "GetCheckedState");

	Params::UAkCheckBox_GetCheckedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.GetAkProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkCheckBox::GetAkProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "GetAkProperty");

	Params::UAkCheckBox_GetAkProperty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.GetAkItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UAkCheckBox::GetAkItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "GetAkItemId");

	Params::UAkCheckBox_GetAkItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.DrawPortalComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UDrawPortalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPortalComponent");

	return Clss;
}


// DrawPortalComponent AkAudio.Default__DrawPortalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPortalComponent* UDrawPortalComponent::GetDefaultObj()
{
	static class UDrawPortalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPortalComponent*>(UDrawPortalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.DrawRoomComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UDrawRoomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawRoomComponent");

	return Clss;
}


// DrawRoomComponent AkAudio.Default__DrawRoomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawRoomComponent* UDrawRoomComponent::GetDefaultObj()
{
	static class UDrawRoomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawRoomComponent*>(UDrawRoomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkFolder
// (None)

class UClass* UAkFolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkFolder");

	return Clss;
}


// AkFolder AkAudio.Default__AkFolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkFolder* UAkFolder::GetDefaultObj()
{
	static class UAkFolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkFolder*>(UAkFolder::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkGameplayStatics
// (None)

class UClass* UAkGameplayStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkGameplayStatics");

	return Clss;
}


// AkGameplayStatics AkAudio.Default__AkGameplayStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkGameplayStatics* UAkGameplayStatics::GetDefaultObj()
{
	static class UAkGameplayStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkGameplayStatics*>(UAkGameplayStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               InUseReverbVolumes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UseReverbVolumes(bool InUseReverbVolumes, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UseReverbVolumes");

	Params::UAkGameplayStatics_UseReverbVolumes_Params Parms{};

	Parms.InUseReverbVolumes = InUseReverbVolumes;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAuxBus*                   AuxBus                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Order                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BusSendGain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SpotReflectors                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AuxBusName                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UseEarlyReflections");

	Params::UAkGameplayStatics_UseEarlyReflections_Params Parms{};

	Parms.Actor = Actor;
	Parms.AuxBus = AuxBus;
	Parms.Order = Order;
	Parms.BusSendGain = BusSendGain;
	Parms.MaxPathLength = MaxPathLength;
	Parms.SpotReflectors = SpotReflectors;
	Parms.AuxBusName = AuxBusName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BankName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBankByName(const class FString& BankName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBankByName");

	Params::UAkGameplayStatics_UnloadBankByName_Params Parms{};

	Parms.BankName = BankName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.UnloadBankAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 BankUnloadedCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankUnloadedCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBankAsync");

	Params::UAkGameplayStatics_UnloadBankAsync_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankUnloadedCallback = BankUnloadedCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BankName                                                         (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBank");

	Params::UAkGameplayStatics_UnloadBank_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankName = BankName;
	Parms.LatentInfo = LatentInfo;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::StopProfilerCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopProfilerCapture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::StopOutputCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopOutputCapture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopAllAmbientSounds");

	Params::UAkGameplayStatics_StopAllAmbientSounds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StopAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::StopAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StopActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopActor");

	Params::UAkGameplayStatics_StopActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartProfilerCapture(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartProfilerCapture");

	Params::UAkGameplayStatics_StartProfilerCapture_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartOutputCapture(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartOutputCapture");

	Params::UAkGameplayStatics_StartOutputCapture_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartAllAmbientSounds");

	Params::UAkGameplayStatics_StartAllAmbientSounds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoPost                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AutoDestroy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SpawnAkComponentAtLocation");

	Params::UAkGameplayStatics_SpawnAkComponentAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Orientation = Orientation;
	Parms.AutoPost = AutoPost;
	Parms.EventName = EventName;
	Parms.AutoDestroy = AutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.SetSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SwitchGroup                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SwitchState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, class FName SwitchGroup, class FName SwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetSwitch");

	Params::UAkGameplayStatics_SetSwitch_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.Actor = Actor;
	Parms.SwitchGroup = SwitchGroup;
	Parms.SwitchState = SwitchState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkStateValue*               StateValue                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StateGroup                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetState(class UAkStateValue* StateValue, class FName StateGroup, class FName State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetState");

	Params::UAkGameplayStatics_SetState_Params Parms{};

	Parms.StateValue = StateValue;
	Parms.StateGroup = StateGroup;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      SpeakerAngles                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              HeightAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DeviceShareset                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, const class FString& DeviceShareset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetSpeakerAngles");

	Params::UAkGameplayStatics_SetSpeakerAngles_Params Parms{};

	Parms.SpeakerAngles = SpeakerAngles;
	Parms.HeightAngle = HeightAngle;
	Parms.DeviceShareset = DeviceShareset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InterpolationTimeMs                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RTPC                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetRTPCValue");

	Params::UAkGameplayStatics_SetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.Value = Value;
	Parms.InterpolationTimeMs = InterpolationTimeMs;
	Parms.Actor = Actor;
	Parms.RTPC = RTPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Order                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RefreshPaths                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetReflectionsOrder(int32 Order, bool RefreshPaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetReflectionsOrder");

	Params::UAkGameplayStatics_SetReflectionsOrder_Params Parms{};

	Parms.Order = Order;
	Parms.RefreshPaths = RefreshPaths;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkPortalComponent*          PortalComponent0                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkPortalComponent*          PortalComponent1                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObstructionValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPortalToPortalObstruction");

	Params::UAkGameplayStatics_SetPortalToPortalObstruction_Params Parms{};

	Parms.PortalComponent0 = PortalComponent0;
	Parms.PortalComponent1 = PortalComponent1;
	Parms.ObstructionValue = ObstructionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkPortalComponent*          PortalComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObstructionValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OcclusionValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPortalObstructionAndOcclusion");

	Params::UAkGameplayStatics_SetPortalObstructionAndOcclusion_Params Parms{};

	Parms.PortalComponent = PortalComponent;
	Parms.ObstructionValue = ObstructionValue;
	Parms.OcclusionValue = OcclusionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPanningRule            PanRule                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPanningRule(enum class EPanningRule PanRule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPanningRule");

	Params::UAkGameplayStatics_SetPanningRule_Params Parms{};

	Parms.PanRule = PanRule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              BusVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOutputBusVolume");

	Params::UAkGameplayStatics_SetOutputBusVolume_Params Parms{};

	Parms.BusVolume = BusVolume;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ScalingFactor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOcclusionScalingFactor");

	Params::UAkGameplayStatics_SetOcclusionScalingFactor_Params Parms{};

	Parms.ScalingFactor = ScalingFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              RefreshInterval                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOcclusionRefreshInterval");

	Params::UAkGameplayStatics_SetOcclusionRefreshInterval_Params Parms{};

	Parms.RefreshInterval = RefreshInterval;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Positions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultiplePositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultiplePositions");

	Params::UAkGameplayStatics_SetMultiplePositions_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.Positions = Positions;
	Parms.MultiPositionType = MultiPositionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkChannelMask>      ChannelMasks                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Positions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FAkChannelMask>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultipleChannelMaskEmitterPositions");

	Params::UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.ChannelMasks = ChannelMasks;
	Parms.Positions = Positions;
	Parms.MultiPositionType = MultiPositionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EAkChannelConfiguration>ChannelMasks                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Positions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<enum class EAkChannelConfiguration>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultipleChannelEmitterPositions");

	Params::UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.ChannelMasks = ChannelMasks;
	Parms.Positions = Positions;
	Parms.MultiPositionType = MultiPositionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkPortalComponent*          PortalComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObstructionValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetGameObjectToPortalObstruction");

	Params::UAkGameplayStatics_SetGameObjectToPortalObstruction_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.PortalComponent = PortalComponent;
	Parms.ObstructionValue = ObstructionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AudioCulture                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Completed                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const class FString& AudioCulture, FDelegateProperty_& Completed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetCurrentAudioCultureAsync");

	Params::UAkGameplayStatics_SetCurrentAudioCultureAsync_Params Parms{};

	Parms.AudioCulture = AudioCulture;
	Parms.Completed = Completed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AudioCulture                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetCurrentAudioCulture");

	Params::UAkGameplayStatics_SetCurrentAudioCulture_Params Parms{};

	Parms.AudioCulture = AudioCulture;
	Parms.LatentInfo = LatentInfo;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkChannelConfiguration ChannelConfiguration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetBusConfig(const class FString& BusName, enum class EAkChannelConfiguration ChannelConfiguration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetBusConfig");

	Params::UAkGameplayStatics_SetBusConfig_Params Parms{};

	Parms.BusName = BusName;
	Parms.ChannelConfiguration = ChannelConfiguration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.ResetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InterpolationTimeMs                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RTPC                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ResetRTPCValue");

	Params::UAkGameplayStatics_ResetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.InterpolationTimeMs = InterpolationTimeMs;
	Parms.Actor = Actor;
	Parms.RTPC = RTPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.ReplaceMainOutput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkOutputSettings           MainOutputSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ReplaceMainOutput");

	Params::UAkGameplayStatics_ReplaceMainOutput_Params Parms{};

	Parms.MainOutputSettings = MainOutputSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.PostTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkTrigger*                  TriggerValue                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Trigger                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, class FName Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostTrigger");

	Params::UAkGameplayStatics_PostTrigger_Params Parms{};

	Parms.TriggerValue = TriggerValue;
	Parms.Actor = Actor;
	Parms.Trigger = Trigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.PostEventByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventByName");

	Params::UAkGameplayStatics_PostEventByName_Params Parms{};

	Parms.EventName = EventName;
	Parms.Actor = Actor;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, class FName AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAttached");

	Params::UAkGameplayStatics_PostEventAttached_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.AttachPointName = AttachPointName;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAtLocationByName");

	Params::UAkGameplayStatics_PostEventAtLocationByName_Params Parms{};

	Parms.EventName = EventName;
	Parms.Location = Location;
	Parms.Orientation = Orientation;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAtLocation");

	Params::UAkGameplayStatics_PostEventAtLocation_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Orientation = Orientation;
	Parms.EventName = EventName;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEvent");

	Params::UAkGameplayStatics_PostEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEventAsync");

	Params::UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEvent");

	Params::UAkGameplayStatics_PostAndWaitForEndOfEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.ExternalSources = ExternalSources;
	Parms.EventName = EventName;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::LoadInitBank()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadInitBank");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.LoadBanks
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UAkAudioBank*>        SoundBanks                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               SynchronizeSoundBanks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBanks");

	Params::UAkGameplayStatics_LoadBanks_Params Parms{};

	Parms.SoundBanks = SoundBanks;
	Parms.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BankName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBankByName(const class FString& BankName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBankByName");

	Params::UAkGameplayStatics_LoadBankByName_Params Parms{};

	Parms.BankName = BankName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.LoadBankAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 BankLoadedCallback                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankLoadedCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBankAsync");

	Params::UAkGameplayStatics_LoadBankAsync_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankLoadedCallback = BankLoadedCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BankName                                                         (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBank");

	Params::UAkGameplayStatics_LoadBank_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankName = BankName;
	Parms.LatentInfo = LatentInfo;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.IsGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "IsGame");

	Params::UAkGameplayStatics_IsGame_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.IsEditor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkGameplayStatics::IsEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "IsEditor");

	Params::UAkGameplayStatics_IsEditor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      SpeakerAngles                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              HeightAngle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DeviceShareset                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetSpeakerAngles");

	Params::UAkGameplayStatics_GetSpeakerAngles_Params Parms{};

	Parms.DeviceShareset = DeviceShareset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpeakerAngles != nullptr)
		*SpeakerAngles = std::move(Parms.SpeakerAngles);

	if (HeightAngle != nullptr)
		*HeightAngle = Parms.HeightAngle;

}


// Function AkAudio.AkGameplayStatics.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          InputValueType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          OutputValueType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RTPC                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, class AActor* Actor, class FName RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetRTPCValue");

	Params::UAkGameplayStatics_GetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.PlayingID = PlayingID;
	Parms.InputValueType = InputValueType;
	Parms.Actor = Actor;
	Parms.RTPC = RTPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (OutputValueType != nullptr)
		*OutputValueType = Parms.OutputValueType;

}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkGameplayStatics::GetOcclusionScalingFactor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetOcclusionScalingFactor");

	Params::UAkGameplayStatics_GetOcclusionScalingFactor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkGameplayStatics::GetCurrentAudioCulture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetCurrentAudioCulture");

	Params::UAkGameplayStatics_GetCurrentAudioCulture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UAkGameplayStatics::GetAvailableAudioCultures()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAvailableAudioCultures");

	Params::UAkGameplayStatics_GetAvailableAudioCultures_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkMediaAsset*               Instance                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Type                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAkGameplayStatics::GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkMediaAssetUserData");

	Params::UAkGameplayStatics_GetAkMediaAssetUserData_Params Parms{};

	Parms.Instance = Instance;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ComponentCreated                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkComponent");

	Params::UAkGameplayStatics_GetAkComponent_Params Parms{};

	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.LocationType = LocationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ComponentCreated != nullptr)
		*ComponentCreated = Parms.ComponentCreated;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioType*                Instance                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Type                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAkGameplayStatics::GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkAudioTypeUserData");

	Params::UAkGameplayStatics_GetAkAudioTypeUserData_Params Parms{};

	Parms.Instance = Instance;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EAkActionOnEventType    ActionType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkCurveInterpolation   FadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ExecuteActionOnPlayingID(enum class EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ExecuteActionOnPlayingID");

	Params::UAkGameplayStatics_ExecuteActionOnPlayingID_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.PlayingID = PlayingID;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkActionOnEventType    ActionType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkCurveInterpolation   FadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, enum class EAkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32 PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ExecuteActionOnEvent");

	Params::UAkGameplayStatics_ExecuteActionOnEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.ActionType = ActionType;
	Parms.Actor = Actor;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;
	Parms.PlayingID = PlayingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.ClearBanks
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::ClearBanks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ClearBanks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.CancelEventCallback
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::CancelEventCallback(FDelegateProperty_& PostEventCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "CancelEventCallback");

	Params::UAkGameplayStatics_CancelEventCallback_Params Parms{};

	Parms.PostEventCallback = PostEventCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MarkerText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::AddOutputCaptureMarker(const class FString& MarkerText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "AddOutputCaptureMarker");

	Params::UAkGameplayStatics_AddOutputCaptureMarker_Params Parms{};

	Parms.MarkerText = MarkerText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkCallbackInfo
// (None)

class UClass* UAkCallbackInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkCallbackInfo");

	return Clss;
}


// AkCallbackInfo AkAudio.Default__AkCallbackInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkCallbackInfo* UAkCallbackInfo::GetDefaultObj()
{
	static class UAkCallbackInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkCallbackInfo*>(UAkCallbackInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkEventCallbackInfo
// (None)

class UClass* UAkEventCallbackInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkEventCallbackInfo");

	return Clss;
}


// AkEventCallbackInfo AkAudio.Default__AkEventCallbackInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkEventCallbackInfo* UAkEventCallbackInfo::GetDefaultObj()
{
	static class UAkEventCallbackInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkEventCallbackInfo*>(UAkEventCallbackInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkMIDIEventCallbackInfo
// (None)

class UClass* UAkMIDIEventCallbackInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMIDIEventCallbackInfo");

	return Clss;
}


// AkMIDIEventCallbackInfo AkAudio.Default__AkMIDIEventCallbackInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMIDIEventCallbackInfo* UAkMIDIEventCallbackInfo::GetDefaultObj()
{
	static class UAkMIDIEventCallbackInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMIDIEventCallbackInfo*>(UAkMIDIEventCallbackInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAkMidiEventType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetType");

	Params::UAkMIDIEventCallbackInfo_GetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiProgramChange        AsProgramChange                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetProgramChange");

	Params::UAkMIDIEventCallbackInfo_GetProgramChange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsProgramChange != nullptr)
		*AsProgramChange = std::move(Parms.AsProgramChange);

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiPitchBend            AsPitchBend                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetPitchBend");

	Params::UAkMIDIEventCallbackInfo_GetPitchBend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsPitchBend != nullptr)
		*AsPitchBend = std::move(Parms.AsPitchBend);

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff            AsNoteOn                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOn");

	Params::UAkMIDIEventCallbackInfo_GetNoteOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsNoteOn != nullptr)
		*AsNoteOn = std::move(Parms.AsNoteOn);

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff            AsNoteOff                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOff");

	Params::UAkMIDIEventCallbackInfo_GetNoteOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsNoteOff != nullptr)
		*AsNoteOff = std::move(Parms.AsNoteOff);

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteAftertouch       AsNoteAftertouch                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteAftertouch");

	Params::UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsNoteAftertouch != nullptr)
		*AsNoteAftertouch = std::move(Parms.AsNoteAftertouch);

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiGeneric              AsGeneric                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetGeneric");

	Params::UAkMIDIEventCallbackInfo_GetGeneric_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsGeneric != nullptr)
		*AsGeneric = std::move(Parms.AsGeneric);

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiChannelAftertouch    AsChannelAftertouch                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetChannelAftertouch");

	Params::UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsChannelAftertouch != nullptr)
		*AsChannelAftertouch = std::move(Parms.AsChannelAftertouch);

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UAkMIDIEventCallbackInfo::GetChannel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetChannel");

	Params::UAkMIDIEventCallbackInfo_GetChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiCc                   AsCc                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetCc");

	Params::UAkMIDIEventCallbackInfo_GetCc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AsCc != nullptr)
		*AsCc = std::move(Parms.AsCc);

	return Parms.ReturnValue;

}


// Class AkAudio.AkMarkerCallbackInfo
// (None)

class UClass* UAkMarkerCallbackInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMarkerCallbackInfo");

	return Clss;
}


// AkMarkerCallbackInfo AkAudio.Default__AkMarkerCallbackInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMarkerCallbackInfo* UAkMarkerCallbackInfo::GetDefaultObj()
{
	static class UAkMarkerCallbackInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMarkerCallbackInfo*>(UAkMarkerCallbackInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkDurationCallbackInfo
// (None)

class UClass* UAkDurationCallbackInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkDurationCallbackInfo");

	return Clss;
}


// AkDurationCallbackInfo AkAudio.Default__AkDurationCallbackInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkDurationCallbackInfo* UAkDurationCallbackInfo::GetDefaultObj()
{
	static class UAkDurationCallbackInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkDurationCallbackInfo*>(UAkDurationCallbackInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkMusicSyncCallbackInfo
// (None)

class UClass* UAkMusicSyncCallbackInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMusicSyncCallbackInfo");

	return Clss;
}


// AkMusicSyncCallbackInfo AkAudio.Default__AkMusicSyncCallbackInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMusicSyncCallbackInfo* UAkMusicSyncCallbackInfo::GetDefaultObj()
{
	static class UAkMusicSyncCallbackInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMusicSyncCallbackInfo*>(UAkMusicSyncCallbackInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkGeometryComponent
// (SceneComponent)

class UClass* UAkGeometryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkGeometryComponent");

	return Clss;
}


// AkGeometryComponent AkAudio.Default__AkGeometryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkGeometryComponent* UAkGeometryComponent::GetDefaultObj()
{
	static class UAkGeometryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkGeometryComponent*>(UAkGeometryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkGeometryComponent.UpdateGeometry
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::UpdateGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "UpdateGeometry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGeometryComponent.SendGeometry
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::SendGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "SendGeometry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGeometryComponent.RemoveGeometry
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::RemoveGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "RemoveGeometry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkGeometryComponent.ConvertMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::ConvertMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "ConvertMesh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkGroupValue
// (None)

class UClass* UAkGroupValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkGroupValue");

	return Clss;
}


// AkGroupValue AkAudio.Default__AkGroupValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkGroupValue* UAkGroupValue::GetDefaultObj()
{
	static class UAkGroupValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkGroupValue*>(UAkGroupValue::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkHololensInitializationSettings
// (None)

class UClass* UAkHololensInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkHololensInitializationSettings");

	return Clss;
}


// AkHololensInitializationSettings AkAudio.Default__AkHololensInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkHololensInitializationSettings* UAkHololensInitializationSettings::GetDefaultObj()
{
	static class UAkHololensInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkHololensInitializationSettings*>(UAkHololensInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkHololensInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkHololensPlatformInfo
// (None)

class UClass* UAkHololensPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkHololensPlatformInfo");

	return Clss;
}


// AkHololensPlatformInfo AkAudio.Default__AkHololensPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkHololensPlatformInfo* UAkHololensPlatformInfo::GetDefaultObj()
{
	static class UAkHololensPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkHololensPlatformInfo*>(UAkHololensPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkInitBankAssetData
// (None)

class UClass* UAkInitBankAssetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkInitBankAssetData");

	return Clss;
}


// AkInitBankAssetData AkAudio.Default__AkInitBankAssetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkInitBankAssetData* UAkInitBankAssetData::GetDefaultObj()
{
	static class UAkInitBankAssetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkInitBankAssetData*>(UAkInitBankAssetData::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkInitBank
// (None)

class UClass* UAkInitBank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkInitBank");

	return Clss;
}


// AkInitBank AkAudio.Default__AkInitBank
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkInitBank* UAkInitBank::GetDefaultObj()
{
	static class UAkInitBank* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkInitBank*>(UAkInitBank::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkIOSInitializationSettings
// (None)

class UClass* UAkIOSInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkIOSInitializationSettings");

	return Clss;
}


// AkIOSInitializationSettings AkAudio.Default__AkIOSInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkIOSInitializationSettings* UAkIOSInitializationSettings::GetDefaultObj()
{
	static class UAkIOSInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkIOSInitializationSettings*>(UAkIOSInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkIOSPlatformInfo
// (None)

class UClass* UAkIOSPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkIOSPlatformInfo");

	return Clss;
}


// AkIOSPlatformInfo AkAudio.Default__AkIOSPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkIOSPlatformInfo* UAkIOSPlatformInfo::GetDefaultObj()
{
	static class UAkIOSPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkIOSPlatformInfo*>(UAkIOSPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkItemBoolPropertiesConv
// (None)

class UClass* UAkItemBoolPropertiesConv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkItemBoolPropertiesConv");

	return Clss;
}


// AkItemBoolPropertiesConv AkAudio.Default__AkItemBoolPropertiesConv
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkItemBoolPropertiesConv* UAkItemBoolPropertiesConv::GetDefaultObj()
{
	static class UAkItemBoolPropertiesConv* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkItemBoolPropertiesConv*>(UAkItemBoolPropertiesConv::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl    INAkBoolPropertyToControl                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToText");

	Params::UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params Parms{};

	Parms.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl    INAkBoolPropertyToControl                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToString");

	Params::UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params Parms{};

	Parms.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkItemBoolProperties
// (None)

class UClass* UAkItemBoolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkItemBoolProperties");

	return Clss;
}


// AkItemBoolProperties AkAudio.Default__AkItemBoolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkItemBoolProperties* UAkItemBoolProperties::GetDefaultObj()
{
	static class UAkItemBoolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkItemBoolProperties*>(UAkItemBoolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkItemBoolProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkItemBoolProperties::SetSearchText(const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolProperties", "SetSearchText");

	Params::UAkItemBoolProperties_SetSearchText_Params Parms{};

	Parms.NewText = NewText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemBoolProperties::GetSelectedProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolProperties", "GetSelectedProperty");

	Params::UAkItemBoolProperties_GetSelectedProperty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemBoolProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemBoolProperties::GetSearchText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolProperties", "GetSearchText");

	Params::UAkItemBoolProperties_GetSearchText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkItemPropertiesConv
// (None)

class UClass* UAkItemPropertiesConv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkItemPropertiesConv");

	return Clss;
}


// AkItemPropertiesConv AkAudio.Default__AkItemPropertiesConv
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkItemPropertiesConv* UAkItemPropertiesConv::GetDefaultObj()
{
	static class UAkItemPropertiesConv* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkItemPropertiesConv*>(UAkItemPropertiesConv::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkPropertyToControl        INAkPropertyToControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToText");

	Params::UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params Parms{};

	Parms.INAkPropertyToControl = INAkPropertyToControl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkPropertyToControl        INAkPropertyToControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToString");

	Params::UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params Parms{};

	Parms.INAkPropertyToControl = INAkPropertyToControl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkItemProperties
// (None)

class UClass* UAkItemProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkItemProperties");

	return Clss;
}


// AkItemProperties AkAudio.Default__AkItemProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkItemProperties* UAkItemProperties::GetDefaultObj()
{
	static class UAkItemProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkItemProperties*>(UAkItemProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkItemProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkItemProperties::SetSearchText(const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemProperties", "SetSearchText");

	Params::UAkItemProperties_SetSearchText_Params Parms{};

	Parms.NewText = NewText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkItemProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemProperties::GetSelectedProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemProperties", "GetSelectedProperty");

	Params::UAkItemProperties_GetSelectedProperty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemProperties::GetSearchText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemProperties", "GetSearchText");

	Params::UAkItemProperties_GetSearchText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkLateReverbComponent
// (SceneComponent)

class UClass* UAkLateReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkLateReverbComponent");

	return Clss;
}


// AkLateReverbComponent AkAudio.Default__AkLateReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkLateReverbComponent* UAkLateReverbComponent::GetDefaultObj()
{
	static class UAkLateReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkLateReverbComponent*>(UAkLateReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAcousticTextureSetComponent*TextureSetComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkLateReverbComponent::AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* TextureSetComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkLateReverbComponent", "AssociateAkTextureSetComponent");

	Params::UAkLateReverbComponent_AssociateAkTextureSetComponent_Params Parms{};

	Parms.TextureSetComponent = TextureSetComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkLinuxInitializationSettings
// (None)

class UClass* UAkLinuxInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkLinuxInitializationSettings");

	return Clss;
}


// AkLinuxInitializationSettings AkAudio.Default__AkLinuxInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkLinuxInitializationSettings* UAkLinuxInitializationSettings::GetDefaultObj()
{
	static class UAkLinuxInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkLinuxInitializationSettings*>(UAkLinuxInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkLinuxInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkLinuxPlatformInfo
// (None)

class UClass* UAkLinuxPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkLinuxPlatformInfo");

	return Clss;
}


// AkLinuxPlatformInfo AkAudio.Default__AkLinuxPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkLinuxPlatformInfo* UAkLinuxPlatformInfo::GetDefaultObj()
{
	static class UAkLinuxPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkLinuxPlatformInfo*>(UAkLinuxPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkMacInitializationSettings
// (None)

class UClass* UAkMacInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMacInitializationSettings");

	return Clss;
}


// AkMacInitializationSettings AkAudio.Default__AkMacInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMacInitializationSettings* UAkMacInitializationSettings::GetDefaultObj()
{
	static class UAkMacInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMacInitializationSettings*>(UAkMacInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMacInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkMacInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkMacPlatformInfo
// (None)

class UClass* UAkMacPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMacPlatformInfo");

	return Clss;
}


// AkMacPlatformInfo AkAudio.Default__AkMacPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMacPlatformInfo* UAkMacPlatformInfo::GetDefaultObj()
{
	static class UAkMacPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMacPlatformInfo*>(UAkMacPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkMediaAssetData
// (None)

class UClass* UAkMediaAssetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMediaAssetData");

	return Clss;
}


// AkMediaAssetData AkAudio.Default__AkMediaAssetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMediaAssetData* UAkMediaAssetData::GetDefaultObj()
{
	static class UAkMediaAssetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMediaAssetData*>(UAkMediaAssetData::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkMediaAsset
// (None)

class UClass* UAkMediaAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMediaAsset");

	return Clss;
}


// AkMediaAsset AkAudio.Default__AkMediaAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMediaAsset* UAkMediaAsset::GetDefaultObj()
{
	static class UAkMediaAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMediaAsset*>(UAkMediaAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkLocalizedMediaAsset
// (None)

class UClass* UAkLocalizedMediaAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkLocalizedMediaAsset");

	return Clss;
}


// AkLocalizedMediaAsset AkAudio.Default__AkLocalizedMediaAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkLocalizedMediaAsset* UAkLocalizedMediaAsset::GetDefaultObj()
{
	static class UAkLocalizedMediaAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkLocalizedMediaAsset*>(UAkLocalizedMediaAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkExternalMediaAsset
// (None)

class UClass* UAkExternalMediaAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkExternalMediaAsset");

	return Clss;
}


// AkExternalMediaAsset AkAudio.Default__AkExternalMediaAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkExternalMediaAsset* UAkExternalMediaAsset::GetDefaultObj()
{
	static class UAkExternalMediaAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkExternalMediaAsset*>(UAkExternalMediaAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkPlatformInitialisationSettingsBase
// (None)

class UClass* IAkPlatformInitialisationSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkPlatformInitialisationSettingsBase");

	return Clss;
}


// AkPlatformInitialisationSettingsBase AkAudio.Default__AkPlatformInitialisationSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class IAkPlatformInitialisationSettingsBase* IAkPlatformInitialisationSettingsBase::GetDefaultObj()
{
	static class IAkPlatformInitialisationSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<IAkPlatformInitialisationSettingsBase*>(IAkPlatformInitialisationSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkPS4InitializationSettings
// (None)

class UClass* UAkPS4InitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkPS4InitializationSettings");

	return Clss;
}


// AkPS4InitializationSettings AkAudio.Default__AkPS4InitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkPS4InitializationSettings* UAkPS4InitializationSettings::GetDefaultObj()
{
	static class UAkPS4InitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkPS4InitializationSettings*>(UAkPS4InitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPS4InitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkPS4PlatformInfo
// (None)

class UClass* UAkPS4PlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkPS4PlatformInfo");

	return Clss;
}


// AkPS4PlatformInfo AkAudio.Default__AkPS4PlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkPS4PlatformInfo* UAkPS4PlatformInfo::GetDefaultObj()
{
	static class UAkPS4PlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkPS4PlatformInfo*>(UAkPS4PlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkReverbVolume
// (Actor)

class UClass* AAkReverbVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkReverbVolume");

	return Clss;
}


// AkReverbVolume AkAudio.Default__AkReverbVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAkReverbVolume* AAkReverbVolume::GetDefaultObj()
{
	static class AAkReverbVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAkReverbVolume*>(AAkReverbVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkRoomComponent
// (SceneComponent)

class UClass* UAkRoomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkRoomComponent");

	return Clss;
}


// AkRoomComponent AkAudio.Default__AkRoomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkRoomComponent* UAkRoomComponent::GetDefaultObj()
{
	static class UAkRoomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkRoomComponent*>(UAkRoomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkRoomComponent.SetGeometryComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAcousticTextureSetComponent*TextureSetComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkRoomComponent::SetGeometryComponent(class UAkAcousticTextureSetComponent* TextureSetComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkRoomComponent", "SetGeometryComponent");

	Params::UAkRoomComponent_SetGeometryComponent_Params Parms{};

	Parms.TextureSetComponent = TextureSetComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkRoomComponent.GetPrimitiveParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkRoomComponent", "GetPrimitiveParent");

	Params::UAkRoomComponent_GetPrimitiveParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkRtpc
// (None)

class UClass* UAkRtpc::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkRtpc");

	return Clss;
}


// AkRtpc AkAudio.Default__AkRtpc
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkRtpc* UAkRtpc::GetDefaultObj()
{
	static class UAkRtpc* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkRtpc*>(UAkRtpc::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkSettings
// (None)

class UClass* UAkSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSettings");

	return Clss;
}


// AkSettings AkAudio.Default__AkSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSettings* UAkSettings::GetDefaultObj()
{
	static class UAkSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSettings*>(UAkSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkSettingsPerUser
// (None)

class UClass* UAkSettingsPerUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSettingsPerUser");

	return Clss;
}


// AkSettingsPerUser AkAudio.Default__AkSettingsPerUser
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSettingsPerUser* UAkSettingsPerUser::GetDefaultObj()
{
	static class UAkSettingsPerUser* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSettingsPerUser*>(UAkSettingsPerUser::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkSlider
// (None)

class UClass* UAkSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSlider");

	return Clss;
}


// AkSlider AkAudio.Default__AkSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSlider* UAkSlider::GetDefaultObj()
{
	static class UAkSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSlider*>(UAkSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkSlider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetValue");

	Params::UAkSlider_SetValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetStepSize");

	Params::UAkSlider_SetStepSize_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetSliderHandleColor");

	Params::UAkSlider_SetSliderHandleColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetSliderBarColor");

	Params::UAkSlider_SetSliderBarColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetLocked");

	Params::UAkSlider_SetLocked_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetIndentHandle(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetIndentHandle");

	Params::UAkSlider_SetIndentHandle_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemProperty                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemProperty(const class FString& ItemProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetAkSliderItemProperty");

	Params::UAkSlider_SetAkSliderItemProperty_Params Parms{};

	Parms.ItemProperty = ItemProperty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.SetAkSliderItemId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemId(struct FGuid& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetAkSliderItemId");

	Params::UAkSlider_SetAkSliderItemId_Params Parms{};

	Parms.ItemId = ItemId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkSlider::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "GetValue");

	Params::UAkSlider_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkSlider.GetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkSlider::GetAkSliderItemProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "GetAkSliderItemProperty");

	Params::UAkSlider_GetAkSliderItemProperty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkSlider.GetAkSliderItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UAkSlider::GetAkSliderItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "GetAkSliderItemId");

	Params::UAkSlider_GetAkSliderItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkSpatialAudioVolume
// (Actor)

class UClass* AAkSpatialAudioVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSpatialAudioVolume");

	return Clss;
}


// AkSpatialAudioVolume AkAudio.Default__AkSpatialAudioVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAkSpatialAudioVolume* AAkSpatialAudioVolume::GetDefaultObj()
{
	static class AAkSpatialAudioVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAkSpatialAudioVolume*>(AAkSpatialAudioVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkSpotReflector
// (Actor)

class UClass* AAkSpotReflector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSpotReflector");

	return Clss;
}


// AkSpotReflector AkAudio.Default__AkSpotReflector
// (Public, ClassDefaultObject, ArchetypeObject)

class AAkSpotReflector* AAkSpotReflector::GetDefaultObj()
{
	static class AAkSpotReflector* Default = nullptr;

	if (!Default)
		Default = static_cast<AAkSpotReflector*>(AAkSpotReflector::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkStateValue
// (None)

class UClass* UAkStateValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkStateValue");

	return Clss;
}


// AkStateValue AkAudio.Default__AkStateValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkStateValue* UAkStateValue::GetDefaultObj()
{
	static class UAkStateValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkStateValue*>(UAkStateValue::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkSubmixInputComponent
// (SceneComponent)

class UClass* UAkSubmixInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSubmixInputComponent");

	return Clss;
}


// AkSubmixInputComponent AkAudio.Default__AkSubmixInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSubmixInputComponent* UAkSubmixInputComponent::GetDefaultObj()
{
	static class UAkSubmixInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSubmixInputComponent*>(UAkSubmixInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkSurfaceReflectorSetComponent
// (SceneComponent)

class UClass* UAkSurfaceReflectorSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSurfaceReflectorSetComponent");

	return Clss;
}


// AkSurfaceReflectorSetComponent AkAudio.Default__AkSurfaceReflectorSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSurfaceReflectorSetComponent* UAkSurfaceReflectorSetComponent::GetDefaultObj()
{
	static class UAkSurfaceReflectorSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSurfaceReflectorSetComponent*>(UAkSurfaceReflectorSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSurfaceReflectorSetComponent", "UpdateSurfaceReflectorSet");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSurfaceReflectorSetComponent", "SendSurfaceReflectorSet");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSurfaceReflectorSetComponent", "RemoveSurfaceReflectorSet");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkSwitchInitializationSettings
// (None)

class UClass* UAkSwitchInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSwitchInitializationSettings");

	return Clss;
}


// AkSwitchInitializationSettings AkAudio.Default__AkSwitchInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSwitchInitializationSettings* UAkSwitchInitializationSettings::GetDefaultObj()
{
	static class UAkSwitchInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSwitchInitializationSettings*>(UAkSwitchInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSwitchInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkSwitchPlatformInfo
// (None)

class UClass* UAkSwitchPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSwitchPlatformInfo");

	return Clss;
}


// AkSwitchPlatformInfo AkAudio.Default__AkSwitchPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSwitchPlatformInfo* UAkSwitchPlatformInfo::GetDefaultObj()
{
	static class UAkSwitchPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSwitchPlatformInfo*>(UAkSwitchPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkSwitchValue
// (None)

class UClass* UAkSwitchValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkSwitchValue");

	return Clss;
}


// AkSwitchValue AkAudio.Default__AkSwitchValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkSwitchValue* UAkSwitchValue::GetDefaultObj()
{
	static class UAkSwitchValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkSwitchValue*>(UAkSwitchValue::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkTrigger
// (None)

class UClass* UAkTrigger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkTrigger");

	return Clss;
}


// AkTrigger AkAudio.Default__AkTrigger
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkTrigger* UAkTrigger::GetDefaultObj()
{
	static class UAkTrigger* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkTrigger*>(UAkTrigger::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkTVOSInitializationSettings
// (None)

class UClass* UAkTVOSInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkTVOSInitializationSettings");

	return Clss;
}


// AkTVOSInitializationSettings AkAudio.Default__AkTVOSInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkTVOSInitializationSettings* UAkTVOSInitializationSettings::GetDefaultObj()
{
	static class UAkTVOSInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkTVOSInitializationSettings*>(UAkTVOSInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkTVOSPlatformInfo
// (None)

class UClass* UAkTVOSPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkTVOSPlatformInfo");

	return Clss;
}


// AkTVOSPlatformInfo AkAudio.Default__AkTVOSPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkTVOSPlatformInfo* UAkTVOSPlatformInfo::GetDefaultObj()
{
	static class UAkTVOSPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkTVOSPlatformInfo*>(UAkTVOSPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkWaapiCalls
// (None)

class UClass* UAkWaapiCalls::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWaapiCalls");

	return Clss;
}


// AkWaapiCalls AkAudio.Default__AkWaapiCalls
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWaapiCalls* UAkWaapiCalls::GetDefaultObj()
{
	static class UAkWaapiCalls* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWaapiCalls*>(UAkWaapiCalls::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkWaapiCalls.Unsubscribe
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId      SubscriptionId                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               UnsubscriptionDone                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Unsubscribe");

	Params::UAkWaapiCalls_Unsubscribe_Params Parms{};

	Parms.SubscriptionId = SubscriptionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UnsubscriptionDone != nullptr)
		*UnsubscriptionDone = Parms.UnsubscriptionDone;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiUri                 WaapiUri                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          WaapiOptions                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAkWaapiSubscriptionId      SubscriptionId                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               SubscriptionDone                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, FDelegateProperty_& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "SubscribeToWaapi");

	Params::UAkWaapiCalls_SubscribeToWaapi_Params Parms{};

	Parms.WaapiUri = WaapiUri;
	Parms.WaapiOptions = WaapiOptions;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubscriptionId != nullptr)
		*SubscriptionId = std::move(Parms.SubscriptionId);

	if (SubscriptionDone != nullptr)
		*SubscriptionDone = Parms.SubscriptionDone;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId      Subscription                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWaapiCalls::SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "SetSubscriptionID");

	Params::UAkWaapiCalls_SetSubscriptionID_Params Parms{};

	Parms.Subscription = Subscription;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "RegisterWaapiProjectLoadedCallback");

	Params::UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "RegisterWaapiConnectionLostCallback");

	Params::UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.GetSubscriptionID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId      Subscription                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkWaapiCalls::GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "GetSubscriptionID");

	Params::UAkWaapiCalls_GetSubscriptionID_Params Parms{};

	Parms.Subscription = Subscription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId      INAkWaapiSubscriptionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToText");

	Params::UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params Parms{};

	Parms.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId      INAkWaapiSubscriptionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToString");

	Params::UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params Parms{};

	Parms.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.CallWaapi
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiUri                 WaapiUri                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          WaapiArgs                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          WaapiOptions                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "CallWaapi");

	Params::UAkWaapiCalls_CallWaapi_Params Parms{};

	Parms.WaapiUri = WaapiUri;
	Parms.WaapiArgs = WaapiArgs;
	Parms.WaapiOptions = WaapiOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.SAkWaapiFieldNamesConv
// (None)

class UClass* USAkWaapiFieldNamesConv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAkWaapiFieldNamesConv");

	return Clss;
}


// SAkWaapiFieldNamesConv AkAudio.Default__SAkWaapiFieldNamesConv
// (Public, ClassDefaultObject, ArchetypeObject)

class USAkWaapiFieldNamesConv* USAkWaapiFieldNamesConv::GetDefaultObj()
{
	static class USAkWaapiFieldNamesConv* Default = nullptr;

	if (!Default)
		Default = static_cast<USAkWaapiFieldNamesConv*>(USAkWaapiFieldNamesConv::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames          INAkWaapiFieldNames                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToText");

	Params::USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params Parms{};

	Parms.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames          INAkWaapiFieldNames                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToString");

	Params::USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params Parms{};

	Parms.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkWaapiJsonManager
// (None)

class UClass* UAkWaapiJsonManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWaapiJsonManager");

	return Clss;
}


// AkWaapiJsonManager AkAudio.Default__AkWaapiJsonManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWaapiJsonManager* UAkWaapiJsonManager::GetDefaultObj()
{
	static class UAkWaapiJsonManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWaapiJsonManager*>(UAkWaapiJsonManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkWaapiJsonManager.SetStringField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldValue                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetStringField");

	Params::UAkWaapiJsonManager_SetStringField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetObjectField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          FieldValue                                                       (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetObjectField");

	Params::UAkWaapiJsonManager_SetObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetNumberField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              FieldValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetNumberField");

	Params::UAkWaapiJsonManager_SetNumberField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetBoolField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               FieldValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetBoolField");

	Params::UAkWaapiJsonManager_SetBoolField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              FieldStringValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, TArray<class FString>& FieldStringValues, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetArrayStringFields");

	Params::UAkWaapiJsonManager_SetArrayStringFields_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldStringValues = FieldStringValues;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject>  FieldObjectValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject>& FieldObjectValues, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetArrayObjectFields");

	Params::UAkWaapiJsonManager_SetArrayObjectFields_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldObjectValues = FieldObjectValues;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetStringField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiJsonManager::GetStringField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetStringField");

	Params::UAkWaapiJsonManager_GetStringField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetObjectField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetObjectField");

	Params::UAkWaapiJsonManager_GetObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetNumberField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkWaapiJsonManager::GetNumberField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetNumberField");

	Params::UAkWaapiJsonManager_GetNumberField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetIntegerField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkWaapiJsonManager::GetIntegerField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetIntegerField");

	Params::UAkWaapiJsonManager_GetIntegerField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetBoolField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkWaapiJsonManager::GetBoolField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetBoolField");

	Params::UAkWaapiJsonManager_GetBoolField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetArrayField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject>  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetArrayField");

	Params::UAkWaapiJsonManager_GetArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject          INAKWaapiJsonObject                                              (Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToText");

	Params::UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params Parms{};

	Parms.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject          INAKWaapiJsonObject                                              (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToString");

	Params::UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params Parms{};

	Parms.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkWaapiUriConv
// (None)

class UClass* UAkWaapiUriConv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWaapiUriConv");

	return Clss;
}


// AkWaapiUriConv AkAudio.Default__AkWaapiUriConv
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWaapiUriConv* UAkWaapiUriConv::GetDefaultObj()
{
	static class UAkWaapiUriConv* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWaapiUriConv*>(UAkWaapiUriConv::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiUri                 INAkWaapiUri                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToText");

	Params::UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params Parms{};

	Parms.INAkWaapiUri = INAkWaapiUri;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiUri                 INAkWaapiUri                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToString");

	Params::UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params Parms{};

	Parms.INAkWaapiUri = INAkWaapiUri;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkWindowsInitializationSettings
// (None)

class UClass* UAkWindowsInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWindowsInitializationSettings");

	return Clss;
}


// AkWindowsInitializationSettings AkAudio.Default__AkWindowsInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWindowsInitializationSettings* UAkWindowsInitializationSettings::GetDefaultObj()
{
	static class UAkWindowsInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWindowsInitializationSettings*>(UAkWindowsInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWindowsInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkWin32PlatformInfo
// (None)

class UClass* UAkWin32PlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWin32PlatformInfo");

	return Clss;
}


// AkWin32PlatformInfo AkAudio.Default__AkWin32PlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWin32PlatformInfo* UAkWin32PlatformInfo::GetDefaultObj()
{
	static class UAkWin32PlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWin32PlatformInfo*>(UAkWin32PlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkWin64PlatformInfo
// (None)

class UClass* UAkWin64PlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWin64PlatformInfo");

	return Clss;
}


// AkWin64PlatformInfo AkAudio.Default__AkWin64PlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWin64PlatformInfo* UAkWin64PlatformInfo::GetDefaultObj()
{
	static class UAkWin64PlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWin64PlatformInfo*>(UAkWin64PlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkWindowsPlatformInfo
// (None)

class UClass* UAkWindowsPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWindowsPlatformInfo");

	return Clss;
}


// AkWindowsPlatformInfo AkAudio.Default__AkWindowsPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWindowsPlatformInfo* UAkWindowsPlatformInfo::GetDefaultObj()
{
	static class UAkWindowsPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWindowsPlatformInfo*>(UAkWindowsPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkWinGDKInitializationSettings
// (None)

class UClass* UAkWinGDKInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWinGDKInitializationSettings");

	return Clss;
}


// AkWinGDKInitializationSettings AkAudio.Default__AkWinGDKInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWinGDKInitializationSettings* UAkWinGDKInitializationSettings::GetDefaultObj()
{
	static class UAkWinGDKInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWinGDKInitializationSettings*>(UAkWinGDKInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWinGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWinGDKInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkWinAnvilInitializationSettings
// (None)

class UClass* UAkWinAnvilInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWinAnvilInitializationSettings");

	return Clss;
}


// AkWinAnvilInitializationSettings AkAudio.Default__AkWinAnvilInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWinAnvilInitializationSettings* UAkWinAnvilInitializationSettings::GetDefaultObj()
{
	static class UAkWinAnvilInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWinAnvilInitializationSettings*>(UAkWinAnvilInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkWinGDKPlatformInfo
// (None)

class UClass* UAkWinGDKPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWinGDKPlatformInfo");

	return Clss;
}


// AkWinGDKPlatformInfo AkAudio.Default__AkWinGDKPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWinGDKPlatformInfo* UAkWinGDKPlatformInfo::GetDefaultObj()
{
	static class UAkWinGDKPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWinGDKPlatformInfo*>(UAkWinGDKPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkWinAnvilPlatformInfo
// (None)

class UClass* UAkWinAnvilPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWinAnvilPlatformInfo");

	return Clss;
}


// AkWinAnvilPlatformInfo AkAudio.Default__AkWinAnvilPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWinAnvilPlatformInfo* UAkWinAnvilPlatformInfo::GetDefaultObj()
{
	static class UAkWinAnvilPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWinAnvilPlatformInfo*>(UAkWinAnvilPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkWwiseTree
// (None)

class UClass* UAkWwiseTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWwiseTree");

	return Clss;
}


// AkWwiseTree AkAudio.Default__AkWwiseTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWwiseTree* UAkWwiseTree::GetDefaultObj()
{
	static class UAkWwiseTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWwiseTree*>(UAkWwiseTree::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkWwiseTree.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWwiseTree::SetSearchText(const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWwiseTree", "SetSearchText");

	Params::UAkWwiseTree_SetSearchText_Params Parms{};

	Parms.NewText = NewText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AkAudio.AkWwiseTree.GetSelectedItem
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAkWwiseObjectDetails       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWwiseTree", "GetSelectedItem");

	Params::UAkWwiseTree_GetSelectedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWwiseTree.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWwiseTree::GetSearchText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWwiseTree", "GetSearchText");

	Params::UAkWwiseTree_GetSearchText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AkAudio.AkWwiseTreeSelector
// (None)

class UClass* UAkWwiseTreeSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkWwiseTreeSelector");

	return Clss;
}


// AkWwiseTreeSelector AkAudio.Default__AkWwiseTreeSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkWwiseTreeSelector* UAkWwiseTreeSelector::GetDefaultObj()
{
	static class UAkWwiseTreeSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkWwiseTreeSelector*>(UAkWwiseTreeSelector::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXboxOneGDKInitializationSettings
// (None)

class UClass* UAkXboxOneGDKInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXboxOneGDKInitializationSettings");

	return Clss;
}


// AkXboxOneGDKInitializationSettings AkAudio.Default__AkXboxOneGDKInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXboxOneGDKInitializationSettings* UAkXboxOneGDKInitializationSettings::GetDefaultObj()
{
	static class UAkXboxOneGDKInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXboxOneGDKInitializationSettings*>(UAkXboxOneGDKInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkXboxOneGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkXboxOneGDKInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkXboxOneAnvilInitializationSettings
// (None)

class UClass* UAkXboxOneAnvilInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXboxOneAnvilInitializationSettings");

	return Clss;
}


// AkXboxOneAnvilInitializationSettings AkAudio.Default__AkXboxOneAnvilInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXboxOneAnvilInitializationSettings* UAkXboxOneAnvilInitializationSettings::GetDefaultObj()
{
	static class UAkXboxOneAnvilInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXboxOneAnvilInitializationSettings*>(UAkXboxOneAnvilInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXB1InitializationSettings
// (None)

class UClass* UAkXB1InitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXB1InitializationSettings");

	return Clss;
}


// AkXB1InitializationSettings AkAudio.Default__AkXB1InitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXB1InitializationSettings* UAkXB1InitializationSettings::GetDefaultObj()
{
	static class UAkXB1InitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXB1InitializationSettings*>(UAkXB1InitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXboxOneGDKPlatformInfo
// (None)

class UClass* UAkXboxOneGDKPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXboxOneGDKPlatformInfo");

	return Clss;
}


// AkXboxOneGDKPlatformInfo AkAudio.Default__AkXboxOneGDKPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXboxOneGDKPlatformInfo* UAkXboxOneGDKPlatformInfo::GetDefaultObj()
{
	static class UAkXboxOneGDKPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXboxOneGDKPlatformInfo*>(UAkXboxOneGDKPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXboxOneAnvilPlatformInfo
// (None)

class UClass* UAkXboxOneAnvilPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXboxOneAnvilPlatformInfo");

	return Clss;
}


// AkXboxOneAnvilPlatformInfo AkAudio.Default__AkXboxOneAnvilPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXboxOneAnvilPlatformInfo* UAkXboxOneAnvilPlatformInfo::GetDefaultObj()
{
	static class UAkXboxOneAnvilPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXboxOneAnvilPlatformInfo*>(UAkXboxOneAnvilPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXB1PlatformInfo
// (None)

class UClass* UAkXB1PlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXB1PlatformInfo");

	return Clss;
}


// AkXB1PlatformInfo AkAudio.Default__AkXB1PlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXB1PlatformInfo* UAkXB1PlatformInfo::GetDefaultObj()
{
	static class UAkXB1PlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXB1PlatformInfo*>(UAkXB1PlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXboxOneInitializationSettings
// (None)

class UClass* UAkXboxOneInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXboxOneInitializationSettings");

	return Clss;
}


// AkXboxOneInitializationSettings AkAudio.Default__AkXboxOneInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXboxOneInitializationSettings* UAkXboxOneInitializationSettings::GetDefaultObj()
{
	static class UAkXboxOneInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXboxOneInitializationSettings*>(UAkXboxOneInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkXboxOneInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkXboxOnePlatformInfo
// (None)

class UClass* UAkXboxOnePlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXboxOnePlatformInfo");

	return Clss;
}


// AkXboxOnePlatformInfo AkAudio.Default__AkXboxOnePlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXboxOnePlatformInfo* UAkXboxOnePlatformInfo::GetDefaultObj()
{
	static class UAkXboxOnePlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXboxOnePlatformInfo*>(UAkXboxOnePlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXSXInitializationSettings
// (None)

class UClass* UAkXSXInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXSXInitializationSettings");

	return Clss;
}


// AkXSXInitializationSettings AkAudio.Default__AkXSXInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXSXInitializationSettings* UAkXSXInitializationSettings::GetDefaultObj()
{
	static class UAkXSXInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXSXInitializationSettings*>(UAkXSXInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkXSXInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkXSXInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkXSXInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.AkMPXInitializationSettings
// (None)

class UClass* UAkMPXInitializationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMPXInitializationSettings");

	return Clss;
}


// AkMPXInitializationSettings AkAudio.Default__AkMPXInitializationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMPXInitializationSettings* UAkMPXInitializationSettings::GetDefaultObj()
{
	static class UAkMPXInitializationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMPXInitializationSettings*>(UAkMPXInitializationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.AkXSXPlatformInfo
// (None)

class UClass* UAkXSXPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkXSXPlatformInfo");

	return Clss;
}


// AkXSXPlatformInfo AkAudio.Default__AkXSXPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkXSXPlatformInfo* UAkXSXPlatformInfo::GetDefaultObj()
{
	static class UAkXSXPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkXSXPlatformInfo*>(UAkXSXPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.MovieSceneAkAudioEventSection
// (None)

class UClass* UMovieSceneAkAudioEventSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAkAudioEventSection");

	return Clss;
}


// MovieSceneAkAudioEventSection AkAudio.Default__MovieSceneAkAudioEventSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAkAudioEventSection* UMovieSceneAkAudioEventSection::GetDefaultObj()
{
	static class UMovieSceneAkAudioEventSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAkAudioEventSection*>(UMovieSceneAkAudioEventSection::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.MovieSceneAkTrack
// (None)

class UClass* UMovieSceneAkTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAkTrack");

	return Clss;
}


// MovieSceneAkTrack AkAudio.Default__MovieSceneAkTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAkTrack* UMovieSceneAkTrack::GetDefaultObj()
{
	static class UMovieSceneAkTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAkTrack*>(UMovieSceneAkTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.MovieSceneAkAudioEventTrack
// (None)

class UClass* UMovieSceneAkAudioEventTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAkAudioEventTrack");

	return Clss;
}


// MovieSceneAkAudioEventTrack AkAudio.Default__MovieSceneAkAudioEventTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAkAudioEventTrack* UMovieSceneAkAudioEventTrack::GetDefaultObj()
{
	static class UMovieSceneAkAudioEventTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAkAudioEventTrack*>(UMovieSceneAkAudioEventTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.MovieSceneAkAudioRTPCSection
// (None)

class UClass* UMovieSceneAkAudioRTPCSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAkAudioRTPCSection");

	return Clss;
}


// MovieSceneAkAudioRTPCSection AkAudio.Default__MovieSceneAkAudioRTPCSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAkAudioRTPCSection* UMovieSceneAkAudioRTPCSection::GetDefaultObj()
{
	static class UMovieSceneAkAudioRTPCSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAkAudioRTPCSection*>(UMovieSceneAkAudioRTPCSection::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// (None)

class UClass* UMovieSceneAkAudioRTPCTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAkAudioRTPCTrack");

	return Clss;
}


// MovieSceneAkAudioRTPCTrack AkAudio.Default__MovieSceneAkAudioRTPCTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAkAudioRTPCTrack* UMovieSceneAkAudioRTPCTrack::GetDefaultObj()
{
	static class UMovieSceneAkAudioRTPCTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAkAudioRTPCTrack*>(UMovieSceneAkAudioRTPCTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class AkAudio.PostEventAsync
// (None)

class UClass* UPostEventAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PostEventAsync");

	return Clss;
}


// PostEventAsync AkAudio.Default__PostEventAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UPostEventAsync* UPostEventAsync::GetDefaultObj()
{
	static class UPostEventAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UPostEventAsync*>(UPostEventAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.PostEventAsync.PostEventAsync
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPostEventAsync*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPostEventAsync* UPostEventAsync::PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAsync", "PostEventAsync");

	Params::UPostEventAsync_PostEventAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.PostEventAsync.PollPostEventFuture
// (Final, Native, Private)
// Parameters:

void UPostEventAsync::PollPostEventFuture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAsync", "PollPostEventFuture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AkAudio.PostEventAtLocationAsync
// (None)

class UClass* UPostEventAtLocationAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PostEventAtLocationAsync");

	return Clss;
}


// PostEventAtLocationAsync AkAudio.Default__PostEventAtLocationAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UPostEventAtLocationAsync* UPostEventAtLocationAsync::GetDefaultObj()
{
	static class UPostEventAtLocationAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UPostEventAtLocationAsync*>(UPostEventAtLocationAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UPostEventAtLocationAsync*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAtLocationAsync", "PostEventAtLocationAsync");

	Params::UPostEventAtLocationAsync_PostEventAtLocationAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Orientation = Orientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
// (Final, Native, Private)
// Parameters:

void UPostEventAtLocationAsync::PollPostEventFuture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAtLocationAsync", "PollPostEventFuture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


