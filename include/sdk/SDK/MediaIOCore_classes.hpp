#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x148 - 0x28)
// Class MediaIOCore.MediaCapture
class UMediaCapture : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaOutput*                          MediaOutput;                                       // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7CF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                CapturingRenderTarget;                             // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D0[0xD8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaCapture* GetDefaultObj();

	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);
	void StopCapture(bool bAllowPendingFrameToBeProcess);
	void SetMediaOutput(class UMediaOutput* InMediaOutput);
	enum class EMediaCaptureState GetState();
	struct FIntPoint GetDesiredSize();
	enum class EPixelFormat GetDesiredPixelFormat();
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
	bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
};

// 0x68 (0x1B0 - 0x148)
// Class MediaIOCore.FileMediaCapture
class UFileMediaCapture : public UMediaCapture
{
public:
	uint8                                        Pad_7D2[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFileMediaCapture* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MediaIOCore.MediaOutput
class UMediaOutput : public UObject
{
public:
	int32                                        NumberOfTextureBuffers;                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaOutput* GetDefaultObj();

	bool Validate(class FString* OutFailureReason);
	class UMediaCapture* CreateMediaCapture();
};

// 0xA0 (0xD0 - 0x30)
// Class MediaIOCore.FileMediaOutput
class UFileMediaOutput : public UMediaOutput
{
public:
	struct FImageWriteOptions                    WriteOptions;                                      // 0x30(0x60)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        FilePath;                                          // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseFileName;                                      // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDesiredSize;                              // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             DesiredSize;                                       // 0xB4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridePixelFormat;                              // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFileMediaOutputPixelFormat       DesiredPixelFormat;                                // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertAlpha;                                      // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EE[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFileMediaOutput* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MediaIOCore.MediaIOCoreSubsystem
class UMediaIOCoreSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_7F6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaIOCoreSubsystem* GetDefaultObj();

};

}


