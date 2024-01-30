#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GooglePAD.GooglePADFunctionLibrary
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGooglePADFunctionLibrary* GetDefaultObj();

	enum class EGooglePADErrorCode ShowCellularDataConfirmation();
	enum class EGooglePADErrorCode RequestRemoval(const class FString& Name);
	enum class EGooglePADErrorCode RequestInfo(const TArray<class FString>& AssetPacks);
	enum class EGooglePADErrorCode RequestDownload(const TArray<class FString>& AssetPacks);
	void ReleaseDownloadState(int32 State);
	void ReleaseAssetPackLocation(int32 Location);
	int32 GetTotalBytesToDownload(int32 State);
	enum class EGooglePADStorageMethod GetStorageMethod(int32 Location);
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus* Status);
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32 State);
	enum class EGooglePADErrorCode GetDownloadState(const class FString& Name, int32* State);
	int32 GetBytesDownloaded(int32 State);
	class FString GetAssetsPath(int32 Location);
	enum class EGooglePADErrorCode GetAssetPackLocation(const class FString& Name, int32* Location);
	enum class EGooglePADErrorCode CancelDownload(const TArray<class FString>& AssetPacks);
};

}


