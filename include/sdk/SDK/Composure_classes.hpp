#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Composure.CompEditorImagePreviewInterface
class ICompEditorImagePreviewInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICompEditorImagePreviewInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Composure.CompImageColorPickerInterface
class ICompImageColorPickerInterface : public ICompEditorImagePreviewInterface
{
public:

	static class UClass* StaticClass();
	static class ICompImageColorPickerInterface* GetDefaultObj();

};

// 0x18 (0x2A8 - 0x290)
// Class Composure.ComposurePipelineBaseActor
class AComposurePipelineBaseActor : public AActor
{
public:
	bool                                         bAutoRun;                                          // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoRunChildElementsAndSelf;                      // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BCE[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AComposurePipelineBaseActor* GetDefaultObj();

	void SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf);
	void SetAutoRun(bool bNewAutoRunVal);
	bool IsActivelyRunning();
	void EnqueueRendering(bool bCameraCutThisFrame);
	bool AreChildrenAndSelfAutoRun();
};

// 0x2D8 (0x580 - 0x2A8)
// Class Composure.CompositingElement
class ACompositingElement : public AComposurePipelineBaseActor
{
public:
	uint8                                        Pad_C88[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UComposureCompositingTargetComponent*  CompositingTarget;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UComposurePostProcessingPassProxy*     PostProcessProxy;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCompositingElementInput*>      Inputs;                                            // 0x2C0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UCompositingElementTransform*>  TransformPasses;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UCompositingElementOutput*>     Outputs;                                           // 0x2E0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	enum class ESceneCameraLinkType              CameraSource;                                      // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ACameraActor>           TargetCameraActor;                                 // 0x2F4(0x1C)(Edit, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInheritedSourceType              ResolutionSource;                                  // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             RenderResolution;                                  // 0x314(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextureRenderTargetFormat        RenderFormat;                                      // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSharedTargetPool;                              // 0x31D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C90[0x32];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FreezeFrameMask;                                   // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C91[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTransformPassRendered_BP;                        // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinalPassRendered_BP;                            // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class FName                                  CompShotIdName;                                    // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACompositingElement*                   Parent;                                            // 0x380(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ACompositingElement*>           ChildLayers;                                       // 0x388(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C94[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutputOpacity;                                     // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UCompositingElementInput*, enum class ECompPassConstructionType> UserConstructedInputs;                             // 0x3A0(0x50)(NativeAccessSpecifierPrivate)
	TMap<class UCompositingElementTransform*, enum class ECompPassConstructionType> UserConstructedTransforms;                         // 0x3F0(0x50)(NativeAccessSpecifierPrivate)
	TMap<class UCompositingElementOutput*, enum class ECompPassConstructionType> UserConstructedOutputs;                            // 0x440(0x50)(NativeAccessSpecifierPrivate)
	TArray<class UCompositingElementInput*>      InternalInputs;                                    // 0x490(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UCompositingElementTransform*>  InternalTransformPasses;                           // 0x4A0(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UCompositingElementOutput*>     InternalOutputs;                                   // 0x4B0(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UAlphaTransformPass*                   InternalAlphaPass;                                 // 0x4C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C97[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACompositingElement* GetDefaultObj();

	void SetTargetCamera(class ACameraActor* NewCameraActor);
	void SetRenderResolution(const struct FIntPoint& NewResolution);
	void SetOpacity(float NewOpacity);
	void SetElementName(class FName NewName);
	void SetEditorColorPickingTarget(class UTextureRenderTarget2D* PickingTarget);
	void SetEditorColorPickerDisplayImage(class UTexture* PickerDisplayImage);
	class UTextureRenderTarget2D* RequestNamedRenderTarget(class FName ReferenceName, float RenderPercentage, enum class ETargetUsageFlags UsageTag);
	class UTextureRenderTarget2D* RenderCompositingMaterialToTarget(struct FCompositingMaterial& CompMaterial, class UTextureRenderTarget2D* RenderTarget, class FName ResultLookupName);
	class UTexture* RenderCompositingMaterial(struct FCompositingMaterial& CompMaterial, float RenderScale, class FName ResultLookupName, enum class ETargetUsageFlags UsageTag);
	class UTexture* RenderCompElement(bool bCameraCutThisFrame);
	bool ReleaseOwnedTarget(class UTextureRenderTarget2D* OwnedTarget);
	void RegisterPassResult(class FName ReferenceName, class UTexture* PassResult, bool bSetAsLatestRenderResult);
	bool IsSubElement();
	TArray<class UCompositingElementTransform*> GetTransformsList();
	struct FIntPoint GetRenderResolution();
	int32 GetRenderPriority();
	TArray<class UCompositingElementOutput*> GetOutputsList();
	float GetOpacity();
	class UTexture* GetLatestRenderResult();
	TArray<class UCompositingElementInput*> GetInputsList();
	class ACompositingElement* GetElementParent();
	class FName GetCompElementName();
	TArray<class ACompositingElement*> GetChildElements();
	class UCompositingElementTransform* FindTransformPass(TSubclassOf<class UCompositingElementTransform> TransformType, class UTexture** PassResult, class FName OptionalPassName);
	class ACameraActor* FindTargetCamera();
	class UCompositingElementOutput* FindOutputPass(TSubclassOf<class UCompositingElementOutput> OutputType, class FName OptionalPassName);
	class UTexture* FindNamedRenderResult(class FName PassName, bool bSearchSubElements);
	class UCompositingElementInput* FindInputPass(TSubclassOf<class UCompositingElementInput> InputType, class UTexture** PassResult, class FName OptionalPassName);
	bool DeletePass(class UCompositingElementPass* PassToDelete);
	class UCompositingElementTransform* CreateNewTransformPass(class FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType);
	class UCompositingElementOutput* CreateNewOutputPass(class FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType);
	class UCompositingElementInput* CreateNewInputPass(class FName PassName, TSubclassOf<class UCompositingElementInput> InputType);
	class UCompositingElementTransform* AddNewTransformPass(class FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType);
	class UCompositingElementOutput* AddNewOutputPass(class FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType);
	class UCompositingElementInput* AddNewInputPass(class FName PassName, TSubclassOf<class UCompositingElementInput> InputType);
};

// 0x48 (0x5C8 - 0x580)
// Class Composure.CompositingCaptureBase
class ACompositingCaptureBase : public ACompositingElement
{
public:
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x580(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyDistortion;                                  // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CB1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComponentReference                   LensComponentPicker;                               // 0x590(0x28)(Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	float                                        OverscanFactor;                                    // 0x5B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OriginalFocalLength;                               // 0x5BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LastDistortionMID;                                 // 0x5C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACompositingCaptureBase* GetDefaultObj();

	void UpdateDistortion();
};

// 0x50 (0x80 - 0x30)
// Class Composure.CompositingPickerAsyncTask
class UCompositingPickerAsyncTask : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_CC7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPick;                                            // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAccept;                                          // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                PickerTarget;                                      // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture*                              PickerDisplayImage;                                // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CC8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompositingPickerAsyncTask* GetDefaultObj();

