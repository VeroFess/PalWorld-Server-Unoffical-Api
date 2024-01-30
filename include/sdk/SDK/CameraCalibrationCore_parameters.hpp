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

// 0x28 (0x28 - 0x0)
// Function CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName
struct UCalibrationPointComponent_NamespacedSubpointName_Params
{
public:
	class FString                                InSubpointName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutNamespacedName;                                 // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation
struct UCalibrationPointComponent_GetWorldLocation_Params
{
public:
	class FString                                InPointName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocation;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames
struct UCalibrationPointComponent_GetNamespacedPointNames_Params
{
public:
	TArray<class FString>                        OutNamespacedNames;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler
struct UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Params
{
public:
	class UCineCameraComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensDistortionModelHandlerBase*       Handler;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile
struct UCameraCalibrationSubsystem_SetDefaultLensFile_Params
{
public:
	class ULensFile*                             NewDefaultLensFile;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel
struct UCameraCalibrationSubsystem_GetRegisteredLensModel_Params
{
public:
	class FName                                  ModelName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULensModel>                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetOverlayMaterialNames
struct UCameraCalibrationSubsystem_GetOverlayMaterialNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetOverlayMaterial
struct UCameraCalibrationSubsystem_GetOverlayMaterial_Params
{
public:
	class FName                                  OverlayName;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile
struct UCameraCalibrationSubsystem_GetLensFile_Params
{
public:
	struct FLensFilePicker                       Picker;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class ULensFile*                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers
struct UCameraCalibrationSubsystem_GetDistortionModelHandlers_Params
{
public:
	class UCineCameraComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULensDistortionModelHandlerBase*> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile
struct UCameraCalibrationSubsystem_GetDefaultLensFile_Params
{
public:
	class ULensFile*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos
struct UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo
struct UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraNodalOffsetAlgo>    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraImageCenterAlgos
struct UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraImageCenterAlgo
struct UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraImageCenterAlgo>    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps
struct UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep
struct UCameraCalibrationSubsystem_GetCameraCalibrationStep_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraCalibrationStep>    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler
struct UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Params
{
public:
	struct FDistortionHandlerPicker              DistortionHandlerPicker;                           // 0x0(0x28)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class ULensModel>                LensModelClass;                                    // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensDistortionModelHandlerBase*       ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler
struct UCameraCalibrationSubsystem_FindDistortionModelHandler_Params
{
public:
	struct FDistortionHandlerPicker              DistortionHandlerPicker;                           // 0x0(0x28)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUpdatePicker;                                     // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E99[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULensDistortionModelHandlerBase*       ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.WasNodalOffsetAppliedThisTick
struct ULensComponent_WasNodalOffsetAppliedThisTick_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.WasDistortionEvaluated
struct ULensComponent_WasDistortionEvaluated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.ShouldApplyNodalOffsetOnTick
struct ULensComponent_ShouldApplyNodalOffsetOnTick_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.ShouldApplyDistortion
struct ULensComponent_ShouldApplyDistortion_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetOverscanMultiplier
struct ULensComponent_SetOverscanMultiplier_Params
{
public:
	float                                        Multiplier;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetLensModel
struct ULensComponent_SetLensModel_Params
{
public:
	TSubclassOf<class ULensModel>                Model;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetLensFilePicker
struct ULensComponent_SetLensFilePicker_Params
{
public:
	struct FLensFilePicker                       LensFile;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetLensFile
struct ULensComponent_SetLensFile_Params
{
public:
	class ULensFile*                             LensFile;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetFIZEvaluationMode
struct ULensComponent_SetFIZEvaluationMode_Params
{
public:
	enum class EFIZEvaluationMode                Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetFilmbackOverrideSetting
struct ULensComponent_SetFilmbackOverrideSetting_Params
{
public:
	enum class EFilmbackOverrideSource           Setting;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetDistortionState
struct ULensComponent_SetDistortionState_Params
{
public:
	struct FLensDistortionState                  State;                                             // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetDistortionSource
struct ULensComponent_SetDistortionSource_Params
{
public:
	enum class EDistortionSource                 Source;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CameraCalibrationCore.LensComponent.SetCroppedFilmback
struct ULensComponent_SetCroppedFilmback_Params
{
public:
	struct FCameraFilmbackSettings               Filmback;                                          // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetApplyNodalOffsetOnTick
struct ULensComponent_SetApplyNodalOffsetOnTick_Params
{
public:
	bool                                         bApplyNodalOffset;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.SetApplyDistortion
struct ULensComponent_SetApplyDistortion_Params
{
public:
	bool                                         bApply;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetOverscanMultiplier
struct ULensComponent_GetOverscanMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetOriginalFocalLength
struct ULensComponent_GetOriginalFocalLength_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetLensModel
struct ULensComponent_GetLensModel_Params
{
public:
	TSubclassOf<class ULensModel>                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetLensFilePicker
struct ULensComponent_GetLensFilePicker_Params
{
public:
	struct FLensFilePicker                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function CameraCalibrationCore.LensComponent.GetLensFileEvaluationInputs
struct ULensComponent_GetLensFileEvaluationInputs_Params
{
public:
	struct FLensFileEvaluationInputs             ReturnValue;                                       // 0x0(0x1C)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetLensFile
struct ULensComponent_GetLensFile_Params
{
public:
	class ULensFile*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetFIZEvaluationMode
struct ULensComponent_GetFIZEvaluationMode_Params
{
public:
	enum class EFIZEvaluationMode                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetFilmbackOverrideSetting
struct ULensComponent_GetFilmbackOverrideSetting_Params
{
public:
	enum class EFilmbackOverrideSource           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetDistortionState
struct ULensComponent_GetDistortionState_Params
{
public:
	struct FLensDistortionState                  ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensComponent.GetDistortionSource
struct ULensComponent_GetDistortionSource_Params
{
public:
	enum class EDistortionSource                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CameraCalibrationCore.LensComponent.GetCroppedFilmback
struct ULensComponent_GetCroppedFilmback_Params
{
public:
	struct FCameraFilmbackSettings               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CameraCalibrationCore.LensComponent.ApplyNodalOffset
struct ULensComponent_ApplyNodalOffset_Params
{
public:
	class USceneComponent*                       ComponentToOffset;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseManualInputs;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualFocusInput;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManualZoomInput;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState
struct ULensDistortionModelHandlerBase_SetDistortionState_Params
{
public:
	struct FLensDistortionState                  InNewState;                                        // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported
struct ULensDistortionModelHandlerBase_IsModelSupported_Params
{
public:
	TSubclassOf<class ULensModel>                ModelToSupport;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap
struct ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap
struct ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CameraCalibrationCore.LensFile.RemoveZoomPoint
struct ULensFile_RemoveZoomPoint_Params
{
public:
	enum class ELensDataCategory                 InDataCategory;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InFocus;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensFile.RemoveFocusPoint
struct ULensFile_RemoveFocusPoint_Params
{
public:
	enum class ELensDataCategory                 InDataCategory;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F52[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InFocus;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CameraCalibrationCore.LensFile.HasSamples
struct ULensFile_HasSamples_Params
{
public:
	enum class ELensDataCategory                 InDataCategory;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensFile.HasIrisEncoderMapping
struct ULensFile_HasIrisEncoderMapping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensFile.HasFocusEncoderMapping
struct ULensFile_HasFocusEncoderMapping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensFile.GetTotalPointNum
struct ULensFile_GetTotalPointNum_Params
{
public:
	enum class ELensDataCategory                 InDataCategory;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F58[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensFile.GetSTMapPoints
struct ULensFile_GetSTMapPoints_Params
{
public:
	TArray<struct FSTMapPointInfo>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CameraCalibrationCore.LensFile.GetSTMapPoint
struct ULensFile_GetSTMapPoint_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSTMapInfo                            OutSTMapInfo;                                      // 0x8(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F60[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoints
struct ULensFile_GetNodalOffsetPoints_Params
{
public:
	TArray<struct FNodalOffsetPointInfo>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoint
struct ULensFile_GetNodalOffsetPoint_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F64[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNodalPointOffset                     OutNodalPointOffset;                               // 0x10(0x40)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F65[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensFile.GetImageCenterPoints
struct ULensFile_GetImageCenterPoints_Params
{
public:
	TArray<struct FImageCenterPointInfo>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CameraCalibrationCore.LensFile.GetImageCenterPoint
struct ULensFile_GetImageCenterPoint_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImageCenterInfo                      OutImageCenterInfo;                                // 0x8(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensFile.GetFocalLengthPoints
struct ULensFile_GetFocalLengthPoints_Params
{
public:
	TArray<struct FFocalLengthPointInfo>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CameraCalibrationCore.LensFile.GetFocalLengthPoint
struct ULensFile_GetFocalLengthPoint_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                      OutFocalLengthInfo;                                // 0x8(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F72[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CameraCalibrationCore.LensFile.GetDistortionPoints
struct ULensFile_GetDistortionPoints_Params
{
public:
	TArray<struct FDistortionPointInfo>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CameraCalibrationCore.LensFile.GetDistortionPoint
struct ULensFile_GetDistortionPoint_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistortionInfo                       OutDistortionInfo;                                 // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensFile.EvaluateNormalizedIris
struct ULensFile_EvaluateNormalizedIris_Params
{
public:
	float                                        InNormalizedValue;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CameraCalibrationCore.LensFile.EvaluateNormalizedFocus
struct ULensFile_EvaluateNormalizedFocus_Params
{
public:
	float                                        InNormalizedValue;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function CameraCalibrationCore.LensFile.EvaluateNodalPointOffset
struct ULensFile_EvaluateNodalPointOffset_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNodalPointOffset                     OutEvaluatedValue;                                 // 0x10(0x40)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB7[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CameraCalibrationCore.LensFile.EvaluateImageCenterParameters
struct ULensFile_EvaluateImageCenterParameters_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImageCenterInfo                      OutEvaluatedValue;                                 // 0x8(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CameraCalibrationCore.LensFile.EvaluateFocalLength
struct ULensFile_EvaluateFocalLength_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                      OutEvaluatedValue;                                 // 0x8(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CameraCalibrationCore.LensFile.EvaluateDistortionParameters
struct ULensFile_EvaluateDistortionParameters_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistortionInfo                       OutEvaluatedValue;                                 // 0x8(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CameraCalibrationCore.LensFile.EvaluateDistortionData
struct ULensFile_EvaluateDistortionData_Params
{
public:
	float                                        InFocus;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InZoom;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InFilmback;                                        // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensDistortionModelHandlerBase*       InLensHandler;                                     // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CameraCalibrationCore.LensFile.ClearData
struct ULensFile_ClearData_Params
{
public:
	enum class ELensDataCategory                 InDataCategory;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CameraCalibrationCore.LensFile.AddSTMapPoint
struct ULensFile_AddSTMapPoint_Params
{
public:
	float                                        NewFocus;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewZoom;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSTMapInfo                            NewPoint;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function CameraCalibrationCore.LensFile.AddNodalOffsetPoint
struct ULensFile_AddNodalOffsetPoint_Params
{
public:
	float                                        NewFocus;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewZoom;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNodalPointOffset                     NewPoint;                                          // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CameraCalibrationCore.LensFile.AddImageCenterPoint
struct ULensFile_AddImageCenterPoint_Params
{
public:
	float                                        NewFocus;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewZoom;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImageCenterInfo                      NewPoint;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CameraCalibrationCore.LensFile.AddFocalLengthPoint
struct ULensFile_AddFocalLengthPoint_Params
{
public:
	float                                        NewFocus;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewZoom;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                      NewFocalLength;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CameraCalibrationCore.LensFile.AddDistortionPoint
struct ULensFile_AddDistortionPoint_Params
{
public:
	float                                        NewFocus;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewZoom;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistortionInfo                       NewPoint;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                      NewFocalLength;                                    // 0x18(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


