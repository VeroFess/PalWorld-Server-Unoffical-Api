#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEF0 (0x1180 - 0x290)
// Class PPSkyCreatorPlugin.PPSkyCreator
class APPSkyCreator : public AActor
{
public:
	class USceneComponent*                       Root;                                              // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                   Billboard;                                         // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  Compass;                                           // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkyAtmosphereComponent*               SkyAtmosphere;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVolumetricCloudComponent*             VolumetricCloud;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkyLightComponent*                    SkyLight;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*            SunLight;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*            MoonLight;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExponentialHeightFogComponent*        ExponentialHeightFog;                              // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostProcessComponent*                 PostProcess;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StarMap;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  SunSphere;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  MoonSphere;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneCaptureComponent2D*              OcclusionCapture;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     WeatherFX;                                         // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  SkySphere;                                         // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    SkySphereMaterial;                                 // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              SkySphereMID;                                      // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEditorTimeOfDay;                               // 0x320(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EditorTimeOfDay;                                   // 0x324(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEditorWeatherSettings;                         // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPPSkyCreatorEditorWeatherType    EditorWeatherType;                                 // 0x329(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPPSkyCreatorWeatherPreset*            EditorWeatherPreset;                               // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWeatherSettings          EditorWeatherSettings;                             // 0x338(0x458)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsUsedWithSequencer;                              // 0x790(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEditorTickEnabled;                              // 0x791(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeOfDay;                                         // 0x794(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWeatherSettings          WeatherSettings;                                   // 0x798(0x458)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          CommonMPC;                                         // 0xBF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkySphereRadius;                                   // 0xBF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugVariables;                               // 0xBFC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPPSkyCreatorSunPositionType      SunPositionType;                                   // 0xBFD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1460[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPPCelestialPositionData              SunPositionData;                                   // 0xC00(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPPSkyCreatorMoonPositionType     MoonPositionType;                                  // 0xC08(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1462[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPPCelestialPositionData              MoonPositionData;                                  // 0xC0C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SunriseTime;                                       // 0xC14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunsetTime;                                        // 0xC18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDawnOffsetTime;                                 // 0xC1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDuskOffsetTime;                                 // 0xC20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDawnTime;                                       // 0xC24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDuskTime;                                       // 0xC28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunElevation;                                      // 0xC2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunAzimuth;                                        // 0xC30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunMinAngleAtDawnDusk;                             // 0xC34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunFadeInOutTime;                                  // 0xC38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonriseTime;                                      // 0xC3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonsetTime;                                       // 0xC40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonElevation;                                     // 0xC44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonAzimuth;                                       // 0xC48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonFadeInOutTime;                                 // 0xC4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Latitude;                                          // 0xC50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Longitude;                                         // 0xC54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeZone;                                          // 0xC58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDaylightSavingTime;                               // 0xC5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Year;                                              // 0xC60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Month;                                             // 0xC64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Day;                                               // 0xC68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Date;                                              // 0xC70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLightTransition;                                  // 0xC78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunSurfaceBrightness;                              // 0xC7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonSurfaceBrightness;                             // 0xC80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCurrentElevation;                               // 0xC84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionStartSunAngle;                           // 0xC88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionMiddleSunAngle;                          // 0xC8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionEndSunAngle;                             // 0xC90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightIntensityTransitionStartSunAngle;             // 0xC94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightIntensityTransitionEndSunAngle;               // 0xC98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                SkyAtmosphereMobility;                             // 0xC9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkyAtmosphereTransformMode       TransformMode;                                     // 0xC9D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1474[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlanetRadius;                                      // 0xCA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AtmosphereHeight;                                  // 0xCA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AerialPespectiveViewDistanceScale;                 // 0xCA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1476[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlanetTopPosition;                                 // 0xCB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceSampleCountScale;                             // 0xCC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GodRaysResolution;                                 // 0xCCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LayerBottomAltitude;                               // 0xCD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LayerHeight;                                       // 0xCD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TracingStartMaxDistance;                           // 0xCD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TracingMaxDistance;                                // 0xCDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPerSampleAtmosphericLightTransmittance;           // 0xCE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          VolumetricCloudsMPC;                               // 0xCE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerBottomAltitudePosition;                       // 0xCF0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerTopAltitudePosition;                          // 0xD08(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    CurrentVolumetricCloudMaterial;                    // 0xD20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              VolumetricCloudMID;                                // 0xD28(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    VolumetricCloudDensitySampleMaterial;              // 0xD30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              VolumetricCloudDensitySampleMID;                   // 0xD38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                VolumetricCloudDensitySampleRT;                    // 0xD40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicQuality;                                 // 0xD48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPPVolumetricCloudRenderTargetMode RenderMode;                                        // 0xD49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighQualityAerialPerspective;                     // 0xD4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1489[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MultiScatteringApproximationOctaveCount;           // 0xD4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGroundContribution;                               // 0xD50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRayMarchVolumeShadow;                             // 0xD51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ViewSampleCountScale;                              // 0xD54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReflectionSampleCountScale;                        // 0xD58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowViewSampleCountScale;                        // 0xD5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowReflectionSampleCountScale;                  // 0xD60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowTracingDistance;                             // 0xD64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudMapScale;                                     // 0xD68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1494[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CloudMapOffset;                                    // 0xD70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverageVariationMapScale;                         // 0xD80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPPVolumetricCloudNoiseShapeResolution NoiseShapeResolution;                              // 0xD84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPPVolumetricCloudNoiseDetailResolution NoiseDetailResolution;                             // 0xD85(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NoiseShapeScale;                                   // 0xD88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseDetailScale;                                  // 0xD8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurbulenceScale;                                   // 0xD90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackgroundCloudsContrast;                          // 0xD94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackgroundCloudsReflectionScale;                   // 0xD98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                SkyLightMobility;                                  // 0xD9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRealTimeCapture;                                  // 0xD9D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkyLightCaptureTimeSlice;                         // 0xD9E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLowerHemisphereIsSolidColor;                      // 0xD9F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloudAmbientOcclusion;                            // 0xDA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CloudAmbientOcclusionExtent;                       // 0xDA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudAmbientOcclusionMapResolutionScale;           // 0xDA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudAmbientOcclusionApertureScale;                // 0xDAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                SunLightMobility;                                  // 0xDB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlSunDirection;                              // 0xDB1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunConstantIntensity;                             // 0xDB2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunIntensity;                                      // 0xDB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCurrentIntensity;                               // 0xDB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunUseTemperature;                                // 0xDBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunDiskSize;                                       // 0xDC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunConstantAtmosphereDiskColorScale;              // 0xDC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SunAtmosphereDiskColorScale;                       // 0xDC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunPerPixelAtmosphereTransmittance;               // 0xDD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunCloudShadowExtent;                              // 0xDDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCloudShadowMapResolutionScale;                  // 0xDE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCloudShadowRaySampleCountScale;                 // 0xDE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                MoonLightMobility;                                 // 0xDE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlMoonDirection;                             // 0xDE9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonConstantIntensity;                            // 0xDEA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonIntensity;                                     // 0xDEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonCurrentIntensity;                              // 0xDF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonUseTemperature;                               // 0xDF4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonDiskSize;                                      // 0xDF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonRotation;                                      // 0xDFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonPhase;                                         // 0xE00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonPhaseLightIntensityScale;                     // 0xE04(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonPhaseLightIntensityMinScale;                   // 0xE08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonPhaseLightIntensityMaxScale;                   // 0xE0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonConstantAtmosphereDiskColorScale;             // 0xE10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MoonAtmosphereDiskColorScale;                      // 0xE14(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonPerPixelAtmosphereTransmittance;              // 0xE24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonCloudShadowExtent;                             // 0xE28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonCloudShadowMapResolutionScale;                 // 0xE2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonCloudShadowRaySampleCountScale;                // 0xE30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                ExponentialHeightFogMobility;                      // 0xE34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableExponentialHeightFog;                       // 0xE35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVolumetricFog;                                    // 0xE36(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FogHeightOffset;                                   // 0xE38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondFogHeightOffset;                             // 0xE3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            StarMapTexture;                                    // 0xE40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPPSkyCreatorStarMapRotationType  StarMapRotationType;                               // 0xE48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StarMapAdditionalRotation;                         // 0xE50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableOcclusionCapture;                           // 0xE68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                OcclusionRenderTarget;                             // 0xE70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionCaptureWidth;                             // 0xE78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionCaptureHeight;                            // 0xE7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOcclusionCaptureRealtimeUpdate;                   // 0xE80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionCaptureStepDistance;                      // 0xE84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionCaptureStepSize;                          // 0xE88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionBias;                                     // 0xE8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OcclusionBlurSamples;                              // 0xE90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionBlurDistance;                             // 0xE94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionMaskFadeHardness;                         // 0xE98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CameraLocation;                                    // 0xEA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CameraLocationSnapped;                             // 0xEB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OcclusionCurrentLocation;                          // 0xED0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeatherFXCutoffWorldHeight;                        // 0xEE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeatherFXCutoffSoftness;                           // 0xEEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationSpawnRadius;                          // 0xEF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGPUPrecipitation;                           // 0xEF4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrecipitationSpawnRadiusGPU;                       // 0xEF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationMaxViewDistance;                      // 0xEFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationVerticalCheckDistance;                // 0xF00(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 PrecipitationCollisionChannel;                     // 0xF04(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrecipitationDepthFadeDistance;                    // 0xF08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationCameraFadeDistance;                   // 0xF0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationCameraFadeOffset;                     // 0xF10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSpawnRateMaxCPU;                               // 0xF14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSpawnRateMaxGPU;                               // 0xF18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainDistanceScaleFactor;                           // 0xF1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainCameraMotionAlignmentScale;                    // 0xF20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainVelocityElongationScale;                       // 0xF24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainMaskHardness;                                  // 0xF28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSplashSpawnRateMax;                            // 0xF2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSplashSpawnRateMaxGPU;                         // 0xF30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSpawnRateMaxCPU;                               // 0xF34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSpawnRateMaxGPU;                               // 0xF38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowDistanceScaleFactor;                           // 0xF3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowCameraMotionAlignmentScale;                    // 0xF40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowVelocityElongationScale;                       // 0xF44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowMaskHardness;                                  // 0xF48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                LightningsParametersRT;                            // 0xF50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPPSkyCreatorLightningParameters> LightningParameters;                               // 0xF58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentLightningInterval;                          // 0xF70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastLightningPosition;                             // 0xF78(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       LightningAvailablePositions;                       // 0xF90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int32                                        LightningCurrentIndex;                             // 0xFA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSampleCloudDensity;                               // 0xFA4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LightningMaxSamples;                               // 0xFA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningSpawnInnerRadius;                         // 0xFAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningSpawnOuterRadius;                         // 0xFB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningRandomDegreeInConeMax;                    // 0xFB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningBoltEmissiveScale;                        // 0xFB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E9[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightningFlashFadeUpdateRate;                      // 0xFC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashFadeDelta;                           // 0xFCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashEmissiveScale;                       // 0xFD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashEmissiveReflectionScale;             // 0xFD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashRadiusScale;                         // 0xFD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashFadeSpeed;                           // 0xFDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainbowDistance;                                   // 0xFE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainbowDepthFadeDistance;                          // 0xFE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaterialFXCutoffWorldHeight;                       // 0xFE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaterialFXCutoffSoftness;                          // 0xFEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetnessSlopeAngle;                                 // 0xFF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetnessSlopeSmoothness;                            // 0xFF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesMaskScale;                                  // 0xFF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesRoughness;                                  // 0xFFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesSlopeAngle;                                 // 0x1000(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesSlopeSmoothness;                            // 0x1004(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRainRipplesSolver;                          // 0x1008(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPauseRainRipplesSolver;                           // 0x1009(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F4[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RainRipplesUpdateRate;                             // 0x1018(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainRipplesScale;                                  // 0x101C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainRipplesMaxDensity;                             // 0x1020(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindRipplesScale;                                  // 0x1024(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainRipplesSolverDelta;                            // 0x1028(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RainRipplesSolverHeightState;                      // 0x102C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    RainRipplesPropagation;                            // 0x1030(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              RainRipplesPropagationMID;                         // 0x1038(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    RainRipplesForce;                                  // 0x1040(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    RainRipplesNormal;                                 // 0x1048(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              RainRipplesNormalMID;                              // 0x1050(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesPropagationFrame0;                      // 0x1058(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesPropagationFrame1;                      // 0x1060(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesPropagationFrame2;                      // 0x1068(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesNormalRT;                               // 0x1070(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowMaskScale;                                     // 0x1078(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowScale;                                         // 0x107C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowRoughness;                                     // 0x1080(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSparklesScale;                                 // 0x1084(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSparklesRoughness;                             // 0x1088(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSlopeAngle;                                    // 0x108C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSlopeSmoothness;                               // 0x1090(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWind;                                       // 0x1094(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIndependentWindControl;                           // 0x1095(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPPSkyCreatorWindSettings             EditorIndependentWindSettings;                     // 0x1098(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CloudWindSkewAmount;                               // 0x10B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CloudWindOffset;                                   // 0x10B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CloudWindSkewDirection;                            // 0x10D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudWindSkewForce;                                // 0x10E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CloudNoiseShapeWindOffset;                         // 0x10F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CloudNoiseDetailWindOffset;                        // 0x1108(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExposureSettings;                              // 0x1120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExtendDefaultLuminanceRange;                      // 0x1121(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1500[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PostProcessPriority;                               // 0x1124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAutoExposureMethod               ExposureMethod;                                    // 0x1128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1503[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ExposureBiasCurve;                                 // 0x1130(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              ExposureMeterMask;                                 // 0x1138(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMinBrightness;                             // 0x1140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMaxBrightness;                             // 0x1144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMinEV100;                                  // 0x1148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMaxEV100;                                  // 0x114C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureSpeedUp;                                   // 0x1150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureSpeedDown;                                 // 0x1154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureLowPercent;                                // 0x1158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHighPercent;                               // 0x115C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramLogMin;                           // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramLogMax;                           // 0x1164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramMinEV100;                         // 0x1168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramMaxEV100;                         // 0x116C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLightningStrike;                                 // 0x1170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class APPSkyCreator* GetDefaultObj();

