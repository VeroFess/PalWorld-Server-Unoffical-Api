#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
struct UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
struct UBaseDynamicMeshComponent_SetShadowsEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
struct UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
struct UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Params
{
public:
	bool                                         bSetVisible;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
struct UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
struct UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
struct UBaseDynamicMeshComponent_SetEnableRaytracing_Params
{
public:
	bool                                         bSetEnabled;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
struct UBaseDynamicMeshComponent_SetEnableFlatShading_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
struct UBaseDynamicMeshComponent_SetConstantOverrideColor_Params
{
public:
	struct FColor                                NewColor;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
struct UBaseDynamicMeshComponent_SetColorOverrideMode_Params
{
public:
	enum class EDynamicMeshComponentColorOverrideMode NewMode;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
struct UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Params
{
public:
	int32                                        K;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
struct UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
struct UBaseDynamicMeshComponent_GetShadowsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
struct UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
struct UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
struct UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Params
{
public:
	int32                                        MaterialIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
struct UBaseDynamicMeshComponent_GetFlatShadingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
struct UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
struct UBaseDynamicMeshComponent_GetEnableRaytracing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
struct UBaseDynamicMeshComponent_GetDynamicMesh_Params
{
public:
	class UDynamicMesh*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
struct UBaseDynamicMeshComponent_GetConstantOverrideColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
struct UBaseDynamicMeshComponent_GetColorOverrideMode_Params
{
public:
	enum class EDynamicMeshComponentColorOverrideMode ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
struct UDynamicMeshComponent_ValidateMaterialSlots_Params
{
public:
	bool                                         bCreateIfMissing;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteExtraSlots;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.UpdateCollision
struct UDynamicMeshComponent_UpdateCollision_Params
{
public:
	bool                                         bOnlyIfPending;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.SetTangentsType
struct UDynamicMeshComponent_SetTangentsType_Params
{
public:
	enum class EDynamicMeshComponentTangentsMode NewTangentsType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh
struct UDynamicMeshComponent_SetDynamicMesh_Params
{
public:
	class UDynamicMesh*                          NewMesh;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
struct UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmediateUpdate;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
struct UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmediateUpdate;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.GetTangentsType
struct UDynamicMeshComponent_GetTangentsType_Params
{
public:
	enum class EDynamicMeshComponentTangentsMode ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
struct UDynamicMeshComponent_ConfigureMaterialSet_Params
{
public:
	TArray<class UMaterialInterface*>            NewMaterialSet;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
struct ADynamicMeshActor_ReleaseComputeMesh_Params
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1224[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
struct ADynamicMeshActor_GetDynamicMeshComponent_Params
{
public:
	class UDynamicMeshComponent*                 ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool
struct ADynamicMeshActor_GetComputeMeshPool_Params
{
public:
	class UDynamicMeshPool*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh
struct ADynamicMeshActor_AllocateComputeMesh_Params
{
public:
	class UDynamicMesh*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMesh.ResetToCube
struct UDynamicMesh_ResetToCube_Params
{
public:
	class UDynamicMesh*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMesh.Reset
struct UDynamicMesh_Reset_Params
{
public:
	class UDynamicMesh*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryFramework.DynamicMesh.IsEmpty
struct UDynamicMesh_IsEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GeometryFramework.DynamicMesh.GetTriangleCount
struct UDynamicMesh_GetTriangleCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMeshPool.ReturnMesh
struct UDynamicMeshPool_ReturnMesh_Params
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryFramework.DynamicMeshPool.RequestMesh
struct UDynamicMeshPool_RequestMesh_Params
{
public:
	class UDynamicMesh*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


