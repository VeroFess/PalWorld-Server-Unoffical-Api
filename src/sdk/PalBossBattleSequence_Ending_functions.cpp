#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C
// (None)

class UClass* UPalBossBattleSequence_Ending_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PalBossBattleSequence_Ending_C");

	return Clss;
}


// PalBossBattleSequence_Ending_C PalBossBattleSequence_Ending.Default__PalBossBattleSequence_Ending_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPalBossBattleSequence_Ending_C* UPalBossBattleSequence_Ending_C::GetDefaultObj()
{
	static class UPalBossBattleSequence_Ending_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPalBossBattleSequence_Ending_C*>(UPalBossBattleSequence_Ending_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C.Gift
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APalPlayerCharacter*> GiftPlayers                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalNetworkTransmitter*      CallFunc_GetNetworkTransmitterByPlayerCharacter_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkPlayerComponent*  CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkBossBattleComponent*CallFunc_GetBossBattle_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBossType            CallFunc_GetBossType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*> CallFunc_GetAliveOrDyingPlayers_ReturnValue                      (ReferenceParm)
// class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetBossCharacter_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WriteBossDefeatRecord_ServerInternal_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalExpDatabase*             CallFunc_GetExpDatabase_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Ending_C::Gift(const TArray<class APalPlayerCharacter*>& GiftPlayers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APalNetworkTransmitter* CallFunc_GetNetworkTransmitterByPlayerCharacter_ReturnValue, class UPalNetworkPlayerComponent* CallFunc_GetPlayer_ReturnValue, class UPalNetworkBossBattleComponent* CallFunc_GetBossBattle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_1, TArray<class APalPlayerCharacter*>& CallFunc_GetAliveOrDyingPlayers_ReturnValue, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, bool CallFunc_WriteBossDefeatRecord_ServerInternal_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Ending_C", "Gift");

	Params::UPalBossBattleSequence_Ending_C_Gift_Params Parms{};

	Parms.GiftPlayers = GiftPlayers;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNetworkTransmitterByPlayerCharacter_ReturnValue = CallFunc_GetNetworkTransmitterByPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_GetBossBattle_ReturnValue = CallFunc_GetBossBattle_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetBossType_ReturnValue = CallFunc_GetBossType_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_1 = CallFunc_GetOuterSequencer_ReturnValue_1;
	Parms.CallFunc_GetAliveOrDyingPlayers_ReturnValue = CallFunc_GetAliveOrDyingPlayers_ReturnValue;
	Parms.CallFunc_GetBossBattleInstanceModel_ReturnValue = CallFunc_GetBossBattleInstanceModel_ReturnValue;
	Parms.CallFunc_GetBossCharacter_ReturnValue = CallFunc_GetBossCharacter_ReturnValue;
	Parms.CallFunc_WriteBossDefeatRecord_ServerInternal_ReturnValue = CallFunc_WriteBossDefeatRecord_ServerInternal_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetExpDatabase_ReturnValue = CallFunc_GetExpDatabase_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C.OnBeginSequence
// (Event, Public, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Ending_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Ending_C", "OnBeginSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C.ExecuteUbergraph_PalBossBattleSequence_Ending
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Ending_C::ExecuteUbergraph_PalBossBattleSequence_Ending(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetJoinedLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_3, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, bool CallFunc_IsServer_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Ending_C", "ExecuteUbergraph_PalBossBattleSequence_Ending");

	Params::UPalBossBattleSequence_Ending_C_ExecuteUbergraph_PalBossBattleSequence_Ending_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetJoinedLocalPlayer_ReturnValue = CallFunc_GetJoinedLocalPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue = CallFunc_GetJoinedLocalControlPlayer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


