#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESceneCameraLinkType : int32
{
	Inherited                      = 0,
	Override                       = 1,
	Unused                         = 2,
	ESceneCameraLinkType_MAX       = 3,
};

enum class EInheritedSourceType : int32
{
	Inherited                      = 0,
	Override                       = 1,
	EInheritedSourceType_MAX       = 2,
};

enum class ETargetUsageFlags : uint8
{
	USAGE_None                     = 0,
	USAGE_Input                    = 1,
	USAGE_Transform                = 2,
	USAGE_Output                   = 4,
	USAGE_Persistent               = 32,
	USAGE_Intermediate0            = 8,
	USAGE_Intermediate1            = 16,
	USAGE_MAX                      = 33,
};

enum class ECompPassConstructionType : uint8
{
	Unknown                        = 0,
	EditorConstructed              = 1,
	BlueprintConstructed           = 2,
	CodeConstructed                = 3,
	ECompPassConstructionType_MAX  = 4,
};

enum class EExrCompressionOptions : uint8
{
	Compressed                     = 0,
	Uncompressed                   = 1,
	EExrCompressionOptions_MAX     = 2,
};

enum class EParamType : uint8
{
	UnknownParamType               = 0,
	ScalarParam                    = 1,
	VectorParam                    = 2,
	TextureParam                   = 3,
	MediaTextureParam              = 4,
	EParamType_MAX                 = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Composure.CompositingParamPayload
struct FCompositingParamPayload
{
public:
	TMap<class FName, float>                     ScalarParamOverrides;                              // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>       VectorParamOverrides;                              // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, class UTexture*>           TextureParamOverrides;                             // 0xA0(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Composure.NamedCompMaterialParam
struct FNamedCompMaterialParam
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0x1A8 - 0xF0)
// ScriptStruct Composure.CompositingMaterial
struct FCompositingMaterial : public FCompositingParamPayload
{
public:
	class UMaterialInterface*                    Material;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               ParamPassMappings;                                 // 0xF8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNamedCompMaterialParam> RequiredMaterialParams;                            // 0x148(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CachedMID;                                         // 0x1A0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Composure.ComposurePostMoveSettings
struct FComposurePostMoveSettings
{
public:
	struct FVector2D                             Pivot;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Translation;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAngle;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct Composure.ComposureUVMapSettings
struct FComposureUVMapSettings
{
public:
	struct FMatrix                               PreUVDisplacementMatrix;                           // 0x0(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               PostUVDisplacementMatrix;                          // 0x80(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             DisplacementDecodeParameters;                      // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              DisplacementTexture;                               // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseDisplacementBlueAndAlphaChannels : 1;          // Mask: 0x1, PropSize: 0x10x118(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Composure.MovieSceneComposureExportPass
struct FMovieSceneComposureExportPass
{
public:
	class FName                                  TransformPassName;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenamePass;                                       // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ExportedAs;                                        // 0xC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct Composure.MovieSceneComposureExportSectionTemplate
struct FMovieSceneComposureExportSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneComposureExportPass        Pass;                                              // 0x20(0x14)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EAA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x668 (0x6A0 - 0x38)
// ScriptStruct Composure.MovieSceneComposurePostMoveSettingsSectionTemplate
struct FMovieSceneComposurePostMoveSettingsSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel               Pivot[0x2];                                        // 0x38(0x220)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               Translation[0x2];                                  // 0x258(0x220)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               RotationAngle;                                     // 0x478(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               Scale;                                             // 0x588(0x110)(NativeAccessSpecifierPrivate)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EAF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


