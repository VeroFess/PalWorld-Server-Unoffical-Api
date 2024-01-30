#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0xF1 - 0x40)
// BlueprintGeneratedClass PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C
class UPalBossBattleSequence_Opening_C : public UPalBossBattleSequenceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequencePlayer*                  LSPlayer;                                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsEndCutscene;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEndSetBoss;                                      // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4871[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    PlayerPosList;                                     // 0x58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsPlayerFix;                                       // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4872[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameter_FadeWidget*   FadeParameter;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoaded;                                          // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4873[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalBossBattleLevelInstance*           BossRoom;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleInstanceModel*           InstanceModel;                                     // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCutscenePlayed;                                  // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTeleportEnd;                                     // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4874[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LevelLoadCheckTimer;                               // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         BGMBeginEvent;                                     // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         BGMLoopEvent;                                      // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          BGMLoopEventSoft;                                  // 0xB0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        LoadingAssetCount;                                 // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4875[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PalCustCeneActorClass;                             // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayIntroBGM;                                    // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPalBossBattleSequence_Opening_C* GetDefaultObj();

	void IsAssetLoadingCompleted(bool* NewParam, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void DecAssetLoadingCount(int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int64 CallFunc_Subtract_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue);
	void InitPlayerCameraRotation(class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, const struct FTransform& CallFunc_GetPlayerStartTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue);
	void CheckLevelInstanceLoaded(double DeltaTime, double AllLevelCheckTimeoutTIme, double CallFunc_Subtract_DoubleDouble_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_Int64ToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsAllLevelLoaded_ReturnValue, bool CallFunc_IsEditorBuild_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StartUIFadeOut(class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void StartUIFadeIn(bool CallFunc_IsSkipCutscene_Skip, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_FadeWidget* CallFunc_SpawnObject_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void GetLevelSpawnPos(struct FVector* Pos, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void FixPlayerPos(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetInRoomPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APalPlayerCharacter* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void DoSequenceFinish();
	void IsSkipCutscene(bool* Skip, bool CallFunc_IsValidClass_ReturnValue, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ActivateBossAI(class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, class APalPlayerCharacter* CallFunc_FindFirstCombatTargetForBossAI_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_1, class APalCharacter* CallFunc_GetBossCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_MonsterAIController_Boss_C* K2Node_DynamicCast_AsBP_Monster_AIController_Boss, bool K2Node_DynamicCast_bSuccess);
	void OnFinishCutscene(bool IsSkipped, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void PlayIntroMovie(class UClass* StartCutscene, class ALevelSequenceActor* LSActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetBossRoomSequenceRootActor_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, const struct FTransform& CallFunc_GetSequencerTransform_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APalCutsceneActor* CallFunc_SpawnCutsceneActor_ReturnValue, class UDefaultLevelSequenceInstanceData* K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data, bool K2Node_DynamicCast_bSuccess_1);
	void SetPlayerLocation_StartPoint(class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetInRoomPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalPlayerCharacter* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue, bool CallFunc_Teleport_ReturnValue);
	void LogShow(const class FString& String);
	void OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB(class UObject* Loaded);
	void OnLoaded_95B43418450294BEE8289E863350333C(class UObject* Loaded);
	void OnLoaded_87511D084D17A2720B719F91D617DC72(TSubclassOf<class UObject> Loaded);
	void FinishSequence(bool IsSuccess);
	void TickSequence(float DeltaTime);
	void _________0(class APalCharacter* SpawnedCharacter);
	void LoadedLevel();
	void SetupCutscene();
	void OnBeginSequence();
	void OnPlayerTeleported();
	void StartCustcene();
	void ExecuteUbergraph_PalBossBattleSequence_Opening(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded_2, class UObject* Temp_object_Variable, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_1, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPal_Cutscene_Actor, bool K2Node_ClassDynamicCast_bSuccess, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue, TArray<class APalPlayerCharacter*>& CallFunc_GetInRoomPlayers_ReturnValue, enum class EPalBossType CallFunc_GetBossType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsSkipCutscene_Skip, bool K2Node_Event_IsSuccess, bool CallFunc_IsServer_ReturnValue, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_1, float K2Node_Event_DeltaTime, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_2, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_3, class APalCharacter* K2Node_CustomEvent_SpawnedCharacter, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalSyncTeleportComponent* CallFunc_GetSyncTeleportComp_ReturnValue, class APalPlayerCharacter* CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_5, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalBossBattleSequencer* CallFunc_GetOuterSequencer_ReturnValue_6, class UPalBossBattleInstanceModel* CallFunc_GetBossBattleInstanceModel_ReturnValue_1, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_IsAssetLoadingCompleted_NewParam, bool CallFunc_IsAssetLoadingCompleted_NewParam_1, bool CallFunc_IsAssetLoadingCompleted_NewParam_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast);
};

}


