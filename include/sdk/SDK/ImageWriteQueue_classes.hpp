#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ImageWriteQueue.ImageWriteBlueprintLibrary
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UImageWriteBlueprintLibrary* GetDefaultObj();

	void ExportToDisk(class UTexture* Texture, const class FString& Filename, struct FImageWriteOptions& Options);
};

}


