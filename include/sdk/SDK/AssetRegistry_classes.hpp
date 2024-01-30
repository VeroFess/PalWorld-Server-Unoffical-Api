#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistryHelpers
class UAssetRegistryHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAssetRegistryHelpers* GetDefaultObj();

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData);
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, TArray<struct FTagAndValue>& InTagsAndValues);
	bool IsValid(struct FAssetData& InAssetData);
	bool IsUAsset(struct FAssetData& InAssetData);
	bool IsRedirector(struct FAssetData& InAssetData);
	bool IsAssetLoaded(struct FAssetData& InAssetData);
	bool GetTagValue(struct FAssetData& InAssetData, class FName& InTagName, class FString* OutTagValue);
	class FString GetFullName(struct FAssetData& InAssetData);
	class FString GetExportTextName(struct FAssetData& InAssetData);
	class UClass* GetClass(struct FAssetData& InAssetData);
	void GetBlueprintAssets(struct FARFilter& InFilter, TArray<struct FAssetData>* OutAssetData);
	TScriptInterface<class IAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset(struct FAssetData& InAssetData);
	struct FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistry
class IAssetRegistry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetRegistry* GetDefaultObj();

	void WaitForPackage(const class FString& PackageName);
	void WaitForCompletion();
	void UseFilterToExcludeAssets(TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(TArray<class FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters);
	void ScanModifiedAssetFiles(TArray<class FString>& InFilePaths);
	void ScanFilesSynchronous(TArray<class FString>& InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter);
	void PrioritizeSearchPath(const class FString& PathToPrioritize);
	bool K2_GetReferencers(class FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers);
	bool K2_GetDependencies(class FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies);
	struct FAssetData K2_GetAssetByObjectPath(struct FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets);
	bool IsSearchAsync();
	bool IsSearchAllAssets();
	bool IsLoadingAssets();
	bool HasAssets(class FName PackagePath, bool bRecursive);
	void GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse);
	void GetDerivedClassNames(TArray<struct FTopLevelAssetPath>& ClassNames, TSet<struct FTopLevelAssetPath>& ExcludedClassNames, TSet<struct FTopLevelAssetPath>* OutDerivedClassNames);
	bool GetAssetsByPaths(const TArray<class FName>& PackagePaths, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPath(class FName PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(class FName PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets);
	bool GetAssetsByClass(const struct FTopLevelAssetPath& ClassPathName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses);
	bool GetAssets(struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData, bool bSkipARFilteredAssets);
	struct FAssetData GetAssetByObjectPath(class FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
	bool GetAncestorClassNames(const struct FTopLevelAssetPath& ClassPathName, TArray<struct FTopLevelAssetPath>* OutAncestorClassNames);
	void GetAllCachedPaths(TArray<class FString>* OutPathList);
	bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

// 0x998 (0x9C0 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_24E7[0x998];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

}