	class UCompositingPickerAsyncTask* OpenCompositingPicker(class UTextureRenderTarget2D* PickerTarget, class UTexture* DisplayImage, class FText WindowTitle, bool bAverageColorOnDrag, bool bUseImplicitGamma);
};

// 0x38 (0x60 - 0x28)
// Class Composure.CompositingElementPass
class UCompositingElementPass : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PassName;                                          // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEE[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompositingElementPass* GetDefaultObj();

	void SetPassEnabled(bool bSetEnabledTo);
	void Reset();
	class UTextureRenderTarget2D* RequestRenderTarget(const struct FIntPoint& Dimensions, enum class ETextureRenderTargetFormat Format);
	class UTextureRenderTarget2D* RequestNativelyFormattedTarget(float RenderScale);
	bool ReleaseRenderTarget(class UTextureRenderTarget2D* AssignedTarget);
	void OnFrameEnd();
	void OnFrameBegin(bool bCameraCutThisFrame);
	void OnEnabled();
	void OnDisabled();
	bool IsPassEnabled();
};

// 0x8 (0x68 - 0x60)
// Class Composure.CompositingElementInput
class UCompositingElementInput : public UCompositingElementPass
{
public:
	bool                                         bIntermediate;                                     // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompositingElementInput* GetDefaultObj();

