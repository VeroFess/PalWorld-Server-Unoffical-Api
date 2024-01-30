#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x50 - 0x40)
// BlueprintGeneratedClass PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C
class UPalBossBattleSequence_Ending_C : public UPalBossBattleSequenceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalBossBattleSequencer*               Sequencer;                                         // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPalBossBattleSequence_Ending_C* GetDefaultObj();

	void Gift(const TArray<class APalPlayerCharacter*>& GiftPlayers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APalNetworkTransmitter* CallFunc_GetNetworkTransmitterByPlayerCharacter_ReturnValue, class UPalNetworkPlayerComponent* CallFunc_GetPlayer_ReturnValue, class UPalNetworkBossBattleComponent* CallFunc_GetBossBattle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_1, TArray<class APalPlayerCharacter*>& CallFunc_GetAliveOrDyingPlayers_ReturnValue, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, bool CallFunc_WriteBossDefeatRecord_ServerInternal_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue);
	void OnBeginSequence();
	void ExecuteUbergraph_PalBossBattleSequence_Ending(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetJoinedLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_3, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, bool CallFunc_IsServer_ReturnValue_4);
};

}


