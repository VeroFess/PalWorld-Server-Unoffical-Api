#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EImGuiCanvasSizeType : uint8
{
	Custom                         = 0,
	Desktop                        = 1,
	Viewport                       = 2,
	EImGuiCanvasSizeType_MAX       = 3,
};

enum class EImGuiDPIScaleMethod : uint8
{
	ImGui                          = 0,
	Slate                          = 1,
	EImGuiDPIScaleMethod_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ImGui.ImGuiKeyInfo
struct FImGuiKeyInfo
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECheckBoxState                    Shift;                                             // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECheckBoxState                    Ctrl;                                              // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECheckBoxState                    Alt;                                               // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECheckBoxState                    Cmd;                                               // 0x1B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1264[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ImGui.ImGuiCanvasSizeInfo
struct FImGuiCanvasSizeInfo
{
public:
	enum class EImGuiCanvasSizeType              SizeType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1266[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Width;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExtendToViewport;                                 // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1268[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ImGui.ImGuiDPIScaleInfo
struct FImGuiDPIScaleInfo
{
public:
	enum class EImGuiDPIScaleMethod              ScalingMethod;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_126E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRuntimeFloatCurve                    DPICurve;                                          // 0x8(0x88)(Edit, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bScaleWithCurve;                                   // 0x90(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1271[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


