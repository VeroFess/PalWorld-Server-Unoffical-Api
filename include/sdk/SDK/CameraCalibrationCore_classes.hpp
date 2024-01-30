#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x650 - 0x5F0)
// Class CameraCalibrationCore.CalibrationPointComponent
class UCalibrationPointComponent : public UProceduralMeshComponent
{
public:
	TMap<class FString, struct FVector>          SubPoints;                                         // 0x5F0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bVisualizePointsInEditor;                          // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E02[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PointVisualizationScale;                           // 0x644(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECalibrationPointVisualization    VisualizationShape;                                // 0x648(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E05[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCalibrationPointComponent* GetDefaultObj();

	void RebuildVertices();
	bool NamespacedSubpointName(const class FString& InSubpointName, class FString* OutNamespacedName);
	bool GetWorldLocation(const class FString& InPointName, struct FVector* OutLocation);
	void GetNamespacedPointNames(TArray<class FString>* OutNamespacedNames);
};

// 0x58 (0x2E8 - 0x290)
// Class CameraCalibrationCore.CameraCalibrationCheckerboard
class ACameraCalibrationCheckerboard : public AActor
{
public:
	class USceneComponent*                       Root;                                              // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*            TopLeft;                                           // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*            TopRight;                                          // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*            BottomLeft;                                        // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*            BottomRight;                                       // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*            Center;                                            // 0x2B8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCornerRows;                                     // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCornerCols;                                     // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SquareSideLength;                                  // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x2CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CubeMesh;                                          // 0x2D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OddCubeMaterial;                                   // 0x2D8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    EvenCubeMaterial;                                  // 0x2E0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACameraCalibrationCheckerboard* GetDefaultObj();

	void Rebuild();
};

// 0x140 (0x178 - 0x38)
// Class CameraCalibrationCore.CameraCalibrationSettings
class UCameraCalibrationSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class ULensFile>              StartupLensFile;                                   // 0x38(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                             DisplacementMapResolution;                         // 0x68(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CalibrationInputTolerance;                         // 0x70(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E21[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultUndistortionDisplacementMaterials;          // 0x78(0x50)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultDistortionDisplacementMaterials;            // 0xC8(0x50)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultDistortionMaterials;                        // 0x118(0x50)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bEnableCalibrationDatasetImportExport;             // 0x168(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E22[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraCalibrationSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class CameraCalibrationCore.CameraCalibrationEditorSettings
class UCameraCalibrationEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UCameraCalibrationEditorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CameraCalibrationCore.CameraCalibrationStep
class UCameraCalibrationStep : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCameraCalibrationStep* GetDefaultObj();

};

// 0x1F0 (0x220 - 0x30)
// Class CameraCalibrationCore.CameraCalibrationSubsystem
class UCameraCalibrationSubsystem : public UEngineSubsystem
{
public:
	class ULensFile*                             DefaultLensFile;                                   // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class ULensModel>> LensModelMap;                                      // 0x38(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraNodalOffsetAlgo>> CameraNodalOffsetAlgosMap;                         // 0x88(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraImageCenterAlgo>> CameraImageCenterAlgosMap;                         // 0xD8(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraCalibrationStep>> CameraCalibrationStepsMap;                         // 0x128(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E9E[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraCalibrationSubsystem* GetDefaultObj();

	void UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler);
	void SetDefaultLensFile(class ULensFile* NewDefaultLensFile);
	TSubclassOf<class ULensModel> GetRegisteredLensModel(class FName ModelName);
	TArray<class FName> GetOverlayMaterialNames();
	class UMaterialInterface* GetOverlayMaterial(class FName& OverlayName);
	class ULensFile* GetLensFile(struct FLensFilePicker& Picker);
	TArray<class ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(class UCineCameraComponent* Component);
	class ULensFile* GetDefaultLensFile();
	TArray<class FName> GetCameraNodalOffsetAlgos();
	TSubclassOf<class UCameraNodalOffsetAlgo> GetCameraNodalOffsetAlgo(class FName Name);
	TArray<class FName> GetCameraImageCenterAlgos();
	TSubclassOf<class UCameraImageCenterAlgo> GetCameraImageCenterAlgo(class FName Name);
	TArray<class FName> GetCameraCalibrationSteps();
	TSubclassOf<class UCameraCalibrationStep> GetCameraCalibrationStep(class FName Name);
	class ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, TSubclassOf<class ULensModel> LensModelClass);
	class ULensDistortionModelHandlerBase* FindDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker);
};

// 0x8 (0x30 - 0x28)
// Class CameraCalibrationCore.CameraImageCenterAlgo
class UCameraImageCenterAlgo : public UObject
{
public:
	uint8                                        Pad_EB8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraImageCenterAlgo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CameraCalibrationCore.CameraLensDistortionAlgo
class UCameraLensDistortionAlgo : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCameraLensDistortionAlgo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CameraCalibrationCore.CameraNodalOffsetAlgo
class UCameraNodalOffsetAlgo : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCameraNodalOffsetAlgo* GetDefaultObj();

};

