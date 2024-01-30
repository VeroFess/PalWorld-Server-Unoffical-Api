#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// Class FunctionalTesting.AutomationViewSettings
class UAutomationViewSettings : public UDataAsset
{
public:
	bool                                         AntiAliasing;                                      // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MotionBlur;                                        // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TemporalAA;                                        // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ScreenSpaceReflections;                            // 0x33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ScreenSpaceAO;                                     // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DistanceFieldAO;                                   // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ContactShadows;                                    // 0x36(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EyeAdaptation;                                     // 0x37(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bloom;                                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E66[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAutomationViewSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class FunctionalTesting.AutomationEditorTask
class UAutomationEditorTask : public UObject
{
public:
	uint8                                        Pad_1E6D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAutomationEditorTask* GetDefaultObj();

	bool IsValidTask();
	bool IsTaskDone();
};

// 0x0 (0x28 - 0x28)
// Class FunctionalTesting.AutomationBlueprintFunctionLibrary
class UAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAutomationBlueprintFunctionLibrary* GetDefaultObj();

	class UAutomationEditorTask* TakeHighResScreenshot(int32 ResX, int32 ResY, const class FString& Filename, class ACameraActor* Camera, bool bMaskEnabled, bool bCaptureHDR, enum class EComparisonTolerance ComparisonTolerance, const class FString& ComparisonNotes, float Delay);
	void TakeAutomationScreenshotOfUI(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name, struct FAutomationScreenshotOptions& Options);
	void TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, const class FString& Notes, struct FAutomationScreenshotOptions& Options);
	void TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name, const class FString& Notes, struct FAutomationScreenshotOptions& Options);
	void SetTestTelemetryStorage(const class FString& StorageName);
	void SetScalabilityQualityToLow(class UObject* WorldContextObject);
	void SetScalabilityQualityToEpic(class UObject* WorldContextObject);
	void SetScalabilityQualityLevelRelativeToMax(class UObject* WorldContextObject, int32 Value);
	void SetEditorViewportVisualizeBuffer(class FName BufferName);
	void SetEditorViewportViewMode(enum class EViewModeIndex Index);
	float GetStatIncMax(class FName StatName);
	float GetStatIncAverage(class FName StatName);
	float GetStatExcMax(class FName StatName);
	float GetStatExcAverage(class FName StatName);
	float GetStatCallCount(class FName StatName);
	struct FAutomationScreenshotOptions GetDefaultScreenshotOptionsForRendering(enum class EComparisonTolerance Tolerance, float Delay);
	struct FAutomationScreenshotOptions GetDefaultScreenshotOptionsForGameplay(enum class EComparisonTolerance Tolerance, float Delay);
	void FinishLoadingBeforeScreenshot();
	void EnableStatGroup(class UObject* WorldContextObject, class FName GroupName);
	void DisableStatGroup(class UObject* WorldContextObject, class FName GroupName);
	bool CompareImageAgainstReference(const class FString& ImageFilePath, const class FString& ComparisonName, enum class EComparisonTolerance ComparisonTolerance, const class FString& ComparisonNotes, class UObject* WorldContextObject);
	void AutomationWaitForLoading(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FAutomationWaitForLoadingOptions& Options);
	bool AreAutomatedTestsRunning();
	void AddTestTelemetryData(const class FString& DataPoint, float Measurement, const class FString& Context);
	void AddExpectedLogError(const class FString& ExpectedPatternString, int32 Occurrences, bool ExactMatch);
};

// 0x8 (0x540 - 0x538)
// Class FunctionalTesting.FuncTestRenderingComponent
class UFuncTestRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1F07[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFuncTestRenderingComponent* GetDefaultObj();

};

// 0x128 (0x3B8 - 0x290)
// Class FunctionalTesting.FunctionalTest
class AFunctionalTest : public AActor
{
public:
	class FString                                TestLabel;                                         // 0x290(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Author;                                            // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                   SpriteComponent;                                   // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_150 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2004[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFunctionalTestLogHandling        LogErrorHandling;                                  // 0x2CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFunctionalTestLogHandling        LogWarningHandling;                                // 0x2CD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2005[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ObservationPoint;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRandomStream                         RandomNumbersStream;                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	enum class EFunctionalTestResult             Result;                                            // 0x2E0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2008[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PreparationTimeLimit;                              // 0x2E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLimit;                                         // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2009[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TimesUpMessage;                                    // 0x2F0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EFunctionalTestResult             TimesUpResult;                                     // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTestPrepare;                                     // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTestStart;                                       // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTestFinished;                                    // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        AutoDestroyActors;                                 // 0x340(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_200C[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsRunning;                                        // 0x388(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200D[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TotalTime;                                         // 0x3A0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200E[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFunctionalTest* GetDefaultObj();