	class UTexture* GenerateInput();
};

// 0x1C0 (0x228 - 0x68)
// Class Composure.CompositingMediaInput
class UCompositingMediaInput : public UCompositingElementInput
{
public:
	struct FCompositingMaterial                  MediaTransformMaterial;                            // 0x68(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x210(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    DefaultTestPlateMaterial;                          // 0x218(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              FallbackMID;                                       // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCompositingMediaInput* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class Composure.MediaTextureCompositingInput
class UMediaTextureCompositingInput : public UCompositingMediaInput
{
public:
	class UMediaTexture*                         MediaSource;                                       // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMediaTextureCompositingInput* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Composure.CompositingInputInterface
class ICompositingInputInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICompositingInputInterface* GetDefaultObj();

	void OnFrameEnd(class UCompositingInputInterfaceProxy* Proxy);
	void OnFrameBegin(class UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame);
	class UTexture* GenerateInput(class UCompositingInputInterfaceProxy* Proxy);
};

// 0x10 (0x78 - 0x68)
// Class Composure.CompositingInputInterfaceProxy
class UCompositingInputInterfaceProxy : public UCompositingElementInput
{
public:
	TScriptInterface<class ICompositingInputInterface> CompositingInput;                                  // 0x68(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCompositingInputInterfaceProxy* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class Composure.CompositingElementOutput
class UCompositingElementOutput : public UCompositingElementPass
{
public:

	static class UClass* StaticClass();
	static class UCompositingElementOutput* GetDefaultObj();

	void RelayOutput(class UTexture* FinalResult, class UComposurePostProcessingPassProxy* PostProcessProxy);
};

// 0x18 (0x78 - 0x60)
// Class Composure.ColorConverterOutputPass
class UColorConverterOutputPass : public UCompositingElementOutput
{
public:
	uint8                                        Pad_D0F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompositingElementTransform*          ColorConverter;                                    // 0x68(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCompositingElementTransform> DefaultConverterClass;                             // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UColorConverterOutputPass* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class Composure.CompositingMediaCaptureOutput
class UCompositingMediaCaptureOutput : public UColorConverterOutputPass
{
public:
	class UMediaOutput*                          CaptureOutput;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaCapture*                         ActiveCapture;                                     // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCompositingMediaCaptureOutput* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class Composure.RenderTargetCompositingOutput
class URenderTargetCompositingOutput : public UCompositingElementOutput
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URenderTargetCompositingOutput* GetDefaultObj();

};

// 0x38 (0x98 - 0x60)
// Class Composure.EXRFileCompositingOutput
class UEXRFileCompositingOutput : public UCompositingElementOutput
{
public:
	struct FDirectoryPath                        OutputDirectiory;                                  // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilenameFormat;                                    // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            OutputFrameRate;                                   // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExrCompressionOptions            Compression;                                       // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D19[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEXRFileCompositingOutput* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class Composure.CompositingElementTransform
class UCompositingElementTransform : public UCompositingElementPass
{
public:
	bool                                         bIntermediate;                                     // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2B[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompositingElementTransform* GetDefaultObj();

	class UTexture* FindNamedPrePassResult(class FName PassLookupName);
	class UTexture* ApplyTransform(class UTexture* Input, class UComposurePostProcessingPassProxy* PostProcessProxy, class ACameraActor* TargetCamera);
};

// 0x18 (0x88 - 0x70)
// Class Composure.CompositingPostProcessPass
class UCompositingPostProcessPass : public UCompositingElementTransform
{
public:
	float                                        RenderScale;                                       // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UComposurePostProcessPassPolicy*> PostProcessPasses;                                 // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCompositingPostProcessPass* GetDefaultObj();

};

// 0x1A8 (0x230 - 0x88)
// Class Composure.CompositingElementMaterialPass
class UCompositingElementMaterialPass : public UCompositingPostProcessPass
{
public:
	struct FCompositingMaterial                  Material;                                          // 0x88(0x1A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCompositingElementMaterialPass* GetDefaultObj();

