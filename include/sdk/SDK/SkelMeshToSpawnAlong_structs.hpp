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

// 0x92 (0x92 - 0x0)
// UserDefinedStruct SkelMeshToSpawnAlong.SkelMeshToSpawnAlong
struct FSkelMeshToSpawnAlong
{
public:
	class USkeletalMesh*                         Mesh_51_CE794D5C46E9032710913DB175C95C46;          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount_14_AB3ACCB543A8B45FE112759415C30A8E;        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4894[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale_17_04F27EDA46975BCF09325792404719FC;         // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleRandomizer_47_D49E9C5B458EECEF3C1E078C23525554; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnLengthSection_9_B4B968A14BB878D5AC8D17BC9CDD8EEC; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnLengthSectionTolerance_11_C1FB31FE46C753F43A9A79A3B0710F80; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinDistanceBetweenMeshes_20_79C72B424C0ACC42FF630A9B9AE702EA; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeightAboveSurface_50_1CACD2E64131FFFF9C6B7C989A46067C; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4895[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotation_34_1AD513CD4B492F41E959CE9B44BEB4FD;      // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseWorldRotation_41_3970C4BF4B586807AF22D6B70601E235; // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MinRandomRotation_44_C5993A264ECECFFDAEA007B94543C1AB; // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MaxRandomRotation_23_40F852C84C872A40B5C50AAF3C2471C1; // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnlyNearSurfaces_25_BC9A521B461BC39914A254AFC54E0C28; // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnlyMidAir_27_847896C14DCBBEE5CEC2C49306874759;    // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


