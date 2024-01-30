#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SpawnLightningStrike
struct ASkyCreator_SpawnLightningStrike_Params
{
public:
	struct FVector                               LightningPosition;                                 // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetYear
struct ASkyCreator_SetYear_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetWindSettings
struct ASkyCreator_SetWindSettings_Params
{
public:
	struct FSkyCreatorWindSettings               InWindSettings;                                    // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings
struct ASkyCreator_SetWindIndependentSettings_Params
{
public:
	struct FSkyCreatorWindSettings               InWindSettings;                                    // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetWeatherSettings
struct ASkyCreator_SetWeatherSettings_Params
{
public:
	struct FSkyCreatorWeatherSettings            InWeatherSettings;                                 // 0x0(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetWeatherMaterialFXSettings
struct ASkyCreator_SetWeatherMaterialFXSettings_Params
{
public:
	struct FSkyCreatorWeatherMaterialFXSettings  InWeatherMaterialFXSettings;                       // 0x0(0x68)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings
struct ASkyCreator_SetWeatherFXSettings_Params
{
public:
	struct FSkyCreatorWeatherFXSettings          InWeatherFXSettings;                               // 0x0(0x110)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings
struct ASkyCreator_SetVolumetricCloudSettings_Params
{
public:
	struct FSkyCreatorVolumetricCloudSettings    InVolumetricCloudSettings;                         // 0x0(0xA8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetTimeZone
struct ASkyCreator_SetTimeZone_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetTime
struct ASkyCreator_SetTime_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunSimplePositionSettings
struct ASkyCreator_SetSunSimplePositionSettings_Params
{
public:
	float                                        InSunriseTime;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSunsetTime;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSunElevation;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InSunAzimuth;                                      // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunsetTime
struct ASkyCreator_SetSunsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunriseTime
struct ASkyCreator_SetSunriseTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunMinAngleAtDawnDusk
struct ASkyCreator_SetSunMinAngleAtDawnDusk_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunLightSettings
struct ASkyCreator_SetSunLightSettings_Params
{
public:
	struct FSkyCreatorSunLightSettings           InSunLightSettings;                                // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunIntensity
struct ASkyCreator_SetSunIntensity_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunElevation
struct ASkyCreator_SetSunElevation_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunDuskOffsetTime
struct ASkyCreator_SetSunDuskOffsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunDiskSize
struct ASkyCreator_SetSunDiskSize_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunDawnOffsetTime
struct ASkyCreator_SetSunDawnOffsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunAzimuth
struct ASkyCreator_SetSunAzimuth_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSunAtmosphereDiskColorScale
struct ASkyCreator_SetSunAtmosphereDiskColorScale_Params
{
public:
	struct FLinearColor                          NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetStarMapSettings
struct ASkyCreator_SetStarMapSettings_Params
{
public:
	struct FSkyCreatorStarMapSettings            InStarMapSettings;                                 // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetStarMapAdditionalRotation
struct ASkyCreator_SetStarMapAdditionalRotation_Params
{
public:
	struct FVector                               NewValue;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSkyLightSettings
struct ASkyCreator_SetSkyLightSettings_Params
{
public:
	struct FSkyCreatorSkyLightSettings           InSkyLightSettings;                                // 0x0(0x2C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings
struct ASkyCreator_SetSkyAtmosphereSettings_Params
{
public:
	struct FSkyCreatorSkyAtmosphereSettings      InSkyAtmosphereSettings;                           // 0x0(0x80)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetRealPositionSettings
struct ASkyCreator_SetRealPositionSettings_Params
{
public:
	float                                        InLatitude;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InLongitude;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InTimeZone;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InbDaylightSavingTime;                             // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B03[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InYear;                                            // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMonth;                                           // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InDay;                                             // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetPostProcessSettings
struct ASkyCreator_SetPostProcessSettings_Params
{
public:
	struct FSkyCreatorPostProcessSettings        InPostProcessSettings;                             // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonSimplePositionSettings
struct ASkyCreator_SetMoonSimplePositionSettings_Params
{
public:
	float                                        InMoonriseTime;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMoonsetTime;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMoonElevation;                                   // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMoonAzimuth;                                     // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonsetTime
struct ASkyCreator_SetMoonsetTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonRotation
struct ASkyCreator_SetMoonRotation_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonriseTime
struct ASkyCreator_SetMoonriseTime_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonPhase
struct ASkyCreator_SetMoonPhase_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonLightSettings
struct ASkyCreator_SetMoonLightSettings_Params
{
public:
	struct FSkyCreatorMoonLightSettings          InMoonLightSettings;                               // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonIntensity
struct ASkyCreator_SetMoonIntensity_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonElevation
struct ASkyCreator_SetMoonElevation_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonDiskSize
struct ASkyCreator_SetMoonDiskSize_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonAzimuth
struct ASkyCreator_SetMoonAzimuth_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMoonAtmosphereDiskColorScale
struct ASkyCreator_SetMoonAtmosphereDiskColorScale_Params
{
public:
	struct FLinearColor                          NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetMonth
struct ASkyCreator_SetMonth_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetLongitude
struct ASkyCreator_SetLongitude_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetLayerHeight
struct ASkyCreator_SetLayerHeight_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetLayerBottomAltitude
struct ASkyCreator_SetLayerBottomAltitude_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetLatitude
struct ASkyCreator_SetLatitude_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings
struct ASkyCreator_SetExponentialHeightFogSettings_Params
{
public:
	struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings;                    // 0x0(0x64)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetEditorWeatherSettings
struct ASkyCreator_SetEditorWeatherSettings_Params
{
public:
	struct FSkyCreatorWeatherSettings            NewValue;                                          // 0x0(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetEditorWeatherPreset
struct ASkyCreator_SetEditorWeatherPreset_Params
{
public:
	class USkyCreatorWeatherPreset*              NewValue;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetEditorTimeOfDay
struct ASkyCreator_SetEditorTimeOfDay_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetDay
struct ASkyCreator_SetDay_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetCloudMapOffset
struct ASkyCreator_SetCloudMapOffset_Params
{
public:
	struct FVector2D                             NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetbDaylightSavingTime
struct ASkyCreator_SetbDaylightSavingTime_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.SetBackgroundCloudSettings
struct ASkyCreator_SetBackgroundCloudSettings_Params
{
public:
	struct FSkyCreatorBackgroundCloudSettings    InBackgroundCloudSettings;                         // 0x0(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay
struct ASkyCreator_RealtimeTimeOfDay_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DayCycleDuration;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpWindSettings
struct ASkyCreator_LerpWindSettings_Params
{
public:
	struct FSkyCreatorWindSettings               InWindSettingsA;                                   // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorWindSettings               InWindSettingsB;                                   // 0x1C(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings
struct ASkyCreator_LerpWindIndependentSettings_Params
{
public:
	struct FSkyCreatorWindSettings               InWindSettingsA;                                   // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorWindSettings               InWindSettingsB;                                   // 0x1C(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpWetnessAmount
struct ASkyCreator_LerpWetnessAmount_Params
{
public:
	float                                        WetnessAmountA;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetnessAmountB;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8B8 (0x8B8 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpWeatherSettings
struct ASkyCreator_LerpWeatherSettings_Params
{
public:
	struct FSkyCreatorWeatherSettings            InWeatherSettingsA;                                // 0x0(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherSettings            InWeatherSettingsB;                                // 0x458(0x458)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8B0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD4 (0xD4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpWeatherMaterialFXSettings
struct ASkyCreator_LerpWeatherMaterialFXSettings_Params
{
public:
	struct FSkyCreatorWeatherMaterialFXSettings  InWeatherMaterialFXSettingsA;                      // 0x0(0x68)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherMaterialFXSettings  InWeatherMaterialFXSettingsB;                      // 0x68(0x68)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xD0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings
struct ASkyCreator_LerpWeatherFXSettings_Params
{
public:
	struct FSkyCreatorWeatherFXSettings          InWeatherFXSettingsA;                              // 0x0(0x110)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherFXSettings          InWeatherFXSettingsB;                              // 0x110(0x110)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x220(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x154 (0x154 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings
struct ASkyCreator_LerpVolumetricCloudSettings_Params
{
public:
	struct FSkyCreatorVolumetricCloudSettings    InVolumetricCloudSettingsA;                        // 0x0(0xA8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorVolumetricCloudSettings    InVolumetricCloudSettingsB;                        // 0xA8(0xA8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x150(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpSunLightSettings
struct ASkyCreator_LerpSunLightSettings_Params
{
public:
	struct FSkyCreatorSunLightSettings           InSunLightSettingsA;                               // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorSunLightSettings           InSunLightSettingsB;                               // 0x48(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpStarMapSettings
struct ASkyCreator_LerpStarMapSettings_Params
{
public:
	struct FSkyCreatorStarMapSettings            InStarMapSettingsA;                                // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorStarMapSettings            InStarMapSettingsB;                                // 0x48(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpSnowAmount
struct ASkyCreator_LerpSnowAmount_Params
{
public:
	float                                        SnowAmountA;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowAmountB;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5C (0x5C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings
struct ASkyCreator_LerpSkyLightSettings_Params
{
public:
	struct FSkyCreatorSkyLightSettings           InSkyLightSettingsA;                               // 0x0(0x2C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorSkyLightSettings           InSkyLightSettingsB;                               // 0x2C(0x2C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x104 (0x104 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings
struct ASkyCreator_LerpSkyAtmosphereSettings_Params
{
public:
	struct FSkyCreatorSkyAtmosphereSettings      InSkyAtmosphereSettingsA;                          // 0x0(0x80)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorSkyAtmosphereSettings      InSkyAtmosphereSettingsB;                          // 0x80(0x80)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x100(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpPuddlesAmount
struct ASkyCreator_LerpPuddlesAmount_Params
{
public:
	float                                        PuddlesAmountA;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesAmountB;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpPostProcessSettings
struct ASkyCreator_LerpPostProcessSettings_Params
{
public:
	struct FSkyCreatorPostProcessSettings        InPostProcessSettingsA;                            // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorPostProcessSettings        InPostProcessSettingsB;                            // 0xC(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings
struct ASkyCreator_LerpMoonLightSettings_Params
{
public:
	struct FSkyCreatorMoonLightSettings          InMoonLightSettingsA;                              // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorMoonLightSettings          InMoonLightSettingsB;                              // 0x48(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xCC (0xCC - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings
struct ASkyCreator_LerpExponentialHeightFogSettings_Params
{
public:
	struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA;                   // 0x0(0x64)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB;                   // 0x64(0x64)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xC8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.LerpBackgroundCloudSettings
struct ASkyCreator_LerpBackgroundCloudSettings_Params
{
public:
	struct FSkyCreatorBackgroundCloudSettings    InBackgroundCloudSettingsA;                        // 0x0(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorBackgroundCloudSettings    InBackgroundCloudSettingsB;                        // 0x24(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetWindSettings
struct ASkyCreator_GetWindSettings_Params
{
public:
	struct FSkyCreatorWindSettings               ReturnValue;                                       // 0x0(0x1C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetWeatherSettings
struct ASkyCreator_GetWeatherSettings_Params
{
public:
	struct FSkyCreatorWeatherSettings            ReturnValue;                                       // 0x0(0x458)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetWeatherMaterialFXSettings
struct ASkyCreator_GetWeatherMaterialFXSettings_Params
{
public:
	struct FSkyCreatorWeatherMaterialFXSettings  ReturnValue;                                       // 0x0(0x68)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings
struct ASkyCreator_GetWeatherFXSettings_Params
{
public:
	struct FSkyCreatorWeatherFXSettings          ReturnValue;                                       // 0x0(0x110)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings
struct ASkyCreator_GetVolumetricCloudSettings_Params
{
public:
	struct FSkyCreatorVolumetricCloudSettings    ReturnValue;                                       // 0x0(0xA8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetTime
struct ASkyCreator_GetTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetSunPosition
struct ASkyCreator_GetSunPosition_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C07[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetSunLightSettings
struct ASkyCreator_GetSunLightSettings_Params
{
public:
	struct FSkyCreatorSunLightSettings           ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetStarMapSettings
struct ASkyCreator_GetStarMapSettings_Params
{
public:
	struct FSkyCreatorStarMapSettings            ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetStarMapRotation
struct ASkyCreator_GetStarMapRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetSkyLightSettings
struct ASkyCreator_GetSkyLightSettings_Params
{
public:
	struct FSkyCreatorSkyLightSettings           ReturnValue;                                       // 0x0(0x2C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings
struct ASkyCreator_GetSkyAtmosphereSettings_Params
{
public:
	struct FSkyCreatorSkyAtmosphereSettings      ReturnValue;                                       // 0x0(0x80)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetPostProcessSettings
struct ASkyCreator_GetPostProcessSettings_Params
{
public:
	struct FSkyCreatorPostProcessSettings        ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetMoonPosition
struct ASkyCreator_GetMoonPosition_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetMoonPhase
struct ASkyCreator_GetMoonPhase_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetMoonLightSettings
struct ASkyCreator_GetMoonLightSettings_Params
{
public:
	struct FSkyCreatorMoonLightSettings          ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetLastLightningPosition
struct ASkyCreator_GetLastLightningPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings
struct ASkyCreator_GetExponentialHeightFogSettings_Params
{
public:
	struct FSkyCreatorExponentialHeightFogSettings ReturnValue;                                       // 0x0(0x64)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetCloudDensityAtPosition
struct ASkyCreator_GetCloudDensityAtPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.GetBackgroundCloudSettings
struct ASkyCreator_GetBackgroundCloudSettings_Params
{
public:
	struct FSkyCreatorBackgroundCloudSettings    ReturnValue;                                       // 0x0(0x24)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SkyCreatorPlugin.SkyCreator.FindLightningPosition
struct ASkyCreator_FindLightningPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutPosition;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C49[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.KilometersToCentimeters
struct USkyCreatorFunctionLibrary_KilometersToCentimeters_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.IsApplicationForegroundNow
struct USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetRealSunPosition
struct USkyCreatorFunctionLibrary_GetRealSunPosition_Params
{
public:
	float                                        Latitude;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Longitude;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeZone;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDaylightSavingTime;                             // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D17[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             DateTime;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCelestialPositionData                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetRealMoonPosition
struct USkyCreatorFunctionLibrary_GetRealMoonPosition_Params
{
public:
	float                                        Latitude;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Longitude;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeZone;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDaylightSavingTime;                             // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D22[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             DateTime;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCelestialPositionData                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetCloudDensityAtPosition
struct USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D23[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.FindLightningPosition
struct USkyCreatorFunctionLibrary_FindLightningPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSampleCloudDensity;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_D2E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OutPosition;                                       // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.ElevationRefraction
struct USkyCreatorFunctionLibrary_ElevationRefraction_Params
{
public:
	double                                       F;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.DynamicConvertRenderTargetToTexture2D
struct USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Params
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.CreateAndAssignMID
struct USkyCreatorFunctionLibrary_CreateAndAssignMID_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    InMaterial;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              InMID;                                             // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.ConvertRenderTargetToTexture2D
struct USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Params
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.CheckCloudDensityAtPosition
struct USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorFunctionLibrary.CentimetersToKilometers
struct USkyCreatorFunctionLibrary_CentimetersToKilometers_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// Function SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings
struct USkyCreatorWeatherPreset_GetWeatherPresetSettings_Params
{
public:
	struct FSkyCreatorWeatherSettings            ReturnValue;                                       // 0x0(0x458)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