// 0x1C0 (0x260 - 0xA0)
// Class CameraCalibrationCore.LensComponent
class ULensComponent : public UActorComponent
{
public:
	struct FLensFilePicker                       LensFilePicker;                                    // 0xA0(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EFIZEvaluationMode                EvaluationMode;                                    // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComponentReference                   TargetCameraComponent;                             // 0xB8(0x28)(Edit, DisableEditOnTemplate, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FLensFileEvaluationInputs             EvalInputs;                                        // 0xE0(0x1C)(Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	enum class EDistortionSource                 DistortionStateSource;                             // 0xFC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyDistortion;                                  // 0xFD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F1F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULensModel>                LensModel;                                         // 0x100(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLensDistortionState                  DistortionState;                                   // 0x108(0x30)(Edit, BlueprintVisible, Interp, Protected, NativeAccessSpecifierProtected)
	bool                                         bScaleOverscan;                                    // 0x138(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F20[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverscanMultiplier;                                // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFilmbackOverrideSource           FilmbackOverride;                                  // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCameraFilmbackSettings               CroppedFilmback;                                   // 0x144(0xC)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bApplyNodalOffsetOnTick;                           // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F22[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OriginalTrackedComponentTransform;                 // 0x160(0x60)(Edit, BlueprintVisible, EditConst, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDistortionSetup;                                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F23[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OriginalFocalLength;                               // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LastDistortionMID;                                 // 0x1C8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCineCameraComponent*                  LastCameraComponent;                               // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<TSubclassOf<class ULensModel>, class ULensDistortionModelHandlerBase*> LensDistortionHandlerMap;                          // 0x1D8(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USceneComponent>        TrackedComponent;                                  // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                TrackedComponentName;                              // 0x230(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F26[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULensComponent* GetDefaultObj();

	bool WasNodalOffsetAppliedThisTick();
	bool WasDistortionEvaluated();
	bool ShouldApplyNodalOffsetOnTick();
	bool ShouldApplyDistortion();
	void SetOverscanMultiplier(float Multiplier);
	void SetLensModel(TSubclassOf<class ULensModel> Model);
	void SetLensFilePicker(const struct FLensFilePicker& LensFile);
	void SetLensFile(class ULensFile* LensFile);
	void SetFIZEvaluationMode(enum class EFIZEvaluationMode Mode);
	void SetFilmbackOverrideSetting(enum class EFilmbackOverrideSource Setting);
	void SetDistortionState(const struct FLensDistortionState& State);
	void SetDistortionSource(enum class EDistortionSource Source);
	void SetCroppedFilmback(const struct FCameraFilmbackSettings& Filmback);
	void SetApplyNodalOffsetOnTick(bool bApplyNodalOffset);
	void SetApplyDistortion(bool bApply);
	float GetOverscanMultiplier();
	float GetOriginalFocalLength();
	TSubclassOf<class ULensModel> GetLensModel();
	struct FLensFilePicker GetLensFilePicker();
	struct FLensFileEvaluationInputs GetLensFileEvaluationInputs();
	class ULensFile* GetLensFile();
	enum class EFIZEvaluationMode GetFIZEvaluationMode();
	enum class EFilmbackOverrideSource GetFilmbackOverrideSetting();
	struct FLensDistortionState GetDistortionState();
	enum class EDistortionSource GetDistortionSource();
	struct FCameraFilmbackSettings GetCroppedFilmback();
	void ClearDistortionState();
	void ApplyNodalOffset(class USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput);
};

// 0x90 (0xB8 - 0x28)
// Class CameraCalibrationCore.LensDistortionModelHandlerBase
class ULensDistortionModelHandlerBase : public UObject
{
public:
	TSubclassOf<class ULensModel>                LensModelClass;                                    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              DistortionPostProcessMID;                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLensDistortionState                  CurrentState;                                      // 0x38(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                DisplayName;                                       // 0x68(0x10)(Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OverscanFactor;                                    // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F45[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              UndistortionDisplacementMapMID;                    // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              DistortionDisplacementMapMID;                      // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                UndistortionDisplacementMapRT;                     // 0x90(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                DistortionDisplacementMapRT;                       // 0x98(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 DistortionProducerID;                              // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F47[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULensDistortionModelHandlerBase* GetDefaultObj();

	void SetDistortionState(struct FLensDistortionState& InNewState);
	bool IsModelSupported(TSubclassOf<class ULensModel>& ModelToSupport);
	class UTextureRenderTarget2D* GetUndistortionDisplacementMap();
	class UTextureRenderTarget2D* GetDistortionDisplacementMap();
};

