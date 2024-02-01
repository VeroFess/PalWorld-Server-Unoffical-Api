#pragma once

// Dumped with Dumper-7!


#include "SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function ToolMenus.ToolMenu.InitMenu
struct UToolMenu_InitMenu_Params
{
public:
	struct FToolMenuOwner                        Owner;                                             // 0x0(0x10)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Parent;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMultiBoxType                     Type;                                              // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ToolMenus.ToolMenu.AddSubMenuScript
struct UToolMenu_AddSubMenuScript_Params
{
public:
	class FName                                  Owner;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Tooltip;                                           // 0x30(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UToolMenu*                             ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ToolMenus.ToolMenu.AddSectionScript
struct UToolMenu_AddSectionScript_Params
{
public:
	class FName                                  SectionName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  InsertName;                                        // 0x20(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EToolMenuInsertType               InsertType;                                        // 0x28(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ToolMenus.ToolMenu.AddMenuEntryObject
struct UToolMenu_AddMenuEntryObject_Params
{
public:
	class UToolMenuEntryScript*                  InObject;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x308 (0x308 - 0x0)
// Function ToolMenus.ToolMenu.AddMenuEntry
struct UToolMenu_AddMenuEntry_Params
{
public:
	class FName                                  SectionName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuEntry                        Args;                                              // 0x8(0x300)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolMenus.ToolMenu.AddDynamicSectionScript
struct UToolMenu_AddDynamicSectionScript_Params
{
public:
	class FName                                  SectionName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UToolMenuSectionDynamic*               Object;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.IsVisible
struct UToolMenuEntryScript_IsVisible_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.InitEntry
struct UToolMenuEntryScript_InitEntry_Params
{
public:
	class FName                                  OwnerName;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Menu;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Section;                                           // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Tooltip;                                           // 0x38(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.GetToolTip
struct UToolMenuEntryScript_GetToolTip_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x68(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.GetLabel
struct UToolMenuEntryScript_GetLabel_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x68(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.GetIcon
struct UToolMenuEntryScript_GetIcon_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptSlateIcon                      ReturnValue;                                       // 0x68(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.GetCheckState
struct UToolMenuEntryScript_GetCheckState_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ECheckBoxState                    ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.Execute
struct UToolMenuEntryScript_Execute_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.ConstructMenuEntry
struct UToolMenuEntryScript_ConstructMenuEntry_Params
{
public:
	class UToolMenu*                             Menu;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuContext                      Context;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ToolMenus.ToolMenuEntryScript.CanExecute
struct UToolMenuEntryScript_CanExecute_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ToolMenus.ToolMenus.UnregisterOwnerByName
struct UToolMenus_UnregisterOwnerByName_Params
{
public:
	class FName                                  InOwnerName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ToolMenus.ToolMenus.SetSectionPosition
struct UToolMenus_SetSectionPosition_Params
{
public:
	class FName                                  MenuName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OtherSectionName;                                  // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EToolMenuInsertType               PositionType;                                      // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ToolMenus.ToolMenus.SetSectionLabel
struct UToolMenus_SetSectionLabel_Params
{
public:
	class FName                                  MenuName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x10(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolMenus.ToolMenus.RemoveSection
struct UToolMenus_RemoveSection_Params
{
public:
	class FName                                  MenuName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Section;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolMenus.ToolMenus.RemoveMenu
struct UToolMenus_RemoveMenu_Params
{
public:
	class FName                                  MenuName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ToolMenus.ToolMenus.RemoveEntry
struct UToolMenus_RemoveEntry_Params
{
public:
	class FName                                  MenuName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Section;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ToolMenus.ToolMenus.RegisterMenu
struct UToolMenus_RegisterMenu_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Parent;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMultiBoxType                     Type;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarnIfAlreadyRegistered;                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UToolMenu*                             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ToolMenus.ToolMenus.RefreshMenuWidget
struct UToolMenus_RefreshMenuWidget_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ToolMenus.ToolMenus.IsMenuRegistered
struct UToolMenus_IsMenuRegistered_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ToolMenus.ToolMenus.Get
struct UToolMenus_Get_Params
{
public:
	class UToolMenus*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolMenus.ToolMenus.FindMenu
struct UToolMenus_FindMenu_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UToolMenu*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ToolMenus.ToolMenus.FindContext
struct UToolMenus_FindContext_Params
{
public:
	struct FToolMenuContext                      InContext;                                         // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UClass*                                InClass;                                           // 0x68(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolMenus.ToolMenus.ExtendMenu
struct UToolMenus_ExtendMenu_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UToolMenu*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolMenus.ToolMenus.AddMenuEntryObject
struct UToolMenus_AddMenuEntryObject_Params
{
public:
	class UToolMenuEntryScript*                  MenuEntryObject;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function ToolMenus.ToolMenuContextExtensions.FindByClass
struct UToolMenuContextExtensions_FindByClass_Params
{
public:
	struct FToolMenuContext                      Context;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   InClass;                                           // 0x68(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x318 (0x318 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.SetToolTip
struct UToolMenuEntryExtensions_SetToolTip_Params
{
public:
	struct FToolMenuEntry                        Target;                                            // 0x0(0x300)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Tooltip;                                           // 0x300(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x320 (0x320 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.SetStringCommand
struct UToolMenuEntryExtensions_SetStringCommand_Params
{
public:
	struct FToolMenuEntry                        Target;                                            // 0x0(0x300)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EToolMenuStringCommandType        Type;                                              // 0x300(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomType;                                        // 0x304(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x310(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x318 (0x318 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.SetLabel
struct UToolMenuEntryExtensions_SetLabel_Params
{
public:
	struct FToolMenuEntry                        Target;                                            // 0x0(0x300)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x300(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x318 (0x318 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.SetIcon
struct UToolMenuEntryExtensions_SetIcon_Params
{
public:
	struct FToolMenuEntry                        Target;                                            // 0x0(0x300)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  StyleSetName;                                      // 0x300(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StyleName;                                         // 0x308(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SmallStyleName;                                    // 0x310(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.MakeToolMenuOwner
struct UToolMenuEntryExtensions_MakeToolMenuOwner_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuOwner                        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.MakeStringCommand
struct UToolMenuEntryExtensions_MakeStringCommand_Params
{
public:
	enum class EToolMenuStringCommandType        Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2501[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomType;                                        // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2502[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuStringCommand                ReturnValue;                                       // 0x20(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.MakeScriptSlateIcon
struct UToolMenuEntryExtensions_MakeScriptSlateIcon_Params
{
public:
	class FName                                  StyleSetName;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StyleName;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SmallStyleName;                                    // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptSlateIcon                      ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x360 (0x360 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.InitMenuEntry
struct UToolMenuEntryExtensions_InitMenuEntry_Params
{
public:
	class FName                                  InOwner;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InName;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InLabel;                                           // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  InToolTip;                                         // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EToolMenuStringCommandType        CommandType;                                       // 0x40(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomCommandType;                                 // 0x44(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CommandString;                                     // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuEntry                        ReturnValue;                                       // 0x60(0x300)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x318 (0x318 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.GetToolTip
struct UToolMenuEntryExtensions_GetToolTip_Params
{
public:
	struct FToolMenuEntry                        Target;                                            // 0x0(0x300)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x300(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x318 (0x318 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.GetLabel
struct UToolMenuEntryExtensions_GetLabel_Params
{
public:
	struct FToolMenuEntry                        Target;                                            // 0x0(0x300)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x300(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.BreakToolMenuOwner
struct UToolMenuEntryExtensions_BreakToolMenuOwner_Params
{
public:
	struct FToolMenuOwner                        InValue;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.BreakStringCommand
struct UToolMenuEntryExtensions_BreakStringCommand_Params
{
public:
	struct FToolMenuStringCommand                InValue;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EToolMenuStringCommandType        Type;                                              // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomType;                                        // 0x24(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ToolMenus.ToolMenuEntryExtensions.BreakScriptSlateIcon
struct UToolMenuEntryExtensions_BreakScriptSlateIcon_Params
{
public:
	struct FScriptSlateIcon                      InValue;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  StyleSetName;                                      // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StyleName;                                         // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SmallStyleName;                                    // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function ToolMenus.ToolMenuSectionExtensions.SetLabel
struct UToolMenuSectionExtensions_SetLabel_Params
{
public:
	struct FToolMenuSection                      Section;                                           // 0x0(0x110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x110(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function ToolMenus.ToolMenuSectionExtensions.GetLabel
struct UToolMenuSectionExtensions_GetLabel_Params
{
public:
	struct FToolMenuSection                      Section;                                           // 0x0(0x110)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x110(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function ToolMenus.ToolMenuSectionExtensions.AddEntryObject
struct UToolMenuSectionExtensions_AddEntryObject_Params
{
public:
	struct FToolMenuSection                      Section;                                           // 0x0(0x110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UToolMenuEntryScript*                  InObject;                                          // 0x110(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x410 (0x410 - 0x0)
// Function ToolMenus.ToolMenuSectionExtensions.AddEntry
struct UToolMenuSectionExtensions_AddEntry_Params
{
public:
	struct FToolMenuSection                      Section;                                           // 0x0(0x110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FToolMenuEntry                        Args;                                              // 0x110(0x300)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ToolMenus.ToolMenuSectionDynamic.ConstructSections
struct UToolMenuSectionDynamic_ConstructSections_Params
{
public:
	class UToolMenu*                             Menu;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolMenuContext                      Context;                                           // 0x8(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


