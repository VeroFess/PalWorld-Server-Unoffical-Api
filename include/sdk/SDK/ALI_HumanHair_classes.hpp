#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_HumanHair.ALI_HumanHair_C
class IALI_HumanHair_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_HumanHair_C* GetDefaultObj();

	void HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer);
};

}


