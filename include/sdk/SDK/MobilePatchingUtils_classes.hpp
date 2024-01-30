#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class MobilePatchingUtils.MobileInstalledContent
class UMobileInstalledContent : public UObject
{
public:
	uint8                                        Pad_21CF[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMobileInstalledContent* GetDefaultObj();

	bool Mount(int32 PakOrder, const class FString& MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};

// 0x40 (0x88 - 0x48)
// Class MobilePatchingUtils.MobilePendingContent
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	uint8                                        Pad_21D1[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMobilePendingContent* GetDefaultObj();

	void StartInstall(FDelegateProperty_ OnSucceeded, FDelegateProperty_ OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	class FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};

// 0x0 (0x28 - 0x28)
// Class MobilePatchingUtils.MobilePatchingLibrary
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMobilePatchingLibrary* GetDefaultObj();

	void RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, FDelegateProperty_ OnSucceeded, FDelegateProperty_ OnFailed);
	bool HasActiveWiFiConnection();
	TArray<class FString> GetSupportedPlatformNames();
	class UMobileInstalledContent* GetInstalledContent(const class FString& InstallDirectory);
	class FString GetActiveDeviceProfileName();
};

}


