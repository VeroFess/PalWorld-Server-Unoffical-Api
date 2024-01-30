#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Overlay.Overlays
class UOverlays : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOverlays* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Overlay.BasicOverlays
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                  Overlays;                                          // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBasicOverlays* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Overlay.LocalizedOverlays
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                        DefaultOverlays;                                   // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UBasicOverlays*>   LocaleToOverlaysMap;                               // 0x30(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULocalizedOverlays* GetDefaultObj();

};

}


