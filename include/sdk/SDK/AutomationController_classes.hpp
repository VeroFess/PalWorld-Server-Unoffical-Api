#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class AutomationController.AutomationControllerSettings
class UAutomationControllerSettings : public UObject
{
public:
	TArray<struct FAutomatedTestGroup>           Groups;                                            // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bSuppressLogErrors;                                // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressLogWarnings;                              // 0x39(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bElevateLogWarningsToErrors;                       // 0x3A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C9[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SuppressedLogCategories;                           // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bKeepPIEOpen;                                      // 0x50(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTreatLogWarningsAsTestErrors;                     // 0x51(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8CA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CheckTestIntervalSeconds;                          // 0x54(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GameInstanceLostTimerSeconds;                      // 0x58(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TelemetryDirectory;                                // 0x60(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetTelemetryStorageOnNewSession;                // 0x70(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAutomationControllerSettings* GetDefaultObj();

};

}


