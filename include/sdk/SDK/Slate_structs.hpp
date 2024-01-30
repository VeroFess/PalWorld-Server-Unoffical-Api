#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETextJustify : uint8
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ETextJustify_MAX               = 3,
};

enum class ETextFlowDirection : uint8
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ETextFlowDirection_MAX         = 3,
};

enum class EVirtualKeyboardDismissAction : uint8
{
	TextChangeOnDismiss            = 0,
	TextCommitOnAccept             = 1,
	TextCommitOnDismiss            = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

enum class EVirtualKeyboardTrigger : uint8
{
	OnFocusByPointer               = 0,
	OnAllFocusEvents               = 1,
	EVirtualKeyboardTrigger_MAX    = 2,
};

enum class ETextWrappingPolicy : uint8
{
	DefaultWrapping                = 0,
	AllowPerCharacterWrapping      = 1,
	ETextWrappingPolicy_MAX        = 2,
};

enum class ESelectionMode : uint8
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	ESelectionMode_MAX             = 4,
};

enum class ETableViewMode : uint8
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	ETableViewMode_MAX             = 3,
};

enum class EMultiBoxType : uint8
{
	MenuBar                        = 0,
	ToolBar                        = 1,
	VerticalToolBar                = 2,
	SlimHorizontalToolBar          = 3,
	UniformToolBar                 = 4,
	Menu                           = 5,
	ButtonRow                      = 6,
	EMultiBoxType_MAX              = 7,
};

enum class EMultiBlockType : uint8
{
	None                           = 0,
	ButtonRow                      = 1,
	EditableText                   = 2,
	Heading                        = 3,
	MenuEntry                      = 4,
	Separator                      = 5,
	ToolBarButton                  = 6,
	ToolBarComboButton             = 7,
	Widget                         = 8,
	EMultiBlockType_MAX            = 9,
};

enum class EDescendantScrollDestination : uint8
{
	IntoView                       = 0,
	TopOrLeft                      = 1,
	Center                         = 2,
	BottomOrRight                  = 3,
	EDescendantScrollDestination_MAX = 4,
};

enum class EScrollWhenFocusChanges : uint8
{
	NoScroll                       = 0,
	InstantScroll                  = 1,
	AnimatedScroll                 = 2,
	EScrollWhenFocusChanges_MAX    = 3,
};

enum class ECustomizedToolMenuVisibility : int32
{
	None                           = 0,
	Visible                        = 1,
	Hidden                         = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
};

enum class EUserInterfaceActionType : uint8
{
	None                           = 0,
	Button                         = 1,
	ToggleButton                   = 2,
	RadioButton                    = 3,
	Check                          = 4,
	CollapsedButton                = 5,
	EUserInterfaceActionType_MAX   = 6,
};

enum class EMultipleKeyBindingIndex : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	NumChords                      = 2,
	EMultipleKeyBindingIndex_MAX   = 3,
};

enum class EStretchDirection : uint8
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	EStretchDirection_MAX          = 3,
};

enum class EStretch : uint8
{
	None                           = 0,
	Fill                           = 1,
	ScaleToFit                     = 2,
	ScaleToFitX                    = 3,
	ScaleToFitY                    = 4,
	ScaleToFill                    = 5,
	ScaleBySafeZone                = 6,
	UserSpecified                  = 7,
	UserSpecifiedWithClipping      = 8,
	EStretch_MAX                   = 9,
};

enum class EProgressBarFillType : uint8
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	FillFromCenterHorizontal       = 3,
	FillFromCenterVertical         = 4,
	TopToBottom                    = 5,
	BottomToTop                    = 6,
	EProgressBarFillType_MAX       = 7,
};

enum class EProgressBarFillStyle : uint8
{
	Mask                           = 0,
	Scale                          = 1,
	EProgressBarFillStyle_MAX      = 2,
};

enum class EListItemAlignment : uint8
{
	EvenlyDistributed              = 0,
	EvenlySize                     = 1,
	EvenlyWide                     = 2,
	LeftAligned                    = 3,
	RightAligned                   = 4,
	CenterAligned                  = 5,
	Fill                           = 6,
	EListItemAlignment_MAX         = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Slate.VirtualKeyboardOptions
struct FVirtualKeyboardOptions
{
public:
	bool                                         bEnableAutocorrect;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Slate.InputChord
struct FInputChord
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShift : 1;                                        // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCtrl : 1;                                         // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlt : 1;                                          // Mask: 0x4, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCmd : 1;                                          // Mask: 0x8, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2433[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Slate.Anchors
struct FAnchors
{
public:
	struct FVector2D                             Minimum;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Maximum;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Slate.CustomizedToolMenuEntry
struct FCustomizedToolMenuEntry
{
public:
	enum class ECustomizedToolMenuVisibility     Visibility;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Slate.CustomizedToolMenuSection
struct FCustomizedToolMenuSection
{
public:
	enum class ECustomizedToolMenuVisibility     Visibility;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Slate.CustomizedToolMenuNameArray
struct FCustomizedToolMenuNameArray
{
public:
	TArray<class FName>                          Names;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct Slate.CustomizedToolMenu
struct FCustomizedToolMenu
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuEntry> Entries;                                           // 0x8(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuSection> Sections;                                          // 0x58(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuNameArray> EntryOrder;                                        // 0xA8(0x50)(NativeAccessSpecifierPublic)
	TArray<class FName>                          SectionOrder;                                      // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2446[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


