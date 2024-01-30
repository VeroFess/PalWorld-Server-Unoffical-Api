#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAutomationState : uint8
{
	NotRun                         = 0,
	InProcess                      = 1,
	Fail                           = 2,
	Success                        = 3,
	Skipped                        = 4,
	EAutomationState_MAX           = 5,
};

enum class ERHI_Flags : uint8
{
	DirectX11                      = 1,
	DirectX12                      = 2,
	Vulkan                         = 4,
	Metal                          = 8,
	NUM                            = 9,
	ERHI_MAX                       = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct AutomationTest.AutomationTestExcludeOptions
struct FAutomationTestExcludeOptions
{
public:
	class FName                                  Test;                                              // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         RHIs;                                              // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Warn;                                              // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB0[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct AutomationTest.AutomationTestExcludelistEntry
struct FAutomationTestExcludelistEntry
{
public:
	uint8                                        Pad_CB4[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Map;                                               // 0x14(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Test;                                              // 0x1C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x24(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            RHIs;                                              // 0x30(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         Warn;                                              // 0x80(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


