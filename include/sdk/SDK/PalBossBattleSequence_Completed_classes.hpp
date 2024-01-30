#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass PalBossBattleSequence_Completed.PalBossBattleSequence_Completed_C
class UPalBossBattleSequence_Completed_C : public UPalBossBattleSequenceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPalBossBattleSequence_Completed_C* GetDefaultObj();

	void WarpTowerTop(int32 Temp_int_Array_Index_Variable, class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetAliveOrDyingPlayers_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APalPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnBeginSequence();
	void ExecuteUbergraph_PalBossBattleSequence_Completed(int32 EntryPoint, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, bool CallFunc_IsServer_ReturnValue);
};

}


