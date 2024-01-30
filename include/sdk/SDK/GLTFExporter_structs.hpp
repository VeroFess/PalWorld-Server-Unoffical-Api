#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGLTFTextureImageFormat : uint8
{
	None                           = 0,
	PNG                            = 1,
	JPEG                           = 2,
	EGLTFTextureImageFormat_MAX    = 3,
};

enum class EGLTFTextureType : uint8
{
	None                           = 0,
	HDR                            = 1,
	Normalmaps                     = 2,
	Lightmaps                      = 4,
	All                            = 7,
	EGLTFTextureType_MAX           = 8,
};

enum class EGLTFTextureHDREncoding : uint8
{
	None                           = 0,
	RGBM                           = 1,
	EGLTFTextureHDREncoding_MAX    = 2,
};

enum class EGLTFSceneMobility : uint8
{
	None                           = 0,
	Static                         = 1,
	Stationary                     = 2,
	Movable                        = 4,
	All                            = 7,
	EGLTFSceneMobility_MAX         = 8,
};

enum class EGLTFVariantSetsMode : uint8
{
	None                           = 0,
	Khronos                        = 1,
	Epic                           = 2,
	EGLTFVariantSetsMode_MAX       = 3,
};

enum class EGLTFMaterialVariantMode : uint8
{
	None                           = 0,
	Simple                         = 1,
	UseMeshData                    = 2,
	EGLTFMaterialVariantMode_MAX   = 3,
};

enum class EGLTFMaterialBakeMode : uint8
{
	Disabled                       = 0,
	Simple                         = 1,
	UseMeshData                    = 2,
	EGLTFMaterialBakeMode_MAX      = 3,
};

enum class EGLTFMaterialBakeSizePOT : uint8
{
	POT_1                          = 0,
	POT_2                          = 1,
	POT_4                          = 2,
	POT_8                          = 3,
	POT_16                         = 4,
	POT_32                         = 5,
	POT_64                         = 6,
	POT_128                        = 7,
	POT_256                        = 8,
	POT_512                        = 9,
	POT_1024                       = 10,
	POT_2048                       = 11,
	POT_4096                       = 12,
	POT_8192                       = 13,
	POT_MAX                        = 14,
};

enum class EGLTFMaterialPropertyGroup : uint8
{
	None                           = 0,
	BaseColorOpacity               = 1,
	MetallicRoughness              = 2,
	EmissiveColor                  = 3,
	Normal                         = 4,
	AmbientOcclusion               = 5,
	ClearCoatRoughness             = 6,
	ClearCoatBottomNormal          = 7,
	EGLTFMaterialPropertyGroup_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct GLTFExporter.GLTFExportMessages
struct FGLTFExportMessages
{
public:
	TArray<class FString>                        Suggestions;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Warnings;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Errors;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct GLTFExporter.GLTFOverrideMaterialBakeSettings
struct FGLTFOverrideMaterialBakeSettings
{
public:
	bool                                         bOverrideSize;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGLTFMaterialBakeSizePOT          Size;                                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideFilter;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    Filter;                                            // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideTiling;                                   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   Tiling;                                            // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