	bool SetParameterMapping(class FName TextureParamName, class FName ComposureLayerName);
	void SetMaterialInterface(class UMaterialInterface* NewMaterial);
	void ApplyMaterialParams(class UMaterialInstanceDynamic* Mid);
};

// 0x2B0 (0x320 - 0x70)
// Class Composure.CompositingTonemapPass
class UCompositingTonemapPass : public UCompositingElementTransform
{
public:
	struct FColorGradingSettings                 ColorGradingSettings;                              // 0x70(0x290)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilmStockSettings                    FilmStockSettings;                                 // 0x300(0x14)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChromaticAberration;                               // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UComposureTonemapperPassPolicy*        TonemapPolicy;                                     // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCompositingTonemapPass* GetDefaultObj();

};

// 0x1C0 (0x230 - 0x70)
// Class Composure.MultiPassChromaKeyer
class UMultiPassChromaKeyer : public UCompositingElementTransform
{
public:
	TArray<struct FLinearColor>                  KeyColors;                                         // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCompositingMaterial                  KeyerMaterial;                                     // 0x80(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture*                              DefaultWhiteTexture;                               // 0x228(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMultiPassChromaKeyer* GetDefaultObj();

};

// 0x1C0 (0x230 - 0x70)
// Class Composure.MultiPassDespill
class UMultiPassDespill : public UCompositingElementTransform
{
public:
	TArray<struct FLinearColor>                  KeyColors;                                         // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCompositingMaterial                  KeyerMaterial;                                     // 0x80(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture*                              DefaultWhiteTexture;                               // 0x228(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMultiPassDespill* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class Composure.AlphaTransformPass
class UAlphaTransformPass : public UCompositingElementTransform
{
public:
	float                                        AlphaScale;                                        // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              AlphaTransformMID;                                 // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAlphaTransformPass* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Composure.CompositingOpenColorIOPass
class UCompositingOpenColorIOPass : public UCompositingElementTransform
{
public:
	struct FOpenColorIOColorConversionSettings   ColorConversionSettings;                           // 0x70(0x80)(Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCompositingOpenColorIOPass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Composure.ComposureBlueprintLibrary
class UComposureBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UComposureBlueprintLibrary* GetDefaultObj();

	void SetUVMapSettingsToMaterialParameters(struct FComposureUVMapSettings& UVMapSettings, class UMaterialInstanceDynamic* Material);
	void RequestRedrawComposureViewport();
	bool RenameComposureElement(class FName OriginalElementName, class FName NewElementName);
	void RefreshComposureElementList();
	bool IsComposureElementDrawing(class ACompositingElement* CompElement);
	void InvertUVDisplacementMapEncodingParameters(struct FVector2D& In, struct FVector2D* Out);
	void GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, struct FVector2D* RedGreenUVFactors);
	void GetProjectionMatrixFromPostMoveSettings(struct FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, struct FMatrix* ProjectionMatrix);
	void GetPlayerDisplayGamma(class APlayerCameraManager* PlayerCameraManager, float* DisplayGamma);
	void GetCroppingUVTransformationMatrixFromPostMoveSettings(struct FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, struct FMatrix* CropingUVTransformationMatrix, struct FMatrix* UncropingUVTransformationMatrix);
	class ACompositingElement* GetComposureElement(class FName ElementName);
	void DeleteComposureElementAndChildren(class FName ElementToDelete);
	class UComposurePlayerCompositingTarget* CreatePlayerCompositingTarget(class UObject* WorldContextObject);
	class ACompositingElement* CreateComposureElement(class FName ElementName, TSubclassOf<class ACompositingElement> ClassType, class AActor* LevelContext);
	void CopyCameraSettingsToSceneCapture(class UCameraComponent* SrcCamera, class USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor);
	bool AttachComposureElement(class FName ParentName, class FName ChildName);
};

// 0x50 (0x78 - 0x28)
// Class Composure.ComposureGameSettings
class UComposureGameSettings : public UObject
{
public:
	struct FSoftObjectPath                       StaticVideoPlateDebugImage;                        // 0x28(0x20)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSceneCapWarnOfMissingCam;                         // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       FallbackCompositingTexture;                        // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              FallbackCompositingTextureObj;                     // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UComposureGameSettings* GetDefaultObj();

};

// 0x20 (0x2C0 - 0x2A0)
// Class Composure.ComposurePostProcessPass
class UComposurePostProcessPass : public USceneComponent
{
public:
	class USceneCaptureComponent2D*              SceneCapture;                                      // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NonTransactional, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UComposurePostProcessBlendable*        BlendableInterface;                                // 0x2A8(0x8)(ZeroConstructor, Transient, NonTransactional, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    SetupMaterial;                                     // 0x2B0(0x8)(ZeroConstructor, Transient, NonTransactional, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    TonemapperReplacement;                             // 0x2B8(0x8)(ZeroConstructor, Transient, NonTransactional, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UComposurePostProcessPass* GetDefaultObj();

