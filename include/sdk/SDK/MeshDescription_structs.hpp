#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EComputeNTBsOptions : uint8
{
	None                           = 0,
	Normals                        = 1,
	Tangents                       = 2,
	WeightedNTBs                   = 4,
	EComputeNTBsOptions_MAX        = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct MeshDescription.ElementID
struct FElementID
{
public:
	int32                                        IDValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexID
struct FVertexID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexInstanceID
struct FVertexInstanceID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.EdgeID
struct FEdgeID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.UVID
struct FUVID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.TriangleID
struct FTriangleID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonGroupID
struct FPolygonGroupID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonID
struct FPolygonID : public FElementID
{
public:
};

}


