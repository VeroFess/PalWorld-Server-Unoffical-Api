#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class NISBlueprint.NISLibrary
class UNISLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNISLibrary* GetDefaultObj();

	void SetNISSharpness(float Sharpness);
	void SetNISMode(enum class EUNISMode NISMode);
	void SetNISCustomScreenPercentage(float CustomScreenPercentage);
	bool IsNISSupported();
	bool IsNISModeSupported(enum class EUNISMode NISMode);
	TArray<enum class EUNISMode> GetSupportedNISModes();
	void GetNISScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
	float GetNISRecommendedScreenPercentage(enum class EUNISMode NISMode);
	enum class EUNISMode GetDefaultNISMode();
};

}


