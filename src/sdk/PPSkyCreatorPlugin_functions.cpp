#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PPSkyCreatorPlugin.PPSkyCreator
// (Actor)

class UClass* APPSkyCreator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPSkyCreator");

	return Clss;
}


// PPSkyCreator PPSkyCreatorPlugin.Default__PPSkyCreator
// (Public, ClassDefaultObject, ArchetypeObject)

class APPSkyCreator* APPSkyCreator::GetDefaultObj()
{
	static class APPSkyCreator* Default = nullptr;

	if (!Default)
		Default = static_cast<APPSkyCreator*>(APPSkyCreator::StaticClass()->DefaultObject);

	return Default;
}


// Function PPSkyCreatorPlugin.PPSkyCreator.UpdateSettingsSequencer
// (Final, Native, Public)
// Parameters:

void APPSkyCreator::UpdateSettingsSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "UpdateSettingsSequencer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SpawnLightningStrike
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     LightningPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SpawnLightningStrike(const struct FVector& LightningPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SpawnLightningStrike");

	Params::APPSkyCreator_SpawnLightningStrike_Params Parms{};

	Parms.LightningPosition = LightningPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetYear
// (Final, Native, Public)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetYear(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetYear");

	Params::APPSkyCreator_SetYear_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetWindSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWindSettings   InWindSettings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetWindSettings(const struct FPPSkyCreatorWindSettings& InWindSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetWindSettings");

	Params::APPSkyCreator_SetWindSettings_Params Parms{};

	Parms.InWindSettings = InWindSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetWindIndependentSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWindSettings   InWindSettings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetWindIndependentSettings(const struct FPPSkyCreatorWindSettings& InWindSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetWindIndependentSettings");

	Params::APPSkyCreator_SetWindIndependentSettings_Params Parms{};

	Parms.InWindSettings = InWindSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetWeatherSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWeatherSettingsInWeatherSettings                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetWeatherSettings(const struct FPPSkyCreatorWeatherSettings& InWeatherSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetWeatherSettings");

	Params::APPSkyCreator_SetWeatherSettings_Params Parms{};

	Parms.InWeatherSettings = InWeatherSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetWeatherMaterialFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWeatherMaterialFXSettingsInWeatherMaterialFXSettings                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetWeatherMaterialFXSettings(const struct FPPSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetWeatherMaterialFXSettings");

	Params::APPSkyCreator_SetWeatherMaterialFXSettings_Params Parms{};

	Parms.InWeatherMaterialFXSettings = InWeatherMaterialFXSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetWeatherFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWeatherFXSettingsInWeatherFXSettings                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetWeatherFXSettings(const struct FPPSkyCreatorWeatherFXSettings& InWeatherFXSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetWeatherFXSettings");

	Params::APPSkyCreator_SetWeatherFXSettings_Params Parms{};

	Parms.InWeatherFXSettings = InWeatherFXSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetVolumetricCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorVolumetricCloudSettingsInVolumetricCloudSettings                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetVolumetricCloudSettings(const struct FPPSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetVolumetricCloudSettings");

	Params::APPSkyCreator_SetVolumetricCloudSettings_Params Parms{};

	Parms.InVolumetricCloudSettings = InVolumetricCloudSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetTimeZone
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetTimeZone(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetTimeZone");

	Params::APPSkyCreator_SetTimeZone_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InTime                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetTime(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetTime");

	Params::APPSkyCreator_SetTime_Params Parms{};

	Parms.InTime = InTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunSimplePositionSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSunriseTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InSunsetTime                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InSunElevation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InSunAzimuth                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunSimplePositionSettings(float InSunriseTime, float InSunsetTime, float InSunElevation, float InSunAzimuth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunSimplePositionSettings");

	Params::APPSkyCreator_SetSunSimplePositionSettings_Params Parms{};

	Parms.InSunriseTime = InSunriseTime;
	Parms.InSunsetTime = InSunsetTime;
	Parms.InSunElevation = InSunElevation;
	Parms.InSunAzimuth = InSunAzimuth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunsetTime");

	Params::APPSkyCreator_SetSunsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunriseTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunriseTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunriseTime");

	Params::APPSkyCreator_SetSunriseTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunMinAngleAtDawnDusk
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunMinAngleAtDawnDusk(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunMinAngleAtDawnDusk");

	Params::APPSkyCreator_SetSunMinAngleAtDawnDusk_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorSunLightSettingsInSunLightSettings                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunLightSettings(const struct FPPSkyCreatorSunLightSettings& InSunLightSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunLightSettings");

	Params::APPSkyCreator_SetSunLightSettings_Params Parms{};

	Parms.InSunLightSettings = InSunLightSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunIntensity
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunIntensity(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunIntensity");

	Params::APPSkyCreator_SetSunIntensity_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunElevation
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunElevation(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunElevation");

	Params::APPSkyCreator_SetSunElevation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunDuskOffsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunDuskOffsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunDuskOffsetTime");

	Params::APPSkyCreator_SetSunDuskOffsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunDiskSize
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunDiskSize(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunDiskSize");

	Params::APPSkyCreator_SetSunDiskSize_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunDawnOffsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunDawnOffsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunDawnOffsetTime");

	Params::APPSkyCreator_SetSunDawnOffsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunAzimuth
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunAzimuth(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunAzimuth");

	Params::APPSkyCreator_SetSunAzimuth_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunAtmosphereDiskColorScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FLinearColor                NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSunAtmosphereDiskColorScale(const struct FLinearColor& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSunAtmosphereDiskColorScale");

	Params::APPSkyCreator_SetSunAtmosphereDiskColorScale_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetStarMapSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorStarMapSettingsInStarMapSettings                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetStarMapSettings(const struct FPPSkyCreatorStarMapSettings& InStarMapSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetStarMapSettings");

	Params::APPSkyCreator_SetStarMapSettings_Params Parms{};

	Parms.InStarMapSettings = InStarMapSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetStarMapAdditionalRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetStarMapAdditionalRotation(const struct FVector& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetStarMapAdditionalRotation");

	Params::APPSkyCreator_SetStarMapAdditionalRotation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSkyLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorSkyLightSettingsInSkyLightSettings                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSkyLightSettings(const struct FPPSkyCreatorSkyLightSettings& InSkyLightSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSkyLightSettings");

	Params::APPSkyCreator_SetSkyLightSettings_Params Parms{};

	Parms.InSkyLightSettings = InSkyLightSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetSkyAtmosphereSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorSkyAtmosphereSettingsInSkyAtmosphereSettings                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetSkyAtmosphereSettings(const struct FPPSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetSkyAtmosphereSettings");

	Params::APPSkyCreator_SetSkyAtmosphereSettings_Params Parms{};

	Parms.InSkyAtmosphereSettings = InSkyAtmosphereSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetRealPositionSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLatitude                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InLongitude                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InTimeZone                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InbDaylightSavingTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InYear                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMonth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InDay                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetRealPositionSettings(float InLatitude, float InLongitude, float InTimeZone, bool InbDaylightSavingTime, int32 InYear, int32 InMonth, int32 InDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetRealPositionSettings");

	Params::APPSkyCreator_SetRealPositionSettings_Params Parms{};

	Parms.InLatitude = InLatitude;
	Parms.InLongitude = InLongitude;
	Parms.InTimeZone = InTimeZone;
	Parms.InbDaylightSavingTime = InbDaylightSavingTime;
	Parms.InYear = InYear;
	Parms.InMonth = InMonth;
	Parms.InDay = InDay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetPostProcessSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorPostProcessSettingsInPostProcessSettings                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetPostProcessSettings(const struct FPPSkyCreatorPostProcessSettings& InPostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetPostProcessSettings");

	Params::APPSkyCreator_SetPostProcessSettings_Params Parms{};

	Parms.InPostProcessSettings = InPostProcessSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonSimplePositionSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMoonriseTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMoonsetTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMoonElevation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMoonAzimuth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonSimplePositionSettings(float InMoonriseTime, float InMoonsetTime, float InMoonElevation, float InMoonAzimuth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonSimplePositionSettings");

	Params::APPSkyCreator_SetMoonSimplePositionSettings_Params Parms{};

	Parms.InMoonriseTime = InMoonriseTime;
	Parms.InMoonsetTime = InMoonsetTime;
	Parms.InMoonElevation = InMoonElevation;
	Parms.InMoonAzimuth = InMoonAzimuth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonsetTime");

	Params::APPSkyCreator_SetMoonsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonRotation
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonRotation(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonRotation");

	Params::APPSkyCreator_SetMoonRotation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonriseTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonriseTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonriseTime");

	Params::APPSkyCreator_SetMoonriseTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonPhase(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonPhase");

	Params::APPSkyCreator_SetMoonPhase_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorMoonLightSettingsInMoonLightSettings                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonLightSettings(const struct FPPSkyCreatorMoonLightSettings& InMoonLightSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonLightSettings");

	Params::APPSkyCreator_SetMoonLightSettings_Params Parms{};

	Parms.InMoonLightSettings = InMoonLightSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonIntensity
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonIntensity(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonIntensity");

	Params::APPSkyCreator_SetMoonIntensity_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonElevation
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonElevation(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonElevation");

	Params::APPSkyCreator_SetMoonElevation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonDiskSize
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonDiskSize(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonDiskSize");

	Params::APPSkyCreator_SetMoonDiskSize_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonAzimuth
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonAzimuth(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonAzimuth");

	Params::APPSkyCreator_SetMoonAzimuth_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonAtmosphereDiskColorScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FLinearColor                NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMoonAtmosphereDiskColorScale(const struct FLinearColor& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMoonAtmosphereDiskColorScale");

	Params::APPSkyCreator_SetMoonAtmosphereDiskColorScale_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetMonth
// (Final, Native, Public)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetMonth(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetMonth");

	Params::APPSkyCreator_SetMonth_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetLongitude
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetLongitude(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetLongitude");

	Params::APPSkyCreator_SetLongitude_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetLayerHeight
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetLayerHeight(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetLayerHeight");

	Params::APPSkyCreator_SetLayerHeight_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetLayerBottomAltitude
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetLayerBottomAltitude(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetLayerBottomAltitude");

	Params::APPSkyCreator_SetLayerBottomAltitude_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetLatitude
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetLatitude(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetLatitude");

	Params::APPSkyCreator_SetLatitude_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetExponentialHeightFogSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorExponentialHeightFogSettingsInExponentialHeightFogSettings                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetExponentialHeightFogSettings(const struct FPPSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetExponentialHeightFogSettings");

	Params::APPSkyCreator_SetExponentialHeightFogSettings_Params Parms{};

	Parms.InExponentialHeightFogSettings = InExponentialHeightFogSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetEditorWeatherSettings
// (Final, Native, Public)
// Parameters:
// struct FPPSkyCreatorWeatherSettingsNewValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetEditorWeatherSettings(const struct FPPSkyCreatorWeatherSettings& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetEditorWeatherSettings");

	Params::APPSkyCreator_SetEditorWeatherSettings_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetEditorWeatherPreset
// (Final, Native, Public)
// Parameters:
// class UPPSkyCreatorWeatherPreset*  NewValue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetEditorWeatherPreset(class UPPSkyCreatorWeatherPreset* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetEditorWeatherPreset");

	Params::APPSkyCreator_SetEditorWeatherPreset_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetEditorTimeOfDay
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetEditorTimeOfDay(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetEditorTimeOfDay");

	Params::APPSkyCreator_SetEditorTimeOfDay_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetDay
// (Final, Native, Public)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetDay(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetDay");

	Params::APPSkyCreator_SetDay_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetCloudMapOffset
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetCloudMapOffset(const struct FVector2D& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetCloudMapOffset");

	Params::APPSkyCreator_SetCloudMapOffset_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetbDaylightSavingTime
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::SetbDaylightSavingTime(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetbDaylightSavingTime");

	Params::APPSkyCreator_SetbDaylightSavingTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.SetBackgroundCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorBackgroundCloudSettingsInBackgroundCloudSettings                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void APPSkyCreator::SetBackgroundCloudSettings(const struct FPPSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "SetBackgroundCloudSettings");

	Params::APPSkyCreator_SetBackgroundCloudSettings_Params Parms{};

	Parms.InBackgroundCloudSettings = InBackgroundCloudSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.RealtimeTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DayCycleDuration                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "RealtimeTimeOfDay");

	Params::APPSkyCreator_RealtimeTimeOfDay_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.DayCycleDuration = DayCycleDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.OnRep_UpdateWeather
// (Final, Native, Private)
// Parameters:

void APPSkyCreator::OnRep_UpdateWeather()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "OnRep_UpdateWeather");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.OnRep_UpdateTime
// (Final, Native, Private)
// Parameters:

void APPSkyCreator::OnRep_UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "OnRep_UpdateTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWindSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWindSettings   InWindSettingsA                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorWindSettings   InWindSettingsB                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpWindSettings(const struct FPPSkyCreatorWindSettings& InWindSettingsA, const struct FPPSkyCreatorWindSettings& InWindSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpWindSettings");

	Params::APPSkyCreator_LerpWindSettings_Params Parms{};

	Parms.InWindSettingsA = InWindSettingsA;
	Parms.InWindSettingsB = InWindSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWindIndependentSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWindSettings   InWindSettingsA                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorWindSettings   InWindSettingsB                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpWindIndependentSettings(const struct FPPSkyCreatorWindSettings& InWindSettingsA, const struct FPPSkyCreatorWindSettings& InWindSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpWindIndependentSettings");

	Params::APPSkyCreator_LerpWindIndependentSettings_Params Parms{};

	Parms.InWindSettingsA = InWindSettingsA;
	Parms.InWindSettingsB = InWindSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWetnessAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              WetnessAmountA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WetnessAmountB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpWetnessAmount");

	Params::APPSkyCreator_LerpWetnessAmount_Params Parms{};

	Parms.WetnessAmountA = WetnessAmountA;
	Parms.WetnessAmountB = WetnessAmountB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWeatherSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWeatherSettingsInWeatherSettingsA                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorWeatherSettingsInWeatherSettingsB                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpWeatherSettings(const struct FPPSkyCreatorWeatherSettings& InWeatherSettingsA, const struct FPPSkyCreatorWeatherSettings& InWeatherSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpWeatherSettings");

	Params::APPSkyCreator_LerpWeatherSettings_Params Parms{};

	Parms.InWeatherSettingsA = InWeatherSettingsA;
	Parms.InWeatherSettingsB = InWeatherSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWeatherMaterialFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWeatherMaterialFXSettingsInWeatherMaterialFXSettingsA                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorWeatherMaterialFXSettingsInWeatherMaterialFXSettingsB                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpWeatherMaterialFXSettings(const struct FPPSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsA, const struct FPPSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpWeatherMaterialFXSettings");

	Params::APPSkyCreator_LerpWeatherMaterialFXSettings_Params Parms{};

	Parms.InWeatherMaterialFXSettingsA = InWeatherMaterialFXSettingsA;
	Parms.InWeatherMaterialFXSettingsB = InWeatherMaterialFXSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWeatherFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorWeatherFXSettingsInWeatherFXSettingsA                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorWeatherFXSettingsInWeatherFXSettingsB                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpWeatherFXSettings(const struct FPPSkyCreatorWeatherFXSettings& InWeatherFXSettingsA, const struct FPPSkyCreatorWeatherFXSettings& InWeatherFXSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpWeatherFXSettings");

	Params::APPSkyCreator_LerpWeatherFXSettings_Params Parms{};

	Parms.InWeatherFXSettingsA = InWeatherFXSettingsA;
	Parms.InWeatherFXSettingsB = InWeatherFXSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpVolumetricCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorVolumetricCloudSettingsInVolumetricCloudSettingsA                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorVolumetricCloudSettingsInVolumetricCloudSettingsB                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpVolumetricCloudSettings(const struct FPPSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsA, const struct FPPSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpVolumetricCloudSettings");

	Params::APPSkyCreator_LerpVolumetricCloudSettings_Params Parms{};

	Parms.InVolumetricCloudSettingsA = InVolumetricCloudSettingsA;
	Parms.InVolumetricCloudSettingsB = InVolumetricCloudSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSunLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorSunLightSettingsInSunLightSettingsA                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorSunLightSettingsInSunLightSettingsB                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpSunLightSettings(const struct FPPSkyCreatorSunLightSettings& InSunLightSettingsA, const struct FPPSkyCreatorSunLightSettings& InSunLightSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpSunLightSettings");

	Params::APPSkyCreator_LerpSunLightSettings_Params Parms{};

	Parms.InSunLightSettingsA = InSunLightSettingsA;
	Parms.InSunLightSettingsB = InSunLightSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpStarMapSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorStarMapSettingsInStarMapSettingsA                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorStarMapSettingsInStarMapSettingsB                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpStarMapSettings(const struct FPPSkyCreatorStarMapSettings& InStarMapSettingsA, const struct FPPSkyCreatorStarMapSettings& InStarMapSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpStarMapSettings");

	Params::APPSkyCreator_LerpStarMapSettings_Params Parms{};

	Parms.InStarMapSettingsA = InStarMapSettingsA;
	Parms.InStarMapSettingsB = InStarMapSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSnowAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              SnowAmountA                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SnowAmountB                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpSnowAmount");

	Params::APPSkyCreator_LerpSnowAmount_Params Parms{};

	Parms.SnowAmountA = SnowAmountA;
	Parms.SnowAmountB = SnowAmountB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSkyLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorSkyLightSettingsInSkyLightSettingsA                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorSkyLightSettingsInSkyLightSettingsB                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpSkyLightSettings(const struct FPPSkyCreatorSkyLightSettings& InSkyLightSettingsA, const struct FPPSkyCreatorSkyLightSettings& InSkyLightSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpSkyLightSettings");

	Params::APPSkyCreator_LerpSkyLightSettings_Params Parms{};

	Parms.InSkyLightSettingsA = InSkyLightSettingsA;
	Parms.InSkyLightSettingsB = InSkyLightSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSkyAtmosphereSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorSkyAtmosphereSettingsInSkyAtmosphereSettingsA                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorSkyAtmosphereSettingsInSkyAtmosphereSettingsB                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpSkyAtmosphereSettings(const struct FPPSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsA, const struct FPPSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpSkyAtmosphereSettings");

	Params::APPSkyCreator_LerpSkyAtmosphereSettings_Params Parms{};

	Parms.InSkyAtmosphereSettingsA = InSkyAtmosphereSettingsA;
	Parms.InSkyAtmosphereSettingsB = InSkyAtmosphereSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpPuddlesAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              PuddlesAmountA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PuddlesAmountB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpPuddlesAmount");

	Params::APPSkyCreator_LerpPuddlesAmount_Params Parms{};

	Parms.PuddlesAmountA = PuddlesAmountA;
	Parms.PuddlesAmountB = PuddlesAmountB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpPostProcessSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorPostProcessSettingsInPostProcessSettingsA                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorPostProcessSettingsInPostProcessSettingsB                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpPostProcessSettings(const struct FPPSkyCreatorPostProcessSettings& InPostProcessSettingsA, const struct FPPSkyCreatorPostProcessSettings& InPostProcessSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpPostProcessSettings");

	Params::APPSkyCreator_LerpPostProcessSettings_Params Parms{};

	Parms.InPostProcessSettingsA = InPostProcessSettingsA;
	Parms.InPostProcessSettingsB = InPostProcessSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpMoonLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorMoonLightSettingsInMoonLightSettingsA                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorMoonLightSettingsInMoonLightSettingsB                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpMoonLightSettings(const struct FPPSkyCreatorMoonLightSettings& InMoonLightSettingsA, const struct FPPSkyCreatorMoonLightSettings& InMoonLightSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpMoonLightSettings");

	Params::APPSkyCreator_LerpMoonLightSettings_Params Parms{};

	Parms.InMoonLightSettingsA = InMoonLightSettingsA;
	Parms.InMoonLightSettingsB = InMoonLightSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpExponentialHeightFogSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorExponentialHeightFogSettingsInExponentialHeightFogSettingsA                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorExponentialHeightFogSettingsInExponentialHeightFogSettingsB                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpExponentialHeightFogSettings(const struct FPPSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsA, const struct FPPSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpExponentialHeightFogSettings");

	Params::APPSkyCreator_LerpExponentialHeightFogSettings_Params Parms{};

	Parms.InExponentialHeightFogSettingsA = InExponentialHeightFogSettingsA;
	Parms.InExponentialHeightFogSettingsB = InExponentialHeightFogSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.LerpBackgroundCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPPSkyCreatorBackgroundCloudSettingsInBackgroundCloudSettingsA                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPPSkyCreatorBackgroundCloudSettingsInBackgroundCloudSettingsB                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APPSkyCreator::LerpBackgroundCloudSettings(const struct FPPSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsA, const struct FPPSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "LerpBackgroundCloudSettings");

	Params::APPSkyCreator_LerpBackgroundCloudSettings_Params Parms{};

	Parms.InBackgroundCloudSettingsA = InBackgroundCloudSettingsA;
	Parms.InBackgroundCloudSettingsB = InBackgroundCloudSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetWindSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorWindSettings   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorWindSettings APPSkyCreator::GetWindSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetWindSettings");

	Params::APPSkyCreator_GetWindSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetWeatherSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorWeatherSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorWeatherSettings APPSkyCreator::GetWeatherSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetWeatherSettings");

	Params::APPSkyCreator_GetWeatherSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetWeatherMaterialFXSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorWeatherMaterialFXSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorWeatherMaterialFXSettings APPSkyCreator::GetWeatherMaterialFXSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetWeatherMaterialFXSettings");

	Params::APPSkyCreator_GetWeatherMaterialFXSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetWeatherFXSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorWeatherFXSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorWeatherFXSettings APPSkyCreator::GetWeatherFXSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetWeatherFXSettings");

	Params::APPSkyCreator_GetWeatherFXSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetVolumetricCloudSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorVolumetricCloudSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorVolumetricCloudSettings APPSkyCreator::GetVolumetricCloudSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetVolumetricCloudSettings");

	Params::APPSkyCreator_GetVolumetricCloudSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float APPSkyCreator::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetTime");

	Params::APPSkyCreator_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetSunPosition
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator APPSkyCreator::GetSunPosition(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetSunPosition");

	Params::APPSkyCreator_GetSunPosition_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetSunLightSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorSunLightSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorSunLightSettings APPSkyCreator::GetSunLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetSunLightSettings");

	Params::APPSkyCreator_GetSunLightSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetStarMapSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorStarMapSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorStarMapSettings APPSkyCreator::GetStarMapSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetStarMapSettings");

	Params::APPSkyCreator_GetStarMapSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetStarMapRotation
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator APPSkyCreator::GetStarMapRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetStarMapRotation");

	Params::APPSkyCreator_GetStarMapRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetSkyLightSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorSkyLightSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorSkyLightSettings APPSkyCreator::GetSkyLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetSkyLightSettings");

	Params::APPSkyCreator_GetSkyLightSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetSkyAtmosphereSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorSkyAtmosphereSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorSkyAtmosphereSettings APPSkyCreator::GetSkyAtmosphereSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetSkyAtmosphereSettings");

	Params::APPSkyCreator_GetSkyAtmosphereSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetPostProcessSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorPostProcessSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorPostProcessSettings APPSkyCreator::GetPostProcessSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetPostProcessSettings");

	Params::APPSkyCreator_GetPostProcessSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetMoonPosition
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator APPSkyCreator::GetMoonPosition(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetMoonPosition");

	Params::APPSkyCreator_GetMoonPosition_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetMoonPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float APPSkyCreator::GetMoonPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetMoonPhase");

	Params::APPSkyCreator_GetMoonPhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetMoonLightSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorMoonLightSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorMoonLightSettings APPSkyCreator::GetMoonLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetMoonLightSettings");

	Params::APPSkyCreator_GetMoonLightSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetLastLightningPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector APPSkyCreator::GetLastLightningPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetLastLightningPosition");

	Params::APPSkyCreator_GetLastLightningPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetExponentialHeightFogSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorExponentialHeightFogSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorExponentialHeightFogSettings APPSkyCreator::GetExponentialHeightFogSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetExponentialHeightFogSettings");

	Params::APPSkyCreator_GetExponentialHeightFogSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetCloudDensityAtPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float APPSkyCreator::GetCloudDensityAtPosition(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetCloudDensityAtPosition");

	Params::APPSkyCreator_GetCloudDensityAtPosition_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.GetBackgroundCloudSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPPSkyCreatorBackgroundCloudSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorBackgroundCloudSettings APPSkyCreator::GetBackgroundCloudSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "GetBackgroundCloudSettings");

	Params::APPSkyCreator_GetBackgroundCloudSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreator.FindLightningPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APPSkyCreator::FindLightningPosition(const struct FVector& Position, struct FVector* OutPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator", "FindLightningPosition");

	Params::APPSkyCreator_FindLightningPosition_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	return Parms.ReturnValue;

}


// Class PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary
// (None)

class UClass* UPPSkyCreatorFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPSkyCreatorFunctionLibrary");

	return Clss;
}


// PPSkyCreatorFunctionLibrary PPSkyCreatorPlugin.Default__PPSkyCreatorFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPPSkyCreatorFunctionLibrary* UPPSkyCreatorFunctionLibrary::GetDefaultObj()
{
	static class UPPSkyCreatorFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPSkyCreatorFunctionLibrary*>(UPPSkyCreatorFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.KilometersToCentimeters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPPSkyCreatorFunctionLibrary::KilometersToCentimeters(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "KilometersToCentimeters");

	Params::UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.IsApplicationForegroundNow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPPSkyCreatorFunctionLibrary::IsApplicationForegroundNow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "IsApplicationForegroundNow");

	Params::UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.GetRealSunPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Latitude                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Longitude                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeZone                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDaylightSavingTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPPCelestialPositionData    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPCelestialPositionData UPPSkyCreatorFunctionLibrary::GetRealSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "GetRealSunPosition");

	Params::UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Params Parms{};

	Parms.Latitude = Latitude;
	Parms.Longitude = Longitude;
	Parms.TimeZone = TimeZone;
	Parms.bIsDaylightSavingTime = bIsDaylightSavingTime;
	Parms.DateTime = DateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.GetRealMoonPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Latitude                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Longitude                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeZone                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDaylightSavingTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPPCelestialPositionData    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPCelestialPositionData UPPSkyCreatorFunctionLibrary::GetRealMoonPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "GetRealMoonPosition");

	Params::UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Params Parms{};

	Parms.Latitude = Latitude;
	Parms.Longitude = Longitude;
	Parms.TimeZone = TimeZone;
	Parms.bIsDaylightSavingTime = bIsDaylightSavingTime;
	Parms.DateTime = DateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.GetCloudDensityAtPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialParameterCollection*ParameterCollection                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPPSkyCreatorFunctionLibrary::GetCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "GetCloudDensityAtPosition");

	Params::UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Position = Position;
	Parms.ParameterCollection = ParameterCollection;
	Parms.Material = Material;
	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.FindLightningPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSampleCloudDensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Samples                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialParameterCollection*ParameterCollection                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InnerRadius                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OuterRadius                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DensityThreshold                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPPSkyCreatorFunctionLibrary::FindLightningPosition(class UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget, const struct FVector& Position, float InnerRadius, float OuterRadius, float MinHeight, float MaxHeight, float DensityThreshold, struct FVector* OutPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "FindLightningPosition");

	Params::UPPSkyCreatorFunctionLibrary_FindLightningPosition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bSampleCloudDensity = bSampleCloudDensity;
	Parms.Samples = Samples;
	Parms.ParameterCollection = ParameterCollection;
	Parms.Material = Material;
	Parms.RenderTarget = RenderTarget;
	Parms.Position = Position;
	Parms.InnerRadius = InnerRadius;
	Parms.OuterRadius = OuterRadius;
	Parms.MinHeight = MinHeight;
	Parms.MaxHeight = MaxHeight;
	Parms.DensityThreshold = DensityThreshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.ElevationRefraction
// (Final, Native, Static, Private)
// Parameters:
// double                             F                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UPPSkyCreatorFunctionLibrary::ElevationRefraction(double F)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "ElevationRefraction");

	Params::UPPSkyCreatorFunctionLibrary_ElevationRefraction_Params Parms{};

	Parms.F = F;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.DynamicConvertRenderTargetToTexture2D
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UPPSkyCreatorFunctionLibrary::DynamicConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "DynamicConvertRenderTargetToTexture2D");

	Params::UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.CreateAndAssignMID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    InMID                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPPSkyCreatorFunctionLibrary::CreateAndAssignMID(class UObject* WorldContextObject, class UMaterialInterface* InMaterial, class UMaterialInstanceDynamic** InMID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "CreateAndAssignMID");

	Params::UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMID != nullptr)
		*InMID = Parms.InMID;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.ConvertRenderTargetToTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPPSkyCreatorFunctionLibrary::ConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget, class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "ConvertRenderTargetToTexture2D");

	Params::UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.CheckCloudDensityAtPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialParameterCollection*ParameterCollection                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPPSkyCreatorFunctionLibrary::CheckCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "CheckCloudDensityAtPosition");

	Params::UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Position = Position;
	Parms.ParameterCollection = ParameterCollection;
	Parms.Material = Material;
	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.CentimetersToKilometers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPPSkyCreatorFunctionLibrary::CentimetersToKilometers(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorFunctionLibrary", "CentimetersToKilometers");

	Params::UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PPSkyCreatorPlugin.PPSkyCreatorWeatherPreset
// (None)

class UClass* UPPSkyCreatorWeatherPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPSkyCreatorWeatherPreset");

	return Clss;
}


// PPSkyCreatorWeatherPreset PPSkyCreatorPlugin.Default__PPSkyCreatorWeatherPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UPPSkyCreatorWeatherPreset* UPPSkyCreatorWeatherPreset::GetDefaultObj()
{
	static class UPPSkyCreatorWeatherPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPSkyCreatorWeatherPreset*>(UPPSkyCreatorWeatherPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function PPSkyCreatorPlugin.PPSkyCreatorWeatherPreset.GetWeatherPresetSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPPSkyCreatorWeatherSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPPSkyCreatorWeatherSettings UPPSkyCreatorWeatherPreset::GetWeatherPresetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreatorWeatherPreset", "GetWeatherPresetSettings");

	Params::UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


