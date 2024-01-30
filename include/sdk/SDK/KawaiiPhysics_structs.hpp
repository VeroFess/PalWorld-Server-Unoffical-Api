#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPlanarConstraint : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EPlanarConstraint_MAX          = 4,
};

enum class EBoneForwardAxis : uint8
{
	X_Positive                     = 0,
	X_Negative                     = 1,
	Y_Positive                     = 2,
	Y_Negative                     = 3,
	Z_Positive                     = 4,
	Z_Negative                     = 5,
	EBoneForwardAxis_MAX           = 6,
};

enum class ECollisionLimitType : uint8
{
	None                           = 0,
	Spherical                      = 1,
	Capsule                        = 2,
	Planar                         = 3,
	ECollisionLimitType_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x80 - 0x0)
// ScriptStruct KawaiiPhysics.CollisionLimitBase
struct FCollisionLimitBase
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocation;                                    // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x60(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x90 - 0x80)
// ScriptStruct KawaiiPhysics.SphericalLimit
struct FSphericalLimit : public FCollisionLimitBase
{
public:
	float                                        Radius;                                            // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E74[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x90 - 0x80)
// ScriptStruct KawaiiPhysics.CapsuleLimit
struct FCapsuleLimit : public FCollisionLimitBase
{
public:
	float                                        Radius;                                            // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E78[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0xA0 - 0x80)
// ScriptStruct KawaiiPhysics.PlanarLimit
struct FPlanarLimit : public FCollisionLimitBase
{
public:
	struct FPlane                                Plane;                                             // 0x80(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
struct FKawaiiPhysicsSettings
{
public:
	float                                        Damping;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldDampingLocation;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldDampingRotation;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitAngle;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
struct FKawaiiPhysicsModifyBone
{
public:
	struct FBoneReference                        BoneRef;                                           // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E80[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ChildIndexs;                                       // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FKawaiiPhysicsSettings                PhysicsSettings;                                   // 0x28(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrevLocation;                                      // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 PrevRotation;                                      // 0x70(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoseLocation;                                      // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E84[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 PoseRotation;                                      // 0xB0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoseScale;                                         // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthFromRoot;                                    // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDummy;                                            // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E87[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6C8 (0x790 - 0xC8)
// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RootBone;                                          // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                ExcludeBones;                                      // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TargetFrameRate;                                   // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OverrideTargetFramerate;                           // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKawaiiPhysicsSettings                PhysicsSettings;                                   // 0xF0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DampingCurve;                                      // 0x108(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           WorldDampingLocationCurve;                         // 0x110(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           WorldDampingRotationCurve;                         // 0x118(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StiffnessCurve;                                    // 0x120(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           RadiusCurve;                                       // 0x128(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LimitAngleCurve;                                   // 0x130(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    DampingCurveData;                                  // 0x138(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WorldDampingLocationCurveData;                     // 0x1C0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WorldDampingRotationCurveData;                     // 0x248(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    StiffnessCurveData;                                // 0x2D0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    RadiusCurveData;                                   // 0x358(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    LimitAngleCurveData;                               // 0x3E0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUpdatePhysicsSettingsInGame;                      // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E95[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DummyBoneLength;                                   // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneForwardAxis                  BoneForwardAxis;                                   // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlanarConstraint                 PlanarConstraint;                                  // 0x471(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ResetBoneTransformWhenBoneNotFound;                // 0x472(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E97[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalLimit>               SphericalLimits;                                   // 0x478(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                 CapsuleLimits;                                     // 0x488(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                  PlanarLimits;                                      // 0x498(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UKawaiiPhysicsLimitsDataAsset*         LimitsDataAsset;                                   // 0x4A8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSphericalLimit>               SphericalLimitsData;                               // 0x4B0(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                 CapsuleLimitsData;                                 // 0x4C0(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                  PlanarLimitsData;                                  // 0x4D0(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        TeleportDistanceThreshold;                         // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportRotationThreshold;                         // 0x4E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Gravity;                                           // 0x4E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWind;                                       // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindScale;                                         // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowWorldCollision;                              // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCollisionParams;                          // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         CollisionChannelSettings;                          // 0x510(0x190)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIgnoreSelfComponent;                              // 0x6A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                IgnoreBones;                                       // 0x6A8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          IgnoreBoneNamePrefix;                              // 0x6B8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKawaiiPhysicsModifyBone>      ModifyBones;                                       // 0x6C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TotalBoneLength;                                   // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EA5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PreSkelCompTransform;                              // 0x6E0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInitPhysicsSettings;                              // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EA6[0x4F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct KawaiiPhysics.CollisionLimitDataBase
struct FCollisionLimitDataBase
{
public:
	class FName                                  DrivingBoneName;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocation;                                    // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x50(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x70(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x90 - 0x80)
// ScriptStruct KawaiiPhysics.SphericalLimitData
struct FSphericalLimitData : public FCollisionLimitDataBase
{
public:
	float                                        Radius;                                            // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAD[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x90 - 0x80)
// ScriptStruct KawaiiPhysics.CapsuleLimitData
struct FCapsuleLimitData : public FCollisionLimitDataBase
{
public:
	float                                        Radius;                                            // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0xA0 - 0x80)
// ScriptStruct KawaiiPhysics.PlanarLimitData
struct FPlanarLimitData : public FCollisionLimitDataBase
{
public:
	struct FPlane                                Plane;                                             // 0x80(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


