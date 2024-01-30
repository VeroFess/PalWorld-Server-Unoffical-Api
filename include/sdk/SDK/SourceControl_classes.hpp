#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SourceControl.SourceControlHelpers
class USourceControlHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class USourceControlHelpers* GetDefaultObj();

	bool SyncFiles(TArray<class FString>& InFiles, bool bSilent);
	bool SyncFile(const class FString& InFile, bool bSilent);
	bool RevertUnchangedFiles(TArray<class FString>& InFiles, bool bSilent);
	bool RevertUnchangedFile(const class FString& InFile, bool bSilent);
	bool RevertFiles(TArray<class FString>& InFiles, bool bSilent);
	bool RevertFile(const class FString& InFile, bool bSilent);
	void QueryFileStateDelegate__DelegateSignature(const struct FSourceControlState& FileStateOut);
	struct FSourceControlState QueryFileState(const class FString& InFile, bool bSilent);
	bool MarkFilesForDelete(TArray<class FString>& InFiles, bool bSilent);
	bool MarkFilesForAdd(TArray<class FString>& InFiles, bool bSilent);
	bool MarkFileForDelete(const class FString& InFile, bool bSilent);
	bool MarkFileForAdd(const class FString& InFile, bool bSilent);
	class FText LastErrorMsg();
	bool IsEnabled();
	bool IsAvailable();
	class FString CurrentProvider();
	bool CopyFile(const class FString& InSourceFile, const class FString& InDestFile, bool bSilent);
	bool CheckOutOrAddFiles(TArray<class FString>& InFiles, bool bSilent);
	bool CheckOutOrAddFile(const class FString& InFile, bool bSilent);
	bool CheckOutFiles(TArray<class FString>& InFiles, bool bSilent);
	bool CheckOutFile(const class FString& InFile, bool bSilent);
	bool CheckInFiles(TArray<class FString>& InFiles, const class FString& InDescription, bool bSilent, bool bKeepCheckedOut);
	bool CheckInFile(const class FString& InFile, const class FString& InDescription, bool bSilent, bool bKeepCheckedOut);
	void AsyncQueryFileState(FDelegateProperty_ FileStateCallback, const class FString& InFile, bool bSilent);
};

// 0x68 (0xA0 - 0x38)
// Class SourceControl.SourceControlPreferences
class USourceControlPreferences : public UDeveloperSettings
{
public:
	bool                                         bEnableValidationTag;                              // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldDeleteNewFilesOnRevert;                     // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableUncontrolledChangelists;                    // 0x3A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CollectionChangelistTags;                          // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             SpecificCollectionChangelistTags;                  // 0x50(0x50)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceControlPreferences* GetDefaultObj();

};

}


