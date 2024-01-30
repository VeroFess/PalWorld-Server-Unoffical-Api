#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x590 - 0x560)
// ControlRigBlueprintGeneratedClass CR_PlayerClavicleAdjust.CR_PlayerClavicleAdjust_C
class UCR_PlayerClavicleAdjust_C : public UControlRig
{
public:
	float                                        ClavicleAdjustFloat;                               // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73C[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigUnit_GetTransform_1_Transform_Rotation;         // 0x570(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_PlayerClavicleAdjust_C* GetDefaultObj();

};

// 0x134 (0x15C - 0x28)
// RigVMMemoryStorageGeneratorClass CR_PlayerClavicleAdjust.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___CollapseNode_RigUnit_GetTransform_1_Item__Const; // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___CollapseNode_RigUnit_GetTransform_1_Space__Const; // 0x34(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___CollapseNode_RigUnit_GetTransform_1_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x35(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_65 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_741[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___CollapseNode_RigUnit_SetTransform_Item__Const; // 0x38(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_742[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___CollapseNode_RigUnit_SetTransform_Value__Const; // 0x50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__Const; // 0xB0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_1_1_B__Const; // 0xC8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_RigUnit_SetTransform_Weight__Const; // 0xCC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___CollapseNode_RigUnit_SetTransform_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_66 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_745[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__Const; // 0xE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Item__Const; // 0x140(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___CollapseNode_1_RigUnit_SetTransform_Item__Const; // 0x14C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatMul_B__Const; // 0x158(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x5C8 (0x5F0 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_PlayerClavicleAdjust.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___CollapseNode_RigUnit_GetTransform_1_Transform; // 0x60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_RigUnit_GetTransform_1_CachedIndex; // 0xC0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___CollapseNode_MathQuaternionFromRotator_Result; // 0xD0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_1_Result;   // 0xF0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RigVMModel___CollapseNode_MathQuaternionToRotator_Result; // 0xF8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___CollapseNode_RigUnit_GetTransform_Transform; // 0x110(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_RigUnit_GetTransform_CachedIndex; // 0x170(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___CollapseNode_MathQuaternionToRotator_Value; // 0x180(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_1_A;        // 0x1A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_1_B;        // 0x1A4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_1_1_Result; // 0x1A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_1_1_A;      // 0x1AC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_Result;     // 0x1B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_MathFloatAdd_A;          // 0x1B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__IO; // 0x1B8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___CollapseNode_RigUnit_SetTransform_Value__IO; // 0x1D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_RigUnit_SetTransform_CachedIndex; // 0x230(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___CollapseNode_RigUnit_GetTransform_2_Transform; // 0x240(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_RigUnit_GetTransform_2_CachedIndex; // 0x2A0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__IO; // 0x2B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_RigUnit_SetTransform_1_CachedIndex; // 0x310(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Transform; // 0x320(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_CachedIndex; // 0x380(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Result; // 0x390(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatAdd_1_Result; // 0x3B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_750[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RigVMModel___CollapseNode_1_MathQuaternionToRotator_Result; // 0x3B8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___CollapseNode_1_RigUnit_GetTransform_Transform; // 0x3D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_1_RigUnit_GetTransform_CachedIndex; // 0x430(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___CollapseNode_1_MathQuaternionToRotator_Value; // 0x440(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatAdd_1_A;      // 0x460(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatMul_Result;   // 0x464(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatMul_A;        // 0x468(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatAdd_1_1_Result; // 0x46C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatAdd_1_1_A;    // 0x470(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatAdd_Result;   // 0x474(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CollapseNode_1_MathFloatAdd_A;        // 0x478(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_751[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Rotator__IO; // 0x480(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	uint8                                        Pad_753[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___CollapseNode_1_RigUnit_SetTransform_Value__IO; // 0x4A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_1_RigUnit_SetTransform_CachedIndex; // 0x500(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_Transform; // 0x510(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_CachedIndex; // 0x570(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_Value__IO; // 0x580(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_CachedIndex; // 0x5E0(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


