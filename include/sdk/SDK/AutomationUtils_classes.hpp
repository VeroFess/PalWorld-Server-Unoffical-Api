#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AutomationUtils.AutomationUtilsBlueprintLibrary
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAutomationUtilsBlueprintLibrary* GetDefaultObj();

	void TakeGameplayAutomationScreenshot(const class FString& ScreenShotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride);
};

}


