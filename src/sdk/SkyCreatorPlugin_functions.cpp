#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SkyCreatorPlugin.SkyCreator
// (Actor)

class UClass* ASkyCreator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkyCreator");

	return Clss;
}


// SkyCreator SkyCreatorPlugin.Default__SkyCreator
// (Public, ClassDefaultObject, ArchetypeObject)

class ASkyCreator* ASkyCreator::GetDefaultObj()
{
	static class ASkyCreator* Default = nullptr;

	if (!Default)
		Default = static_cast<ASkyCreator*>(ASkyCreator::StaticClass()->DefaultObject);

	return Default;
}


// Function SkyCreatorPlugin.SkyCreator.UpdateSettingsSequencer
// (Final, Native, Public)
// Parameters:

void ASkyCreator::UpdateSettingsSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "UpdateSettingsSequencer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SpawnLightningStrike
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     LightningPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SpawnLightningStrike(const struct FVector& LightningPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SpawnLightningStrike");

	Params::ASkyCreator_SpawnLightningStrike_Params Parms{};

	Parms.LightningPosition = LightningPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetYear
// (Final, Native, Public)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetYear(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetYear");

	Params::ASkyCreator_SetYear_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetWindSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings     InWindSettings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetWindSettings(const struct FSkyCreatorWindSettings& InWindSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetWindSettings");

	Params::ASkyCreator_SetWindSettings_Params Parms{};

	Parms.InWindSettings = InWindSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings     InWindSettings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetWindIndependentSettings");

	Params::ASkyCreator_SetWindIndependentSettings_Params Parms{};

	Parms.InWindSettings = InWindSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetWeatherSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherSettings  InWeatherSettings                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetWeatherSettings");

	Params::ASkyCreator_SetWeatherSettings_Params Parms{};

	Parms.InWeatherSettings = InWeatherSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetWeatherMaterialFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherMaterialFXSettingsInWeatherMaterialFXSettings                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetWeatherMaterialFXSettings(const struct FSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetWeatherMaterialFXSettings");

	Params::ASkyCreator_SetWeatherMaterialFXSettings_Params Parms{};

	Parms.InWeatherMaterialFXSettings = InWeatherMaterialFXSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherFXSettingsInWeatherFXSettings                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetWeatherFXSettings");

	Params::ASkyCreator_SetWeatherFXSettings_Params Parms{};

	Parms.InWeatherFXSettings = InWeatherFXSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorVolumetricCloudSettingsInVolumetricCloudSettings                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetVolumetricCloudSettings");

	Params::ASkyCreator_SetVolumetricCloudSettings_Params Parms{};

	Parms.InVolumetricCloudSettings = InVolumetricCloudSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetTimeZone
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetTimeZone(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetTimeZone");

	Params::ASkyCreator_SetTimeZone_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InTime                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetTime(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetTime");

	Params::ASkyCreator_SetTime_Params Parms{};

	Parms.InTime = InTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunSimplePositionSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSunriseTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InSunsetTime                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InSunElevation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InSunAzimuth                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunSimplePositionSettings(float InSunriseTime, float InSunsetTime, float InSunElevation, float InSunAzimuth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunSimplePositionSettings");

	Params::ASkyCreator_SetSunSimplePositionSettings_Params Parms{};

	Parms.InSunriseTime = InSunriseTime;
	Parms.InSunsetTime = InSunsetTime;
	Parms.InSunElevation = InSunElevation;
	Parms.InSunAzimuth = InSunAzimuth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunsetTime");

	Params::ASkyCreator_SetSunsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunriseTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunriseTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunriseTime");

	Params::ASkyCreator_SetSunriseTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunMinAngleAtDawnDusk
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunMinAngleAtDawnDusk(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunMinAngleAtDawnDusk");

	Params::ASkyCreator_SetSunMinAngleAtDawnDusk_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorSunLightSettings InSunLightSettings                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunLightSettings");

	Params::ASkyCreator_SetSunLightSettings_Params Parms{};

	Parms.InSunLightSettings = InSunLightSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunIntensity
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunIntensity(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunIntensity");

	Params::ASkyCreator_SetSunIntensity_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunElevation
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunElevation(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunElevation");

	Params::ASkyCreator_SetSunElevation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunDuskOffsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunDuskOffsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunDuskOffsetTime");

	Params::ASkyCreator_SetSunDuskOffsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunDiskSize
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunDiskSize(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunDiskSize");

	Params::ASkyCreator_SetSunDiskSize_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunDawnOffsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunDawnOffsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunDawnOffsetTime");

	Params::ASkyCreator_SetSunDawnOffsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunAzimuth
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunAzimuth(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunAzimuth");

	Params::ASkyCreator_SetSunAzimuth_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSunAtmosphereDiskColorScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FLinearColor                NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetSunAtmosphereDiskColorScale(const struct FLinearColor& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSunAtmosphereDiskColorScale");

	Params::ASkyCreator_SetSunAtmosphereDiskColorScale_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetStarMapSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorStarMapSettings  InStarMapSettings                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetStarMapSettings");

	Params::ASkyCreator_SetStarMapSettings_Params Parms{};

	Parms.InStarMapSettings = InStarMapSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetStarMapAdditionalRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetStarMapAdditionalRotation(const struct FVector& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetStarMapAdditionalRotation");

	Params::ASkyCreator_SetStarMapAdditionalRotation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSkyLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyLightSettings InSkyLightSettings                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSkyLightSettings");

	Params::ASkyCreator_SetSkyLightSettings_Params Parms{};

	Parms.InSkyLightSettings = InSkyLightSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyAtmosphereSettingsInSkyAtmosphereSettings                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetSkyAtmosphereSettings");

	Params::ASkyCreator_SetSkyAtmosphereSettings_Params Parms{};

	Parms.InSkyAtmosphereSettings = InSkyAtmosphereSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetRealPositionSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLatitude                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InLongitude                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InTimeZone                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InbDaylightSavingTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InYear                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMonth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InDay                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetRealPositionSettings(float InLatitude, float InLongitude, float InTimeZone, bool InbDaylightSavingTime, int32 InYear, int32 InMonth, int32 InDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetRealPositionSettings");

	Params::ASkyCreator_SetRealPositionSettings_Params Parms{};

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


// Function SkyCreatorPlugin.SkyCreator.SetPostProcessSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorPostProcessSettingsInPostProcessSettings                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetPostProcessSettings(const struct FSkyCreatorPostProcessSettings& InPostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetPostProcessSettings");

	Params::ASkyCreator_SetPostProcessSettings_Params Parms{};

	Parms.InPostProcessSettings = InPostProcessSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonSimplePositionSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMoonriseTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMoonsetTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMoonElevation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMoonAzimuth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonSimplePositionSettings(float InMoonriseTime, float InMoonsetTime, float InMoonElevation, float InMoonAzimuth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonSimplePositionSettings");

	Params::ASkyCreator_SetMoonSimplePositionSettings_Params Parms{};

	Parms.InMoonriseTime = InMoonriseTime;
	Parms.InMoonsetTime = InMoonsetTime;
	Parms.InMoonElevation = InMoonElevation;
	Parms.InMoonAzimuth = InMoonAzimuth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonsetTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonsetTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonsetTime");

	Params::ASkyCreator_SetMoonsetTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonRotation
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonRotation(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonRotation");

	Params::ASkyCreator_SetMoonRotation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonriseTime
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonriseTime(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonriseTime");

	Params::ASkyCreator_SetMoonriseTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonPhase(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonPhase");

	Params::ASkyCreator_SetMoonPhase_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorMoonLightSettingsInMoonLightSettings                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonLightSettings");

	Params::ASkyCreator_SetMoonLightSettings_Params Parms{};

	Parms.InMoonLightSettings = InMoonLightSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonIntensity
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonIntensity(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonIntensity");

	Params::ASkyCreator_SetMoonIntensity_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonElevation
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonElevation(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonElevation");

	Params::ASkyCreator_SetMoonElevation_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonDiskSize
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonDiskSize(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonDiskSize");

	Params::ASkyCreator_SetMoonDiskSize_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonAzimuth
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonAzimuth(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonAzimuth");

	Params::ASkyCreator_SetMoonAzimuth_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMoonAtmosphereDiskColorScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FLinearColor                NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonAtmosphereDiskColorScale(const struct FLinearColor& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMoonAtmosphereDiskColorScale");

	Params::ASkyCreator_SetMoonAtmosphereDiskColorScale_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetMonth
// (Final, Native, Public)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetMonth(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetMonth");

	Params::ASkyCreator_SetMonth_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetLongitude
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetLongitude(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetLongitude");

	Params::ASkyCreator_SetLongitude_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetLayerHeight
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetLayerHeight(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetLayerHeight");

	Params::ASkyCreator_SetLayerHeight_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetLayerBottomAltitude
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetLayerBottomAltitude(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetLayerBottomAltitude");

	Params::ASkyCreator_SetLayerBottomAltitude_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetLatitude
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetLatitude(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetLatitude");

	Params::ASkyCreator_SetLatitude_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorExponentialHeightFogSettingsInExponentialHeightFogSettings                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetExponentialHeightFogSettings");

	Params::ASkyCreator_SetExponentialHeightFogSettings_Params Parms{};

	Parms.InExponentialHeightFogSettings = InExponentialHeightFogSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetEditorWeatherSettings
// (Final, Native, Public)
// Parameters:
// struct FSkyCreatorWeatherSettings  NewValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetEditorWeatherSettings(const struct FSkyCreatorWeatherSettings& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetEditorWeatherSettings");

	Params::ASkyCreator_SetEditorWeatherSettings_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetEditorWeatherPreset
// (Final, Native, Public)
// Parameters:
// class USkyCreatorWeatherPreset*    NewValue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetEditorWeatherPreset(class USkyCreatorWeatherPreset* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetEditorWeatherPreset");

	Params::ASkyCreator_SetEditorWeatherPreset_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetEditorTimeOfDay
// (Final, Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetEditorTimeOfDay(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetEditorTimeOfDay");

	Params::ASkyCreator_SetEditorTimeOfDay_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetDay
// (Final, Native, Public)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetDay(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetDay");

	Params::ASkyCreator_SetDay_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetCloudMapOffset
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetCloudMapOffset(const struct FVector2D& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetCloudMapOffset");

	Params::ASkyCreator_SetCloudMapOffset_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetbDaylightSavingTime
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::SetbDaylightSavingTime(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetbDaylightSavingTime");

	Params::ASkyCreator_SetbDaylightSavingTime_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.SetBackgroundCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorBackgroundCloudSettingsInBackgroundCloudSettings                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ASkyCreator::SetBackgroundCloudSettings(const struct FSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "SetBackgroundCloudSettings");

	Params::ASkyCreator_SetBackgroundCloudSettings_Params Parms{};

	Parms.InBackgroundCloudSettings = InBackgroundCloudSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DayCycleDuration                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "RealtimeTimeOfDay");

	Params::ASkyCreator_RealtimeTimeOfDay_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.DayCycleDuration = DayCycleDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather
// (Final, Native, Private)
// Parameters:

void ASkyCreator::OnRep_UpdateWeather()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "OnRep_UpdateWeather");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime
// (Final, Native, Private)
// Parameters:

void ASkyCreator::OnRep_UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "OnRep_UpdateTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpWindSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings     InWindSettingsA                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorWindSettings     InWindSettingsB                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpWindSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpWindSettings");

	Params::ASkyCreator_LerpWindSettings_Params Parms{};

	Parms.InWindSettingsA = InWindSettingsA;
	Parms.InWindSettingsB = InWindSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings     InWindSettingsA                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorWindSettings     InWindSettingsB                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpWindIndependentSettings");

	Params::ASkyCreator_LerpWindIndependentSettings_Params Parms{};

	Parms.InWindSettingsA = InWindSettingsA;
	Parms.InWindSettingsB = InWindSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpWetnessAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              WetnessAmountA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WetnessAmountB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpWetnessAmount");

	Params::ASkyCreator_LerpWetnessAmount_Params Parms{};

	Parms.WetnessAmountA = WetnessAmountA;
	Parms.WetnessAmountB = WetnessAmountB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpWeatherSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherSettings  InWeatherSettingsA                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorWeatherSettings  InWeatherSettingsB                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettingsA, const struct FSkyCreatorWeatherSettings& InWeatherSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpWeatherSettings");

	Params::ASkyCreator_LerpWeatherSettings_Params Parms{};

	Parms.InWeatherSettingsA = InWeatherSettingsA;
	Parms.InWeatherSettingsB = InWeatherSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpWeatherMaterialFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherMaterialFXSettingsInWeatherMaterialFXSettingsA                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorWeatherMaterialFXSettingsInWeatherMaterialFXSettingsB                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpWeatherMaterialFXSettings(const struct FSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsA, const struct FSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpWeatherMaterialFXSettings");

	Params::ASkyCreator_LerpWeatherMaterialFXSettings_Params Parms{};

	Parms.InWeatherMaterialFXSettingsA = InWeatherMaterialFXSettingsA;
	Parms.InWeatherMaterialFXSettingsB = InWeatherMaterialFXSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherFXSettingsInWeatherFXSettingsA                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorWeatherFXSettingsInWeatherFXSettingsB                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsA, const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpWeatherFXSettings");

	Params::ASkyCreator_LerpWeatherFXSettings_Params Parms{};

	Parms.InWeatherFXSettingsA = InWeatherFXSettingsA;
	Parms.InWeatherFXSettingsB = InWeatherFXSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorVolumetricCloudSettingsInVolumetricCloudSettingsA                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorVolumetricCloudSettingsInVolumetricCloudSettingsB                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsA, const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpVolumetricCloudSettings");

	Params::ASkyCreator_LerpVolumetricCloudSettings_Params Parms{};

	Parms.InVolumetricCloudSettingsA = InVolumetricCloudSettingsA;
	Parms.InVolumetricCloudSettingsB = InVolumetricCloudSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpSunLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorSunLightSettings InSunLightSettingsA                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorSunLightSettings InSunLightSettingsB                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettingsA, const struct FSkyCreatorSunLightSettings& InSunLightSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpSunLightSettings");

	Params::ASkyCreator_LerpSunLightSettings_Params Parms{};

	Parms.InSunLightSettingsA = InSunLightSettingsA;
	Parms.InSunLightSettingsB = InSunLightSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpStarMapSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorStarMapSettings  InStarMapSettingsA                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorStarMapSettings  InStarMapSettingsB                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettingsA, const struct FSkyCreatorStarMapSettings& InStarMapSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpStarMapSettings");

	Params::ASkyCreator_LerpStarMapSettings_Params Parms{};

	Parms.InStarMapSettingsA = InStarMapSettingsA;
	Parms.InStarMapSettingsB = InStarMapSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpSnowAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              SnowAmountA                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SnowAmountB                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpSnowAmount");

	Params::ASkyCreator_LerpSnowAmount_Params Parms{};

	Parms.SnowAmountA = SnowAmountA;
	Parms.SnowAmountB = SnowAmountB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyLightSettings InSkyLightSettingsA                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorSkyLightSettings InSkyLightSettingsB                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsA, const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpSkyLightSettings");

	Params::ASkyCreator_LerpSkyLightSettings_Params Parms{};

	Parms.InSkyLightSettingsA = InSkyLightSettingsA;
	Parms.InSkyLightSettingsB = InSkyLightSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyAtmosphereSettingsInSkyAtmosphereSettingsA                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorSkyAtmosphereSettingsInSkyAtmosphereSettingsB                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsA, const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpSkyAtmosphereSettings");

	Params::ASkyCreator_LerpSkyAtmosphereSettings_Params Parms{};

	Parms.InSkyAtmosphereSettingsA = InSkyAtmosphereSettingsA;
	Parms.InSkyAtmosphereSettingsB = InSkyAtmosphereSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpPuddlesAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              PuddlesAmountA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PuddlesAmountB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpPuddlesAmount");

	Params::ASkyCreator_LerpPuddlesAmount_Params Parms{};

	Parms.PuddlesAmountA = PuddlesAmountA;
	Parms.PuddlesAmountB = PuddlesAmountB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpPostProcessSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorPostProcessSettingsInPostProcessSettingsA                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorPostProcessSettingsInPostProcessSettingsB                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpPostProcessSettings(const struct FSkyCreatorPostProcessSettings& InPostProcessSettingsA, const struct FSkyCreatorPostProcessSettings& InPostProcessSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpPostProcessSettings");

	Params::ASkyCreator_LerpPostProcessSettings_Params Parms{};

	Parms.InPostProcessSettingsA = InPostProcessSettingsA;
	Parms.InPostProcessSettingsB = InPostProcessSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorMoonLightSettingsInMoonLightSettingsA                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorMoonLightSettingsInMoonLightSettingsB                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsA, const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpMoonLightSettings");

	Params::ASkyCreator_LerpMoonLightSettings_Params Parms{};

	Parms.InMoonLightSettingsA = InMoonLightSettingsA;
	Parms.InMoonLightSettingsB = InMoonLightSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorExponentialHeightFogSettingsInExponentialHeightFogSettingsA                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorExponentialHeightFogSettingsInExponentialHeightFogSettingsB                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsA, const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpExponentialHeightFogSettings");

	Params::ASkyCreator_LerpExponentialHeightFogSettings_Params Parms{};

	Parms.InExponentialHeightFogSettingsA = InExponentialHeightFogSettingsA;
	Parms.InExponentialHeightFogSettingsB = InExponentialHeightFogSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.LerpBackgroundCloudSettings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSkyCreatorBackgroundCloudSettingsInBackgroundCloudSettingsA                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSkyCreatorBackgroundCloudSettingsInBackgroundCloudSettingsB                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASkyCreator::LerpBackgroundCloudSettings(const struct FSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsA, const struct FSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "LerpBackgroundCloudSettings");

	Params::ASkyCreator_LerpBackgroundCloudSettings_Params Parms{};

	Parms.InBackgroundCloudSettingsA = InBackgroundCloudSettingsA;
	Parms.InBackgroundCloudSettingsB = InBackgroundCloudSettingsB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkyCreatorPlugin.SkyCreator.GetWindSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorWindSettings     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorWindSettings ASkyCreator::GetWindSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetWindSettings");

	Params::ASkyCreator_GetWindSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetWeatherSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorWeatherSettings  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorWeatherSettings ASkyCreator::GetWeatherSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetWeatherSettings");

	Params::ASkyCreator_GetWeatherSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetWeatherMaterialFXSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorWeatherMaterialFXSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorWeatherMaterialFXSettings ASkyCreator::GetWeatherMaterialFXSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetWeatherMaterialFXSettings");

	Params::ASkyCreator_GetWeatherMaterialFXSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorWeatherFXSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorWeatherFXSettings ASkyCreator::GetWeatherFXSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetWeatherFXSettings");

	Params::ASkyCreator_GetWeatherFXSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorVolumetricCloudSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorVolumetricCloudSettings ASkyCreator::GetVolumetricCloudSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetVolumetricCloudSettings");

	Params::ASkyCreator_GetVolumetricCloudSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ASkyCreator::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetTime");

	Params::ASkyCreator_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetSunPosition
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator ASkyCreator::GetSunPosition(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetSunPosition");

	Params::ASkyCreator_GetSunPosition_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetSunLightSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorSunLightSettings ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorSunLightSettings ASkyCreator::GetSunLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetSunLightSettings");

	Params::ASkyCreator_GetSunLightSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetStarMapSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorStarMapSettings  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorStarMapSettings ASkyCreator::GetStarMapSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetStarMapSettings");

	Params::ASkyCreator_GetStarMapSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetStarMapRotation
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator ASkyCreator::GetStarMapRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetStarMapRotation");

	Params::ASkyCreator_GetStarMapRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetSkyLightSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorSkyLightSettings ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorSkyLightSettings ASkyCreator::GetSkyLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetSkyLightSettings");

	Params::ASkyCreator_GetSkyLightSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorSkyAtmosphereSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorSkyAtmosphereSettings ASkyCreator::GetSkyAtmosphereSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetSkyAtmosphereSettings");

	Params::ASkyCreator_GetSkyAtmosphereSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetPostProcessSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorPostProcessSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorPostProcessSettings ASkyCreator::GetPostProcessSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetPostProcessSettings");

	Params::ASkyCreator_GetPostProcessSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetMoonPosition
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator ASkyCreator::GetMoonPosition(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetMoonPosition");

	Params::ASkyCreator_GetMoonPosition_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetMoonPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ASkyCreator::GetMoonPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetMoonPhase");

	Params::ASkyCreator_GetMoonPhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetMoonLightSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorMoonLightSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorMoonLightSettings ASkyCreator::GetMoonLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetMoonLightSettings");

	Params::ASkyCreator_GetMoonLightSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetLastLightningPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector ASkyCreator::GetLastLightningPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetLastLightningPosition");

	Params::ASkyCreator_GetLastLightningPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorExponentialHeightFogSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorExponentialHeightFogSettings ASkyCreator::GetExponentialHeightFogSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetExponentialHeightFogSettings");

	Params::ASkyCreator_GetExponentialHeightFogSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetCloudDensityAtPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ASkyCreator::GetCloudDensityAtPosition(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetCloudDensityAtPosition");

	Params::ASkyCreator_GetCloudDensityAtPosition_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.GetBackgroundCloudSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSkyCreatorBackgroundCloudSettingsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorBackgroundCloudSettings ASkyCreator::GetBackgroundCloudSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "GetBackgroundCloudSettings");

	Params::ASkyCreator_GetBackgroundCloudSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreator.FindLightningPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASkyCreator::FindLightningPosition(const struct FVector& Position, struct FVector* OutPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreator", "FindLightningPosition");

	Params::ASkyCreator_FindLightningPosition_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	return Parms.ReturnValue;

}


// Class SkyCreatorPlugin.SkyCreatorFunctionLibrary
// (None)

class UClass* USkyCreatorFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkyCreatorFunctionLibrary");

	return Clss;
}


// SkyCreatorFunctionLibrary SkyCreatorPlugin.Default__SkyCreatorFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USkyCreatorFunctionLibrary* USkyCreatorFunctionLibrary::GetDefaultObj()
{
	static class USkyCreatorFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USkyCreatorFunctionLibrary*>(USkyCreatorFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.KilometersToCentimeters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USkyCreatorFunctionLibrary::KilometersToCentimeters(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "KilometersToCentimeters");

	Params::USkyCreatorFunctionLibrary_KilometersToCentimeters_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.IsApplicationForegroundNow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USkyCreatorFunctionLibrary::IsApplicationForegroundNow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "IsApplicationForegroundNow");

	Params::USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetRealSunPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Latitude                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Longitude                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeZone                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDaylightSavingTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCelestialPositionData      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FCelestialPositionData USkyCreatorFunctionLibrary::GetRealSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "GetRealSunPosition");

	Params::USkyCreatorFunctionLibrary_GetRealSunPosition_Params Parms{};

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


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetRealMoonPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Latitude                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Longitude                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeZone                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDaylightSavingTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCelestialPositionData      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FCelestialPositionData USkyCreatorFunctionLibrary::GetRealMoonPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "GetRealMoonPosition");

	Params::USkyCreatorFunctionLibrary_GetRealMoonPosition_Params Parms{};

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


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetCloudDensityAtPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialParameterCollection*ParameterCollection                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USkyCreatorFunctionLibrary::GetCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "GetCloudDensityAtPosition");

	Params::USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Params Parms{};

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


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.FindLightningPosition
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

bool USkyCreatorFunctionLibrary::FindLightningPosition(class UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget, const struct FVector& Position, float InnerRadius, float OuterRadius, float MinHeight, float MaxHeight, float DensityThreshold, struct FVector* OutPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "FindLightningPosition");

	Params::USkyCreatorFunctionLibrary_FindLightningPosition_Params Parms{};

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


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.ElevationRefraction
// (Final, Native, Static, Private)
// Parameters:
// double                             F                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USkyCreatorFunctionLibrary::ElevationRefraction(double F)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "ElevationRefraction");

	Params::USkyCreatorFunctionLibrary_ElevationRefraction_Params Parms{};

	Parms.F = F;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.DynamicConvertRenderTargetToTexture2D
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* USkyCreatorFunctionLibrary::DynamicConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "DynamicConvertRenderTargetToTexture2D");

	Params::USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.CreateAndAssignMID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    InMID                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USkyCreatorFunctionLibrary::CreateAndAssignMID(class UObject* WorldContextObject, class UMaterialInterface* InMaterial, class UMaterialInstanceDynamic** InMID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "CreateAndAssignMID");

	Params::USkyCreatorFunctionLibrary_CreateAndAssignMID_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMID != nullptr)
		*InMID = Parms.InMID;

}


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.ConvertRenderTargetToTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USkyCreatorFunctionLibrary::ConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget, class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "ConvertRenderTargetToTexture2D");

	Params::USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.CheckCloudDensityAtPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialParameterCollection*ParameterCollection                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USkyCreatorFunctionLibrary::CheckCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "CheckCloudDensityAtPosition");

	Params::USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Params Parms{};

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


// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.CentimetersToKilometers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USkyCreatorFunctionLibrary::CentimetersToKilometers(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorFunctionLibrary", "CentimetersToKilometers");

	Params::USkyCreatorFunctionLibrary_CentimetersToKilometers_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SkyCreatorPlugin.SkyCreatorWeatherPreset
// (None)

class UClass* USkyCreatorWeatherPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkyCreatorWeatherPreset");

	return Clss;
}


// SkyCreatorWeatherPreset SkyCreatorPlugin.Default__SkyCreatorWeatherPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USkyCreatorWeatherPreset* USkyCreatorWeatherPreset::GetDefaultObj()
{
	static class USkyCreatorWeatherPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USkyCreatorWeatherPreset*>(USkyCreatorWeatherPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSkyCreatorWeatherSettings  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSkyCreatorWeatherSettings USkyCreatorWeatherPreset::GetWeatherPresetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkyCreatorWeatherPreset", "GetWeatherPresetSettings");

	Params::USkyCreatorWeatherPreset_GetWeatherPresetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


