#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class ScreenShotComparisonTools.ScreenShotComparisonSettings
class UScreenShotComparisonSettings : public UObject
{
public:
	bool                                         bUseConfidentialPlatformPathsForSavedResults;      // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FScreenshotFallbackEntry>      ScreenshotFallbackPlatforms;                       // 0x30(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScreenShotComparisonSettings* GetDefaultObj();

};

}


