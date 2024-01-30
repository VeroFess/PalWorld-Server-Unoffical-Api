#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B78 (0x3188 - 0x610)
// AnimBlueprintGeneratedClass ABP_NPC_Base.ABP_NPC_Base_C
class UABP_NPC_Base_C : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x618(0x1C)(HasGetValueTypeHash)
	uint8                                        Pad_4220[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x638(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x640(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x648(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x668(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x730(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x838(0x28)(None)
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x860(0x1F0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xA50(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0xA70(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xAB8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0xAD8(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xB00(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0xB20(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0xBE8(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0xCF0(0xE0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0xDD0(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0xEB0(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0xFB8(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x10C0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x1108(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x1150(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x1178(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x11A0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x11E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1230(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1278(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x12C0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x1308(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x1330(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1358(0x48)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x13A0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1468(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x1488(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1590(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x15D8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x1600(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x1648(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1690(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x1770(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x1798(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x17C0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x17E8(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x18F0(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1938(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1958(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1A80(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1BA8(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1CD0(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1CF0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1D18(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1E20(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1E48(0x20)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x1E68(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x1F30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x1F58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x1F80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x1FA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x1FD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x1FF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x2020(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x2048(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x2070(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x20B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x20D8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x2120(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x2140(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x2188(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x21A8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2270(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2290(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x22B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x22E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x2308(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2330(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2358(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x2380(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x23C8(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x2410(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x2480(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x24A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x24E8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x2508(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2550(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x2598(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x25E0(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2600(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x2648(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x26B8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x2728(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2748(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x2790(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x27B0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x2878(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x2898(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2960(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x29A8(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x2A70(0xC8)(None)
	bool                                         K2Node_PropertyAccess_13;                          // 0x2B38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_12;                          // 0x2B39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4221[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              K2Node_PropertyAccess_11;                          // 0x2B40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               K2Node_PropertyAccess_10;                          // 0x2B58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess_9;                           // 0x2B70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4222[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_PropertyAccess_8;                           // 0x2B90(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_7;                           // 0x2BF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_6;                           // 0x2BF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4223[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalWeaponBase*                        K2Node_PropertyAccess_5;                           // 0x2BF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_4;                           // 0x2C00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_3;                           // 0x2C01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_2;                           // 0x2C02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4224[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_1;                           // 0x2C08(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponAnimationInfo                  K2Node_PropertyAccess;                             // 0x2C20(0x258)(None)
	struct FWeaponAnimationInfo                  WeaponInfo;                                        // 0x2E78(0x258)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             VelocityXY;                                        // 0x30D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Speed;                                             // 0x30E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAim;                                             // 0x30E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReloading;                                       // 0x30E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrouch;                                          // 0x30EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4225[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              AimRotatorForSpine;                                // 0x30F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEndJump;                                         // 0x3108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValidSprintAnimation;                            // 0x3109(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSprint;                                          // 0x310A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4226[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LeftHandTransform;                                 // 0x3110(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAttachLeftHand;                                  // 0x3170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4227[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalShooterComponent*                  TSCache_ShooterComponent;                          // 0x3178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         TSCache_OwnerPalCharacter;                         // 0x3180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_NPC_Base_C* GetDefaultObj();

	void NPC_HairClothLayer(const struct FPoseLink& InPose, struct FPoseLink* NPC_HairClothLayer);
	void LeftHandIK(const struct FPoseLink& InPose_LeftHand, struct FPoseLink* LeftHandIK);
	void WeaponUpper(const struct FPoseLink& InPose, struct FPoseLink* WeaponUpper);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime, double CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void ShooterComponentUpdate(class UPalShooterComponent* ShooterComponent, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ThreadSafe_ReturnValue, bool CallFunc_IsValid_ThreadSafe_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_0D482E0C4B2E4E7CD091E386E53618A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_40C8EDE3400634534A504B80F766E208();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_3AE6580A4F970316C15CF69E11CE9615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_BBD8BB9A4AAC9FE30FB9758FBD35CF09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_E2DE616E480579F7354F33B1777A4358();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F63282324F16651B07F04EA37B13D648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_8536992D4A36125389B06C90F08A99B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_FA0E6E324CA7134F3022AA94B20262ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendSpacePlayer_ECEA17A54981985346E400AE295C30FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_A843A5B240417E340E569DA258225C81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_103905184AD9AADFC2AC7783DC8F943D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F4C92C35456A21C307270A83D6D219A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_98F8247B476FFB0446F91DB7328341FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_B09EDEC94382438CC2EA92A0E18A09D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_A9D4C35A4750D9C872FF0F8E72859E1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_F009816844CF3DF7CEFF7DAA17E020BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_1D93E8984AE04BDD9AC072AC8F1B4CC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_FB87F47D45ADB262044FA6BC9B050E13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_41047BF041CF74296033DFA993D3480E();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_NPC_Base(int32 EntryPoint, enum class EWeaponAnimationPoseType Temp_byte_Variable, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue, enum class EWeaponAnimationPoseType Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue, class UAnimSequence* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FName CallFunc_GetCurrentStateName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, class FName CallFunc_GetCurrentStateName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, enum class EWeaponAnimationPoseType Temp_byte_Variable_2, float CallFunc_GetInstanceAssetPlayerTimeFraction_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, class UAnimSequence* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAnimSequence* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, enum class EWeaponAnimationPoseType Temp_byte_Variable_3, enum class EWeaponAnimationPoseType Temp_byte_Variable_4, class UAnimSequence* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UAnimSequence* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_IsZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class ABP_NPC_Base_C* K2Node_DynamicCast_AsBP_NPC_Base, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_9_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1);
};

}


