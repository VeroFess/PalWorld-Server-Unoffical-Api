#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_HumanCloth.ALI_HumanCloth_C
class IALI_HumanCloth_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_HumanCloth_C* GetDefaultObj();

	void ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer);
};

}


