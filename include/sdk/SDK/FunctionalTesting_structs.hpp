#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EComparisonTolerance : uint8
{
	Zero                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Custom                         = 4,
	EComparisonTolerance_MAX       = 5,
};

enum class EComparisonMethod : uint8
{
	Equal_To                       = 0,
	Not_Equal_To                   = 1,
	Greater_Than_Or_Equal_To       = 2,
	Less_Than_Or_Equal_To          = 3,
	Greater_Than                   = 4,
	Less_Than                      = 5,
	EComparisonMethod_MAX          = 6,
};

enum class EFunctionalTestResult : uint8
{
	Default                        = 0,
	Invalid                        = 1,
	Error                          = 2,
	Running                        = 3,
	Failed                         = 4,
	Succeeded                      = 5,
	EFunctionalTestResult_MAX      = 6,
};

enum class EFunctionalTestLogHandling : uint8
{
	ProjectDefault                 = 0,
	OutputIsError                  = 1,
	OutputIgnored                  = 2,
	EFunctionalTestLogHandling_MAX = 3,
};

enum class EWidgetTestAppearLocation : int32
{
	Viewport                       = 0,
	PlayerScreen                   = 1,
	EWidgetTestAppearLocation_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x6 (0x6 - 0x0)
// ScriptStruct FunctionalTesting.ComparisonToleranceAmount
struct FComparisonToleranceAmount
{
public:
	uint8                                        Red;                                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Green;                                             // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Blue;                                              // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Alpha;                                             // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinBrightness;                                     // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxBrightness;                                     // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FunctionalTesting.AutomationScreenshotOptions
struct FAutomationScreenshotOptions
{
public:
	struct FVector2D                             Resolution;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameDelay;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverride_OverrideTimeTo;                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2094[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OverrideTimeTo;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableNoisyRenderingFeatures;                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableTonemapping;                               // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2095[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAutomationViewSettings*               ViewSettings;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VisualizeBuffer;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComparisonTolerance              Tolerance;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComparisonToleranceAmount            ToleranceAmount;                                   // 0x41(0x6)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2096[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaximumLocalError;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumGlobalError;                                // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreAntiAliasing;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreColors;                                     // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2097[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FunctionalTesting.AutomationWaitForLoadingOptions
struct FAutomationWaitForLoadingOptions
{
public:
	bool                                         WaitForReplicationToSettle;                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FunctionalTesting.AITestSpawnInfoBase
struct FAITestSpawnInfoBase
{
public:
	uint8                                        Pad_2098[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpawnLocation;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberToSpawn;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnDelay;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreSpawnDelay;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209B[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct FunctionalTesting.AITestSpawnInfo
struct FAITestSpawnInfo : public FAITestSpawnInfoBase
{
public:
	TSubclassOf<class APawn>                     PawnClass;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AAIController>             ControllerClass;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericTeamId                        TeamID;                                            // 0x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTree*                         BehaviorTree;                                      // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FunctionalTesting.PendingDelayedSpawn
struct FPendingDelayedSpawn
{
public:
	uint8                                        Pad_20A2[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FunctionalTesting.AITestSpawnSetBase
struct FAITestSpawnSetBase
{
public:
	uint8                                        Pad_20A5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_157 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_20A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                FallbackSpawnLocation;                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct FunctionalTesting.AITestSpawnSet
struct FAITestSpawnSet : public FAITestSpawnSetBase
{
public:
	TArray<struct FAITestSpawnInfo>              SpawnInfoContainer;                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x7 (0x7 - 0x0)
// ScriptStruct FunctionalTesting.TraceChannelTestBatchOptions
struct FTraceChannelTestBatchOptions
{
public:
	bool                                         bLineTrace;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSphereTrace;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapsuleTrace;                                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoxTrace;                                         // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChannelTrace;                                     // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bObjectsTrace;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProfileTrace;                                     // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FunctionalTesting.TraceQueryTestNames
struct FTraceQueryTestNames
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PhysicalMaterialName;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorName;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct FunctionalTesting.TraceQueryTestResultsInnerMost
struct FTraceQueryTestResultsInnerMost
{
public:
	struct FHitResult                            SingleHit;                                         // 0x0(0xE8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestNames                  SingleNames;                                       // 0xE8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSingleResult;                                     // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    MultiHits;                                         // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FTraceQueryTestNames>          MultiNames;                                        // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMultiResult;                                      // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C0 (0x4C0 - 0x0)
// ScriptStruct FunctionalTesting.TraceQueryTestResultsInner
struct FTraceQueryTestResultsInner
{
public:
	struct FTraceQueryTestResultsInnerMost       LineResults;                                       // 0x0(0x130)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInnerMost       SphereResults;                                     // 0x130(0x130)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInnerMost       CapsuleResults;                                    // 0x260(0x130)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInnerMost       BoxResults;                                        // 0x390(0x130)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}


