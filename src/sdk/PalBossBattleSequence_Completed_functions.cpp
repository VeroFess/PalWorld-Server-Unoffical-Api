#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PalBossBattleSequence_Completed.PalBossBattleSequence_Completed_C
// (None)

class UClass* UPalBossBattleSequence_Completed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PalBossBattleSequence_Completed_C");

	return Clss;
}


// PalBossBattleSequence_Completed_C PalBossBattleSequence_Completed.Default__PalBossBattleSequence_Completed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPalBossBattleSequence_Completed_C* UPalBossBattleSequence_Completed_C::GetDefaultObj()
{
	static class UPalBossBattleSequence_Completed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPalBossBattleSequence_Completed_C*>(UPalBossBattleSequence_Completed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PalBossBattleSequence_Completed.PalBossBattleSequence_Completed_C.WarpTowerTop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleManager*       CallFunc_GetBossBattleManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalBossType            CallFunc_GetBossType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*> CallFunc_GetAliveOrDyingPlayers_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Completed_C::WarpTowerTop(int32 Temp_int_Array_Index_Variable, class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetAliveOrDyingPlayers_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APalPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Completed_C", "WarpTowerTop");

	Params::UPalBossBattleSequence_Completed_C_WarpTowerTop_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetBossBattleManager_ReturnValue = CallFunc_GetBossBattleManager_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_GetBossType_ReturnValue = CallFunc_GetBossType_ReturnValue;
	Parms.CallFunc_GetAliveOrDyingPlayers_ReturnValue = CallFunc_GetAliveOrDyingPlayers_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Completed.PalBossBattleSequence_Completed_C.OnBeginSequence
// (Event, Public, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Completed_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Completed_C", "OnBeginSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Completed.PalBossBattleSequence_Completed_C.ExecuteUbergraph_PalBossBattleSequence_Completed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Completed_C::ExecuteUbergraph_PalBossBattleSequence_Completed(int32 EntryPoint, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Completed_C", "ExecuteUbergraph_PalBossBattleSequence_Completed");

	Params::UPalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


