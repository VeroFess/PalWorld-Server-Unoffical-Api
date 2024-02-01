#pragma once

// Dumped with Dumper-7!


#include "SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SpawnLightningStrike
struct APPSkyCreator_SpawnLightningStrike_Params
{
public:
	struct FVector                               LightningPosition;                                 // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetYear
struct APPSkyCreator_SetYear_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetWindSettings
struct APPSkyCreator_SetWindSettings_Params
{
public:
	struct FPPSkyCreatorWindSettings             InWindSettings;                                    // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetWindIndependentSettings
struct APPSkyCreator_SetWindIndependentSettings_Params
{
public:
	struct FPPSkyCreatorWindSettings             InWindSettings;                                    // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetWeatherSettings
struct APPSkyCreator_SetWeatherSettings_Params
{
public:
	struct FPPSkyCreatorWeatherSettings          InWeatherSettings;                                 // 0x0(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetWeatherMaterialFXSettings
struct APPSkyCreator_SetWeatherMaterialFXSettings_Params
{
public:
	struct FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettings;                       // 0x0(0x68)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetWeatherFXSettings
struct APPSkyCreator_SetWeatherFXSettings_Params
{
public:
	struct FPPSkyCreatorWeatherFXSettings        InWeatherFXSettings;                               // 0x0(0x110)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetVolumetricCloudSettings
struct APPSkyCreator_SetVolumetricCloudSettings_Params
{
public:
	struct FPPSkyCreatorVolumetricCloudSettings  InVolumetricCloudSettings;                         // 0x0(0xA8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetTimeZone
struct APPSkyCreator_SetTimeZone_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetTime
struct APPSkyCreator_SetTime_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunSimplePositionSettings
struct APPSkyCreator_SetSunSimplePositionSettings_Params
{
public:
	float                                        InSunriseTime;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSunsetTime;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSunElevation;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSunAzimuth;                                      // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunsetTime
struct APPSkyCreator_SetSunsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunriseTime
struct APPSkyCreator_SetSunriseTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunMinAngleAtDawnDusk
struct APPSkyCreator_SetSunMinAngleAtDawnDusk_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunLightSettings
struct APPSkyCreator_SetSunLightSettings_Params
{
public:
	struct FPPSkyCreatorSunLightSettings         InSunLightSettings;                                // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunIntensity
struct APPSkyCreator_SetSunIntensity_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunElevation
struct APPSkyCreator_SetSunElevation_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunDuskOffsetTime
struct APPSkyCreator_SetSunDuskOffsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunDiskSize
struct APPSkyCreator_SetSunDiskSize_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunDawnOffsetTime
struct APPSkyCreator_SetSunDawnOffsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunAzimuth
struct APPSkyCreator_SetSunAzimuth_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSunAtmosphereDiskColorScale
struct APPSkyCreator_SetSunAtmosphereDiskColorScale_Params
{
public:
	struct FLinearColor                          NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetStarMapSettings
struct APPSkyCreator_SetStarMapSettings_Params
{
public:
	struct FPPSkyCreatorStarMapSettings          InStarMapSettings;                                 // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetStarMapAdditionalRotation
struct APPSkyCreator_SetStarMapAdditionalRotation_Params
{
public:
	struct FVector                               NewValue;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSkyLightSettings
struct APPSkyCreator_SetSkyLightSettings_Params
{
public:
	struct FPPSkyCreatorSkyLightSettings         InSkyLightSettings;                                // 0x0(0x2C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetSkyAtmosphereSettings
struct APPSkyCreator_SetSkyAtmosphereSettings_Params
{
public:
	struct FPPSkyCreatorSkyAtmosphereSettings    InSkyAtmosphereSettings;                           // 0x0(0x80)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetRealPositionSettings
struct APPSkyCreator_SetRealPositionSettings_Params
{
public:
	float                                        InLatitude;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InLongitude;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InTimeZone;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InbDaylightSavingTime;                             // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InYear;                                            // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMonth;                                           // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InDay;                                             // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetPostProcessSettings
struct APPSkyCreator_SetPostProcessSettings_Params
{
public:
	struct FPPSkyCreatorPostProcessSettings      InPostProcessSettings;                             // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonSimplePositionSettings
struct APPSkyCreator_SetMoonSimplePositionSettings_Params
{
public:
	float                                        InMoonriseTime;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMoonsetTime;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMoonElevation;                                   // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMoonAzimuth;                                     // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonsetTime
struct APPSkyCreator_SetMoonsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonRotation
struct APPSkyCreator_SetMoonRotation_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonriseTime
struct APPSkyCreator_SetMoonriseTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonPhase
struct APPSkyCreator_SetMoonPhase_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonLightSettings
struct APPSkyCreator_SetMoonLightSettings_Params
{
public:
	struct FPPSkyCreatorMoonLightSettings        InMoonLightSettings;                               // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonIntensity
struct APPSkyCreator_SetMoonIntensity_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonElevation
struct APPSkyCreator_SetMoonElevation_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonDiskSize
struct APPSkyCreator_SetMoonDiskSize_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonAzimuth
struct APPSkyCreator_SetMoonAzimuth_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMoonAtmosphereDiskColorScale
struct APPSkyCreator_SetMoonAtmosphereDiskColorScale_Params
{
public:
	struct FLinearColor                          NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetMonth
struct APPSkyCreator_SetMonth_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetLongitude
struct APPSkyCreator_SetLongitude_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetLayerHeight
struct APPSkyCreator_SetLayerHeight_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetLayerBottomAltitude
struct APPSkyCreator_SetLayerBottomAltitude_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetLatitude
struct APPSkyCreator_SetLatitude_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetExponentialHeightFogSettings
struct APPSkyCreator_SetExponentialHeightFogSettings_Params
{
public:
	struct FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings;                    // 0x0(0x64)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetEditorWeatherSettings
struct APPSkyCreator_SetEditorWeatherSettings_Params
{
public:
	struct FPPSkyCreatorWeatherSettings          NewValue;                                          // 0x0(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetEditorWeatherPreset
struct APPSkyCreator_SetEditorWeatherPreset_Params
{
public:
	class UPPSkyCreatorWeatherPreset*            NewValue;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetEditorTimeOfDay
struct APPSkyCreator_SetEditorTimeOfDay_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetDay
struct APPSkyCreator_SetDay_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetCloudMapOffset
struct APPSkyCreator_SetCloudMapOffset_Params
{
public:
	struct FVector2D                             NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetbDaylightSavingTime
struct APPSkyCreator_SetbDaylightSavingTime_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.SetBackgroundCloudSettings
struct APPSkyCreator_SetBackgroundCloudSettings_Params
{
public:
	struct FPPSkyCreatorBackgroundCloudSettings  InBackgroundCloudSettings;                         // 0x0(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.RealtimeTimeOfDay
struct APPSkyCreator_RealtimeTimeOfDay_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DayCycleDuration;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWindSettings
struct APPSkyCreator_LerpWindSettings_Params
{
public:
	struct FPPSkyCreatorWindSettings             InWindSettingsA;                                   // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWindSettings             InWindSettingsB;                                   // 0x1C(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWindIndependentSettings
struct APPSkyCreator_LerpWindIndependentSettings_Params
{
public:
	struct FPPSkyCreatorWindSettings             InWindSettingsA;                                   // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWindSettings             InWindSettingsB;                                   // 0x1C(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWetnessAmount
struct APPSkyCreator_LerpWetnessAmount_Params
{
public:
	float                                        WetnessAmountA;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetnessAmountB;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8B8 (0x8B8 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWeatherSettings
struct APPSkyCreator_LerpWeatherSettings_Params
{
public:
	struct FPPSkyCreatorWeatherSettings          InWeatherSettingsA;                                // 0x0(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWeatherSettings          InWeatherSettingsB;                                // 0x458(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8B0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD4 (0xD4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWeatherMaterialFXSettings
struct APPSkyCreator_LerpWeatherMaterialFXSettings_Params
{
public:
	struct FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsA;                      // 0x0(0x68)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsB;                      // 0x68(0x68)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xD0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpWeatherFXSettings
struct APPSkyCreator_LerpWeatherFXSettings_Params
{
public:
	struct FPPSkyCreatorWeatherFXSettings        InWeatherFXSettingsA;                              // 0x0(0x110)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWeatherFXSettings        InWeatherFXSettingsB;                              // 0x110(0x110)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x220(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x154 (0x154 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpVolumetricCloudSettings
struct APPSkyCreator_LerpVolumetricCloudSettings_Params
{
public:
	struct FPPSkyCreatorVolumetricCloudSettings  InVolumetricCloudSettingsA;                        // 0x0(0xA8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorVolumetricCloudSettings  InVolumetricCloudSettingsB;                        // 0xA8(0xA8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x150(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSunLightSettings
struct APPSkyCreator_LerpSunLightSettings_Params
{
public:
	struct FPPSkyCreatorSunLightSettings         InSunLightSettingsA;                               // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorSunLightSettings         InSunLightSettingsB;                               // 0x48(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpStarMapSettings
struct APPSkyCreator_LerpStarMapSettings_Params
{
public:
	struct FPPSkyCreatorStarMapSettings          InStarMapSettingsA;                                // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorStarMapSettings          InStarMapSettingsB;                                // 0x48(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSnowAmount
struct APPSkyCreator_LerpSnowAmount_Params
{
public:
	float                                        SnowAmountA;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowAmountB;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5C (0x5C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSkyLightSettings
struct APPSkyCreator_LerpSkyLightSettings_Params
{
public:
	struct FPPSkyCreatorSkyLightSettings         InSkyLightSettingsA;                               // 0x0(0x2C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorSkyLightSettings         InSkyLightSettingsB;                               // 0x2C(0x2C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x104 (0x104 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpSkyAtmosphereSettings
struct APPSkyCreator_LerpSkyAtmosphereSettings_Params
{
public:
	struct FPPSkyCreatorSkyAtmosphereSettings    InSkyAtmosphereSettingsA;                          // 0x0(0x80)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorSkyAtmosphereSettings    InSkyAtmosphereSettingsB;                          // 0x80(0x80)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x100(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpPuddlesAmount
struct APPSkyCreator_LerpPuddlesAmount_Params
{
public:
	float                                        PuddlesAmountA;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesAmountB;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpPostProcessSettings
struct APPSkyCreator_LerpPostProcessSettings_Params
{
public:
	struct FPPSkyCreatorPostProcessSettings      InPostProcessSettingsA;                            // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorPostProcessSettings      InPostProcessSettingsB;                            // 0xC(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpMoonLightSettings
struct APPSkyCreator_LerpMoonLightSettings_Params
{
public:
	struct FPPSkyCreatorMoonLightSettings        InMoonLightSettingsA;                              // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorMoonLightSettings        InMoonLightSettingsB;                              // 0x48(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xCC (0xCC - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpExponentialHeightFogSettings
struct APPSkyCreator_LerpExponentialHeightFogSettings_Params
{
public:
	struct FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA;                   // 0x0(0x64)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB;                   // 0x64(0x64)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xC8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.LerpBackgroundCloudSettings
struct APPSkyCreator_LerpBackgroundCloudSettings_Params
{
public:
	struct FPPSkyCreatorBackgroundCloudSettings  InBackgroundCloudSettingsA;                        // 0x0(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorBackgroundCloudSettings  InBackgroundCloudSettingsB;                        // 0x24(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetWindSettings
struct APPSkyCreator_GetWindSettings_Params
{
public:
	struct FPPSkyCreatorWindSettings             ReturnValue;                                       // 0x0(0x1C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetWeatherSettings
struct APPSkyCreator_GetWeatherSettings_Params
{
public:
	struct FPPSkyCreatorWeatherSettings          ReturnValue;                                       // 0x0(0x458)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetWeatherMaterialFXSettings
struct APPSkyCreator_GetWeatherMaterialFXSettings_Params
{
public:
	struct FPPSkyCreatorWeatherMaterialFXSettings ReturnValue;                                       // 0x0(0x68)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetWeatherFXSettings
struct APPSkyCreator_GetWeatherFXSettings_Params
{
public:
	struct FPPSkyCreatorWeatherFXSettings        ReturnValue;                                       // 0x0(0x110)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetVolumetricCloudSettings
struct APPSkyCreator_GetVolumetricCloudSettings_Params
{
public:
	struct FPPSkyCreatorVolumetricCloudSettings  ReturnValue;                                       // 0x0(0xA8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetTime
struct APPSkyCreator_GetTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetSunPosition
struct APPSkyCreator_GetSunPosition_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1405[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetSunLightSettings
struct APPSkyCreator_GetSunLightSettings_Params
{
public:
	struct FPPSkyCreatorSunLightSettings         ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetStarMapSettings
struct APPSkyCreator_GetStarMapSettings_Params
{
public:
	struct FPPSkyCreatorStarMapSettings          ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetStarMapRotation
struct APPSkyCreator_GetStarMapRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetSkyLightSettings
struct APPSkyCreator_GetSkyLightSettings_Params
{
public:
	struct FPPSkyCreatorSkyLightSettings         ReturnValue;                                       // 0x0(0x2C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetSkyAtmosphereSettings
struct APPSkyCreator_GetSkyAtmosphereSettings_Params
{
public:
	struct FPPSkyCreatorSkyAtmosphereSettings    ReturnValue;                                       // 0x0(0x80)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetPostProcessSettings
struct APPSkyCreator_GetPostProcessSettings_Params
{
public:
	struct FPPSkyCreatorPostProcessSettings      ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetMoonPosition
struct APPSkyCreator_GetMoonPosition_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1417[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetMoonPhase
struct APPSkyCreator_GetMoonPhase_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetMoonLightSettings
struct APPSkyCreator_GetMoonLightSettings_Params
{
public:
	struct FPPSkyCreatorMoonLightSettings        ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetLastLightningPosition
struct APPSkyCreator_GetLastLightningPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetExponentialHeightFogSettings
struct APPSkyCreator_GetExponentialHeightFogSettings_Params
{
public:
	struct FPPSkyCreatorExponentialHeightFogSettings ReturnValue;                                       // 0x0(0x64)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetCloudDensityAtPosition
struct APPSkyCreator_GetCloudDensityAtPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1432[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.GetBackgroundCloudSettings
struct APPSkyCreator_GetBackgroundCloudSettings_Params
{
public:
	struct FPPSkyCreatorBackgroundCloudSettings  ReturnValue;                                       // 0x0(0x24)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreator.FindLightningPosition
struct APPSkyCreator_FindLightningPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutPosition;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1449[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.KilometersToCentimeters
struct UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.IsApplicationForegroundNow
struct UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.GetRealSunPosition
struct UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Params
{
public:
	float                                        Latitude;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Longitude;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeZone;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDaylightSavingTime;                             // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1577[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             DateTime;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPPCelestialPositionData              ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.GetRealMoonPosition
struct UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Params
{
public:
	float                                        Latitude;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Longitude;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeZone;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDaylightSavingTime;                             // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             DateTime;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPPCelestialPositionData              ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.GetCloudDensityAtPosition
struct UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1584[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.FindLightningPosition
struct UPPSkyCreatorFunctionLibrary_FindLightningPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSampleCloudDensity;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Samples;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerRadius;                                       // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterRadius;                                       // 0x44(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHeight;                                         // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHeight;                                         // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityThreshold;                                  // 0x50(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OutPosition;                                       // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1590[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.ElevationRefraction
struct UPPSkyCreatorFunctionLibrary_ElevationRefraction_Params
{
public:
	double                                       F;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.DynamicConvertRenderTargetToTexture2D
struct UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Params
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.CreateAndAssignMID
struct UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    InMaterial;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              InMID;                                             // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.ConvertRenderTargetToTexture2D
struct UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Params
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.CheckCloudDensityAtPosition
struct UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary.CentimetersToKilometers
struct UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function PPSkyCreatorPlugin.PPSkyCreatorWeatherPreset.GetWeatherPresetSettings
struct UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Params
{
public:
	struct FPPSkyCreatorWeatherSettings          ReturnValue;                                       // 0x0(0x458)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


