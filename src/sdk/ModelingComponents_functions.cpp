#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
// (None)

class UClass* UMultiSelectionMeshEditingToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiSelectionMeshEditingToolBuilder");

	return Clss;
}


// MultiSelectionMeshEditingToolBuilder ModelingComponents.Default__MultiSelectionMeshEditingToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiSelectionMeshEditingToolBuilder* UMultiSelectionMeshEditingToolBuilder::GetDefaultObj()
{
	static class UMultiSelectionMeshEditingToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiSelectionMeshEditingToolBuilder*>(UMultiSelectionMeshEditingToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MultiSelectionMeshEditingTool
// (None)

class UClass* UMultiSelectionMeshEditingTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiSelectionMeshEditingTool");

	return Clss;
}


// MultiSelectionMeshEditingTool ModelingComponents.Default__MultiSelectionMeshEditingTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMultiSelectionMeshEditingTool* UMultiSelectionMeshEditingTool::GetDefaultObj()
{
	static class UMultiSelectionMeshEditingTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiSelectionMeshEditingTool*>(UMultiSelectionMeshEditingTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
// (None)

class UClass* USingleSelectionMeshEditingToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SingleSelectionMeshEditingToolBuilder");

	return Clss;
}


// SingleSelectionMeshEditingToolBuilder ModelingComponents.Default__SingleSelectionMeshEditingToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USingleSelectionMeshEditingToolBuilder* USingleSelectionMeshEditingToolBuilder::GetDefaultObj()
{
	static class USingleSelectionMeshEditingToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USingleSelectionMeshEditingToolBuilder*>(USingleSelectionMeshEditingToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SingleSelectionMeshEditingTool
// (None)

class UClass* USingleSelectionMeshEditingTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SingleSelectionMeshEditingTool");

	return Clss;
}


// SingleSelectionMeshEditingTool ModelingComponents.Default__SingleSelectionMeshEditingTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USingleSelectionMeshEditingTool* USingleSelectionMeshEditingTool::GetDefaultObj()
{
	static class USingleSelectionMeshEditingTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USingleSelectionMeshEditingTool*>(USingleSelectionMeshEditingTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
// (None)

class UClass* UMeshSurfacePointMeshEditingToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSurfacePointMeshEditingToolBuilder");

	return Clss;
}


// MeshSurfacePointMeshEditingToolBuilder ModelingComponents.Default__MeshSurfacePointMeshEditingToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSurfacePointMeshEditingToolBuilder* UMeshSurfacePointMeshEditingToolBuilder::GetDefaultObj()
{
	static class UMeshSurfacePointMeshEditingToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSurfacePointMeshEditingToolBuilder*>(UMeshSurfacePointMeshEditingToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.WeightMapSetProperties
// (None)

class UClass* UWeightMapSetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeightMapSetProperties");

	return Clss;
}


// WeightMapSetProperties ModelingComponents.Default__WeightMapSetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeightMapSetProperties* UWeightMapSetProperties::GetDefaultObj()
{
	static class UWeightMapSetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeightMapSetProperties*>(UWeightMapSetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UWeightMapSetProperties::GetWeightMapsFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeightMapSetProperties", "GetWeightMapsFunc");

	Params::UWeightMapSetProperties_GetWeightMapsFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelingComponents.BaseMeshProcessingTool
// (None)

class UClass* UBaseMeshProcessingTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMeshProcessingTool");

	return Clss;
}


// BaseMeshProcessingTool ModelingComponents.Default__BaseMeshProcessingTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBaseMeshProcessingTool* UBaseMeshProcessingTool::GetDefaultObj()
{
	static class UBaseMeshProcessingTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMeshProcessingTool*>(UBaseMeshProcessingTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseMeshProcessingToolBuilder
// (None)

class UClass* UBaseMeshProcessingToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMeshProcessingToolBuilder");

	return Clss;
}


// BaseMeshProcessingToolBuilder ModelingComponents.Default__BaseMeshProcessingToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseMeshProcessingToolBuilder* UBaseMeshProcessingToolBuilder::GetDefaultObj()
{
	static class UBaseMeshProcessingToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMeshProcessingToolBuilder*>(UBaseMeshProcessingToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseCreateFromSelectedTool
// (None)

class UClass* UBaseCreateFromSelectedTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCreateFromSelectedTool");

	return Clss;
}


// BaseCreateFromSelectedTool ModelingComponents.Default__BaseCreateFromSelectedTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBaseCreateFromSelectedTool* UBaseCreateFromSelectedTool::GetDefaultObj()
{
	static class UBaseCreateFromSelectedTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCreateFromSelectedTool*>(UBaseCreateFromSelectedTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// (None)

class UClass* UBaseCreateFromSelectedToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCreateFromSelectedToolBuilder");

	return Clss;
}


// BaseCreateFromSelectedToolBuilder ModelingComponents.Default__BaseCreateFromSelectedToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseCreateFromSelectedToolBuilder* UBaseCreateFromSelectedToolBuilder::GetDefaultObj()
{
	static class UBaseCreateFromSelectedToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCreateFromSelectedToolBuilder*>(UBaseCreateFromSelectedToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseVoxelTool
// (None)

class UClass* UBaseVoxelTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseVoxelTool");

	return Clss;
}


// BaseVoxelTool ModelingComponents.Default__BaseVoxelTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBaseVoxelTool* UBaseVoxelTool::GetDefaultObj()
{
	static class UBaseVoxelTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseVoxelTool*>(UBaseVoxelTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.GeometrySelectionEditCommand
// (None)

class UClass* UGeometrySelectionEditCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometrySelectionEditCommand");

	return Clss;
}


// GeometrySelectionEditCommand ModelingComponents.Default__GeometrySelectionEditCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometrySelectionEditCommand* UGeometrySelectionEditCommand::GetDefaultObj()
{
	static class UGeometrySelectionEditCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometrySelectionEditCommand*>(UGeometrySelectionEditCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.InteractiveToolActivity
// (None)

class UClass* UInteractiveToolActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveToolActivity");

	return Clss;
}


// InteractiveToolActivity ModelingComponents.Default__InteractiveToolActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveToolActivity* UInteractiveToolActivity::GetDefaultObj()
{
	static class UInteractiveToolActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveToolActivity*>(UInteractiveToolActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.DynamicMeshCommitter
// (None)

class UClass* IDynamicMeshCommitter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshCommitter");

	return Clss;
}


// DynamicMeshCommitter ModelingComponents.Default__DynamicMeshCommitter
// (Public, ClassDefaultObject, ArchetypeObject)

class IDynamicMeshCommitter* IDynamicMeshCommitter::GetDefaultObj()
{
	static class IDynamicMeshCommitter* Default = nullptr;

	if (!Default)
		Default = static_cast<IDynamicMeshCommitter*>(IDynamicMeshCommitter::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.DynamicMeshProvider
// (None)

class UClass* IDynamicMeshProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshProvider");

	return Clss;
}


// DynamicMeshProvider ModelingComponents.Default__DynamicMeshProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IDynamicMeshProvider* IDynamicMeshProvider::GetDefaultObj()
{
	static class IDynamicMeshProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IDynamicMeshProvider*>(IDynamicMeshProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PersistentDynamicMeshSource
// (None)

class UClass* IPersistentDynamicMeshSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentDynamicMeshSource");

	return Clss;
}


// PersistentDynamicMeshSource ModelingComponents.Default__PersistentDynamicMeshSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IPersistentDynamicMeshSource* IPersistentDynamicMeshSource::GetDefaultObj()
{
	static class IPersistentDynamicMeshSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IPersistentDynamicMeshSource*>(IPersistentDynamicMeshSource::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.GeometrySelectionManager
// (None)

class UClass* UGeometrySelectionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometrySelectionManager");

	return Clss;
}


// GeometrySelectionManager ModelingComponents.Default__GeometrySelectionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometrySelectionManager* UGeometrySelectionManager::GetDefaultObj()
{
	static class UGeometrySelectionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometrySelectionManager*>(UGeometrySelectionManager::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.ToolActivityHost
// (None)

class UClass* IToolActivityHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolActivityHost");

	return Clss;
}


// ToolActivityHost ModelingComponents.Default__ToolActivityHost
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolActivityHost* IToolActivityHost::GetDefaultObj()
{
	static class IToolActivityHost* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolActivityHost*>(IToolActivityHost::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.GeometrySelectionEditCommandArguments
// (None)

class UClass* UGeometrySelectionEditCommandArguments::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometrySelectionEditCommandArguments");

	return Clss;
}


// GeometrySelectionEditCommandArguments ModelingComponents.Default__GeometrySelectionEditCommandArguments
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometrySelectionEditCommandArguments* UGeometrySelectionEditCommandArguments::GetDefaultObj()
{
	static class UGeometrySelectionEditCommandArguments* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometrySelectionEditCommandArguments*>(UGeometrySelectionEditCommandArguments::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.VoxelProperties
// (None)

class UClass* UVoxelProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelProperties");

	return Clss;
}


// VoxelProperties ModelingComponents.Default__VoxelProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelProperties* UVoxelProperties::GetDefaultObj()
{
	static class UVoxelProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelProperties*>(UVoxelProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
// (None)

class UClass* UOnAcceptHandleSourcesPropertiesBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnAcceptHandleSourcesPropertiesBase");

	return Clss;
}


// OnAcceptHandleSourcesPropertiesBase ModelingComponents.Default__OnAcceptHandleSourcesPropertiesBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnAcceptHandleSourcesPropertiesBase* UOnAcceptHandleSourcesPropertiesBase::GetDefaultObj()
{
	static class UOnAcceptHandleSourcesPropertiesBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnAcceptHandleSourcesPropertiesBase*>(UOnAcceptHandleSourcesPropertiesBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.OnAcceptHandleSourcesProperties
// (None)

class UClass* UOnAcceptHandleSourcesProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnAcceptHandleSourcesProperties");

	return Clss;
}


// OnAcceptHandleSourcesProperties ModelingComponents.Default__OnAcceptHandleSourcesProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnAcceptHandleSourcesProperties* UOnAcceptHandleSourcesProperties::GetDefaultObj()
{
	static class UOnAcceptHandleSourcesProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnAcceptHandleSourcesProperties*>(UOnAcceptHandleSourcesProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// (None)

class UClass* UBaseCreateFromSelectedHandleSourceProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCreateFromSelectedHandleSourceProperties");

	return Clss;
}


// BaseCreateFromSelectedHandleSourceProperties ModelingComponents.Default__BaseCreateFromSelectedHandleSourceProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseCreateFromSelectedHandleSourceProperties* UBaseCreateFromSelectedHandleSourceProperties::GetDefaultObj()
{
	static class UBaseCreateFromSelectedHandleSourceProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCreateFromSelectedHandleSourceProperties*>(UBaseCreateFromSelectedHandleSourceProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.TransformInputsToolProperties
// (None)

class UClass* UTransformInputsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformInputsToolProperties");

	return Clss;
}


// TransformInputsToolProperties ModelingComponents.Default__TransformInputsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformInputsToolProperties* UTransformInputsToolProperties::GetDefaultObj()
{
	static class UTransformInputsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformInputsToolProperties*>(UTransformInputsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// (None)

class UClass* UDynamicMeshReplacementChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshReplacementChangeTarget");

	return Clss;
}


// DynamicMeshReplacementChangeTarget ModelingComponents.Default__DynamicMeshReplacementChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshReplacementChangeTarget* UDynamicMeshReplacementChangeTarget::GetDefaultObj()
{
	static class UDynamicMeshReplacementChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshReplacementChangeTarget*>(UDynamicMeshReplacementChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.OctreeDynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOctreeDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OctreeDynamicMeshComponent");

	return Clss;
}


// OctreeDynamicMeshComponent ModelingComponents.Default__OctreeDynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOctreeDynamicMeshComponent* UOctreeDynamicMeshComponent::GetDefaultObj()
{
	static class UOctreeDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOctreeDynamicMeshComponent*>(UOctreeDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                NewMesh                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOctreeDynamicMeshComponent::SetDynamicMesh(class UDynamicMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OctreeDynamicMeshComponent", "SetDynamicMesh");

	Params::UOctreeDynamicMeshComponent_SetDynamicMesh_Params Parms{};

	Parms.NewMesh = NewMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModelingComponents.LineSetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULineSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LineSetComponent");

	return Clss;
}


// LineSetComponent ModelingComponents.Default__LineSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULineSetComponent* ULineSetComponent::GetDefaultObj()
{
	static class ULineSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULineSetComponent*>(ULineSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshElementsVisualizerProperties
// (None)

class UClass* UMeshElementsVisualizerProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshElementsVisualizerProperties");

	return Clss;
}


// MeshElementsVisualizerProperties ModelingComponents.Default__MeshElementsVisualizerProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshElementsVisualizerProperties* UMeshElementsVisualizerProperties::GetDefaultObj()
{
	static class UMeshElementsVisualizerProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshElementsVisualizerProperties*>(UMeshElementsVisualizerProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PreviewGeometry
// (None)

class UClass* UPreviewGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewGeometry");

	return Clss;
}


// PreviewGeometry ModelingComponents.Default__PreviewGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UPreviewGeometry* UPreviewGeometry::GetDefaultObj()
{
	static class UPreviewGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UPreviewGeometry*>(UPreviewGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetPointSetVisibility(const class FString& PointSetIdentifier, bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetPointSetVisibility");

	Params::UPreviewGeometry_SetPointSetVisibility_Params Parms{};

	Parms.PointSetIdentifier = PointSetIdentifier;
	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetPointSetMaterial(const class FString& PointSetIdentifier, class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetPointSetMaterial");

	Params::UPreviewGeometry_SetPointSetMaterial_Params Parms{};

	Parms.PointSetIdentifier = PointSetIdentifier;
	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetLineSetVisibility");

	Params::UPreviewGeometry_SetLineSetVisibility_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;
	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetLineSetMaterial");

	Params::UPreviewGeometry_SetLineSetMaterial_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;
	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
// (Final, Native, Public)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::SetAllPointSetsMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetAllPointSetsMaterial");

	Params::UPreviewGeometry_SetAllPointSetsMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// (Final, Native, Public)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetAllLineSetsMaterial");

	Params::UPreviewGeometry_SetAllLineSetsMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.RemovePointSet
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::RemovePointSet(const class FString& PointSetIdentifier, bool bDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemovePointSet");

	Params::UPreviewGeometry_RemovePointSet_Params Parms{};

	Parms.PointSetIdentifier = PointSetIdentifier;
	Parms.bDestroy = bDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveLineSet");

	Params::UPreviewGeometry_RemoveLineSet_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;
	Parms.bDestroy = bDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
// (Final, Native, Public)
// Parameters:
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::RemoveAllPointSets(bool bDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveAllPointSets");

	Params::UPreviewGeometry_RemoveAllPointSets_Params Parms{};

	Parms.bDestroy = bDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// (Final, Native, Public)
// Parameters:
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::RemoveAllLineSets(bool bDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveAllLineSets");

	Params::UPreviewGeometry_RemoveAllLineSets_Params Parms{};

	Parms.bDestroy = bDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.GetActor
// (Final, Native, Public, Const)
// Parameters:
// class APreviewGeometryActor*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APreviewGeometryActor* UPreviewGeometry::GetActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "GetActor");

	Params::UPreviewGeometry_GetActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.FindPointSet
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointSetComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointSetComponent* UPreviewGeometry::FindPointSet(const class FString& PointSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "FindPointSet");

	Params::UPreviewGeometry_FindPointSet_Params Parms{};

	Parms.PointSetIdentifier = PointSetIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.FindLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::FindLineSet(const class FString& LineSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "FindLineSet");

	Params::UPreviewGeometry_FindLineSet_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.Disconnect
// (Final, Native, Public)
// Parameters:

void UPreviewGeometry::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "Disconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.CreateInWorld
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  WithTransform                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::CreateInWorld(class UWorld* World, struct FTransform& WithTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "CreateInWorld");

	Params::UPreviewGeometry_CreateInWorld_Params Parms{};

	Parms.World = World;
	Parms.WithTransform = WithTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.AddPointSet
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointSetComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointSetComponent* UPreviewGeometry::AddPointSet(const class FString& PointSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "AddPointSet");

	Params::UPreviewGeometry_AddPointSet_Params Parms{};

	Parms.PointSetIdentifier = PointSetIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.AddLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::AddLineSet(const class FString& LineSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "AddLineSet");

	Params::UPreviewGeometry_AddLineSet_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelingComponents.MeshElementsVisualizer
// (None)

class UClass* UMeshElementsVisualizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshElementsVisualizer");

	return Clss;
}


// MeshElementsVisualizer ModelingComponents.Default__MeshElementsVisualizer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshElementsVisualizer* UMeshElementsVisualizer::GetDefaultObj()
{
	static class UMeshElementsVisualizer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshElementsVisualizer*>(UMeshElementsVisualizer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshWireframeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMeshWireframeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshWireframeComponent");

	return Clss;
}


// MeshWireframeComponent ModelingComponents.Default__MeshWireframeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshWireframeComponent* UMeshWireframeComponent::GetDefaultObj()
{
	static class UMeshWireframeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshWireframeComponent*>(UMeshWireframeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PointSetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPointSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointSetComponent");

	return Clss;
}


// PointSetComponent ModelingComponents.Default__PointSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointSetComponent* UPointSetComponent::GetDefaultObj()
{
	static class UPointSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointSetComponent*>(UPointSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PreviewMesh
// (None)

class UClass* UPreviewMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewMesh");

	return Clss;
}


// PreviewMesh ModelingComponents.Default__PreviewMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UPreviewMesh* UPreviewMesh::GetDefaultObj()
{
	static class UPreviewMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UPreviewMesh*>(UPreviewMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PolyEditPreviewMesh
// (None)

class UClass* UPolyEditPreviewMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditPreviewMesh");

	return Clss;
}


// PolyEditPreviewMesh ModelingComponents.Default__PolyEditPreviewMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditPreviewMesh* UPolyEditPreviewMesh::GetDefaultObj()
{
	static class UPolyEditPreviewMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditPreviewMesh*>(UPolyEditPreviewMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PreviewGeometryActor
// (Actor)

class UClass* APreviewGeometryActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewGeometryActor");

	return Clss;
}


// PreviewGeometryActor ModelingComponents.Default__PreviewGeometryActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APreviewGeometryActor* APreviewGeometryActor::GetDefaultObj()
{
	static class APreviewGeometryActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewGeometryActor*>(APreviewGeometryActor::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.TriangleSetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTriangleSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TriangleSetComponent");

	return Clss;
}


// TriangleSetComponent ModelingComponents.Default__TriangleSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTriangleSetComponent* UTriangleSetComponent::GetDefaultObj()
{
	static class UTriangleSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTriangleSetComponent*>(UTriangleSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.UVLayoutPreviewProperties
// (None)

class UClass* UUVLayoutPreviewProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutPreviewProperties");

	return Clss;
}


// UVLayoutPreviewProperties ModelingComponents.Default__UVLayoutPreviewProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVLayoutPreviewProperties* UUVLayoutPreviewProperties::GetDefaultObj()
{
	static class UUVLayoutPreviewProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutPreviewProperties*>(UUVLayoutPreviewProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.UVLayoutPreview
// (None)

class UClass* UUVLayoutPreview::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutPreview");

	return Clss;
}


// UVLayoutPreview ModelingComponents.Default__UVLayoutPreview
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVLayoutPreview* UUVLayoutPreview::GetDefaultObj()
{
	static class UUVLayoutPreview* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutPreview*>(UUVLayoutPreview::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.CollectSurfacePathMechanic
// (None)

class UClass* UCollectSurfacePathMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectSurfacePathMechanic");

	return Clss;
}


// CollectSurfacePathMechanic ModelingComponents.Default__CollectSurfacePathMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UCollectSurfacePathMechanic* UCollectSurfacePathMechanic::GetDefaultObj()
{
	static class UCollectSurfacePathMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectSurfacePathMechanic*>(UCollectSurfacePathMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.ConstructionPlaneMechanic
// (None)

class UClass* UConstructionPlaneMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionPlaneMechanic");

	return Clss;
}


// ConstructionPlaneMechanic ModelingComponents.Default__ConstructionPlaneMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionPlaneMechanic* UConstructionPlaneMechanic::GetDefaultObj()
{
	static class UConstructionPlaneMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionPlaneMechanic*>(UConstructionPlaneMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.CurveControlPointsMechanic
// (None)

class UClass* UCurveControlPointsMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurveControlPointsMechanic");

	return Clss;
}


// CurveControlPointsMechanic ModelingComponents.Default__CurveControlPointsMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurveControlPointsMechanic* UCurveControlPointsMechanic::GetDefaultObj()
{
	static class UCurveControlPointsMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurveControlPointsMechanic*>(UCurveControlPointsMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.DragAlignmentMechanic
// (None)

class UClass* UDragAlignmentMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragAlignmentMechanic");

	return Clss;
}


// DragAlignmentMechanic ModelingComponents.Default__DragAlignmentMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragAlignmentMechanic* UDragAlignmentMechanic::GetDefaultObj()
{
	static class UDragAlignmentMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragAlignmentMechanic*>(UDragAlignmentMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.LatticeControlPointsMechanic
// (None)

class UClass* ULatticeControlPointsMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LatticeControlPointsMechanic");

	return Clss;
}


// LatticeControlPointsMechanic ModelingComponents.Default__LatticeControlPointsMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class ULatticeControlPointsMechanic* ULatticeControlPointsMechanic::GetDefaultObj()
{
	static class ULatticeControlPointsMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<ULatticeControlPointsMechanic*>(ULatticeControlPointsMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PlaneDistanceFromHitMechanic
// (None)

class UClass* UPlaneDistanceFromHitMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneDistanceFromHitMechanic");

	return Clss;
}


// PlaneDistanceFromHitMechanic ModelingComponents.Default__PlaneDistanceFromHitMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneDistanceFromHitMechanic* UPlaneDistanceFromHitMechanic::GetDefaultObj()
{
	static class UPlaneDistanceFromHitMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneDistanceFromHitMechanic*>(UPlaneDistanceFromHitMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PolyLassoMarqueeMechanic
// (None)

class UClass* UPolyLassoMarqueeMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyLassoMarqueeMechanic");

	return Clss;
}


// PolyLassoMarqueeMechanic ModelingComponents.Default__PolyLassoMarqueeMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyLassoMarqueeMechanic* UPolyLassoMarqueeMechanic::GetDefaultObj()
{
	static class UPolyLassoMarqueeMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyLassoMarqueeMechanic*>(UPolyLassoMarqueeMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.RectangleMarqueeMechanic
// (None)

class UClass* URectangleMarqueeMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RectangleMarqueeMechanic");

	return Clss;
}


// RectangleMarqueeMechanic ModelingComponents.Default__RectangleMarqueeMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class URectangleMarqueeMechanic* URectangleMarqueeMechanic::GetDefaultObj()
{
	static class URectangleMarqueeMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<URectangleMarqueeMechanic*>(URectangleMarqueeMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// (None)

class UClass* USpaceCurveDeformationMechanicPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceCurveDeformationMechanicPropertySet");

	return Clss;
}


// SpaceCurveDeformationMechanicPropertySet ModelingComponents.Default__SpaceCurveDeformationMechanicPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class USpaceCurveDeformationMechanicPropertySet* USpaceCurveDeformationMechanicPropertySet::GetDefaultObj()
{
	static class USpaceCurveDeformationMechanicPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<USpaceCurveDeformationMechanicPropertySet*>(USpaceCurveDeformationMechanicPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SpaceCurveDeformationMechanic
// (None)

class UClass* USpaceCurveDeformationMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceCurveDeformationMechanic");

	return Clss;
}


// SpaceCurveDeformationMechanic ModelingComponents.Default__SpaceCurveDeformationMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class USpaceCurveDeformationMechanic* USpaceCurveDeformationMechanic::GetDefaultObj()
{
	static class USpaceCurveDeformationMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<USpaceCurveDeformationMechanic*>(USpaceCurveDeformationMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SpatialCurveDistanceMechanic
// (None)

class UClass* USpatialCurveDistanceMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialCurveDistanceMechanic");

	return Clss;
}


// SpatialCurveDistanceMechanic ModelingComponents.Default__SpatialCurveDistanceMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class USpatialCurveDistanceMechanic* USpatialCurveDistanceMechanic::GetDefaultObj()
{
	static class USpatialCurveDistanceMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialCurveDistanceMechanic*>(USpatialCurveDistanceMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// (None)

class UClass* UMeshOpPreviewWithBackgroundCompute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshOpPreviewWithBackgroundCompute");

	return Clss;
}


// MeshOpPreviewWithBackgroundCompute ModelingComponents.Default__MeshOpPreviewWithBackgroundCompute
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshOpPreviewWithBackgroundCompute* UMeshOpPreviewWithBackgroundCompute::GetDefaultObj()
{
	static class UMeshOpPreviewWithBackgroundCompute* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshOpPreviewWithBackgroundCompute*>(UMeshOpPreviewWithBackgroundCompute::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.ModelingComponentsSettings
// (None)

class UClass* UModelingComponentsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModelingComponentsSettings");

	return Clss;
}


// ModelingComponentsSettings ModelingComponents.Default__ModelingComponentsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UModelingComponentsSettings* UModelingComponentsSettings::GetDefaultObj()
{
	static class UModelingComponentsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UModelingComponentsSettings*>(UModelingComponentsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.ModelingObjectsCreationAPI
// (None)

class UClass* UModelingObjectsCreationAPI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModelingObjectsCreationAPI");

	return Clss;
}


// ModelingObjectsCreationAPI ModelingComponents.Default__ModelingObjectsCreationAPI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModelingObjectsCreationAPI* UModelingObjectsCreationAPI::GetDefaultObj()
{
	static class UModelingObjectsCreationAPI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModelingObjectsCreationAPI*>(UModelingObjectsCreationAPI::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateTextureObjectParams  CreateTexParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCreateTextureObjectResult  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FCreateTextureObjectResult UModelingObjectsCreationAPI::CreateTextureObject(struct FCreateTextureObjectParams& CreateTexParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModelingObjectsCreationAPI", "CreateTextureObject");

	Params::UModelingObjectsCreationAPI_CreateTextureObject_Params Parms{};

	Parms.CreateTexParams = CreateTexParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateMeshObjectParams     CreateMeshParams                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FCreateMeshObjectResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FCreateMeshObjectResult UModelingObjectsCreationAPI::CreateMeshObject(struct FCreateMeshObjectParams& CreateMeshParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModelingObjectsCreationAPI", "CreateMeshObject");

	Params::UModelingObjectsCreationAPI_CreateMeshObject_Params Parms{};

	Parms.CreateMeshParams = CreateMeshParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelingComponents.PreviewMeshActor
// (Actor)

class UClass* APreviewMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewMeshActor");

	return Clss;
}


// PreviewMeshActor ModelingComponents.Default__PreviewMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APreviewMeshActor* APreviewMeshActor::GetDefaultObj()
{
	static class APreviewMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewMeshActor*>(APreviewMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.CreateMeshObjectTypeProperties
// (None)

class UClass* UCreateMeshObjectTypeProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreateMeshObjectTypeProperties");

	return Clss;
}


// CreateMeshObjectTypeProperties ModelingComponents.Default__CreateMeshObjectTypeProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreateMeshObjectTypeProperties* UCreateMeshObjectTypeProperties::GetDefaultObj()
{
	static class UCreateMeshObjectTypeProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreateMeshObjectTypeProperties*>(UCreateMeshObjectTypeProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreateMeshObjectTypeProperties::ShouldShowPropertySet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateMeshObjectTypeProperties", "ShouldShowPropertySet");

	Params::UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UCreateMeshObjectTypeProperties::GetOutputTypeNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateMeshObjectTypeProperties", "GetOutputTypeNamesFunc");

	Params::UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
// (Final, Native, Public, Const)
// Parameters:
// enum class ECreateObjectTypeHint   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreateObjectTypeHint UCreateMeshObjectTypeProperties::GetCurrentCreateMeshType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateMeshObjectTypeProperties", "GetCurrentCreateMeshType");

	Params::UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
// (None)

class UClass* UOnAcceptHandleSourcesPropertiesSingle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnAcceptHandleSourcesPropertiesSingle");

	return Clss;
}


// OnAcceptHandleSourcesPropertiesSingle ModelingComponents.Default__OnAcceptHandleSourcesPropertiesSingle
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnAcceptHandleSourcesPropertiesSingle* UOnAcceptHandleSourcesPropertiesSingle::GetDefaultObj()
{
	static class UOnAcceptHandleSourcesPropertiesSingle* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnAcceptHandleSourcesPropertiesSingle*>(UOnAcceptHandleSourcesPropertiesSingle::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PolygroupLayersProperties
// (None)

class UClass* UPolygroupLayersProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolygroupLayersProperties");

	return Clss;
}


// PolygroupLayersProperties ModelingComponents.Default__PolygroupLayersProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolygroupLayersProperties* UPolygroupLayersProperties::GetDefaultObj()
{
	static class UPolygroupLayersProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolygroupLayersProperties*>(UPolygroupLayersProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UPolygroupLayersProperties::GetGroupLayersFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PolygroupLayersProperties", "GetGroupLayersFunc");

	Params::UPolygroupLayersProperties_GetGroupLayersFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelingComponents.PersistentMeshSelection
// (None)

class UClass* UPersistentMeshSelection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentMeshSelection");

	return Clss;
}


// PersistentMeshSelection ModelingComponents.Default__PersistentMeshSelection
// (Public, ClassDefaultObject, ArchetypeObject)

class UPersistentMeshSelection* UPersistentMeshSelection::GetDefaultObj()
{
	static class UPersistentMeshSelection* Default = nullptr;

	if (!Default)
		Default = static_cast<UPersistentMeshSelection*>(UPersistentMeshSelection::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PersistentMeshSelectionManager
// (None)

class UClass* UPersistentMeshSelectionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentMeshSelectionManager");

	return Clss;
}


// PersistentMeshSelectionManager ModelingComponents.Default__PersistentMeshSelectionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPersistentMeshSelectionManager* UPersistentMeshSelectionManager::GetDefaultObj()
{
	static class UPersistentMeshSelectionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPersistentMeshSelectionManager*>(UPersistentMeshSelectionManager::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PolygonSelectionMechanicProperties
// (None)

class UClass* UPolygonSelectionMechanicProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolygonSelectionMechanicProperties");

	return Clss;
}


// PolygonSelectionMechanicProperties ModelingComponents.Default__PolygonSelectionMechanicProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolygonSelectionMechanicProperties* UPolygonSelectionMechanicProperties::GetDefaultObj()
{
	static class UPolygonSelectionMechanicProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolygonSelectionMechanicProperties*>(UPolygonSelectionMechanicProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.PolygonSelectionMechanicProperties.SelectAll
// (Final, Native, Public)
// Parameters:

void UPolygonSelectionMechanicProperties::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PolygonSelectionMechanicProperties", "SelectAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PolygonSelectionMechanicProperties.InvertSelection
// (Final, Native, Public)
// Parameters:

void UPolygonSelectionMechanicProperties::InvertSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PolygonSelectionMechanicProperties", "InvertSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModelingComponents.PolygonSelectionMechanic
// (None)

class UClass* UPolygonSelectionMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolygonSelectionMechanic");

	return Clss;
}


// PolygonSelectionMechanic ModelingComponents.Default__PolygonSelectionMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolygonSelectionMechanic* UPolygonSelectionMechanic::GetDefaultObj()
{
	static class UPolygonSelectionMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolygonSelectionMechanic*>(UPolygonSelectionMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.ModelingSceneSnappingManager
// (None)

class UClass* UModelingSceneSnappingManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModelingSceneSnappingManager");

	return Clss;
}


// ModelingSceneSnappingManager ModelingComponents.Default__ModelingSceneSnappingManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UModelingSceneSnappingManager* UModelingSceneSnappingManager::GetDefaultObj()
{
	static class UModelingSceneSnappingManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UModelingSceneSnappingManager*>(UModelingSceneSnappingManager::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MultiTransformer
// (None)

class UClass* UMultiTransformer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTransformer");

	return Clss;
}


// MultiTransformer ModelingComponents.Default__MultiTransformer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTransformer* UMultiTransformer::GetDefaultObj()
{
	static class UMultiTransformer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTransformer*>(UMultiTransformer::StaticClass()->DefaultObject);

	return Default;
}

}


