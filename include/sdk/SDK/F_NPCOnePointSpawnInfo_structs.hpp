#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// UserDefinedStruct F_NPCOnePointSpawnInfo.F_NPCOnePointSpawnInfo
struct FF_NPCOnePointSpawnInfo
{
public:
	class FName                                  NPCName_20_49D436044BDF9AB5328F69A3028EB5ED;       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueName_23_C5975EAD4D0039A24B86139AA5D04F66;    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Transform_2_38D8D0144FC1C0FB041C08AFE43B4A56;      // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OverrideControllerClass_15_6CC42151411B4921090B749ADA0E063F; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OverrideDefaultActionClass_16_698E88C544CC5063FF6DE691F6BEA5E9; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        OverrideLevel_17_248ED7A04C24B868F231F38B18A56DF2; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FF_NPC_PathWalkArray                  PathWalk_25_B786601A4A4C791196C63BAC2D2772DF;      // 0x88(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