	void SetSetupMaterial(class UMaterialInterface* Material);
	void SetOutputRenderTarget(class UTextureRenderTarget2D* RenderTarget);
	class UMaterialInterface* GetSetupMaterial();
	class UTextureRenderTarget2D* GetOutputRenderTarget();
};

// 0xD0 (0x390 - 0x2C0)
// Class Composure.ComposureLensBloomPass
class UComposureLensBloomPass : public UComposurePostProcessPass
{
public:
	struct FLensBloomSettings                    Settings;                                          // 0x2C0(0xC0)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              TonemapperReplacingMID;                            // 0x380(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DEA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComposureLensBloomPass* GetDefaultObj();

	void SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic* Material);
	void BloomToRenderTarget();
};

// 0x0 (0x28 - 0x28)
// Class Composure.ComposurePostProcessPassPolicy
class UComposurePostProcessPassPolicy : public UObject
{
public:

	static class UClass* StaticClass();
	static class UComposurePostProcessPassPolicy* GetDefaultObj();

	void SetupPostProcess(class USceneCaptureComponent2D* SceneCapture, class UMaterialInterface** TonemapperOverride);
};

// 0xD8 (0x100 - 0x28)
// Class Composure.ComposureLensBloomPassPolicy
class UComposureLensBloomPassPolicy : public UComposurePostProcessPassPolicy
{
public:
	struct FLensBloomSettings                    Settings;                                          // 0x28(0xC0)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReplacementMaterial;                               // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BloomIntensityParamName;                           // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              TonemapperReplacmentMID;                           // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UComposureLensBloomPassPolicy* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class Composure.ComposurePlayerCompositingCameraModifier
class UComposurePlayerCompositingCameraModifier : public UCameraModifier
{
public:
	uint8                                        Pad_DF3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IComposurePlayerCompositingInterface> Target;                                            // 0x50(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UComposurePlayerCompositingCameraModifier* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Composure.ComposurePlayerCompositingInterface
class IComposurePlayerCompositingInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IComposurePlayerCompositingInterface* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Composure.ComposurePlayerCompositingTarget
class UComposurePlayerCompositingTarget : public UObject
{
public:
	uint8                                        Pad_E00[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UComposurePlayerCompositingCameraModifier* PlayerCameraModifier;                              // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              ReplaceTonemapperMID;                              // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E04[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComposurePlayerCompositingTarget* GetDefaultObj();

	void SetRenderTarget(class UTextureRenderTarget2D* RenderTarget);
	class APlayerCameraManager* SetPlayerCameraManager(class APlayerCameraManager* PlayerCameraManager);
	class APlayerCameraManager* GetPlayerCameraManager();
};

// 0x10 (0xB0 - 0xA0)
// Class Composure.ComposureCompositingTargetComponent
class UComposureCompositingTargetComponent : public UActorComponent
{
public:
	uint8                                        Pad_E12[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              DisplayTexture;                                    // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UComposureCompositingTargetComponent* GetDefaultObj();

	void SetDisplayTexture(class UTexture* DisplayTexture);
	class UTexture* GetDisplayTexture();
};

// 0x10 (0x38 - 0x28)
// Class Composure.ComposurePostProcessBlendable
class UComposurePostProcessBlendable : public UObject
{
public:
	uint8                                        Pad_E1C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UComposurePostProcessPass*             Target;                                            // 0x30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UComposurePostProcessBlendable* GetDefaultObj();

};

// 0x10 (0x2D0 - 0x2C0)
// Class Composure.ComposurePostProcessingPassProxy
class UComposurePostProcessingPassProxy : public UComposurePostProcessPass
{
public:
	class UMaterialInstanceDynamic*              SetupMID;                                          // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E26[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComposurePostProcessingPassProxy* GetDefaultObj();

