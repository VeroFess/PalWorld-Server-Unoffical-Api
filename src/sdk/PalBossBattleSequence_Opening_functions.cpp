#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C
// (None)

class UClass* UPalBossBattleSequence_Opening_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PalBossBattleSequence_Opening_C");

	return Clss;
}


// PalBossBattleSequence_Opening_C PalBossBattleSequence_Opening.Default__PalBossBattleSequence_Opening_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPalBossBattleSequence_Opening_C* UPalBossBattleSequence_Opening_C::GetDefaultObj()
{
	static class UPalBossBattleSequence_Opening_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPalBossBattleSequence_Opening_C*>(UPalBossBattleSequence_Opening_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.IsAssetLoadingCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::IsAssetLoadingCompleted(bool* NewParam, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "IsAssetLoadingCompleted");

	Params::UPalBossBattleSequence_Opening_C_IsAssetLoadingCompleted_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.DecAssetLoadingCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::DecAssetLoadingCount(int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int64 CallFunc_Subtract_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "DecAssetLoadingCount");

	Params::UPalBossBattleSequence_Opening_C_DecAssetLoadingCount_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue = CallFunc_Subtract_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.InitPlayerCameraRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetPlayerStartTransform_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::InitPlayerCameraRotation(class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, const struct FTransform& CallFunc_GetPlayerStartTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "InitPlayerCameraRotation");

	Params::UPalBossBattleSequence_Opening_C_InitPlayerCameraRotation_Params Parms{};

	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue = CallFunc_GetJoinedLocalControlPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerStartTransform_ReturnValue = CallFunc_GetPlayerStartTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1 = CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.CheckLevelInstanceLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AllLevelCheckTimeoutTIme                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_Int64ToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllLevelLoaded_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditorBuild_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::CheckLevelInstanceLoaded(double DeltaTime, double AllLevelCheckTimeoutTIme, double CallFunc_Subtract_DoubleDouble_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_Int64ToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsAllLevelLoaded_ReturnValue, bool CallFunc_IsEditorBuild_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "CheckLevelInstanceLoaded");

	Params::UPalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AllLevelCheckTimeoutTIme = AllLevelCheckTimeoutTIme;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_Int64ToString_ReturnValue = CallFunc_Conv_Int64ToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsAllLevelLoaded_ReturnValue = CallFunc_IsAllLevelLoaded_ReturnValue;
	Parms.CallFunc_IsEditorBuild_ReturnValue = CallFunc_IsEditorBuild_ReturnValue;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_GetBossBattleInstanceModel_ReturnValue = CallFunc_GetBossBattleInstanceModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.StartUIFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::StartUIFadeOut(class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "StartUIFadeOut");

	Params::UPalBossBattleSequence_Opening_C_StartUIFadeOut_Params Parms{};

	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue = CallFunc_GetJoinedLocalControlPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.StartUIFadeIn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsSkipCutscene_Skip                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_FadeWidget*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::StartUIFadeIn(bool CallFunc_IsSkipCutscene_Skip, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_FadeWidget* CallFunc_SpawnObject_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "StartUIFadeIn");

	Params::UPalBossBattleSequence_Opening_C_StartUIFadeIn_Params Parms{};

	Parms.CallFunc_IsSkipCutscene_Skip = CallFunc_IsSkipCutscene_Skip;
	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue = CallFunc_GetJoinedLocalControlPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.GetLevelSpawnPos
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBossType            CallFunc_GetBossType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::GetLevelSpawnPos(struct FVector* Pos, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "GetLevelSpawnPos");

	Params::UPalBossBattleSequence_Opening_C_GetLevelSpawnPos_Params Parms{};

	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetBossType_ReturnValue = CallFunc_GetBossType_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.FixPlayerPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*> CallFunc_GetInRoomPlayers_ReturnValue                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::FixPlayerPos(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetInRoomPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APalPlayerCharacter* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "FixPlayerPos");

	Params::UPalBossBattleSequence_Opening_C_FixPlayerPos_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_GetInRoomPlayers_ReturnValue = CallFunc_GetInRoomPlayers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.DoSequenceFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Opening_C::DoSequenceFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "DoSequenceFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.IsSkipCutscene
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Skip                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::IsSkipCutscene(bool* Skip, bool CallFunc_IsValidClass_ReturnValue, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "IsSkipCutscene");

	Params::UPalBossBattleSequence_Opening_C_IsSkipCutscene_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue = CallFunc_GetJoinedLocalControlPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Skip != nullptr)
		*Skip = Parms.Skip;

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.ActivateBossAI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_FindFirstCombatTargetForBossAI_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetBossCharacter_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Boss_C*K2Node_DynamicCast_AsBP_Monster_AIController_Boss                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::ActivateBossAI(class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, class APalPlayerCharacter* CallFunc_FindFirstCombatTargetForBossAI_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_1, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_MonsterAIController_Boss_C* K2Node_DynamicCast_AsBP_Monster_AIController_Boss, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "ActivateBossAI");

	Params::UPalBossBattleSequence_Opening_C_ActivateBossAI_Params Parms{};

	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_FindFirstCombatTargetForBossAI_ReturnValue = CallFunc_FindFirstCombatTargetForBossAI_ReturnValue;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_1 = CallFunc_GetOuterSequencer_ReturnValue_1;
	Parms.CallFunc_GetBossCharacter_ReturnValue = CallFunc_GetBossCharacter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Boss = K2Node_DynamicCast_AsBP_Monster_AIController_Boss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnFinishCutscene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSkipped                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::OnFinishCutscene(bool IsSkipped, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "OnFinishCutscene");

	Params::UPalBossBattleSequence_Opening_C_OnFinishCutscene_Params Parms{};

	Parms.IsSkipped = IsSkipped;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.PlayIntroMovie
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      StartCutscene                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         LSActor                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBossRoomSequenceRootActor_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSequencerTransform_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCutsceneActor*           CallFunc_SpawnCutsceneActor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDefaultLevelSequenceInstanceData*K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::PlayIntroMovie(class UClass* StartCutscene, class ALevelSequenceActor* LSActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetBossRoomSequenceRootActor_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, const struct FTransform& CallFunc_GetSequencerTransform_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APalCutsceneActor* CallFunc_SpawnCutsceneActor_ReturnValue, class UDefaultLevelSequenceInstanceData* K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "PlayIntroMovie");

	Params::UPalBossBattleSequence_Opening_C_PlayIntroMovie_Params Parms{};

	Parms.StartCutscene = StartCutscene;
	Parms.LSActor = LSActor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetBossRoomSequenceRootActor_ReturnValue = CallFunc_GetBossRoomSequenceRootActor_ReturnValue;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_GetSequencerTransform_ReturnValue = CallFunc_GetSequencerTransform_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue = CallFunc_GetJoinedLocalControlPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnCutsceneActor_ReturnValue = CallFunc_SpawnCutsceneActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data = K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.SetPlayerLocation_StartPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBossBattleManager*       CallFunc_GetBossBattleManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*> CallFunc_GetInRoomPlayers_ReturnValue                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuat                       CallFunc_Conv_RotatorToQuaternion_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Teleport_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::SetPlayerLocation_StartPoint(class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetInRoomPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalPlayerCharacter* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue, bool CallFunc_Teleport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "SetPlayerLocation_StartPoint");

	Params::UPalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint_Params Parms{};

	Parms.CallFunc_GetBossBattleManager_ReturnValue = CallFunc_GetBossBattleManager_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInRoomPlayers_ReturnValue = CallFunc_GetInRoomPlayers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue = CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Conv_RotatorToQuaternion_ReturnValue = CallFunc_Conv_RotatorToQuaternion_ReturnValue;
	Parms.CallFunc_Teleport_ReturnValue = CallFunc_Teleport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.LogShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::LogShow(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "LogShow");

	Params::UPalBossBattleSequence_Opening_C_LogShow_Params Parms{};

	Parms.String = String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB");

	Params::UPalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnLoaded_95B43418450294BEE8289E863350333C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::OnLoaded_95B43418450294BEE8289E863350333C(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "OnLoaded_95B43418450294BEE8289E863350333C");

	Params::UPalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnLoaded_87511D084D17A2720B719F91D617DC72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::OnLoaded_87511D084D17A2720B719F91D617DC72(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "OnLoaded_87511D084D17A2720B719F91D617DC72");

	Params::UPalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.FinishSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::FinishSequence(bool IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "FinishSequence");

	Params::UPalBossBattleSequence_Opening_C_FinishSequence_Params Parms{};

	Parms.IsSuccess = IsSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.TickSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::TickSequence(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "TickSequence");

	Params::UPalBossBattleSequence_Opening_C_TickSequence_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               SpawnedCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::_________0(class APalCharacter* SpawnedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "«¹¿à¤ÙóÈ_0");

	Params::UPalBossBattleSequence_Opening_C__________0_Params Parms{};

	Parms.SpawnedCharacter = SpawnedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.LoadedLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Opening_C::LoadedLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "LoadedLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.SetupCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Opening_C::SetupCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "SetupCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnBeginSequence
// (Event, Public, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Opening_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "OnBeginSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnPlayerTeleported
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Opening_C::OnPlayerTeleported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "OnPlayerTeleported");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.StartCustcene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPalBossBattleSequence_Opening_C::StartCustcene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "StartCustcene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.ExecuteUbergraph_PalBossBattleSequence_Opening
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsPal_Cutscene_Actor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*> CallFunc_GetInRoomPlayers_ReturnValue                            (ReferenceParm)
// enum class EPalBossType            CallFunc_GetBossType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkipCutscene_Skip                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsSuccess                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_SpawnedCharacter                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSyncTeleportComponent*   CallFunc_GetSyncTeleportComp_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_5                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleSequencer*     CallFunc_GetOuterSequencer_ReturnValue_6                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue_1                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetLoadingCompleted_NewParam                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetLoadingCompleted_NewParam_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetLoadingCompleted_NewParam_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Opening_C::ExecuteUbergraph_PalBossBattleSequence_Opening(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded_2, class UObject* Temp_object_Variable, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_1, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPal_Cutscene_Actor, bool K2Node_ClassDynamicCast_bSuccess, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetInRoomPlayers_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsSkipCutscene_Skip, bool K2Node_Event_IsSuccess, bool CallFunc_IsServer_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_1, float K2Node_Event_DeltaTime, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_2, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_3, class APalCharacter* K2Node_CustomEvent_SpawnedCharacter, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalSyncTeleportComponent* CallFunc_GetSyncTeleportComp_ReturnValue, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_5, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_6, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue_1, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_IsAssetLoadingCompleted_NewParam, bool CallFunc_IsAssetLoadingCompleted_NewParam_1, bool CallFunc_IsAssetLoadingCompleted_NewParam_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PalBossBattleSequence_Opening_C", "ExecuteUbergraph_PalBossBattleSequence_Opening");

	Params::UPalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_1 = K2Node_DynamicCast_AsAk_Audio_Event_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsPal_Cutscene_Actor = K2Node_ClassDynamicCast_AsPal_Cutscene_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetOuterSequencer_ReturnValue = CallFunc_GetOuterSequencer_ReturnValue;
	Parms.CallFunc_GetInRoomPlayers_ReturnValue = CallFunc_GetInRoomPlayers_ReturnValue;
	Parms.CallFunc_GetBossType_ReturnValue = CallFunc_GetBossType_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsSkipCutscene_Skip = CallFunc_IsSkipCutscene_Skip;
	Parms.K2Node_Event_IsSuccess = K2Node_Event_IsSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_1 = CallFunc_GetOuterSequencer_ReturnValue_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_2 = CallFunc_GetOuterSequencer_ReturnValue_2;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_3 = CallFunc_GetOuterSequencer_ReturnValue_3;
	Parms.K2Node_CustomEvent_SpawnedCharacter = K2Node_CustomEvent_SpawnedCharacter;
	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue = CallFunc_GetJoinedLocalControlPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSyncTeleportComp_ReturnValue = CallFunc_GetSyncTeleportComp_ReturnValue;
	Parms.CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1 = CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_4 = CallFunc_GetOuterSequencer_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_5 = CallFunc_GetOuterSequencer_ReturnValue_5;
	Parms.CallFunc_GetBossBattleInstanceModel_ReturnValue = CallFunc_GetBossBattleInstanceModel_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetOuterSequencer_ReturnValue_6 = CallFunc_GetOuterSequencer_ReturnValue_6;
	Parms.CallFunc_GetBossBattleInstanceModel_ReturnValue_1 = CallFunc_GetBossBattleInstanceModel_ReturnValue_1;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_IsAssetLoadingCompleted_NewParam = CallFunc_IsAssetLoadingCompleted_NewParam;
	Parms.CallFunc_IsAssetLoadingCompleted_NewParam_1 = CallFunc_IsAssetLoadingCompleted_NewParam_1;
	Parms.CallFunc_IsAssetLoadingCompleted_NewParam_2 = CallFunc_IsAssetLoadingCompleted_NewParam_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast = CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


