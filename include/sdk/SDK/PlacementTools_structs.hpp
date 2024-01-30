#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPlacementMode : uint8
{
	Free                           = 0,
	Surface                        = 1,
	EPlacementMode_MAX             = 2,
};

enum class EPlacementStyle : uint8
{
	Fade                           = 0,
	FadeOut                        = 1,
	FadeIn                         = 2,
	CustomFade                     = 3,
	Random                         = 4,
	EPlacementStyle_MAX            = 5,
};

enum class EItemType : uint8
{
	Actor                          = 0,
	StaticMesh                     = 1,
	EItemType_MAX                  = 2,
};

enum class EFadeAxis : uint8
{
	All                            = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EFadeAxis_MAX                  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x6 (0x6 - 0x0)
// ScriptStruct PlacementTools.Directions
struct FDirections
{
public:
	bool                                         XDown;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         XUp;                                               // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         YDown;                                             // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         YUp;                                               // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ZDown;                                             // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ZUp;                                               // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PlacementTools.PlacementItem
struct FPlacementItem
{
public:
	enum class EItemType                         ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    Actor;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PlacementTools.LinearDistribution
struct FLinearDistribution
{
public:
	TArray<struct FVector2D>                     CurvePoints;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