	void SetTimeLimit(float NewTimeLimit, enum class EFunctionalTestResult ResultWhenTimeRunsOut);
	void RegisterAutoDestroyActor(class AActor* ActorToAutoDestroy);
	void ReceiveStartTest();
	void ReceivePrepareTest();
	bool OnWantsReRunCheck();
	class FString OnAdditionalTestFinishedMessageRequest(enum class EFunctionalTestResult TestResult);
	void LogMessage(const class FString& Message);
	bool IsRunning();
	bool IsReady();
	bool IsEnabled();
	class FName GetCurrentRerunReason();
	void FinishTest(enum class EFunctionalTestResult TestResult, const class FString& Message);
	TArray<class AActor*> DebugGatherRelevantActors();
	bool AssertValue_Int(int32 Actual, enum class EComparisonMethod ShouldBe, int32 Expected, const class FString& What, class UObject* ContextObject);
	bool AssertValue_Float(float Actual, enum class EComparisonMethod ShouldBe, float Expected, const class FString& What, class UObject* ContextObject);
	bool AssertValue_Double(double Actual, enum class EComparisonMethod ShouldBe, double Expected, const class FString& What, class UObject* ContextObject);
	bool AssertValue_DateTime(const struct FDateTime& Actual, enum class EComparisonMethod ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject);
	bool AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject);
	bool AssertNotEqual_Vector4(const struct FVector4& Actual, const struct FVector4& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Transform(struct FTransform& Actual, struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Quat(const struct FQuat& Actual, const struct FQuat& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Plane(const struct FPlane& Actual, const struct FPlane& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Matrix(const struct FMatrix& Actual, const struct FMatrix& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Box2D(const struct FBox2D& Actual, const struct FBox2D& NotExpected, const class FString& What, class UObject* ContextObject);
	bool AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject);
	bool AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject);
	bool AssertEqual_Vector4(const struct FVector4& Actual, const struct FVector4& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Transform(struct FTransform& Actual, struct FTransform& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_TraceQueryResults(class UTraceQueryTestResults* Actual, class UTraceQueryTestResults* Expected, const class FString& What, class UObject* ContextObject);
	bool AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject);
	bool AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Plane(const struct FPlane& Actual, const struct FPlane& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& What, class UObject* ContextObject);
	bool AssertEqual_Name(class FName Actual, class FName Expected, const class FString& What, class UObject* ContextObject);
	bool AssertEqual_Matrix(const struct FMatrix& Actual, const struct FMatrix& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Int(int32 Actual, int32 Expected, const class FString& What, class UObject* ContextObject);
	bool AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Double(double Actual, double Expected, const class FString& What, double Tolerance, class UObject* ContextObject);
	bool AssertEqual_Box2D(const struct FBox2D& Actual, const struct FBox2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Bool(bool Actual, bool Expected, const class FString& What, class UObject* ContextObject);
	void AddWarning(const class FString& Message);
	void AddRerun(class FName Reason);
	void AddError(const class FString& Message);
};

// 0xA0 (0x458 - 0x3B8)
// Class FunctionalTesting.FunctionalAITestBase
class AFunctionalAITestBase : public AFunctionalTest
{
public:
	float                                        SpawnLocationRandomizationRange;                   // 0x3B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2033[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APawn*>                         SpawnedPawns;                                      // 0x3C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FPendingDelayedSpawn>          PendingDelayedSpawns;                              // 0x3D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        CurrentSpawnSetIndex;                              // 0x3E0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2038[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentSpawnSetName;                               // 0x3E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAISpawned;                                       // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAllAISPawned;                                    // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FVector                               NavMeshDebugOrigin;                                // 0x418(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NavMeshDebugExtent;                                // 0x430(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bWaitForNavMesh : 1;                               // Mask: 0x1, PropSize: 0x10x448(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDebugNavMeshOnTimeout : 1;                        // Mask: 0x2, PropSize: 0x10x448(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_203C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFunctionalAITestBase* GetDefaultObj();

	bool IsOneOfSpawnedPawns(class AActor* Actor);
};

// 0x10 (0x468 - 0x458)
// Class FunctionalTesting.FunctionalAITest
class AFunctionalAITest : public AFunctionalAITestBase
{
public:
	TArray<struct FAITestSpawnSet>               SpawnSets;                                         // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFunctionalAITest* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class FunctionalTesting.AutomationPerformaceHelper
class UAutomationPerformaceHelper : public UObject
{
public:
	uint8                                        Pad_2050[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAutomationPerformaceHelper* GetDefaultObj();

	void WriteLogFile(const class FString& CaptureDir, const class FString& CaptureExtension);
	void TriggerGPUTraceIfRecordFallsBelowBudget();
	void Tick(float DeltaSeconds);
	void StopCPUProfiling();
	void StartCPUProfiling();
	void Sample(float DeltaSeconds);
	void OnBeginTests();
	void OnAllTestsComplete();
	bool IsRecording();
	bool IsCurrentRecordWithinRenderThreadBudget();
	bool IsCurrentRecordWithinGPUBudget();
	bool IsCurrentRecordWithinGameThreadBudget();
	void EndStatsFile();
	void EndRecordingBaseline();
	void EndRecording();
	void BeginStatsFile(const class FString& RecordName);
	void BeginRecordingBaseline(const class FString& RecordName);
	void BeginRecording(const class FString& RecordName, float InGPUBudget, float InRenderThreadBudget, float InGameThreadBudget);
};

// 0x0 (0x330 - 0x330)
// Class FunctionalTesting.FunctionalTestGameMode
class AFunctionalTestGameMode : public AGameModeBase
{
public:

	static class UClass* StaticClass();
	static class AFunctionalTestGameMode* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class FunctionalTesting.FunctionalTestingManager
class UFunctionalTestingManager : public UBlueprintFunctionLibrary
{
public:
	TArray<class AFunctionalTest*>               TestsLeft;                                         // 0x28(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AFunctionalTest*>               AllTests;                                          // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetupTests;                                      // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTestsComplete;                                   // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTestsBegin;                                      // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_205B[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFunctionalTestingManager* GetDefaultObj();

	bool RunAllFunctionalTests(class UObject* WorldContextObject, bool bNewLog, bool bRunLooped, const class FString& FailedTestsReproString);
};

// 0x0 (0x290 - 0x290)
// Class FunctionalTesting.PhasedAutomationActorBase
class APhasedAutomationActorBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class APhasedAutomationActorBase* GetDefaultObj();

	void OnFunctionalTestingComplete();
	void OnFunctionalTestingBegin();
};

// 0x0 (0x298 - 0x298)
// Class FunctionalTesting.FunctionalTestLevelScript
class AFunctionalTestLevelScript : public ALevelScriptActor
{
public:

	static class UClass* StaticClass();
	static class AFunctionalTestLevelScript* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FunctionalTesting.FunctionalTestUtilityLibrary
class UFunctionalTestUtilityLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFunctionalTestUtilityLibrary* GetDefaultObj();

	class UTraceQueryTestResults* TraceChannelTestUtil(class UObject* WorldContextObject, struct FTraceChannelTestBatchOptions& BatchOptions, const struct FVector& Start, const struct FVector& End, float SphereCapsuleRadius, float CapsuleHalfHeight, const struct FVector& BoxHalfSize, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, const TArray<enum class EObjectTypeQuery>& ObjectTypes, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, bool bIgnoreSelf, enum class EDrawDebugTrace DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
};

// 0x80 (0x438 - 0x3B8)
// Class FunctionalTesting.ScreenshotFunctionalTestBase
class AScreenshotFunctionalTestBase : public AFunctionalTest
{
public:
	class FString                                Notes;                                             // 0x3B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                      ScreenshotCamera;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAutomationScreenshotOptions          ScreenshotOptions;                                 // 0x3D0(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, SimpleDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2075[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AScreenshotFunctionalTestBase* GetDefaultObj();

};

// 0x28 (0x460 - 0x438)
// Class FunctionalTesting.FunctionalUIScreenshotTest
class AFunctionalUIScreenshotTest : public AScreenshotFunctionalTestBase
{
public:
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x438(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           SpawnedWidget;                                     // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetTestAppearLocation         WidgetLocation;                                    // 0x448(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2079[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                ScreenshotRT;                                      // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideDebugCanvas;                                  // 0x458(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_207A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFunctionalUIScreenshotTest* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FunctionalTesting.GroundTruthData
class UGroundTruthData : public UObject
{
public:
	bool                                         bResetGroundTruth;                                 // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2081[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ObjectData;                                        // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGroundTruthData* GetDefaultObj();

	void SaveObject(class UObject* GroundTruth);
	class UObject* LoadObject();
	bool CanModify();
};

// 0x8 (0x440 - 0x438)
// Class FunctionalTesting.ScreenshotFunctionalTest
class AScreenshotFunctionalTest : public AScreenshotFunctionalTestBase
{
public:
	bool                                         bCameraCutOnScreenshotPrep;                        // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2087[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AScreenshotFunctionalTest* GetDefaultObj();

};

// 0x0 (0x2A0 - 0x2A0)
// Class FunctionalTesting.TestPhaseComponent
class UTestPhaseComponent : public USceneComponent
{
public:

	static class UClass* StaticClass();
	static class UTestPhaseComponent* GetDefaultObj();

};

// 0xE48 (0xE70 - 0x28)
// Class FunctionalTesting.TraceQueryTestResults
class UTraceQueryTestResults : public UObject
{
public:
	struct FTraceQueryTestResultsInner           ChannelResults;                                    // 0x28(0x4C0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInner           ObjectResults;                                     // 0x4E8(0x4C0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInner           ProfileResults;                                    // 0x9A8(0x4C0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceChannelTestBatchOptions         BatchOptions;                                      // 0xE68(0x7)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_208C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTraceQueryTestResults* GetDefaultObj();

	class FString ToString();
};

}


