#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECalibratedMapPixelOrigin : uint8
{
	TopLeft                        = 0,
	BottomLeft                     = 1,
	MAX                            = 2,
};

enum class ECalibratedMapChannels : uint8
{
	RG                             = 0,
	BA                             = 1,
	None                           = 2,
	MAX                            = 3,
};

enum class ECalibrationPointVisualization : uint8
{
	CalibrationPointVisualizationCube = 0,
	CalibrationPointVisualizationPyramid = 1,
	ECalibrationPointVisualization_MAX = 2,
};

enum class ELensDisplayUnit : uint8
{
	Millimeters                    = 0,
	Pixels                         = 1,
	Normalized                     = 2,
	ELensDisplayUnit_MAX           = 3,
};

enum class EFIZEvaluationMode : uint8
{
	UseLiveLink                    = 0,
	UseCameraSettings              = 1,
	UseRecordedValues              = 2,
	DoNotEvaluate                  = 3,
	EFIZEvaluationMode_MAX         = 4,
};

enum class EFilmbackOverrideSource : uint8
{
	LensFile                       = 0,
	CroppedFilmbackSetting         = 1,
	DoNotOverride                  = 2,
	EFilmbackOverrideSource_MAX    = 3,
};

enum class EDistortionSource : uint8
{
	LensFile                       = 0,
	LiveLinkLensSubject            = 1,
	Manual                         = 2,
	EDistortionSource_MAX          = 3,
};

enum class ELensDataMode : uint8
{
	Parameters                     = 0,
	STMap                          = 1,
	ELensDataMode_MAX              = 2,
};

