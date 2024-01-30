#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x3E8 - 0x290)
// Class PlacementTools.PlacementToolBase
class APlacementToolBase : public AActor
{
public:
	bool                                         IsInEditor;                                        // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBillboardComponent*                   EasySelectBillboard;                               // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRandomStream                         RandomStream;                                      // 0x2A8(0x8)(ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FLinearDistribution                   DistributionCurve;                                 // 0x2B0(0x10)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F75[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPlacementMode                    PlacementMode;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlacementStyle                   PlacementStyle;                                    // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F77[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlacementItem>                PlacementItems;                                    // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	struct FDirections                           SurfaceDirection;                                  // 0x2F8(0x6)(Edit, BlueprintVisible, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	uint8                                        Pad_F79[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Amount;                                            // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Seed;                                              // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Offset;                                            // 0x310(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRandomizeRotation;                                // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationMin;                                       // 0x378(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	struct FRotator                              RotationMax;                                       // 0x390(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	bool                                         bRandomizeScale;                                   // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUniformScale;                                     // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F80[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ScaleMin;                                          // 0x3B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ScaleMax;                                          // 0x3C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRotateToSurface;                                  // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAdjustToSurface;                                  // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAvoidOverlapBounds;                               // 0x3E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeleteChildrenWhenDeleted;                        // 0x3E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideBrush;                                        // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F81[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APlacementToolBase* GetDefaultObj();

	void RandomizeSeed();
	void Generate();
};

// 0x38 (0x420 - 0x3E8)
// Class PlacementTools.BoxPlacement
class ABoxPlacement : public APlacementToolBase
{
public:
	struct FVector                               BoxExtent;                                         // 0x3E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                         BoxBrush;                                          // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirections                           FadeDirection;                                     // 0x408(0x6)(Edit, BlueprintVisible, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x40E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F97[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          NotPlaceOnActorTags;                               // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ABoxPlacement* GetDefaultObj();

};

// 0x28 (0x410 - 0x3E8)
// Class PlacementTools.SpherePlacement
class ASpherePlacement : public APlacementToolBase
{
public:
	float                                        Radius;                                            // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F99[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USphereComponent*                      SphereBrush;                                       // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFadeAxis                         FadeDirection;                                     // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F9C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          NotPlaceOnActorTags;                               // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ASpherePlacement* GetDefaultObj();

};

}


