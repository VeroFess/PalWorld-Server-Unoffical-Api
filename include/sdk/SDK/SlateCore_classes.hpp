#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleAsset
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*        CustomStyle;                                       // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USlateWidgetStyleAsset* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class SlateCore.FontBulkData
class UFontBulkData : public UObject
{
public:
	uint8                                        Pad_2402[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFontBulkData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontFaceInterface
class IFontFaceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFontFaceInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontProviderInterface
class IFontProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFontProviderInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateTypes
class USlateTypes : public UObject
{
public:

	static class UClass* StaticClass();
	static class USlateTypes* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerBase
class USlateWidgetStyleContainerBase : public UObject
{
public:
	uint8                                        Pad_2409[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlateWidgetStyleContainerBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerInterface
class ISlateWidgetStyleContainerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISlateWidgetStyleContainerInterface* GetDefaultObj();

};

// 0x998 (0x9C0 - 0x28)
// Class SlateCore.SlateThemeManager
class USlateThemeManager : public UObject
{
public:
	struct FGuid                                 CurrentThemeId;                                    // 0x28(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStyleColorList                       ActiveColors;                                      // 0x38(0x988)(Edit, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USlateThemeManager* GetDefaultObj();

};

}


