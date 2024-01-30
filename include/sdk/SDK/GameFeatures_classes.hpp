#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeatureStateChangeObserver
class IGameFeatureStateChangeObserver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameFeatureStateChangeObserver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeatureAction
class UGameFeatureAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameFeatureAction* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class GameFeatures.GameFeatureAction_AddCheats
class UGameFeatureAction_AddCheats : public UGameFeatureAction
{
public:
	TArray<TSoftClassPtr<class UCheatManagerExtension>> CheatManagers;                                     // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bLoadCheatManagersAsync;                           // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9F[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UCheatManagerExtension>> SpawnedCheatManagers;                              // 0x48(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AA0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddCheats* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameFeatures.GameFeatureAction_AddComponents
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureComponentEntry>    ComponentList;                                     // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA6[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddComponents* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GameFeatures.GameFeatureAction_AddWPContent
class UGameFeatureAction_AddWPContent : public UGameFeatureAction
{
public:
	class UContentBundleDescriptor*              ContentBundleDescriptor;                           // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AC4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddWPContent* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GameFeatures.GameFeatureAction_DataRegistry
class UGameFeatureAction_DataRegistry : public UGameFeatureAction
{
public:
	TArray<TSoftObjectPtr<class UDataRegistry>>  RegistriesToAdd;                                   // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bPreloadInEditor;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ACC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeatureAction_DataRegistry* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GameFeatures.GameFeatureAction_DataRegistrySource
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction
{
public:
	TArray<struct FDataRegistrySourceToAdd>      SourcesToAdd;                                      // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bPreloadInEditor;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AD7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeatureAction_DataRegistrySource* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameFeatures.GameFeatureData
class UGameFeatureData : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>            Actions;                                           // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryAssetTypeInfo>         PrimaryAssetTypesToScan;                           // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameFeatureData* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class GameFeatures.GameFeaturePluginStateMachine
class UGameFeaturePluginStateMachine : public UObject
{
public:
	uint8                                        Pad_AD9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameFeaturePluginStateMachineProperties StateProperties;                                   // 0x30(0xC8)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ADB[0xE8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeaturePluginStateMachine* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeaturesProjectPolicies
class UGameFeaturesProjectPolicies : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameFeaturesProjectPolicies* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.DefaultGameFeaturesProjectPolicies
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{
public:

	static class UClass* StaticClass();
	static class UDefaultGameFeaturesProjectPolicies* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class GameFeatures.GameFeaturesSubsystem
class UGameFeaturesSubsystem : public UEngineSubsystem
{
public:
	TMap<struct FGameFeaturePluginIdentifier, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;                    // 0x30(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines;            // 0x80(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF4[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       Observers;                                         // 0xE0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UGameFeaturesProjectPolicies*          GameSpecificPolicies;                              // 0xF0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeaturesSubsystem* GetDefaultObj();

};

// 0x60 (0x98 - 0x38)
// Class GameFeatures.GameFeaturesSubsystemSettings
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                        GameFeaturesManagerClassName;                      // 0x38(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        DisabledPlugins;                                   // 0x58(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        AdditionalPluginMetadataKeys;                      // 0x68(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFF[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeaturesSubsystemSettings* GetDefaultObj();

};

}


