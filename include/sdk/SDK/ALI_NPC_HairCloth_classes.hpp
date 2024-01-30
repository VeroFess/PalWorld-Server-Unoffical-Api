#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_NPC_HairCloth.ALI_NPC_HairCloth_C
class IALI_NPC_HairCloth_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_NPC_HairCloth_C* GetDefaultObj();

	void NPC_HairClothLayer(const struct FPoseLink& InPose, struct FPoseLink* NPC_HairClothLayer);
};

}


