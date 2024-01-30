#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDataRegistryAcquireStatus : uint8
{
	NotStarted                     = 0,
	WaitingForInitialAcquire       = 1,
	InitialAcquireFinished         = 2,
	WaitingForResources            = 3,
	AcquireFinished                = 4,
	AcquireError                   = 5,
	DoesNotExist                   = 6,
	EDataRegistryAcquireStatus_MAX = 7,
};

enum class EMetaDataRegistrySourceAssetUsage : uint8
{
	NoAssets                       = 0,
	SearchAssets                   = 1,
	RegisterAssets                 = 2,
	SearchAndRegisterAssets        = 3,
	EMetaDataRegistrySourceAssetUsage_MAX = 4,
};

enum class EDataRegistrySubsystemGetItemResult : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	EDataRegistrySubsystemGetItemResult_MAX = 2,
};

enum class EDataRegistryAvailability : uint8
{
	DoesNotExist                   = 0,
	Unknown                        = 1,
	Remote                         = 2,
	OnDisk                         = 3,
	LocalAsset                     = 4,
	PreCached                      = 5,
	EDataRegistryAvailability_MAX  = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct DataRegistry.DataRegistryLookup
struct FDataRegistryLookup
{
public:
	uint8                                        Pad_B97[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataRegistry.DataRegistryType
struct FDataRegistryType
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DataRegistry.DataRegistryId
struct FDataRegistryId
{
public:
	struct FDataRegistryType                     RegistryType;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemName;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
struct FDataRegistrySource_DataTableRules
{
public:
	bool                                         bPrecacheTable;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CachedTableKeepSeconds;                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataRegistry.DataRegistryIdFormat
struct FDataRegistryIdFormat
{
public:
	struct FGameplayTag                          BaseGameplayTag;                                   // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct DataRegistry.DataRegistryCachePolicy
struct FDataRegistryCachePolicy
{
public:
	bool                                         bCacheIsAlwaysVolatile;                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurveTableCacheVersion;                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinNumberKept;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberKept;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForceKeepSeconds;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForceReleaseSeconds;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DataRegistry.DataRegistrySourceItemId
struct FDataRegistrySourceItemId
{
public:
	uint8                                        Pad_BA6[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


