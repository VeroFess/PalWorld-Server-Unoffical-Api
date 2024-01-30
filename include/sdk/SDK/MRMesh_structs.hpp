#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMeshTrackerVertexColorMode : uint8
{
	None                           = 0,
	Confidence                     = 1,
	Block                          = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct MRMesh.MRMeshConfiguration
struct FMRMeshConfiguration
{
public:
	uint8                                        Pad_2543[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


