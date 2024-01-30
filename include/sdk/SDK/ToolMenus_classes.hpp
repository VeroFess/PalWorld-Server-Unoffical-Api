#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x110 - 0x28)
// Class ToolMenus.ToolMenu
class UToolMenu : public UToolMenuBase
{
public:
	class FName                                  MenuName;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MenuParent;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StyleName;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TutorialHighlightName;                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMultiBoxType                     MenuType;                                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCleanupContextOnDestroy;                    // 0x49(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCloseWindowAfterMenuSelection;              // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseSelfOnly;                                    // 0x4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSearchable;                                       // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bToolBarIsFocusable;                               // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bToolBarForceSmallIcons;                           // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventCustomization;                             // 0x4F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuOwner                        MenuOwner;                                         // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuContext                      Context;                                           // 0x60(0x68)(NativeAccessSpecifierPublic)
	TArray<struct FToolMenuSection>              Sections;                                          // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UToolMenu*                             SubMenuParent;                                     // 0xD8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SubMenuSourceEntryName;                            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2493[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UToolMenu* GetDefaultObj();

	void InitMenu(const struct FToolMenuOwner& Owner, class FName Name, class FName Parent, enum class EMultiBoxType Type);
	class UToolMenu* AddSubMenuScript(class FName Owner, class FName SectionName, class FName Name, class FText& Label, class FText& Tooltip);
	void AddSectionScript(class FName SectionName, class FText& Label, class FName InsertName, enum class EToolMenuInsertType InsertType);
	void AddMenuEntryObject(class UToolMenuEntryScript* InObject);
	void AddMenuEntry(class FName SectionName, struct FToolMenuEntry& Args);
	void AddDynamicSectionScript(class FName SectionName, class UToolMenuSectionDynamic* Object);
};

// 0x0 (0x28 - 0x28)
// Class ToolMenus.ToolMenuContextBase
class UToolMenuContextBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuContextBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ToolMenus.SlateTabManagerContext
class USlateTabManagerContext : public UToolMenuContextBase
{
public:
	uint8                                        Pad_249D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlateTabManagerContext* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class ToolMenus.ToolMenuEntryScript
class UToolMenuEntryScript : public UObject
{
public:
	struct FToolMenuEntryScriptData              Data;                                              // 0x28(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UToolMenuEntryScript* GetDefaultObj();

	void RegisterMenuEntry();
	bool IsVisible(struct FToolMenuContext& Context);
	void InitEntry(class FName OwnerName, class FName Menu, class FName Section, class FName Name, class FText& Label, class FText& Tooltip);
	class FText GetToolTip(struct FToolMenuContext& Context);
	class FText GetLabel(struct FToolMenuContext& Context);
	struct FScriptSlateIcon GetIcon(struct FToolMenuContext& Context);
	enum class ECheckBoxState GetCheckState(struct FToolMenuContext& Context);
	void Execute(struct FToolMenuContext& Context);
	void ConstructMenuEntry(class UToolMenu* Menu, class FName SectionName, struct FToolMenuContext& Context);
	bool CanExecute(struct FToolMenuContext& Context);
};

// 0x238 (0x260 - 0x28)
// Class ToolMenus.ToolMenus
class UToolMenus : public UObject
{
public:
	uint8                                        Pad_24E9[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCustomizedToolMenu>           CustomizedMenus;                                   // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               MenuSubstitutionsDuringGenerate;                   // 0x98(0x50)(Edit, NativeAccessSpecifierPrivate)
	TMap<class FName, class UToolMenu*>          Menus;                                             // 0xE8(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24EB[0x128];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UToolMenus* GetDefaultObj();

	void UnregisterOwnerByName(class FName InOwnerName);
	void SetSectionPosition(class FName MenuName, class FName SectionName, class FName OtherSectionName, enum class EToolMenuInsertType PositionType);
	void SetSectionLabel(class FName MenuName, class FName SectionName, class FText Label);
	void RemoveSection(class FName MenuName, class FName Section);
	void RemoveMenu(class FName MenuName);
	void RemoveEntry(class FName MenuName, class FName Section, class FName Name);
	class UToolMenu* RegisterMenu(class FName Name, class FName Parent, enum class EMultiBoxType Type, bool bWarnIfAlreadyRegistered);
	bool RefreshMenuWidget(class FName Name);
	void RefreshAllWidgets();
	bool IsMenuRegistered(class FName Name);
	class UToolMenus* Get();
	class UToolMenu* FindMenu(class FName Name);
	class UObject* FindContext(struct FToolMenuContext& InContext, class UClass* InClass);
	class UToolMenu* ExtendMenu(class FName Name);
	bool AddMenuEntryObject(class UToolMenuEntryScript* MenuEntryObject);
};

// 0x0 (0x28 - 0x28)
// Class ToolMenus.ToolMenuContextExtensions
class UToolMenuContextExtensions : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuContextExtensions* GetDefaultObj();

	class UObject* FindByClass(struct FToolMenuContext& Context, TSubclassOf<class UObject> InClass);
};

// 0x0 (0x28 - 0x28)
// Class ToolMenus.ToolMenuEntryExtensions
class UToolMenuEntryExtensions : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuEntryExtensions* GetDefaultObj();

	void SetToolTip(struct FToolMenuEntry& Target, class FText& Tooltip);
	void SetStringCommand(struct FToolMenuEntry& Target, enum class EToolMenuStringCommandType Type, class FName CustomType, const class FString& String);
	void SetLabel(struct FToolMenuEntry& Target, class FText& Label);
	void SetIcon(struct FToolMenuEntry& Target, class FName StyleSetName, class FName StyleName, class FName SmallStyleName);
	struct FToolMenuOwner MakeToolMenuOwner(class FName Name);
	struct FToolMenuStringCommand MakeStringCommand(enum class EToolMenuStringCommandType Type, class FName CustomType, const class FString& String);
	struct FScriptSlateIcon MakeScriptSlateIcon(class FName StyleSetName, class FName StyleName, class FName SmallStyleName);
	struct FToolMenuEntry InitMenuEntry(class FName InOwner, class FName InName, class FText& InLabel, class FText& InToolTip, enum class EToolMenuStringCommandType CommandType, class FName CustomCommandType, const class FString& CommandString);
	class FText GetToolTip(struct FToolMenuEntry& Target);
	class FText GetLabel(struct FToolMenuEntry& Target);
	void BreakToolMenuOwner(struct FToolMenuOwner& InValue, class FName* Name);
	void BreakStringCommand(struct FToolMenuStringCommand& InValue, enum class EToolMenuStringCommandType* Type, class FName* CustomType, class FString* String);
	void BreakScriptSlateIcon(struct FScriptSlateIcon& InValue, class FName* StyleSetName, class FName* StyleName, class FName* SmallStyleName);
};

// 0x0 (0x28 - 0x28)
// Class ToolMenus.ToolMenuSectionExtensions
class UToolMenuSectionExtensions : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuSectionExtensions* GetDefaultObj();

	void SetLabel(struct FToolMenuSection& Section, class FText& Label);
	class FText GetLabel(struct FToolMenuSection& Section);
	void AddEntryObject(struct FToolMenuSection& Section, class UToolMenuEntryScript* InObject);
	void AddEntry(struct FToolMenuSection& Section, struct FToolMenuEntry& Args);
};

// 0x0 (0x28 - 0x28)
// Class ToolMenus.ToolMenuSectionDynamic
class UToolMenuSectionDynamic : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuSectionDynamic* GetDefaultObj();

	void ConstructSections(class UToolMenu* Menu, struct FToolMenuContext& Context);
};

}