	void Execute(class UTexture* PrePassInput, class UComposurePostProcessPassPolicy* PostProcessPass);
};

// 0x2B0 (0x570 - 0x2C0)
// Class Composure.ComposureTonemapperPass
class UComposureTonemapperPass : public UComposurePostProcessPass
{
public:
	struct FColorGradingSettings                 ColorGradingSettings;                              // 0x2C0(0x290)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilmStockSettings                    FilmStockSettings;                                 // 0x550(0x14)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChromaticAberration;                               // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E28[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComposureTonemapperPass* GetDefaultObj();

	void TonemapToRenderTarget();
};

// 0x2B8 (0x2E0 - 0x28)
// Class Composure.ComposureTonemapperPassPolicy
class UComposureTonemapperPassPolicy : public UComposurePostProcessPassPolicy
{
public:
	uint8                                        Pad_E2A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColorGradingSettings                 ColorGradingSettings;                              // 0x30(0x290)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilmStockSettings                    FilmStockSettings;                                 // 0x2C0(0x14)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChromaticAberration;                               // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComposureTonemapperPassPolicy* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Composure.CompositingTextureLookupTable
class ICompositingTextureLookupTable : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICompositingTextureLookupTable* GetDefaultObj();

	bool FindNamedPassResult(class FName LookupName, class UTexture** OutTexture);
};

// 0x0 (0x28 - 0x28)
// Class Composure.MovieSceneComposureExportClient
class IMovieSceneComposureExportClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneComposureExportClient* GetDefaultObj();

	void InitializeForExport(class UMovieSceneComposureExportInitializer* ExportInitializer);
};

// 0x10 (0x38 - 0x28)
// Class Composure.MovieSceneComposureExportInitializer
class UMovieSceneComposureExportInitializer : public UObject
{
public:
	uint8                                        Pad_E63[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneComposureExportInitializer* GetDefaultObj();

	void ExportSceneCaptureBuffers(class ACompositingElement* CompShotElement, class USceneCaptureComponent2D* SceneCapture, TArray<class FString>& BuffersToExport);
};

// 0x30 (0xC8 - 0x98)
// Class Composure.MovieSceneComposureExportTrack
class UMovieSceneComposureExportTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_E65[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneComposureExportPass        Pass;                                              // 0xA0(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneComposureExportTrack* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class Composure.MovieSceneComposureExportSection
class UMovieSceneComposureExportSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneComposureExportSection* GetDefaultObj();

};

// 0x660 (0x750 - 0xF0)
// Class Composure.MovieSceneComposurePostMoveSettingsSection
class UMovieSceneComposurePostMoveSettingsSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               Pivot[0x2];                                        // 0xF0(0x220)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Translation[0x2];                                  // 0x310(0x220)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               RotationAngle;                                     // 0x530(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Scale;                                             // 0x640(0x110)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneComposurePostMoveSettingsSection* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Composure.MovieSceneComposurePostMoveSettingsTrack
class UMovieSceneComposurePostMoveSettingsTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_E81[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneComposurePostMoveSettingsTrack* GetDefaultObj();

};

// 0x40 (0xB8 - 0x78)
// Class Composure.PlayerViewportCompositingOutput
class UPlayerViewportCompositingOutput : public UColorConverterOutputPass
{
public:
	uint8                                        Pad_E89[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerIndex;                                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ApplyToneCurve;                                    // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8A[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerCompOutputCameraModifier*       ActiveCamModifier;                                 // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    TonemapperBaseMat;                                 // 0x98(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    PreTonemapBaseMat;                                 // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              ViewportOverrideMID;                               // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E8B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerViewportCompositingOutput* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class Composure.PlayerCompOutputCameraModifier
class UPlayerCompOutputCameraModifier : public UCameraModifier
{
public:
	class UPlayerViewportCompositingOutput*      Owner;                                             // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayerCompOutputCameraModifier* GetDefaultObj();

};

}


