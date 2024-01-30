#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETaskResourceOverlapPolicy : uint8
{
	StartOnTop                     = 0,
	StartAtEnd                     = 1,
	RequestCancelAndStartOnTop     = 2,
	RequestCancelAndStartAtEnd     = 3,
	ETaskResourceOverlapPolicy_MAX = 4,
};

enum class EGameplayTaskState : uint8
{
	Uninitialized                  = 0,
	AwaitingActivation             = 1,
	Paused                         = 2,
	Active                         = 3,
	Finished                       = 4,
	EGameplayTaskState_MAX         = 5,
};

enum class EGameplayTaskRunResult : uint8
{
	Error                          = 0,
	Failed                         = 1,
	Success_Paused                 = 2,
	Success_Active                 = 3,
	Success_Finished               = 4,
	EGameplayTaskRunResult_MAX     = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct GameplayTasks.GameplayResourceSet
struct FGameplayResourceSet
{
public:
	uint8                                        Pad_4E5[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


