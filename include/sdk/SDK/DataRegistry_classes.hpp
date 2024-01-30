#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// Class DataRegistry.DataRegistrySettings
class UDataRegistrySettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                DirectoriesToScan;                                 // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bInitializeAllLoadedRegistries;                    // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreMissingCookedAssetRegistryData;             // 0x49(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF1[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataRegistrySettings* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class DataRegistry.DataRegistry
class UDataRegistry : public UObject
{
public:
	class FName                                  RegistryType;                                      // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryIdFormat                 IdFormat;                                          // 0x30(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UScriptStruct*                         ItemStruct;                                        // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AssetRegistrySearchable, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>           DataSources;                                       // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>           RuntimeSources;                                    // 0x50(0x10)(Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        TimerUpdateFrequency;                              // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryCachePolicy              DefaultCachePolicy;                                // 0x64(0x14)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF9[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataRegistry* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DataRegistry.DataRegistrySource
class UDataRegistrySource : public UObject
{
public:
	uint8                                        Pad_AFB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataRegistrySource*                   ParentSource;                                      // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDataRegistrySource* GetDefaultObj();

};

// 0xD0 (0x108 - 0x38)
// Class DataRegistry.MetaDataRegistrySource
class UMetaDataRegistrySource : public UDataRegistrySource
{
public:
	enum class EMetaDataRegistrySourceAssetUsage AssetUsage;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssetManagerSearchRules              SearchRules;                                       // 0x40(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class UDataRegistrySource*> RuntimeChildren;                                   // 0x90(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_B01[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetaDataRegistrySource* GetDefaultObj();

};

// 0x70 (0xA8 - 0x38)
// Class DataRegistry.DataRegistrySource_CurveTable
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UCurveTable>            SourceTable;                                       // 0x38(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x68(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveTable*                           CachedTable;                                       // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           PreloadTable;                                      // 0x78(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B05[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataRegistrySource_CurveTable* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class DataRegistry.MetaDataRegistrySource_CurveTable
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_CurveTable> CreatedSource;                                     // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x110(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMetaDataRegistrySource_CurveTable* GetDefaultObj();

};

// 0x70 (0xA8 - 0x38)
// Class DataRegistry.DataRegistrySource_DataTable
class UDataRegistrySource_DataTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UDataTable>             SourceTable;                                       // 0x38(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x68(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            CachedTable;                                       // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            PreloadTable;                                      // 0x78(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B08[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataRegistrySource_DataTable* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class DataRegistry.MetaDataRegistrySource_DataTable
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_DataTable> CreatedSource;                                     // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x110(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMetaDataRegistrySource_DataTable* GetDefaultObj();

};

// 0x98 (0xC8 - 0x30)
// Class DataRegistry.DataRegistrySubsystem
class UDataRegistrySubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_B8D[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataRegistrySubsystem* GetDefaultObj();

	bool NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	bool NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	bool IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType);
	bool IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId);
	bool GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem);
	bool GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase& OutItem);
	void FindCachedItemBP(const struct FDataRegistryId& ItemId, enum class EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem);
	void EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue);
	bool EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	bool EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	class FString Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType);
	class FString Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId);
	bool AcquireItemBP(const struct FDataRegistryId& ItemId, FDelegateProperty_ AcquireCallback);
};

}


