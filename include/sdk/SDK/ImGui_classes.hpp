#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class ImGui.ImGuiInputHandler
class UImGuiInputHandler : public UObject
{
public:
	uint8                                        Pad_123A[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImGuiInputHandler* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class ImGui.ImGuiSettings
class UImGuiSettings : public UObject
{
public:
	struct FSoftClassPath                        ImGuiInputHandlerClass;                            // 0x28(0x20)(Edit, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShareKeyboardInput;                               // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShareGamepadInput;                                // 0x49(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShareMouseInput;                                  // 0x4A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseSoftwareCursor;                                // 0x4B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImGuiKeyInfo                         ToggleInput;                                       // 0x50(0x20)(Edit, Config, Protected, NativeAccessSpecifierProtected)
	struct FImGuiCanvasSizeInfo                  CanvasSize;                                        // 0x70(0x10)(Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FImGuiDPIScaleInfo                    DPIScale;                                          // 0x80(0x98)(Edit, Config, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UImGuiSettings* GetDefaultObj();

};

}