enum class ELensDataCategory : uint8
{
	Focus                          = 0,
	Iris                           = 1,
	Zoom                           = 2,
	Distortion                     = 3,
	ImageCenter                    = 4,
	STMap                          = 5,
	NodalOffset                    = 6,
	ELensDataCategory_MAX          = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct CameraCalibrationCore.BaseFocusPoint
struct FBaseFocusPoint
{
public:
	uint8                                        Pad_1006[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CameraCalibrationCore.BaseLensTable
struct FBaseLensTable
{
public:
	uint8                                        Pad_1008[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class ULensFile>              LensFile;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct CameraCalibrationCore.CalibratedMapFormat
struct FCalibratedMapFormat
{
public:
	enum class ECalibratedMapPixelOrigin         PixelOrigin;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECalibratedMapChannels            UndistortionChannels;                              // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECalibratedMapChannels            DistortionChannels;                                // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CameraCalibrationCore.LensDataCategoryEditorColor
struct FLensDataCategoryEditorColor
{
public:
	struct FColor                                Focus;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Iris;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Zoom;                                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Distortion;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ImageCenter;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                STMap;                                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                NodalOffset;                                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CameraCalibrationCore.DistortionHandlerPicker
struct FDistortionHandlerPicker
{
public:
	class UCineCameraComponent*                  TargetCameraComponent;                             // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 DistortionProducerID;                              // 0x8(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HandlerDisplayName;                                // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CameraCalibrationCore.DistortionInfo
struct FDistortionInfo
{
public:
	TArray<float>                                Parameters;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CameraCalibrationCore.DistortionZoomPoint
struct FDistortionZoomPoint
{
public:
	float                                        Zoom;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1012[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDistortionInfo                       DistortionInfo;                                    // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct CameraCalibrationCore.DistortionFocusPoint
struct FDistortionFocusPoint : public FBaseFocusPoint
{
public:
	float                                        Focus;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1015[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            MapBlendingCurve;                                  // 0x10(0x80)(NativeAccessSpecifierPublic)
	TArray<struct FDistortionZoomPoint>          ZoomPoints;                                        // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct CameraCalibrationCore.DistortionTable
struct FDistortionTable : public FBaseLensTable
{
public:
	TArray<struct FDistortionFocusPoint>         FocusPoints;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct CameraCalibrationCore.EncodersTable
struct FEncodersTable
{
public:
	struct FRichCurve                            Focus;                                             // 0x0(0x80)(NativeAccessSpecifierPublic)
	struct FRichCurve                            Iris;                                              // 0x80(0x80)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CameraCalibrationCore.FocalLengthInfo
struct FFocalLengthInfo
{
public:
	struct FVector2D                             FxFy;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CameraCalibrationCore.FocalLengthZoomPoint
struct FFocalLengthZoomPoint
{
public:
	float                                        Zoom;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1017[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocalLengthInfo                      FocalLengthInfo;                                   // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsCalibrationPoint;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1018[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x120 - 0x8)
// ScriptStruct CameraCalibrationCore.FocalLengthFocusPoint
struct FFocalLengthFocusPoint : public FBaseFocusPoint
{
public:
	float                                        Focus;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1019[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Fx;                                                // 0x10(0x80)(NativeAccessSpecifierPublic)
	struct FRichCurve                            Fy;                                                // 0x90(0x80)(NativeAccessSpecifierPublic)
	TArray<struct FFocalLengthZoomPoint>         ZoomPoints;                                        // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct CameraCalibrationCore.FocalLengthTable
struct FFocalLengthTable : public FBaseLensTable
{
public:
	TArray<struct FFocalLengthFocusPoint>        FocusPoints;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct CameraCalibrationCore.ImageCenterFocusPoint
struct FImageCenterFocusPoint : public FBaseFocusPoint
{
public:
	float                                        Focus;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Cx;                                                // 0x10(0x80)(NativeAccessSpecifierPublic)
	struct FRichCurve                            Cy;                                                // 0x90(0x80)(NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct CameraCalibrationCore.ImageCenterTable
struct FImageCenterTable : public FBaseLensTable
{
public:
	TArray<struct FImageCenterFocusPoint>        FocusPoints;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CameraCalibrationCore.LensInfo
struct FLensInfo
{
public:
	class FString                                LensModelName;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LensSerialNumber;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULensModel>                LensModel;                                         // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SensorDimensions;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ImageDimensions;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CameraCalibrationCore.STMapInfo
struct FSTMapInfo
{
public:
	class UTexture*                              DistortionMap;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCalibratedMapFormat                  MapFormat;                                         // 0x8(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_101E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CameraCalibrationCore.ImageCenterInfo
struct FImageCenterInfo
{
public:
	struct FVector2D                             PrincipalPoint;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CameraCalibrationCore.NodalPointOffset
struct FNodalPointOffset
{
public:
	struct FVector                               LocationOffset;                                    // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1023[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RotationOffset;                                    // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CameraCalibrationCore.DistortionData
struct FDistortionData
{
public:
	TArray<struct FVector2D>                     DistortedUVs;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	float                                        OverscanFactor;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1027[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CameraCalibrationCore.DataTablePointInfoBase
struct FDataTablePointInfoBase
{
public:
	float                                        Focus;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Zoom;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct CameraCalibrationCore.DistortionPointInfo
struct FDistortionPointInfo : public FDataTablePointInfoBase
{
public:
	struct FDistortionInfo                       DistortionInfo;                                    // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct CameraCalibrationCore.FocalLengthPointInfo
struct FFocalLengthPointInfo : public FDataTablePointInfoBase
{
public:
	struct FFocalLengthInfo                      FocalLengthInfo;                                   // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct CameraCalibrationCore.STMapPointInfo
struct FSTMapPointInfo : public FDataTablePointInfoBase
{
public:
	struct FSTMapInfo                            STMapInfo;                                         // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct CameraCalibrationCore.ImageCenterPointInfo
struct FImageCenterPointInfo : public FDataTablePointInfoBase
{
public:
	struct FImageCenterInfo                      ImageCenterInfo;                                   // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct CameraCalibrationCore.NodalOffsetPointInfo
struct FNodalOffsetPointInfo : public FDataTablePointInfoBase
{
public:
	uint8                                        Pad_102C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNodalPointOffset                     NodalPointOffset;                                  // 0x10(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CameraCalibrationCore.LensDistortionState
struct FLensDistortionState
{
public:
	struct FDistortionInfo                       DistortionInfo;                                    // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                      FocalLengthInfo;                                   // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FImageCenterInfo                      ImageCenter;                                       // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CameraCalibrationCore.LensFilePicker
struct FLensFilePicker
{
public:
	bool                                         bUseDefaultLensFile;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULensFile*                             LensFile;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CameraCalibrationCore.LensFileEvaluationInputs
struct FLensFileEvaluationInputs
{
public:
	float                                        Focus;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Iris;                                              // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Zoom;                                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Interp, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1032[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x308 (0x310 - 0x8)
// ScriptStruct CameraCalibrationCore.NodalOffsetFocusPoint
struct FNodalOffsetFocusPoint : public FBaseFocusPoint
{
public:
	float                                        Focus;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1036[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            LocationOffset[0x3];                               // 0x10(0x180)(NativeAccessSpecifierPublic)
	struct FRichCurve                            RotationOffset[0x3];                               // 0x190(0x180)(NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct CameraCalibrationCore.NodalOffsetTable
struct FNodalOffsetTable : public FBaseLensTable
{
public:
	TArray<struct FNodalOffsetFocusPoint>        FocusPoints;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CameraCalibrationCore.SphericalDistortionParameters
struct FSphericalDistortionParameters
{
public:
	float                                        K1;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        K2;                                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        K3;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        P1;                                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        P2;                                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CameraCalibrationCore.DerivedDistortionData
struct FDerivedDistortionData
{
public:
	struct FDistortionData                       DistortionData;                                    // 0x0(0x18)(Edit, EditConst, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                UndistortionDisplacementMap;                       // 0x18(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                DistortionDisplacementMap;                         // 0x20(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CameraCalibrationCore.STMapZoomPoint
struct FSTMapZoomPoint
{
public:
	float                                        Zoom;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1040[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSTMapInfo                            STMapInfo;                                         // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FDerivedDistortionData                DerivedDistortionData;                             // 0x18(0x30)(Transient, NativeAccessSpecifierPublic)
	bool                                         bIsCalibrationPoint;                               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1042[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct CameraCalibrationCore.STMapFocusPoint
struct FSTMapFocusPoint : public FBaseFocusPoint
{
public:
	float                                        Focus;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1044[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            MapBlendingCurve;                                  // 0x10(0x80)(NativeAccessSpecifierPublic)
	TArray<struct FSTMapZoomPoint>               ZoomPoints;                                        // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct CameraCalibrationCore.STMapTable
struct FSTMapTable : public FBaseLensTable
{
public:
	TArray<struct FSTMapFocusPoint>              FocusPoints;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


