#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xC8 - 0x68)
// Class LiveLinkCamera.LiveLinkCameraController
class ULiveLinkCameraController : public ULiveLinkControllerBase
{
public:
	bool                                         bUseCameraRange;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B34[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLensFilePicker                       LensFilePicker;                                    // 0x70(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkCameraControllerUpdateFlags  UpdateFlags;                                       // 0x80(0x7)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B35[0x41];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkCameraController* GetDefaultObj();

};

}