	void UpdateSettingsSequencer();
	void SpawnLightningStrike(const struct FVector& LightningPosition);
	void SetYear(int32 NewValue);
	void SetWindSettings(const struct FPPSkyCreatorWindSettings& InWindSettings);
	void SetWindIndependentSettings(const struct FPPSkyCreatorWindSettings& InWindSettings);
	void SetWeatherSettings(const struct FPPSkyCreatorWeatherSettings& InWeatherSettings);
	void SetWeatherMaterialFXSettings(const struct FPPSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettings);
	void SetWeatherFXSettings(const struct FPPSkyCreatorWeatherFXSettings& InWeatherFXSettings);
	void SetVolumetricCloudSettings(const struct FPPSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettings);
	void SetTimeZone(float NewValue);
	void SetTime(float InTime);
	void SetSunSimplePositionSettings(float InSunriseTime, float InSunsetTime, float InSunElevation, float InSunAzimuth);
	void SetSunsetTime(float NewValue);
	void SetSunriseTime(float NewValue);
	void SetSunMinAngleAtDawnDusk(float NewValue);
	void SetSunLightSettings(const struct FPPSkyCreatorSunLightSettings& InSunLightSettings);
	void SetSunIntensity(float NewValue);
	void SetSunElevation(float NewValue);
	void SetSunDuskOffsetTime(float NewValue);
	void SetSunDiskSize(float NewValue);
	void SetSunDawnOffsetTime(float NewValue);
	void SetSunAzimuth(float NewValue);
	void SetSunAtmosphereDiskColorScale(const struct FLinearColor& NewValue);
	void SetStarMapSettings(const struct FPPSkyCreatorStarMapSettings& InStarMapSettings);
	void SetStarMapAdditionalRotation(const struct FVector& NewValue);
	void SetSkyLightSettings(const struct FPPSkyCreatorSkyLightSettings& InSkyLightSettings);
	void SetSkyAtmosphereSettings(const struct FPPSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettings);
	void SetRealPositionSettings(float InLatitude, float InLongitude, float InTimeZone, bool InbDaylightSavingTime, int32 InYear, int32 InMonth, int32 InDay);
	void SetPostProcessSettings(const struct FPPSkyCreatorPostProcessSettings& InPostProcessSettings);
	void SetMoonSimplePositionSettings(float InMoonriseTime, float InMoonsetTime, float InMoonElevation, float InMoonAzimuth);
	void SetMoonsetTime(float NewValue);
	void SetMoonRotation(float NewValue);
	void SetMoonriseTime(float NewValue);
	void SetMoonPhase(float NewValue);
	void SetMoonLightSettings(const struct FPPSkyCreatorMoonLightSettings& InMoonLightSettings);
	void SetMoonIntensity(float NewValue);
	void SetMoonElevation(float NewValue);
	void SetMoonDiskSize(float NewValue);
	void SetMoonAzimuth(float NewValue);
	void SetMoonAtmosphereDiskColorScale(const struct FLinearColor& NewValue);
	void SetMonth(int32 NewValue);
	void SetLongitude(float NewValue);
	void SetLayerHeight(float NewValue);
	void SetLayerBottomAltitude(float NewValue);
	void SetLatitude(float NewValue);
	void SetExponentialHeightFogSettings(const struct FPPSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettings);
	void SetEditorWeatherSettings(const struct FPPSkyCreatorWeatherSettings& NewValue);
	void SetEditorWeatherPreset(class UPPSkyCreatorWeatherPreset* NewValue);
	void SetEditorTimeOfDay(float NewValue);
	void SetDay(int32 NewValue);
	void SetCloudMapOffset(const struct FVector2D& NewValue);
	void SetbDaylightSavingTime(bool NewValue);
	void SetBackgroundCloudSettings(const struct FPPSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettings);
	void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
	void OnRep_UpdateWeather();
	void OnRep_UpdateTime();
	void LerpWindSettings(const struct FPPSkyCreatorWindSettings& InWindSettingsA, const struct FPPSkyCreatorWindSettings& InWindSettingsB, float Alpha);
	void LerpWindIndependentSettings(const struct FPPSkyCreatorWindSettings& InWindSettingsA, const struct FPPSkyCreatorWindSettings& InWindSettingsB, float Alpha);
	void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha);
	void LerpWeatherSettings(const struct FPPSkyCreatorWeatherSettings& InWeatherSettingsA, const struct FPPSkyCreatorWeatherSettings& InWeatherSettingsB, float Alpha);
	void LerpWeatherMaterialFXSettings(const struct FPPSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsA, const struct FPPSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsB, float Alpha);
	void LerpWeatherFXSettings(const struct FPPSkyCreatorWeatherFXSettings& InWeatherFXSettingsA, const struct FPPSkyCreatorWeatherFXSettings& InWeatherFXSettingsB, float Alpha);
	void LerpVolumetricCloudSettings(const struct FPPSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsA, const struct FPPSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsB, float Alpha);
	void LerpSunLightSettings(const struct FPPSkyCreatorSunLightSettings& InSunLightSettingsA, const struct FPPSkyCreatorSunLightSettings& InSunLightSettingsB, float Alpha);
	void LerpStarMapSettings(const struct FPPSkyCreatorStarMapSettings& InStarMapSettingsA, const struct FPPSkyCreatorStarMapSettings& InStarMapSettingsB, float Alpha);
	void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha);
	void LerpSkyLightSettings(const struct FPPSkyCreatorSkyLightSettings& InSkyLightSettingsA, const struct FPPSkyCreatorSkyLightSettings& InSkyLightSettingsB, float Alpha);
	void LerpSkyAtmosphereSettings(const struct FPPSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsA, const struct FPPSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsB, float Alpha);
	void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha);
	void LerpPostProcessSettings(const struct FPPSkyCreatorPostProcessSettings& InPostProcessSettingsA, const struct FPPSkyCreatorPostProcessSettings& InPostProcessSettingsB, float Alpha);
	void LerpMoonLightSettings(const struct FPPSkyCreatorMoonLightSettings& InMoonLightSettingsA, const struct FPPSkyCreatorMoonLightSettings& InMoonLightSettingsB, float Alpha);
	void LerpExponentialHeightFogSettings(const struct FPPSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsA, const struct FPPSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsB, float Alpha);
	void LerpBackgroundCloudSettings(const struct FPPSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsA, const struct FPPSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsB, float Alpha);
	struct FPPSkyCreatorWindSettings GetWindSettings();
	struct FPPSkyCreatorWeatherSettings GetWeatherSettings();
	struct FPPSkyCreatorWeatherMaterialFXSettings GetWeatherMaterialFXSettings();
	struct FPPSkyCreatorWeatherFXSettings GetWeatherFXSettings();
	struct FPPSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings();
	float GetTime();
	struct FRotator GetSunPosition(float Time);
	struct FPPSkyCreatorSunLightSettings GetSunLightSettings();
	struct FPPSkyCreatorStarMapSettings GetStarMapSettings();
	struct FRotator GetStarMapRotation();
	struct FPPSkyCreatorSkyLightSettings GetSkyLightSettings();
	struct FPPSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings();
	struct FPPSkyCreatorPostProcessSettings GetPostProcessSettings();
	struct FRotator GetMoonPosition(float Time);
	float GetMoonPhase();
	struct FPPSkyCreatorMoonLightSettings GetMoonLightSettings();
	struct FVector GetLastLightningPosition();
	struct FPPSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings();
	float GetCloudDensityAtPosition(const struct FVector& Position);
	struct FPPSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings();
	bool FindLightningPosition(const struct FVector& Position, struct FVector* OutPosition);
};

