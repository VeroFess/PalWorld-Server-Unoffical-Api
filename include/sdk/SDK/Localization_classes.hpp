#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Localization.LocalizationSettings
class ULocalizationSettings : public UObject
{
public:
	class ULocalizationTargetSet*                EngineTargetSet;                                   // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FLocalizationTargetSettings>   EngineTargetsSettings;                             // 0x30(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class ULocalizationTargetSet*                GameTargetSet;                                     // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FLocalizationTargetSettings>   GameTargetsSettings;                               // 0x48(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULocalizationSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Localization.LocalizationTargetSet
class ULocalizationTargetSet : public UObject
{
public:
	TArray<class ULocalizationTarget*>           TargetObjects;                                     // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULocalizationTargetSet* GetDefaultObj();

};

// 0x180 (0x1A8 - 0x28)
// Class Localization.LocalizationTarget
class ULocalizationTarget : public UObject
{
public:
	struct FLocalizationTargetSettings           Settings;                                          // 0x28(0x180)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULocalizationTarget* GetDefaultObj();

};

}


