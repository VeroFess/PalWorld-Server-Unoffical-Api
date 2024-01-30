#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonMessagingResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Cancelled                      = 2,
	Killed                         = 3,
	Unknown                        = 4,
	ECommonMessagingResult_MAX     = 5,
};

enum class ECommonKeybindForcedHoldStatus : uint8
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	ECommonKeybindForcedHoldStatus_MAX = 3,
};

enum class ELocalMultiplayerInteractionMode : uint8
{
	PrimaryOnly                    = 0,
	SingleToggle                   = 1,
	Simultaneous                   = 2,
	ELocalMultiplayerInteractionMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct CommonGame.MeasuredText
struct FMeasuredText
{
public:
	uint8                                        Pad_E5E[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonGame.RootViewportLayoutInfo
struct FRootViewportLayoutInfo
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimaryGameLayout*                    RootLayout;                                        // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddedToViewport;                                  // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E60[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonGame.ConfirmationDialogAction
struct FConfirmationDialogAction
{
public:
	enum class ECommonMessagingResult            Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E61[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OptionalDisplayText;                               // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


