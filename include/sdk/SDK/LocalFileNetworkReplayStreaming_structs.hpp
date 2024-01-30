#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELocalFileReplayResult : uint8
{
	Success                        = 0,
	InvalidReplayInfo              = 1,
	StreamChunkIndexMismatch       = 2,
	DecompressBuffer               = 3,
	CompressionNotSupported        = 4,
	DecryptBuffer                  = 5,
	EncryptionNotSupported         = 6,
	Unknown                        = 7,
	ELocalFileReplayResult_MAX     = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


