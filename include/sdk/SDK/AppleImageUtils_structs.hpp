#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETextureRotationDirection : uint8
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Down                           = 3,
	LeftMirrored                   = 4,
	RightMirrored                  = 5,
	DownMirrored                   = 6,
	UpMirrored                     = 7,
	ETextureRotationDirection_MAX  = 8,
};

enum class EAppleTextureType : uint8
{
	Unknown                        = 0,
	Image                          = 1,
	PixelBuffer                    = 2,
	Surface                        = 3,
	MetalTexture                   = 4,
	EAppleTextureType_MAX          = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
struct FAppleImageUtilsImageConversionResult
{
public:
	class FString                                Error;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ImageData;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


