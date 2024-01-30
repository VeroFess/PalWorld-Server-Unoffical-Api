#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0x4A - 0x40)
// BlueprintGeneratedClass PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C
class UPalBossBattleSequence_Combat_C : public UPalBossBattleSequenceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsBossDead;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsResultCompleted;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPalBossBattleSequence_Combat_C* GetDefaultObj();

	void CheckCombatFinish(class UPalBossBattleSequencer* Sequencer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAllPlayerDead_ReturnValue, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue_2, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void SetTimerEnable(bool IsEnable, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue);
	void OnBeginSequence();
	void OnDeadBoss(const struct FPalDeadInfo& DeadInfo);
	void TickSequence(float DeltaTime);
	void ExecuteUbergraph_PalBossBattleSequence_Combat(int32 EntryPoint, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_Event_DeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


