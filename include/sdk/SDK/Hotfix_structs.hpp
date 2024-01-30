#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHotfixResult : uint8
{
	Failed                         = 0,
	Success                        = 1,
	SuccessNoChange                = 2,
	SuccessNeedsReload             = 3,
	SuccessNeedsRelaunch           = 4,
	EHotfixResult_MAX              = 5,
};

enum class EUpdateState : uint8
{
	UpdateIdle                     = 0,
	UpdatePending                  = 1,
	CheckingForPatch               = 2,
	DetectingPlatformEnvironment   = 3,
	CheckingForHotfix              = 4,
	WaitingOnInitialLoad           = 5,
	InitialLoadComplete            = 6,
	UpdateComplete                 = 7,
	EUpdateState_MAX               = 8,
};

enum class EUpdateCompletionStatus : uint8
{
	UpdateUnknown                  = 0,
	UpdateSuccess                  = 1,
	UpdateSuccess_NoChange         = 2,
	UpdateSuccess_NeedsReload      = 3,
	UpdateSuccess_NeedsRelaunch    = 4,
	UpdateSuccess_NeedsPatch       = 5,
	UpdateFailure_PatchCheck       = 6,
	UpdateFailure_HotfixCheck      = 7,
	UpdateFailure_NotLoggedIn      = 8,
	EUpdateCompletionStatus_MAX    = 9,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct Hotfix.UpdateContextDefinition
struct FUpdateContextDefinition
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckAvailabilityOnly;                            // 0x11(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPatchCheckEnabled;                                // 0x12(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlatformEnvironmentDetectionEnabled;              // 0x13(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FString>                          AdditionalTags;                                    // 0x18(0x50)(Config, NativeAccessSpecifierPublic)
};

}


