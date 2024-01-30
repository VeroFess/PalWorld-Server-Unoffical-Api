#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class AutomationTest.AutomationTestExcludelist
class UAutomationTestExcludelist : public UObject
{
public:
	TArray<struct FAutomationTestExcludelistEntry> ExcludeTest;                                       // 0x28(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAutomationTestExcludelist* GetDefaultObj();

};

}