// 0x0 (0x28 - 0x28)
// Class PPSkyCreatorPlugin.PPSkyCreatorFunctionLibrary
class UPPSkyCreatorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPPSkyCreatorFunctionLibrary* GetDefaultObj();

	float KilometersToCentimeters(float Value);
	bool IsApplicationForegroundNow();
	struct FPPCelestialPositionData GetRealSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime);
	struct FPPCelestialPositionData GetRealMoonPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime);
	float GetCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget);
	bool FindLightningPosition(class UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget, const struct FVector& Position, float InnerRadius, float OuterRadius, float MinHeight, float MaxHeight, float DensityThreshold, struct FVector* OutPosition);
	double ElevationRefraction(double F);
	class UTexture2D* DynamicConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget);
	void CreateAndAssignMID(class UObject* WorldContextObject, class UMaterialInterface* InMaterial, class UMaterialInstanceDynamic** InMID);
	void ConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget, class UTexture2D** Texture);
	bool CheckCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget);
	float CentimetersToKilometers(float Value);
};

// 0x470 (0x4A0 - 0x30)
// Class PPSkyCreatorPlugin.PPSkyCreatorWeatherPreset
class UPPSkyCreatorWeatherPreset : public UDataAsset
{
public:
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorSkyAtmosphereSettings    SkyAtmosphereSettings;                             // 0x48(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorVolumetricCloudSettings  VolumetricCloudSettings;                           // 0xC8(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorBackgroundCloudSettings  BackgroundCloudSettings;                           // 0x170(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorSkyLightSettings         SkyLightSettings;                                  // 0x194(0x2C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorSunLightSettings         SunLightSettings;                                  // 0x1C0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorMoonLightSettings        MoonLightSettings;                                 // 0x208(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;                      // 0x250(0x64)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorStarMapSettings          StarMapSettings;                                   // 0x2B4(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPPSkyCreatorWeatherFXSettings        WeatherFXSettings;                                 // 0x300(0x110)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;                         // 0x410(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorWindSettings             WindSettings;                                      // 0x478(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPPSkyCreatorPostProcessSettings      PostProcessSettings;                               // 0x494(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPPSkyCreatorWeatherPreset* GetDefaultObj();

	struct FPPSkyCreatorWeatherSettings GetWeatherPresetSettings();
};

}


