#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDynamicMeshComponentTangentsMode : uint8
{
	NoTangents                     = 0,
	AutoCalculated                 = 1,
	ExternallyProvided             = 2,
	EDynamicMeshComponentTangentsMode_MAX = 3,
};

enum class EDynamicMeshComponentColorOverrideMode : uint8
{
	None                           = 0,
	VertexColors                   = 1,
	Polygroups                     = 2,
	Constant                       = 3,
	EDynamicMeshComponentColorOverrideMode_MAX = 4,
};

enum class EDynamicMeshComponentRenderUpdateMode : uint8
{
	NoUpdate                       = 0,
	FullUpdate                     = 1,
	FastUpdate                     = 2,
	EDynamicMeshComponentRenderUpdateMode_MAX = 3,
};

enum class EDynamicMeshChangeType : uint8
{
	GeneralEdit                    = 0,
	MeshChange                     = 1,
	MeshReplacementChange          = 2,
	MeshVertexChange               = 3,
	DeformationEdit                = 4,
	AttributeEdit                  = 5,
	EDynamicMeshChangeType_MAX     = 6,
};

enum class EDynamicMeshAttributeChangeFlags : uint8
{
	Unknown                        = 0,
	MeshTopology                   = 1,
	VertexPositions                = 2,
	NormalsTangents                = 4,
	VertexColors                   = 8,
	UVs                            = 16,
	TriangleGroups                 = 32,
	EDynamicMeshAttributeChangeFlags_MAX = 33,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryFramework.DynamicMeshChangeInfo
struct FDynamicMeshChangeInfo
{
public:
	enum class EDynamicMeshChangeType            Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicMeshAttributeChangeFlags  Flags;                                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRevertChange;                                   // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BB[0x1D];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


