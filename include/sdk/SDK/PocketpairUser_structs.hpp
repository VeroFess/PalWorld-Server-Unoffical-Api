#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EJoinSessionResultType : uint8
{
	Success                        = 0,
	SessionIsFull                  = 1,
	SessionDoesNotExist            = 2,
	CouldNotRetrieveAddress        = 3,
	AlreadyInSession               = 4,
	UnknownError                   = 5,
	JoinSessionResultType_MAX      = 6,
};

enum class ELoginStatusType : uint8
{
	NotLoggedIn                    = 0,
	UsingLocalProfile              = 1,
	LoggedIn                       = 2,
	ELoginStatusType_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct PocketpairUser.SocialId
struct FSocialId
{
public:
	uint8                                        Pad_13BB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct PocketpairUser.PocketpairTelemetry
struct FPocketpairTelemetry
{
public:
	uint8                                        Pad_13BD[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct PocketpairUser.PocketpairTelemetry_Stat
struct FPocketpairTelemetry_Stat
{
public:
	uint8                                        Pad_13C0[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