// 0x270 (0x298 - 0x28)
// Class CameraCalibrationCore.LensFile
class ULensFile : public UObject
{
public:
	uint8                                        Pad_FE8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLensInfo                             LensInfo;                                          // 0x30(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ELensDataMode                     DataMode;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           UserMetadata;                                      // 0x78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEncodersTable                        EncodersTable;                                     // 0xC8(0x100)(NativeAccessSpecifierPublic)
	struct FDistortionTable                      DistortionTable;                                   // 0x1C8(0x20)(NativeAccessSpecifierPublic)
	struct FFocalLengthTable                     FocalLengthTable;                                  // 0x1E8(0x20)(NativeAccessSpecifierPublic)
	struct FImageCenterTable                     ImageCenterTable;                                  // 0x208(0x20)(NativeAccessSpecifierPublic)
	struct FNodalOffsetTable                     NodalOffsetTable;                                  // 0x228(0x20)(NativeAccessSpecifierPublic)
	struct FSTMapTable                           STMapTable;                                        // 0x248(0x20)(NativeAccessSpecifierPublic)
	uint8                                        Pad_FEE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTextureRenderTarget2D*>        UndistortionDisplacementMapHolders;                // 0x278(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UTextureRenderTarget2D*>        DistortionDisplacementMapHolders;                  // 0x288(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULensFile* GetDefaultObj();

	void RemoveZoomPoint(enum class ELensDataCategory InDataCategory, float InFocus, float InZoom);
	void RemoveFocusPoint(enum class ELensDataCategory InDataCategory, float InFocus);
	bool HasSamples(enum class ELensDataCategory InDataCategory);
	bool HasIrisEncoderMapping();
	bool HasFocusEncoderMapping();
	int32 GetTotalPointNum(enum class ELensDataCategory InDataCategory);
	TArray<struct FSTMapPointInfo> GetSTMapPoints();
	bool GetSTMapPoint(float InFocus, float InZoom, struct FSTMapInfo* OutSTMapInfo);
	TArray<struct FNodalOffsetPointInfo> GetNodalOffsetPoints();
	bool GetNodalOffsetPoint(float InFocus, float InZoom, struct FNodalPointOffset* OutNodalPointOffset);
	TArray<struct FImageCenterPointInfo> GetImageCenterPoints();
	bool GetImageCenterPoint(float InFocus, float InZoom, struct FImageCenterInfo* OutImageCenterInfo);
	TArray<struct FFocalLengthPointInfo> GetFocalLengthPoints();
	bool GetFocalLengthPoint(float InFocus, float InZoom, struct FFocalLengthInfo* OutFocalLengthInfo);
	TArray<struct FDistortionPointInfo> GetDistortionPoints();
	bool GetDistortionPoint(float InFocus, float InZoom, struct FDistortionInfo* OutDistortionInfo);
	float EvaluateNormalizedIris(float InNormalizedValue);
	float EvaluateNormalizedFocus(float InNormalizedValue);
	bool EvaluateNodalPointOffset(float InFocus, float InZoom, struct FNodalPointOffset* OutEvaluatedValue);
	bool EvaluateImageCenterParameters(float InFocus, float InZoom, struct FImageCenterInfo* OutEvaluatedValue);
	bool EvaluateFocalLength(float InFocus, float InZoom, struct FFocalLengthInfo* OutEvaluatedValue);
	bool EvaluateDistortionParameters(float InFocus, float InZoom, struct FDistortionInfo* OutEvaluatedValue);
	bool EvaluateDistortionData(float InFocus, float InZoom, const struct FVector2D& InFilmback, class ULensDistortionModelHandlerBase* InLensHandler);
	void ClearData(enum class ELensDataCategory InDataCategory);
	void ClearAll();
	void AddSTMapPoint(float NewFocus, float NewZoom, struct FSTMapInfo& NewPoint);
	void AddNodalOffsetPoint(float NewFocus, float NewZoom, struct FNodalPointOffset& NewPoint);
	void AddImageCenterPoint(float NewFocus, float NewZoom, struct FImageCenterInfo& NewPoint);
	void AddFocalLengthPoint(float NewFocus, float NewZoom, struct FFocalLengthInfo& NewFocalLength);
	void AddDistortionPoint(float NewFocus, float NewZoom, struct FDistortionInfo& NewPoint, struct FFocalLengthInfo& NewFocalLength);
};

// 0x0 (0x28 - 0x28)
// Class CameraCalibrationCore.LensModel
class ULensModel : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULensModel* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class CameraCalibrationCore.SphericalLensDistortionModelHandler
class USphericalLensDistortionModelHandler : public ULensDistortionModelHandlerBase
{
public:
	uint8                                        Pad_1000[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USphericalLensDistortionModelHandler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CameraCalibrationCore.SphericalLensModel
class USphericalLensModel : public ULensModel
{
public:

	static class UClass* StaticClass();
	static class USphericalLensModel* GetDefaultObj();

};

}


