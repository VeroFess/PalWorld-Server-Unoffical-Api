#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xF0 - 0x28)
// Class SpreadSheetToCsv.SpreadSheetImpoter
class USpreadSheetImpoter : public UObject
{
public:
	uint8                                        Pad_1331[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGetResult;                                       // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ErrorLogger;                                       // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                            TargetDataTable;                                   // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                IgnoreRowIndexes;                                  // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  AutoUniqueIdColumnName;                            // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowNameHashColumnName;                             // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          MetaTagText_IgnoreRow;                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               BlueprintName2ObjectPathColumnNameMap;             // 0x90(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  BlueprintNamePrefix;                               // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoticeMessageAtNewRecordImported;                 // 0xE8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1337[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpreadSheetImpoter* GetDefaultObj();

	class FString ToCsvStringForLocalizedText(const class FString& PickCultureName);
	class FString ToCsvString();
	void PostProcessImport(bool* bAppliedPostProcess);
	bool IsExistNewRecord();
	class USpreadSheetImpoter* GetRequest(class FName SheetId, class FName SheetName, class FName Key);
	bool FromString(const class FString& Data);
	class FString CreateSheetUrlString(class FName SheetId, class FName SheetNameId);
	class USpreadSheetImpoter* Create();
};

// 0x0 (0x28 - 0x28)
// Class SpreadSheetToCsv.SpreadSheetUtility
class USpreadSheetUtility : public UObject
{
public:

	static class UClass* StaticClass();
	static class USpreadSheetUtility* GetDefaultObj();

};

}


