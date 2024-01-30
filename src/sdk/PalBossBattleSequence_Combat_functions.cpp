#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C
// (None)

class UClass* UPalBossBattleSequence_Combat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PalBossBattleSequence_Combat_C");

	return Clss;
}


// PalBossBattleSequence_Combat_C PalBossBattleSequence_Combat.Default__PalBossBattleSequence_Combat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPalBossBattleSequence_Combat_C* UPalBossBattleSequence_Combat_C::GetDefaultObj()
{
	static class UPalBossBattleSequence_Combat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPalBossBattleSequence_Combat_C*>(UPalBossBattleSequence_Combat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.CheckCombatFinish
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBossBattleSequencer*     Sequencer                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetBossCharacter_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllPlayerDead_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetBossCharacter_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetBossCharacter_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Combat_C::CheckCombatFinish(class UPalBossBattleSequencer* Sequencer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAllPlayerDead_ReturnValue, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue_2, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Combat_C", "CheckCombatFinish");

	Params::UPalBossBattleSequence_Combat_C_CheckCombatFinish_Params Parms{};

	Parms.Sequencer = Sequencer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetBossCharacter_ReturnValue = CallFunc_GetBossCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsAllPlayerDead_ReturnValue = CallFunc_IsAllPlayerDead_ReturnValue;
	Parms.CallFunc_GetBossCharacter_ReturnValue_1 = CallFunc_GetBossCharacter_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetBossCharacter_ReturnValue_2 = CallFunc_GetBossCharacter_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.SetTimerEnable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Combat_C::SetTimerEnable(bool IsEnable, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Combat_C", "SetTimerEnable");

	Params::UPalBossBattleSequence_Combat_C_SetTimerEnable_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.OnBeginSequence
// (Event, Public, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Combat_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Combat_C", "OnBeginSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.OnDeadBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPalBossBattleSequence_Combat_C::OnDeadBoss(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Combat_C", "OnDeadBoss");

	Params::UPalBossBattleSequence_Combat_C_OnDeadBoss_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.TickSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Combat_C::TickSequence(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Combat_C", "TickSequence");

	Params::UPalBossBattleSequence_Combat_C_TickSequence_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.ExecuteUbergraph_PalBossBattleSequence_Combat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class APalCharacter*               CallFunc_GetBossCharacter_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Combat_C::ExecuteUbergraph_PalBossBattleSequence_Combat(int32 EntryPoint, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_Event_DeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Combat_C", "ExecuteUbergraph_PalBossBattleSequence_Combat");

	Params::UPalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.CallFunc_GetBossCharacter_ReturnValue = CallFunc_GetBossCharacter_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


