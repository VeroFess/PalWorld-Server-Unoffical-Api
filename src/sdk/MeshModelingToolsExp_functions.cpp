#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshModelingToolsExp.BakeInputMeshProperties
// (None)

class UClass* UBakeInputMeshProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeInputMeshProperties");

	return Clss;
}


// BakeInputMeshProperties MeshModelingToolsExp.Default__BakeInputMeshProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeInputMeshProperties* UBakeInputMeshProperties::GetDefaultObj()
{
	static class UBakeInputMeshProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeInputMeshProperties*>(UBakeInputMeshProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeInputMeshProperties::GetTargetUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeInputMeshProperties", "GetTargetUVLayerNamesFunc");

	Params::UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeInputMeshProperties::GetSourceUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeInputMeshProperties", "GetSourceUVLayerNamesFunc");

	Params::UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeNormalMapToolProperties
// (None)

class UClass* UBakeNormalMapToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeNormalMapToolProperties");

	return Clss;
}


// BakeNormalMapToolProperties MeshModelingToolsExp.Default__BakeNormalMapToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeNormalMapToolProperties* UBakeNormalMapToolProperties::GetDefaultObj()
{
	static class UBakeNormalMapToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeNormalMapToolProperties*>(UBakeNormalMapToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeOcclusionMapToolProperties
// (None)

class UClass* UBakeOcclusionMapToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeOcclusionMapToolProperties");

	return Clss;
}


// BakeOcclusionMapToolProperties MeshModelingToolsExp.Default__BakeOcclusionMapToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeOcclusionMapToolProperties* UBakeOcclusionMapToolProperties::GetDefaultObj()
{
	static class UBakeOcclusionMapToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeOcclusionMapToolProperties*>(UBakeOcclusionMapToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeCurvatureMapToolProperties
// (None)

class UClass* UBakeCurvatureMapToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeCurvatureMapToolProperties");

	return Clss;
}


// BakeCurvatureMapToolProperties MeshModelingToolsExp.Default__BakeCurvatureMapToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeCurvatureMapToolProperties* UBakeCurvatureMapToolProperties::GetDefaultObj()
{
	static class UBakeCurvatureMapToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeCurvatureMapToolProperties*>(UBakeCurvatureMapToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeTexture2DProperties
// (None)

class UClass* UBakeTexture2DProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeTexture2DProperties");

	return Clss;
}


// BakeTexture2DProperties MeshModelingToolsExp.Default__BakeTexture2DProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeTexture2DProperties* UBakeTexture2DProperties::GetDefaultObj()
{
	static class UBakeTexture2DProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeTexture2DProperties*>(UBakeTexture2DProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeTexture2DProperties::GetUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeTexture2DProperties", "GetUVLayerNamesFunc");

	Params::UBakeTexture2DProperties_GetUVLayerNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeMultiTexture2DProperties
// (None)

class UClass* UBakeMultiTexture2DProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMultiTexture2DProperties");

	return Clss;
}


// BakeMultiTexture2DProperties MeshModelingToolsExp.Default__BakeMultiTexture2DProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMultiTexture2DProperties* UBakeMultiTexture2DProperties::GetDefaultObj()
{
	static class UBakeMultiTexture2DProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMultiTexture2DProperties*>(UBakeMultiTexture2DProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMultiTexture2DProperties::GetUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeMultiTexture2DProperties", "GetUVLayerNamesFunc");

	Params::UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeVisualizationProperties
// (None)

class UClass* UBakeVisualizationProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeVisualizationProperties");

	return Clss;
}


// BakeVisualizationProperties MeshModelingToolsExp.Default__BakeVisualizationProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeVisualizationProperties* UBakeVisualizationProperties::GetDefaultObj()
{
	static class UBakeVisualizationProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeVisualizationProperties*>(UBakeVisualizationProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSculptBrushOpProps
// (None)

class UClass* UMeshSculptBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSculptBrushOpProps");

	return Clss;
}


// MeshSculptBrushOpProps MeshModelingToolsExp.Default__MeshSculptBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSculptBrushOpProps* UMeshSculptBrushOpProps::GetDefaultObj()
{
	static class UMeshSculptBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSculptBrushOpProps*>(UMeshSculptBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BaseKelvinletBrushOpProps
// (None)

class UClass* UBaseKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseKelvinletBrushOpProps");

	return Clss;
}


// BaseKelvinletBrushOpProps MeshModelingToolsExp.Default__BaseKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseKelvinletBrushOpProps* UBaseKelvinletBrushOpProps::GetDefaultObj()
{
	static class UBaseKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseKelvinletBrushOpProps*>(UBaseKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ScaleKelvinletBrushOpProps
// (None)

class UClass* UScaleKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleKelvinletBrushOpProps");

	return Clss;
}


// ScaleKelvinletBrushOpProps MeshModelingToolsExp.Default__ScaleKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UScaleKelvinletBrushOpProps* UScaleKelvinletBrushOpProps::GetDefaultObj()
{
	static class UScaleKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UScaleKelvinletBrushOpProps*>(UScaleKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PullKelvinletBrushOpProps
// (None)

class UClass* UPullKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PullKelvinletBrushOpProps");

	return Clss;
}


// PullKelvinletBrushOpProps MeshModelingToolsExp.Default__PullKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UPullKelvinletBrushOpProps* UPullKelvinletBrushOpProps::GetDefaultObj()
{
	static class UPullKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UPullKelvinletBrushOpProps*>(UPullKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
// (None)

class UClass* USharpPullKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SharpPullKelvinletBrushOpProps");

	return Clss;
}


// SharpPullKelvinletBrushOpProps MeshModelingToolsExp.Default__SharpPullKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USharpPullKelvinletBrushOpProps* USharpPullKelvinletBrushOpProps::GetDefaultObj()
{
	static class USharpPullKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USharpPullKelvinletBrushOpProps*>(USharpPullKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.TwistKelvinletBrushOpProps
// (None)

class UClass* UTwistKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwistKelvinletBrushOpProps");

	return Clss;
}


// TwistKelvinletBrushOpProps MeshModelingToolsExp.Default__TwistKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwistKelvinletBrushOpProps* UTwistKelvinletBrushOpProps::GetDefaultObj()
{
	static class UTwistKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwistKelvinletBrushOpProps*>(UTwistKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.GroupEraseBrushOpProps
// (None)

class UClass* UGroupEraseBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupEraseBrushOpProps");

	return Clss;
}


// GroupEraseBrushOpProps MeshModelingToolsExp.Default__GroupEraseBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupEraseBrushOpProps* UGroupEraseBrushOpProps::GetDefaultObj()
{
	static class UGroupEraseBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupEraseBrushOpProps*>(UGroupEraseBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.GroupPaintBrushOpProps
// (None)

class UClass* UGroupPaintBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupPaintBrushOpProps");

	return Clss;
}


// GroupPaintBrushOpProps MeshModelingToolsExp.Default__GroupPaintBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupPaintBrushOpProps* UGroupPaintBrushOpProps::GetDefaultObj()
{
	static class UGroupPaintBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupPaintBrushOpProps*>(UGroupPaintBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.InflateBrushOpProps
// (None)

class UClass* UInflateBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InflateBrushOpProps");

	return Clss;
}


// InflateBrushOpProps MeshModelingToolsExp.Default__InflateBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UInflateBrushOpProps* UInflateBrushOpProps::GetDefaultObj()
{
	static class UInflateBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UInflateBrushOpProps*>(UInflateBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MoveBrushOpProps
// (None)

class UClass* UMoveBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoveBrushOpProps");

	return Clss;
}


// MoveBrushOpProps MeshModelingToolsExp.Default__MoveBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoveBrushOpProps* UMoveBrushOpProps::GetDefaultObj()
{
	static class UMoveBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoveBrushOpProps*>(UMoveBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PinchBrushOpProps
// (None)

class UClass* UPinchBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PinchBrushOpProps");

	return Clss;
}


// PinchBrushOpProps MeshModelingToolsExp.Default__PinchBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UPinchBrushOpProps* UPinchBrushOpProps::GetDefaultObj()
{
	static class UPinchBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UPinchBrushOpProps*>(UPinchBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BasePlaneBrushOpProps
// (None)

class UClass* UBasePlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasePlaneBrushOpProps");

	return Clss;
}


// BasePlaneBrushOpProps MeshModelingToolsExp.Default__BasePlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UBasePlaneBrushOpProps* UBasePlaneBrushOpProps::GetDefaultObj()
{
	static class UBasePlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasePlaneBrushOpProps*>(UBasePlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PlaneBrushOpProps
// (None)

class UClass* UPlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneBrushOpProps");

	return Clss;
}


// PlaneBrushOpProps MeshModelingToolsExp.Default__PlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneBrushOpProps* UPlaneBrushOpProps::GetDefaultObj()
{
	static class UPlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneBrushOpProps*>(UPlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
// (None)

class UClass* UViewAlignedPlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ViewAlignedPlaneBrushOpProps");

	return Clss;
}


// ViewAlignedPlaneBrushOpProps MeshModelingToolsExp.Default__ViewAlignedPlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UViewAlignedPlaneBrushOpProps* UViewAlignedPlaneBrushOpProps::GetDefaultObj()
{
	static class UViewAlignedPlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewAlignedPlaneBrushOpProps*>(UViewAlignedPlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.FixedPlaneBrushOpProps
// (None)

class UClass* UFixedPlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedPlaneBrushOpProps");

	return Clss;
}


// FixedPlaneBrushOpProps MeshModelingToolsExp.Default__FixedPlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UFixedPlaneBrushOpProps* UFixedPlaneBrushOpProps::GetDefaultObj()
{
	static class UFixedPlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedPlaneBrushOpProps*>(UFixedPlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.StandardSculptBrushOpProps
// (None)

class UClass* UStandardSculptBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandardSculptBrushOpProps");

	return Clss;
}


// StandardSculptBrushOpProps MeshModelingToolsExp.Default__StandardSculptBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UStandardSculptBrushOpProps* UStandardSculptBrushOpProps::GetDefaultObj()
{
	static class UStandardSculptBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UStandardSculptBrushOpProps*>(UStandardSculptBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
// (None)

class UClass* UViewAlignedSculptBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ViewAlignedSculptBrushOpProps");

	return Clss;
}


// ViewAlignedSculptBrushOpProps MeshModelingToolsExp.Default__ViewAlignedSculptBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UViewAlignedSculptBrushOpProps* UViewAlignedSculptBrushOpProps::GetDefaultObj()
{
	static class UViewAlignedSculptBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewAlignedSculptBrushOpProps*>(UViewAlignedSculptBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SculptMaxBrushOpProps
// (None)

class UClass* USculptMaxBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SculptMaxBrushOpProps");

	return Clss;
}


// SculptMaxBrushOpProps MeshModelingToolsExp.Default__SculptMaxBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USculptMaxBrushOpProps* USculptMaxBrushOpProps::GetDefaultObj()
{
	static class USculptMaxBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USculptMaxBrushOpProps*>(USculptMaxBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BaseSmoothBrushOpProps
// (None)

class UClass* UBaseSmoothBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSmoothBrushOpProps");

	return Clss;
}


// BaseSmoothBrushOpProps MeshModelingToolsExp.Default__BaseSmoothBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseSmoothBrushOpProps* UBaseSmoothBrushOpProps::GetDefaultObj()
{
	static class UBaseSmoothBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSmoothBrushOpProps*>(UBaseSmoothBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SmoothBrushOpProps
// (None)

class UClass* USmoothBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothBrushOpProps");

	return Clss;
}


// SmoothBrushOpProps MeshModelingToolsExp.Default__SmoothBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothBrushOpProps* USmoothBrushOpProps::GetDefaultObj()
{
	static class USmoothBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothBrushOpProps*>(USmoothBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SecondarySmoothBrushOpProps
// (None)

class UClass* USecondarySmoothBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SecondarySmoothBrushOpProps");

	return Clss;
}


// SecondarySmoothBrushOpProps MeshModelingToolsExp.Default__SecondarySmoothBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USecondarySmoothBrushOpProps* USecondarySmoothBrushOpProps::GetDefaultObj()
{
	static class USecondarySmoothBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USecondarySmoothBrushOpProps*>(USecondarySmoothBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SmoothFillBrushOpProps
// (None)

class UClass* USmoothFillBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothFillBrushOpProps");

	return Clss;
}


// SmoothFillBrushOpProps MeshModelingToolsExp.Default__SmoothFillBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothFillBrushOpProps* USmoothFillBrushOpProps::GetDefaultObj()
{
	static class USmoothFillBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothFillBrushOpProps*>(USmoothFillBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.FlattenBrushOpProps
// (None)

class UClass* UFlattenBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlattenBrushOpProps");

	return Clss;
}


// FlattenBrushOpProps MeshModelingToolsExp.Default__FlattenBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlattenBrushOpProps* UFlattenBrushOpProps::GetDefaultObj()
{
	static class UFlattenBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlattenBrushOpProps*>(UFlattenBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EraseBrushOpProps
// (None)

class UClass* UEraseBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EraseBrushOpProps");

	return Clss;
}


// EraseBrushOpProps MeshModelingToolsExp.Default__EraseBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UEraseBrushOpProps* UEraseBrushOpProps::GetDefaultObj()
{
	static class UEraseBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UEraseBrushOpProps*>(UEraseBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternToolBuilder
// (None)

class UClass* UPatternToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternToolBuilder");

	return Clss;
}


// PatternToolBuilder MeshModelingToolsExp.Default__PatternToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternToolBuilder* UPatternToolBuilder::GetDefaultObj()
{
	static class UPatternToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternToolBuilder*>(UPatternToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternToolSettings
// (None)

class UClass* UPatternToolSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternToolSettings");

	return Clss;
}


// PatternToolSettings MeshModelingToolsExp.Default__PatternToolSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternToolSettings* UPatternToolSettings::GetDefaultObj()
{
	static class UPatternToolSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternToolSettings*>(UPatternToolSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool_LinearSettings
// (None)

class UClass* UPatternTool_LinearSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool_LinearSettings");

	return Clss;
}


// PatternTool_LinearSettings MeshModelingToolsExp.Default__PatternTool_LinearSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternTool_LinearSettings* UPatternTool_LinearSettings::GetDefaultObj()
{
	static class UPatternTool_LinearSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool_LinearSettings*>(UPatternTool_LinearSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool_GridSettings
// (None)

class UClass* UPatternTool_GridSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool_GridSettings");

	return Clss;
}


// PatternTool_GridSettings MeshModelingToolsExp.Default__PatternTool_GridSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternTool_GridSettings* UPatternTool_GridSettings::GetDefaultObj()
{
	static class UPatternTool_GridSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool_GridSettings*>(UPatternTool_GridSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool_RadialSettings
// (None)

class UClass* UPatternTool_RadialSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool_RadialSettings");

	return Clss;
}


// PatternTool_RadialSettings MeshModelingToolsExp.Default__PatternTool_RadialSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternTool_RadialSettings* UPatternTool_RadialSettings::GetDefaultObj()
{
	static class UPatternTool_RadialSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool_RadialSettings*>(UPatternTool_RadialSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool_RotationSettings
// (None)

class UClass* UPatternTool_RotationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool_RotationSettings");

	return Clss;
}


// PatternTool_RotationSettings MeshModelingToolsExp.Default__PatternTool_RotationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternTool_RotationSettings* UPatternTool_RotationSettings::GetDefaultObj()
{
	static class UPatternTool_RotationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool_RotationSettings*>(UPatternTool_RotationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool_TranslationSettings
// (None)

class UClass* UPatternTool_TranslationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool_TranslationSettings");

	return Clss;
}


// PatternTool_TranslationSettings MeshModelingToolsExp.Default__PatternTool_TranslationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternTool_TranslationSettings* UPatternTool_TranslationSettings::GetDefaultObj()
{
	static class UPatternTool_TranslationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool_TranslationSettings*>(UPatternTool_TranslationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool_ScaleSettings
// (None)

class UClass* UPatternTool_ScaleSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool_ScaleSettings");

	return Clss;
}


// PatternTool_ScaleSettings MeshModelingToolsExp.Default__PatternTool_ScaleSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternTool_ScaleSettings* UPatternTool_ScaleSettings::GetDefaultObj()
{
	static class UPatternTool_ScaleSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool_ScaleSettings*>(UPatternTool_ScaleSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool_OutputSettings
// (None)

class UClass* UPatternTool_OutputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool_OutputSettings");

	return Clss;
}


// PatternTool_OutputSettings MeshModelingToolsExp.Default__PatternTool_OutputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatternTool_OutputSettings* UPatternTool_OutputSettings::GetDefaultObj()
{
	static class UPatternTool_OutputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool_OutputSettings*>(UPatternTool_OutputSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PatternTool
// (None)

class UClass* UPatternTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatternTool");

	return Clss;
}


// PatternTool MeshModelingToolsExp.Default__PatternTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPatternTool* UPatternTool::GetDefaultObj()
{
	static class UPatternTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatternTool*>(UPatternTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshConstraintProperties
// (None)

class UClass* UMeshConstraintProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshConstraintProperties");

	return Clss;
}


// MeshConstraintProperties MeshModelingToolsExp.Default__MeshConstraintProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshConstraintProperties* UMeshConstraintProperties::GetDefaultObj()
{
	static class UMeshConstraintProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshConstraintProperties*>(UMeshConstraintProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemeshProperties
// (None)

class UClass* URemeshProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshProperties");

	return Clss;
}


// RemeshProperties MeshModelingToolsExp.Default__RemeshProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemeshProperties* URemeshProperties::GetDefaultObj()
{
	static class URemeshProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshProperties*>(URemeshProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.AddPatchToolBuilder
// (None)

class UClass* UAddPatchToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPatchToolBuilder");

	return Clss;
}


// AddPatchToolBuilder MeshModelingToolsExp.Default__AddPatchToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAddPatchToolBuilder* UAddPatchToolBuilder::GetDefaultObj()
{
	static class UAddPatchToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPatchToolBuilder*>(UAddPatchToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.AddPatchToolProperties
// (None)

class UClass* UAddPatchToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPatchToolProperties");

	return Clss;
}


// AddPatchToolProperties MeshModelingToolsExp.Default__AddPatchToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAddPatchToolProperties* UAddPatchToolProperties::GetDefaultObj()
{
	static class UAddPatchToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPatchToolProperties*>(UAddPatchToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.AddPatchTool
// (None)

class UClass* UAddPatchTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPatchTool");

	return Clss;
}


// AddPatchTool MeshModelingToolsExp.Default__AddPatchTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddPatchTool* UAddPatchTool::GetDefaultObj()
{
	static class UAddPatchTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPatchTool*>(UAddPatchTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.AlignObjectsToolBuilder
// (None)

class UClass* UAlignObjectsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlignObjectsToolBuilder");

	return Clss;
}


// AlignObjectsToolBuilder MeshModelingToolsExp.Default__AlignObjectsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAlignObjectsToolBuilder* UAlignObjectsToolBuilder::GetDefaultObj()
{
	static class UAlignObjectsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlignObjectsToolBuilder*>(UAlignObjectsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.AlignObjectsToolProperties
// (None)

class UClass* UAlignObjectsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlignObjectsToolProperties");

	return Clss;
}


// AlignObjectsToolProperties MeshModelingToolsExp.Default__AlignObjectsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAlignObjectsToolProperties* UAlignObjectsToolProperties::GetDefaultObj()
{
	static class UAlignObjectsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlignObjectsToolProperties*>(UAlignObjectsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.AlignObjectsTool
// (None)

class UClass* UAlignObjectsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlignObjectsTool");

	return Clss;
}


// AlignObjectsTool MeshModelingToolsExp.Default__AlignObjectsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAlignObjectsTool* UAlignObjectsTool::GetDefaultObj()
{
	static class UAlignObjectsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlignObjectsTool*>(UAlignObjectsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
// (None)

class UClass* UBakeMeshAttributeMapsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsToolBuilder");

	return Clss;
}


// BakeMeshAttributeMapsToolBuilder MeshModelingToolsExp.Default__BakeMeshAttributeMapsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsToolBuilder* UBakeMeshAttributeMapsToolBuilder::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsToolBuilder*>(UBakeMeshAttributeMapsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
// (None)

class UClass* UBakeMeshAttributeMapsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsToolProperties");

	return Clss;
}


// BakeMeshAttributeMapsToolProperties MeshModelingToolsExp.Default__BakeMeshAttributeMapsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsToolProperties* UBakeMeshAttributeMapsToolProperties::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsToolProperties*>(UBakeMeshAttributeMapsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeMeshAttributeMapsToolProperties", "GetMapPreviewNamesFunc");

	Params::UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeMeshAttributeTool
// (None)

class UClass* UBakeMeshAttributeTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeTool");

	return Clss;
}


// BakeMeshAttributeTool MeshModelingToolsExp.Default__BakeMeshAttributeTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeTool* UBakeMeshAttributeTool::GetDefaultObj()
{
	static class UBakeMeshAttributeTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeTool*>(UBakeMeshAttributeTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
// (None)

class UClass* UBakeMeshAttributeMapsToolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsToolBase");

	return Clss;
}


// BakeMeshAttributeMapsToolBase MeshModelingToolsExp.Default__BakeMeshAttributeMapsToolBase
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsToolBase* UBakeMeshAttributeMapsToolBase::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsToolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsToolBase*>(UBakeMeshAttributeMapsToolBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeMapsTool
// (None)

class UClass* UBakeMeshAttributeMapsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsTool");

	return Clss;
}


// BakeMeshAttributeMapsTool MeshModelingToolsExp.Default__BakeMeshAttributeMapsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsTool* UBakeMeshAttributeMapsTool::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsTool*>(UBakeMeshAttributeMapsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
// (None)

class UClass* UBakeMeshAttributeMapsResultToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsResultToolProperties");

	return Clss;
}


// BakeMeshAttributeMapsResultToolProperties MeshModelingToolsExp.Default__BakeMeshAttributeMapsResultToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsResultToolProperties* UBakeMeshAttributeMapsResultToolProperties::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsResultToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsResultToolProperties*>(UBakeMeshAttributeMapsResultToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
// (None)

class UClass* UBakeMeshAttributeVertexToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeVertexToolBuilder");

	return Clss;
}


// BakeMeshAttributeVertexToolBuilder MeshModelingToolsExp.Default__BakeMeshAttributeVertexToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeVertexToolBuilder* UBakeMeshAttributeVertexToolBuilder::GetDefaultObj()
{
	static class UBakeMeshAttributeVertexToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeVertexToolBuilder*>(UBakeMeshAttributeVertexToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
// (None)

class UClass* UBakeMeshAttributeVertexToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeVertexToolProperties");

	return Clss;
}


// BakeMeshAttributeVertexToolProperties MeshModelingToolsExp.Default__BakeMeshAttributeVertexToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeVertexToolProperties* UBakeMeshAttributeVertexToolProperties::GetDefaultObj()
{
	static class UBakeMeshAttributeVertexToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeVertexToolProperties*>(UBakeMeshAttributeVertexToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMeshAttributeVertexTool
// (None)

class UClass* UBakeMeshAttributeVertexTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeVertexTool");

	return Clss;
}


// BakeMeshAttributeVertexTool MeshModelingToolsExp.Default__BakeMeshAttributeVertexTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeVertexTool* UBakeMeshAttributeVertexTool::GetDefaultObj()
{
	static class UBakeMeshAttributeVertexTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeVertexTool*>(UBakeMeshAttributeVertexTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
// (None)

class UClass* UBakeMultiMeshAttributeMapsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMultiMeshAttributeMapsToolBuilder");

	return Clss;
}


// BakeMultiMeshAttributeMapsToolBuilder MeshModelingToolsExp.Default__BakeMultiMeshAttributeMapsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMultiMeshAttributeMapsToolBuilder* UBakeMultiMeshAttributeMapsToolBuilder::GetDefaultObj()
{
	static class UBakeMultiMeshAttributeMapsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMultiMeshAttributeMapsToolBuilder*>(UBakeMultiMeshAttributeMapsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
// (None)

class UClass* UBakeMultiMeshAttributeMapsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMultiMeshAttributeMapsToolProperties");

	return Clss;
}


// BakeMultiMeshAttributeMapsToolProperties MeshModelingToolsExp.Default__BakeMultiMeshAttributeMapsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMultiMeshAttributeMapsToolProperties* UBakeMultiMeshAttributeMapsToolProperties::GetDefaultObj()
{
	static class UBakeMultiMeshAttributeMapsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMultiMeshAttributeMapsToolProperties*>(UBakeMultiMeshAttributeMapsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMultiMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeMultiMeshAttributeMapsToolProperties", "GetMapPreviewNamesFunc");

	Params::UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeMultiMeshInputToolProperties
// (None)

class UClass* UBakeMultiMeshInputToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMultiMeshInputToolProperties");

	return Clss;
}


// BakeMultiMeshInputToolProperties MeshModelingToolsExp.Default__BakeMultiMeshInputToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMultiMeshInputToolProperties* UBakeMultiMeshInputToolProperties::GetDefaultObj()
{
	static class UBakeMultiMeshInputToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMultiMeshInputToolProperties*>(UBakeMultiMeshInputToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMultiMeshInputToolProperties::GetTargetUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeMultiMeshInputToolProperties", "GetTargetUVLayerNamesFunc");

	Params::UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
// (None)

class UClass* UBakeMultiMeshAttributeMapsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMultiMeshAttributeMapsTool");

	return Clss;
}


// BakeMultiMeshAttributeMapsTool MeshModelingToolsExp.Default__BakeMultiMeshAttributeMapsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeMultiMeshAttributeMapsTool* UBakeMultiMeshAttributeMapsTool::GetDefaultObj()
{
	static class UBakeMultiMeshAttributeMapsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMultiMeshAttributeMapsTool*>(UBakeMultiMeshAttributeMapsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeRenderCaptureResults
// (None)

class UClass* UBakeRenderCaptureResults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeRenderCaptureResults");

	return Clss;
}


// BakeRenderCaptureResults MeshModelingToolsExp.Default__BakeRenderCaptureResults
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeRenderCaptureResults* UBakeRenderCaptureResults::GetDefaultObj()
{
	static class UBakeRenderCaptureResults* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeRenderCaptureResults*>(UBakeRenderCaptureResults::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeRenderCaptureToolBuilder
// (None)

class UClass* UBakeRenderCaptureToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeRenderCaptureToolBuilder");

	return Clss;
}


// BakeRenderCaptureToolBuilder MeshModelingToolsExp.Default__BakeRenderCaptureToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeRenderCaptureToolBuilder* UBakeRenderCaptureToolBuilder::GetDefaultObj()
{
	static class UBakeRenderCaptureToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeRenderCaptureToolBuilder*>(UBakeRenderCaptureToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RenderCaptureProperties
// (None)

class UClass* URenderCaptureProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RenderCaptureProperties");

	return Clss;
}


// RenderCaptureProperties MeshModelingToolsExp.Default__RenderCaptureProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URenderCaptureProperties* URenderCaptureProperties::GetDefaultObj()
{
	static class URenderCaptureProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URenderCaptureProperties*>(URenderCaptureProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeRenderCaptureToolProperties
// (None)

class UClass* UBakeRenderCaptureToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeRenderCaptureToolProperties");

	return Clss;
}


// BakeRenderCaptureToolProperties MeshModelingToolsExp.Default__BakeRenderCaptureToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeRenderCaptureToolProperties* UBakeRenderCaptureToolProperties::GetDefaultObj()
{
	static class UBakeRenderCaptureToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeRenderCaptureToolProperties*>(UBakeRenderCaptureToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeRenderCaptureToolProperties.GetMapPreviewNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeRenderCaptureToolProperties::GetMapPreviewNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeRenderCaptureToolProperties", "GetMapPreviewNamesFunc");

	Params::UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeRenderCaptureInputToolProperties
// (None)

class UClass* UBakeRenderCaptureInputToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeRenderCaptureInputToolProperties");

	return Clss;
}


// BakeRenderCaptureInputToolProperties MeshModelingToolsExp.Default__BakeRenderCaptureInputToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeRenderCaptureInputToolProperties* UBakeRenderCaptureInputToolProperties::GetDefaultObj()
{
	static class UBakeRenderCaptureInputToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeRenderCaptureInputToolProperties*>(UBakeRenderCaptureInputToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeRenderCaptureInputToolProperties::GetTargetUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeRenderCaptureInputToolProperties", "GetTargetUVLayerNamesFunc");

	Params::UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerIndex
// (Final, Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBakeRenderCaptureInputToolProperties::GetTargetUVLayerIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeRenderCaptureInputToolProperties", "GetTargetUVLayerIndex");

	Params::UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.BakeRenderCaptureTool
// (None)

class UClass* UBakeRenderCaptureTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeRenderCaptureTool");

	return Clss;
}


// BakeRenderCaptureTool MeshModelingToolsExp.Default__BakeRenderCaptureTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeRenderCaptureTool* UBakeRenderCaptureTool::GetDefaultObj()
{
	static class UBakeRenderCaptureTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeRenderCaptureTool*>(UBakeRenderCaptureTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeTransformToolBuilder
// (None)

class UClass* UBakeTransformToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeTransformToolBuilder");

	return Clss;
}


// BakeTransformToolBuilder MeshModelingToolsExp.Default__BakeTransformToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeTransformToolBuilder* UBakeTransformToolBuilder::GetDefaultObj()
{
	static class UBakeTransformToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeTransformToolBuilder*>(UBakeTransformToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeTransformToolProperties
// (None)

class UClass* UBakeTransformToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeTransformToolProperties");

	return Clss;
}


// BakeTransformToolProperties MeshModelingToolsExp.Default__BakeTransformToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeTransformToolProperties* UBakeTransformToolProperties::GetDefaultObj()
{
	static class UBakeTransformToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeTransformToolProperties*>(UBakeTransformToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.BakeTransformTool
// (None)

class UClass* UBakeTransformTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeTransformTool");

	return Clss;
}


// BakeTransformTool MeshModelingToolsExp.Default__BakeTransformTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeTransformTool* UBakeTransformTool::GetDefaultObj()
{
	static class UBakeTransformTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeTransformTool*>(UBakeTransformTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ConvertMeshesToolBuilder
// (None)

class UClass* UConvertMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertMeshesToolBuilder");

	return Clss;
}


// ConvertMeshesToolBuilder MeshModelingToolsExp.Default__ConvertMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UConvertMeshesToolBuilder* UConvertMeshesToolBuilder::GetDefaultObj()
{
	static class UConvertMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertMeshesToolBuilder*>(UConvertMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ConvertMeshesToolProperties
// (None)

class UClass* UConvertMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertMeshesToolProperties");

	return Clss;
}


// ConvertMeshesToolProperties MeshModelingToolsExp.Default__ConvertMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UConvertMeshesToolProperties* UConvertMeshesToolProperties::GetDefaultObj()
{
	static class UConvertMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertMeshesToolProperties*>(UConvertMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ConvertMeshesTool
// (None)

class UClass* UConvertMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertMeshesTool");

	return Clss;
}


// ConvertMeshesTool MeshModelingToolsExp.Default__ConvertMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UConvertMeshesTool* UConvertMeshesTool::GetDefaultObj()
{
	static class UConvertMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertMeshesTool*>(UConvertMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ConvertToPolygonsToolBuilder
// (None)

class UClass* UConvertToPolygonsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertToPolygonsToolBuilder");

	return Clss;
}


// ConvertToPolygonsToolBuilder MeshModelingToolsExp.Default__ConvertToPolygonsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UConvertToPolygonsToolBuilder* UConvertToPolygonsToolBuilder::GetDefaultObj()
{
	static class UConvertToPolygonsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertToPolygonsToolBuilder*>(UConvertToPolygonsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ConvertToPolygonsToolProperties
// (None)

class UClass* UConvertToPolygonsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertToPolygonsToolProperties");

	return Clss;
}


// ConvertToPolygonsToolProperties MeshModelingToolsExp.Default__ConvertToPolygonsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UConvertToPolygonsToolProperties* UConvertToPolygonsToolProperties::GetDefaultObj()
{
	static class UConvertToPolygonsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertToPolygonsToolProperties*>(UConvertToPolygonsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.OutputPolygroupLayerProperties
// (None)

class UClass* UOutputPolygroupLayerProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OutputPolygroupLayerProperties");

	return Clss;
}


// OutputPolygroupLayerProperties MeshModelingToolsExp.Default__OutputPolygroupLayerProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UOutputPolygroupLayerProperties* UOutputPolygroupLayerProperties::GetDefaultObj()
{
	static class UOutputPolygroupLayerProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UOutputPolygroupLayerProperties*>(UOutputPolygroupLayerProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UOutputPolygroupLayerProperties::GetGroupOptionsList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutputPolygroupLayerProperties", "GetGroupOptionsList");

	Params::UOutputPolygroupLayerProperties_GetGroupOptionsList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
// (None)

class UClass* UConvertToPolygonsOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertToPolygonsOperatorFactory");

	return Clss;
}


// ConvertToPolygonsOperatorFactory MeshModelingToolsExp.Default__ConvertToPolygonsOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UConvertToPolygonsOperatorFactory* UConvertToPolygonsOperatorFactory::GetDefaultObj()
{
	static class UConvertToPolygonsOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertToPolygonsOperatorFactory*>(UConvertToPolygonsOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ConvertToPolygonsTool
// (None)

class UClass* UConvertToPolygonsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertToPolygonsTool");

	return Clss;
}


// ConvertToPolygonsTool MeshModelingToolsExp.Default__ConvertToPolygonsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UConvertToPolygonsTool* UConvertToPolygonsTool::GetDefaultObj()
{
	static class UConvertToPolygonsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertToPolygonsTool*>(UConvertToPolygonsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.CubeGridToolBuilder
// (None)

class UClass* UCubeGridToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CubeGridToolBuilder");

	return Clss;
}


// CubeGridToolBuilder MeshModelingToolsExp.Default__CubeGridToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCubeGridToolBuilder* UCubeGridToolBuilder::GetDefaultObj()
{
	static class UCubeGridToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCubeGridToolBuilder*>(UCubeGridToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.CubeGridToolProperties
// (None)

class UClass* UCubeGridToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CubeGridToolProperties");

	return Clss;
}


// CubeGridToolProperties MeshModelingToolsExp.Default__CubeGridToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCubeGridToolProperties* UCubeGridToolProperties::GetDefaultObj()
{
	static class UCubeGridToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCubeGridToolProperties*>(UCubeGridToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.CubeGridToolActions
// (None)

class UClass* UCubeGridToolActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CubeGridToolActions");

	return Clss;
}


// CubeGridToolActions MeshModelingToolsExp.Default__CubeGridToolActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UCubeGridToolActions* UCubeGridToolActions::GetDefaultObj()
{
	static class UCubeGridToolActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UCubeGridToolActions*>(UCubeGridToolActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.CubeGridToolActions.SlideForward
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::SlideForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridToolActions", "SlideForward");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.CubeGridToolActions.SlideBack
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::SlideBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridToolActions", "SlideBack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::ResetGridFromActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridToolActions", "ResetGridFromActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.CubeGridToolActions.Push
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::Push()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridToolActions", "Push");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.CubeGridToolActions.Pull
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::Pull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridToolActions", "Pull");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.CubeGridToolActions.Flip
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::Flip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridToolActions", "Flip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.CubeGridToolActions.CornerMode
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::CornerMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridToolActions", "CornerMode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.CubeGridDuringActivityActions
// (None)

class UClass* UCubeGridDuringActivityActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CubeGridDuringActivityActions");

	return Clss;
}


// CubeGridDuringActivityActions MeshModelingToolsExp.Default__CubeGridDuringActivityActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UCubeGridDuringActivityActions* UCubeGridDuringActivityActions::GetDefaultObj()
{
	static class UCubeGridDuringActivityActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UCubeGridDuringActivityActions*>(UCubeGridDuringActivityActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.CubeGridDuringActivityActions.Done
// (Final, Native, Public)
// Parameters:

void UCubeGridDuringActivityActions::Done()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridDuringActivityActions", "Done");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.CubeGridDuringActivityActions.Cancel
// (Final, Native, Public)
// Parameters:

void UCubeGridDuringActivityActions::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CubeGridDuringActivityActions", "Cancel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.CubeGridTool
// (None)

class UClass* UCubeGridTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CubeGridTool");

	return Clss;
}


// CubeGridTool MeshModelingToolsExp.Default__CubeGridTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UCubeGridTool* UCubeGridTool::GetDefaultObj()
{
	static class UCubeGridTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UCubeGridTool*>(UCubeGridTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
// (None)

class UClass* UDeformMeshPolygonsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeformMeshPolygonsToolBuilder");

	return Clss;
}


// DeformMeshPolygonsToolBuilder MeshModelingToolsExp.Default__DeformMeshPolygonsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeformMeshPolygonsToolBuilder* UDeformMeshPolygonsToolBuilder::GetDefaultObj()
{
	static class UDeformMeshPolygonsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeformMeshPolygonsToolBuilder*>(UDeformMeshPolygonsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
// (None)

class UClass* UDeformMeshPolygonsTransformProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeformMeshPolygonsTransformProperties");

	return Clss;
}


// DeformMeshPolygonsTransformProperties MeshModelingToolsExp.Default__DeformMeshPolygonsTransformProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeformMeshPolygonsTransformProperties* UDeformMeshPolygonsTransformProperties::GetDefaultObj()
{
	static class UDeformMeshPolygonsTransformProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeformMeshPolygonsTransformProperties*>(UDeformMeshPolygonsTransformProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DeformMeshPolygonsTool
// (None)

class UClass* UDeformMeshPolygonsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeformMeshPolygonsTool");

	return Clss;
}


// DeformMeshPolygonsTool MeshModelingToolsExp.Default__DeformMeshPolygonsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDeformMeshPolygonsTool* UDeformMeshPolygonsTool::GetDefaultObj()
{
	static class UDeformMeshPolygonsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeformMeshPolygonsTool*>(UDeformMeshPolygonsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DisplaceMeshCommonProperties
// (None)

class UClass* UDisplaceMeshCommonProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshCommonProperties");

	return Clss;
}


// DisplaceMeshCommonProperties MeshModelingToolsExp.Default__DisplaceMeshCommonProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshCommonProperties* UDisplaceMeshCommonProperties::GetDefaultObj()
{
	static class UDisplaceMeshCommonProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshCommonProperties*>(UDisplaceMeshCommonProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DisplaceMeshCommonProperties", "GetWeightMapsFunc");

	Params::UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.SelectiveTessellationProperties
// (None)

class UClass* USelectiveTessellationProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectiveTessellationProperties");

	return Clss;
}


// SelectiveTessellationProperties MeshModelingToolsExp.Default__SelectiveTessellationProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USelectiveTessellationProperties* USelectiveTessellationProperties::GetDefaultObj()
{
	static class USelectiveTessellationProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectiveTessellationProperties*>(USelectiveTessellationProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> USelectiveTessellationProperties::GetMaterialIDsFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectiveTessellationProperties", "GetMaterialIDsFunc");

	Params::USelectiveTessellationProperties_GetMaterialIDsFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.DisplaceMeshTextureMapProperties
// (None)

class UClass* UDisplaceMeshTextureMapProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshTextureMapProperties");

	return Clss;
}


// DisplaceMeshTextureMapProperties MeshModelingToolsExp.Default__DisplaceMeshTextureMapProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshTextureMapProperties* UDisplaceMeshTextureMapProperties::GetDefaultObj()
{
	static class UDisplaceMeshTextureMapProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshTextureMapProperties*>(UDisplaceMeshTextureMapProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
// (None)

class UClass* UDisplaceMeshDirectionalFilterProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshDirectionalFilterProperties");

	return Clss;
}


// DisplaceMeshDirectionalFilterProperties MeshModelingToolsExp.Default__DisplaceMeshDirectionalFilterProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshDirectionalFilterProperties* UDisplaceMeshDirectionalFilterProperties::GetDefaultObj()
{
	static class UDisplaceMeshDirectionalFilterProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshDirectionalFilterProperties*>(UDisplaceMeshDirectionalFilterProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
// (None)

class UClass* UDisplaceMeshPerlinNoiseProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshPerlinNoiseProperties");

	return Clss;
}


// DisplaceMeshPerlinNoiseProperties MeshModelingToolsExp.Default__DisplaceMeshPerlinNoiseProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshPerlinNoiseProperties* UDisplaceMeshPerlinNoiseProperties::GetDefaultObj()
{
	static class UDisplaceMeshPerlinNoiseProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshPerlinNoiseProperties*>(UDisplaceMeshPerlinNoiseProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DisplaceMeshSineWaveProperties
// (None)

class UClass* UDisplaceMeshSineWaveProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshSineWaveProperties");

	return Clss;
}


// DisplaceMeshSineWaveProperties MeshModelingToolsExp.Default__DisplaceMeshSineWaveProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshSineWaveProperties* UDisplaceMeshSineWaveProperties::GetDefaultObj()
{
	static class UDisplaceMeshSineWaveProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshSineWaveProperties*>(UDisplaceMeshSineWaveProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DisplaceMeshToolBuilder
// (None)

class UClass* UDisplaceMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshToolBuilder");

	return Clss;
}


// DisplaceMeshToolBuilder MeshModelingToolsExp.Default__DisplaceMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshToolBuilder* UDisplaceMeshToolBuilder::GetDefaultObj()
{
	static class UDisplaceMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshToolBuilder*>(UDisplaceMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DisplaceMeshTool
// (None)

class UClass* UDisplaceMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshTool");

	return Clss;
}


// DisplaceMeshTool MeshModelingToolsExp.Default__DisplaceMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshTool* UDisplaceMeshTool::GetDefaultObj()
{
	static class UDisplaceMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshTool*>(UDisplaceMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DrawPolyPathToolBuilder
// (None)

class UClass* UDrawPolyPathToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathToolBuilder");

	return Clss;
}


// DrawPolyPathToolBuilder MeshModelingToolsExp.Default__DrawPolyPathToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathToolBuilder* UDrawPolyPathToolBuilder::GetDefaultObj()
{
	static class UDrawPolyPathToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathToolBuilder*>(UDrawPolyPathToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DrawPolyPathProperties
// (None)

class UClass* UDrawPolyPathProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathProperties");

	return Clss;
}


// DrawPolyPathProperties MeshModelingToolsExp.Default__DrawPolyPathProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathProperties* UDrawPolyPathProperties::GetDefaultObj()
{
	static class UDrawPolyPathProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathProperties*>(UDrawPolyPathProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DrawPolyPathExtrudeProperties
// (None)

class UClass* UDrawPolyPathExtrudeProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathExtrudeProperties");

	return Clss;
}


// DrawPolyPathExtrudeProperties MeshModelingToolsExp.Default__DrawPolyPathExtrudeProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathExtrudeProperties* UDrawPolyPathExtrudeProperties::GetDefaultObj()
{
	static class UDrawPolyPathExtrudeProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathExtrudeProperties*>(UDrawPolyPathExtrudeProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DrawPolyPathTool
// (None)

class UClass* UDrawPolyPathTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathTool");

	return Clss;
}


// DrawPolyPathTool MeshModelingToolsExp.Default__DrawPolyPathTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathTool* UDrawPolyPathTool::GetDefaultObj()
{
	static class UDrawPolyPathTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathTool*>(UDrawPolyPathTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DynamicMeshBrushTool
// (None)

class UClass* UDynamicMeshBrushTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshBrushTool");

	return Clss;
}


// DynamicMeshBrushTool MeshModelingToolsExp.Default__DynamicMeshBrushTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshBrushTool* UDynamicMeshBrushTool::GetDefaultObj()
{
	static class UDynamicMeshBrushTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshBrushTool*>(UDynamicMeshBrushTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DynamicMeshSculptToolBuilder
// (None)

class UClass* UDynamicMeshSculptToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshSculptToolBuilder");

	return Clss;
}


// DynamicMeshSculptToolBuilder MeshModelingToolsExp.Default__DynamicMeshSculptToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshSculptToolBuilder* UDynamicMeshSculptToolBuilder::GetDefaultObj()
{
	static class UDynamicMeshSculptToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshSculptToolBuilder*>(UDynamicMeshSculptToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DynamicMeshBrushProperties
// (None)

class UClass* UDynamicMeshBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshBrushProperties");

	return Clss;
}


// DynamicMeshBrushProperties MeshModelingToolsExp.Default__DynamicMeshBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshBrushProperties* UDynamicMeshBrushProperties::GetDefaultObj()
{
	static class UDynamicMeshBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshBrushProperties*>(UDynamicMeshBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DynamicMeshBrushSculptProperties
// (None)

class UClass* UDynamicMeshBrushSculptProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshBrushSculptProperties");

	return Clss;
}


// DynamicMeshBrushSculptProperties MeshModelingToolsExp.Default__DynamicMeshBrushSculptProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshBrushSculptProperties* UDynamicMeshBrushSculptProperties::GetDefaultObj()
{
	static class UDynamicMeshBrushSculptProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshBrushSculptProperties*>(UDynamicMeshBrushSculptProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DynamicSculptToolActions
// (None)

class UClass* UDynamicSculptToolActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicSculptToolActions");

	return Clss;
}


// DynamicSculptToolActions MeshModelingToolsExp.Default__DynamicSculptToolActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicSculptToolActions* UDynamicSculptToolActions::GetDefaultObj()
{
	static class UDynamicSculptToolActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicSculptToolActions*>(UDynamicSculptToolActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes
// (Final, Native, Public)
// Parameters:

void UDynamicSculptToolActions::DiscardAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicSculptToolActions", "DiscardAttributes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.BrushRemeshProperties
// (None)

class UClass* UBrushRemeshProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushRemeshProperties");

	return Clss;
}


// BrushRemeshProperties MeshModelingToolsExp.Default__BrushRemeshProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrushRemeshProperties* UBrushRemeshProperties::GetDefaultObj()
{
	static class UBrushRemeshProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushRemeshProperties*>(UBrushRemeshProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.FixedPlaneBrushProperties
// (None)

class UClass* UFixedPlaneBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedPlaneBrushProperties");

	return Clss;
}


// FixedPlaneBrushProperties MeshModelingToolsExp.Default__FixedPlaneBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UFixedPlaneBrushProperties* UFixedPlaneBrushProperties::GetDefaultObj()
{
	static class UFixedPlaneBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedPlaneBrushProperties*>(UFixedPlaneBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DynamicMeshSculptTool
// (None)

class UClass* UDynamicMeshSculptTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshSculptTool");

	return Clss;
}


// DynamicMeshSculptTool MeshModelingToolsExp.Default__DynamicMeshSculptTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshSculptTool* UDynamicMeshSculptTool::GetDefaultObj()
{
	static class UDynamicMeshSculptTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshSculptTool*>(UDynamicMeshSculptTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditNormalsToolBuilder
// (None)

class UClass* UEditNormalsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsToolBuilder");

	return Clss;
}


// EditNormalsToolBuilder MeshModelingToolsExp.Default__EditNormalsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsToolBuilder* UEditNormalsToolBuilder::GetDefaultObj()
{
	static class UEditNormalsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsToolBuilder*>(UEditNormalsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditNormalsToolProperties
// (None)

class UClass* UEditNormalsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsToolProperties");

	return Clss;
}


// EditNormalsToolProperties MeshModelingToolsExp.Default__EditNormalsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsToolProperties* UEditNormalsToolProperties::GetDefaultObj()
{
	static class UEditNormalsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsToolProperties*>(UEditNormalsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditNormalsAdvancedProperties
// (None)

class UClass* UEditNormalsAdvancedProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsAdvancedProperties");

	return Clss;
}


// EditNormalsAdvancedProperties MeshModelingToolsExp.Default__EditNormalsAdvancedProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsAdvancedProperties* UEditNormalsAdvancedProperties::GetDefaultObj()
{
	static class UEditNormalsAdvancedProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsAdvancedProperties*>(UEditNormalsAdvancedProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditNormalsOperatorFactory
// (None)

class UClass* UEditNormalsOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsOperatorFactory");

	return Clss;
}


// EditNormalsOperatorFactory MeshModelingToolsExp.Default__EditNormalsOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsOperatorFactory* UEditNormalsOperatorFactory::GetDefaultObj()
{
	static class UEditNormalsOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsOperatorFactory*>(UEditNormalsOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditNormalsTool
// (None)

class UClass* UEditNormalsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsTool");

	return Clss;
}


// EditNormalsTool MeshModelingToolsExp.Default__EditNormalsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditNormalsTool* UEditNormalsTool::GetDefaultObj()
{
	static class UEditNormalsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsTool*>(UEditNormalsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditPivotToolBuilder
// (None)

class UClass* UEditPivotToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotToolBuilder");

	return Clss;
}


// EditPivotToolBuilder MeshModelingToolsExp.Default__EditPivotToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditPivotToolBuilder* UEditPivotToolBuilder::GetDefaultObj()
{
	static class UEditPivotToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotToolBuilder*>(UEditPivotToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditPivotToolProperties
// (None)

class UClass* UEditPivotToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotToolProperties");

	return Clss;
}


// EditPivotToolProperties MeshModelingToolsExp.Default__EditPivotToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditPivotToolProperties* UEditPivotToolProperties::GetDefaultObj()
{
	static class UEditPivotToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotToolProperties*>(UEditPivotToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditPivotToolActionPropertySet
// (None)

class UClass* UEditPivotToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotToolActionPropertySet");

	return Clss;
}


// EditPivotToolActionPropertySet MeshModelingToolsExp.Default__EditPivotToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditPivotToolActionPropertySet* UEditPivotToolActionPropertySet::GetDefaultObj()
{
	static class UEditPivotToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotToolActionPropertySet*>(UEditPivotToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::WorldOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "WorldOrigin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Top
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Top()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Top");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Right
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Right");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Left
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Left");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Front
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Front()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Front");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Center
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Center()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Center");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Bottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Bottom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Back
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Back");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.EditPivotTool
// (None)

class UClass* UEditPivotTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotTool");

	return Clss;
}


// EditPivotTool MeshModelingToolsExp.Default__EditPivotTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditPivotTool* UEditPivotTool::GetDefaultObj()
{
	static class UEditPivotTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotTool*>(UEditPivotTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditUVIslandsToolBuilder
// (None)

class UClass* UEditUVIslandsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditUVIslandsToolBuilder");

	return Clss;
}


// EditUVIslandsToolBuilder MeshModelingToolsExp.Default__EditUVIslandsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditUVIslandsToolBuilder* UEditUVIslandsToolBuilder::GetDefaultObj()
{
	static class UEditUVIslandsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditUVIslandsToolBuilder*>(UEditUVIslandsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.EditUVIslandsTool
// (None)

class UClass* UEditUVIslandsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditUVIslandsTool");

	return Clss;
}


// EditUVIslandsTool MeshModelingToolsExp.Default__EditUVIslandsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditUVIslandsTool* UEditUVIslandsTool::GetDefaultObj()
{
	static class UEditUVIslandsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditUVIslandsTool*>(UEditUVIslandsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.HoleFillToolBuilder
// (None)

class UClass* UHoleFillToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillToolBuilder");

	return Clss;
}


// HoleFillToolBuilder MeshModelingToolsExp.Default__HoleFillToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillToolBuilder* UHoleFillToolBuilder::GetDefaultObj()
{
	static class UHoleFillToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillToolBuilder*>(UHoleFillToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SmoothHoleFillProperties
// (None)

class UClass* USmoothHoleFillProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothHoleFillProperties");

	return Clss;
}


// SmoothHoleFillProperties MeshModelingToolsExp.Default__SmoothHoleFillProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothHoleFillProperties* USmoothHoleFillProperties::GetDefaultObj()
{
	static class USmoothHoleFillProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothHoleFillProperties*>(USmoothHoleFillProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.HoleFillToolProperties
// (None)

class UClass* UHoleFillToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillToolProperties");

	return Clss;
}


// HoleFillToolProperties MeshModelingToolsExp.Default__HoleFillToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillToolProperties* UHoleFillToolProperties::GetDefaultObj()
{
	static class UHoleFillToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillToolProperties*>(UHoleFillToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.HoleFillToolActions
// (None)

class UClass* UHoleFillToolActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillToolActions");

	return Clss;
}


// HoleFillToolActions MeshModelingToolsExp.Default__HoleFillToolActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillToolActions* UHoleFillToolActions::GetDefaultObj()
{
	static class UHoleFillToolActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillToolActions*>(UHoleFillToolActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.HoleFillToolActions.SelectAll
// (Final, Native, Public)
// Parameters:

void UHoleFillToolActions::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoleFillToolActions", "SelectAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.HoleFillToolActions.Clear
// (Final, Native, Public)
// Parameters:

void UHoleFillToolActions::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoleFillToolActions", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.HoleFillStatisticsProperties
// (None)

class UClass* UHoleFillStatisticsProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillStatisticsProperties");

	return Clss;
}


// HoleFillStatisticsProperties MeshModelingToolsExp.Default__HoleFillStatisticsProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillStatisticsProperties* UHoleFillStatisticsProperties::GetDefaultObj()
{
	static class UHoleFillStatisticsProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillStatisticsProperties*>(UHoleFillStatisticsProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.HoleFillOperatorFactory
// (None)

class UClass* UHoleFillOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillOperatorFactory");

	return Clss;
}


// HoleFillOperatorFactory MeshModelingToolsExp.Default__HoleFillOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillOperatorFactory* UHoleFillOperatorFactory::GetDefaultObj()
{
	static class UHoleFillOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillOperatorFactory*>(UHoleFillOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.HoleFillTool
// (None)

class UClass* UHoleFillTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillTool");

	return Clss;
}


// HoleFillTool MeshModelingToolsExp.Default__HoleFillTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UHoleFillTool* UHoleFillTool::GetDefaultObj()
{
	static class UHoleFillTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillTool*>(UHoleFillTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.LatticeDeformerToolBuilder
// (None)

class UClass* ULatticeDeformerToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LatticeDeformerToolBuilder");

	return Clss;
}


// LatticeDeformerToolBuilder MeshModelingToolsExp.Default__LatticeDeformerToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class ULatticeDeformerToolBuilder* ULatticeDeformerToolBuilder::GetDefaultObj()
{
	static class ULatticeDeformerToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<ULatticeDeformerToolBuilder*>(ULatticeDeformerToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.LatticeDeformerToolProperties
// (None)

class UClass* ULatticeDeformerToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LatticeDeformerToolProperties");

	return Clss;
}


// LatticeDeformerToolProperties MeshModelingToolsExp.Default__LatticeDeformerToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class ULatticeDeformerToolProperties* ULatticeDeformerToolProperties::GetDefaultObj()
{
	static class ULatticeDeformerToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<ULatticeDeformerToolProperties*>(ULatticeDeformerToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain
// (Final, Native, Public)
// Parameters:

void ULatticeDeformerToolProperties::Constrain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LatticeDeformerToolProperties", "Constrain");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints
// (Final, Native, Public)
// Parameters:

void ULatticeDeformerToolProperties::ClearConstraints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LatticeDeformerToolProperties", "ClearConstraints");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.LatticeDeformerOperatorFactory
// (None)

class UClass* ULatticeDeformerOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LatticeDeformerOperatorFactory");

	return Clss;
}


// LatticeDeformerOperatorFactory MeshModelingToolsExp.Default__LatticeDeformerOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class ULatticeDeformerOperatorFactory* ULatticeDeformerOperatorFactory::GetDefaultObj()
{
	static class ULatticeDeformerOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<ULatticeDeformerOperatorFactory*>(ULatticeDeformerOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.LatticeDeformerTool
// (None)

class UClass* ULatticeDeformerTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LatticeDeformerTool");

	return Clss;
}


// LatticeDeformerTool MeshModelingToolsExp.Default__LatticeDeformerTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class ULatticeDeformerTool* ULatticeDeformerTool::GetDefaultObj()
{
	static class ULatticeDeformerTool* Default = nullptr;

	if (!Default)
		Default = static_cast<ULatticeDeformerTool*>(ULatticeDeformerTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshAttributePaintToolBuilder
// (None)

class UClass* UMeshAttributePaintToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintToolBuilder");

	return Clss;
}


// MeshAttributePaintToolBuilder MeshModelingToolsExp.Default__MeshAttributePaintToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintToolBuilder* UMeshAttributePaintToolBuilder::GetDefaultObj()
{
	static class UMeshAttributePaintToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintToolBuilder*>(UMeshAttributePaintToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
// (None)

class UClass* UMeshAttributePaintBrushOperationProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintBrushOperationProperties");

	return Clss;
}


// MeshAttributePaintBrushOperationProperties MeshModelingToolsExp.Default__MeshAttributePaintBrushOperationProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintBrushOperationProperties* UMeshAttributePaintBrushOperationProperties::GetDefaultObj()
{
	static class UMeshAttributePaintBrushOperationProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintBrushOperationProperties*>(UMeshAttributePaintBrushOperationProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshAttributePaintToolProperties
// (None)

class UClass* UMeshAttributePaintToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintToolProperties");

	return Clss;
}


// MeshAttributePaintToolProperties MeshModelingToolsExp.Default__MeshAttributePaintToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintToolProperties* UMeshAttributePaintToolProperties::GetDefaultObj()
{
	static class UMeshAttributePaintToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintToolProperties*>(UMeshAttributePaintToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UMeshAttributePaintToolProperties::GetAttributeNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshAttributePaintToolProperties", "GetAttributeNames");

	Params::UMeshAttributePaintToolProperties_GetAttributeNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.MeshAttributePaintEditActions
// (None)

class UClass* UMeshAttributePaintEditActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintEditActions");

	return Clss;
}


// MeshAttributePaintEditActions MeshModelingToolsExp.Default__MeshAttributePaintEditActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintEditActions* UMeshAttributePaintEditActions::GetDefaultObj()
{
	static class UMeshAttributePaintEditActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintEditActions*>(UMeshAttributePaintEditActions::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshAttributePaintTool
// (None)

class UClass* UMeshAttributePaintTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintTool");

	return Clss;
}


// MeshAttributePaintTool MeshModelingToolsExp.Default__MeshAttributePaintTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintTool* UMeshAttributePaintTool::GetDefaultObj()
{
	static class UMeshAttributePaintTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintTool*>(UMeshAttributePaintTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshBoundaryToolBase
// (None)

class UClass* UMeshBoundaryToolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshBoundaryToolBase");

	return Clss;
}


// MeshBoundaryToolBase MeshModelingToolsExp.Default__MeshBoundaryToolBase
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshBoundaryToolBase* UMeshBoundaryToolBase::GetDefaultObj()
{
	static class UMeshBoundaryToolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshBoundaryToolBase*>(UMeshBoundaryToolBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshGroupPaintToolBuilder
// (None)

class UClass* UMeshGroupPaintToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshGroupPaintToolBuilder");

	return Clss;
}


// MeshGroupPaintToolBuilder MeshModelingToolsExp.Default__MeshGroupPaintToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshGroupPaintToolBuilder* UMeshGroupPaintToolBuilder::GetDefaultObj()
{
	static class UMeshGroupPaintToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshGroupPaintToolBuilder*>(UMeshGroupPaintToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.GroupPaintBrushFilterProperties
// (None)

class UClass* UGroupPaintBrushFilterProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupPaintBrushFilterProperties");

	return Clss;
}


// GroupPaintBrushFilterProperties MeshModelingToolsExp.Default__GroupPaintBrushFilterProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupPaintBrushFilterProperties* UGroupPaintBrushFilterProperties::GetDefaultObj()
{
	static class UGroupPaintBrushFilterProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupPaintBrushFilterProperties*>(UGroupPaintBrushFilterProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
// (None)

class UClass* UMeshGroupPaintToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshGroupPaintToolActionPropertySet");

	return Clss;
}


// MeshGroupPaintToolActionPropertySet MeshModelingToolsExp.Default__MeshGroupPaintToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshGroupPaintToolActionPropertySet* UMeshGroupPaintToolActionPropertySet::GetDefaultObj()
{
	static class UMeshGroupPaintToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshGroupPaintToolActionPropertySet*>(UMeshGroupPaintToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
// (None)

class UClass* UMeshGroupPaintToolFreezeActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshGroupPaintToolFreezeActions");

	return Clss;
}


// MeshGroupPaintToolFreezeActions MeshModelingToolsExp.Default__MeshGroupPaintToolFreezeActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshGroupPaintToolFreezeActions* UMeshGroupPaintToolFreezeActions::GetDefaultObj()
{
	static class UMeshGroupPaintToolFreezeActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshGroupPaintToolFreezeActions*>(UMeshGroupPaintToolFreezeActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::UnfreezeAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "UnfreezeAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::ShrinkCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "ShrinkCurrent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::GrowCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "GrowCurrent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::FreezeOthers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "FreezeOthers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::FreezeCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "FreezeCurrent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::FloodFillCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "FloodFillCurrent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::ClearCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "ClearCurrent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::ClearAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "ClearAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.MeshSculptToolBase
// (None)

class UClass* UMeshSculptToolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSculptToolBase");

	return Clss;
}


// MeshSculptToolBase MeshModelingToolsExp.Default__MeshSculptToolBase
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshSculptToolBase* UMeshSculptToolBase::GetDefaultObj()
{
	static class UMeshSculptToolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSculptToolBase*>(UMeshSculptToolBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshGroupPaintTool
// (None)

class UClass* UMeshGroupPaintTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshGroupPaintTool");

	return Clss;
}


// MeshGroupPaintTool MeshModelingToolsExp.Default__MeshGroupPaintTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshGroupPaintTool* UMeshGroupPaintTool::GetDefaultObj()
{
	static class UMeshGroupPaintTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshGroupPaintTool*>(UMeshGroupPaintTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshInspectorToolBuilder
// (None)

class UClass* UMeshInspectorToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshInspectorToolBuilder");

	return Clss;
}


// MeshInspectorToolBuilder MeshModelingToolsExp.Default__MeshInspectorToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshInspectorToolBuilder* UMeshInspectorToolBuilder::GetDefaultObj()
{
	static class UMeshInspectorToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshInspectorToolBuilder*>(UMeshInspectorToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshInspectorProperties
// (None)

class UClass* UMeshInspectorProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshInspectorProperties");

	return Clss;
}


// MeshInspectorProperties MeshModelingToolsExp.Default__MeshInspectorProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshInspectorProperties* UMeshInspectorProperties::GetDefaultObj()
{
	static class UMeshInspectorProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshInspectorProperties*>(UMeshInspectorProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshInspectorTool
// (None)

class UClass* UMeshInspectorTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshInspectorTool");

	return Clss;
}


// MeshInspectorTool MeshModelingToolsExp.Default__MeshInspectorTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshInspectorTool* UMeshInspectorTool::GetDefaultObj()
{
	static class UMeshInspectorTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshInspectorTool*>(UMeshInspectorTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSelectionToolBuilder
// (None)

class UClass* UMeshSelectionToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionToolBuilder");

	return Clss;
}


// MeshSelectionToolBuilder MeshModelingToolsExp.Default__MeshSelectionToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionToolBuilder* UMeshSelectionToolBuilder::GetDefaultObj()
{
	static class UMeshSelectionToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionToolBuilder*>(UMeshSelectionToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSelectionToolActionPropertySet
// (None)

class UClass* UMeshSelectionToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionToolActionPropertySet");

	return Clss;
}


// MeshSelectionToolActionPropertySet MeshModelingToolsExp.Default__MeshSelectionToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionToolActionPropertySet* UMeshSelectionToolActionPropertySet::GetDefaultObj()
{
	static class UMeshSelectionToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionToolActionPropertySet*>(UMeshSelectionToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSelectionEditActions
// (None)

class UClass* UMeshSelectionEditActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionEditActions");

	return Clss;
}


// MeshSelectionEditActions MeshModelingToolsExp.Default__MeshSelectionEditActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionEditActions* UMeshSelectionEditActions::GetDefaultObj()
{
	static class UMeshSelectionEditActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionEditActions*>(UMeshSelectionEditActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Shrink
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Shrink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Shrink");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.SelectAll
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "SelectAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::OptimizeBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "OptimizeBorder");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::LargestTriCountPart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "LargestTriCountPart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::LargestAreaPart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "LargestAreaPart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Invert
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Invert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Invert");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Grow
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Grow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Grow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.FloodFill
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::FloodFill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "FloodFill");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Clear
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.MeshSelectionMeshEditActions
// (None)

class UClass* UMeshSelectionMeshEditActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionMeshEditActions");

	return Clss;
}


// MeshSelectionMeshEditActions MeshModelingToolsExp.Default__MeshSelectionMeshEditActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionMeshEditActions* UMeshSelectionMeshEditActions::GetDefaultObj()
{
	static class UMeshSelectionMeshEditActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionMeshEditActions*>(UMeshSelectionMeshEditActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::SmoothBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "SmoothBorder");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Separate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "Separate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::FlipNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "FlipNormals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Duplicate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "Duplicate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "Disconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Delete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "Delete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::CreatePolygroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "CreatePolygroup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.MeshSelectionToolProperties
// (None)

class UClass* UMeshSelectionToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionToolProperties");

	return Clss;
}


// MeshSelectionToolProperties MeshModelingToolsExp.Default__MeshSelectionToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionToolProperties* UMeshSelectionToolProperties::GetDefaultObj()
{
	static class UMeshSelectionToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionToolProperties*>(UMeshSelectionToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSelectionTool
// (None)

class UClass* UMeshSelectionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionTool");

	return Clss;
}


// MeshSelectionTool MeshModelingToolsExp.Default__MeshSelectionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionTool* UMeshSelectionTool::GetDefaultObj()
{
	static class UMeshSelectionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionTool*>(UMeshSelectionTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
// (None)

class UClass* UMeshSpaceDeformerToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSpaceDeformerToolBuilder");

	return Clss;
}


// MeshSpaceDeformerToolBuilder MeshModelingToolsExp.Default__MeshSpaceDeformerToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSpaceDeformerToolBuilder* UMeshSpaceDeformerToolBuilder::GetDefaultObj()
{
	static class UMeshSpaceDeformerToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSpaceDeformerToolBuilder*>(UMeshSpaceDeformerToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSpaceDeformerToolProperties
// (None)

class UClass* UMeshSpaceDeformerToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSpaceDeformerToolProperties");

	return Clss;
}


// MeshSpaceDeformerToolProperties MeshModelingToolsExp.Default__MeshSpaceDeformerToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSpaceDeformerToolProperties* UMeshSpaceDeformerToolProperties::GetDefaultObj()
{
	static class UMeshSpaceDeformerToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSpaceDeformerToolProperties*>(UMeshSpaceDeformerToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
// (None)

class UClass* UMeshSpaceDeformerToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSpaceDeformerToolActionPropertySet");

	return Clss;
}


// MeshSpaceDeformerToolActionPropertySet MeshModelingToolsExp.Default__MeshSpaceDeformerToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSpaceDeformerToolActionPropertySet* UMeshSpaceDeformerToolActionPropertySet::GetDefaultObj()
{
	static class UMeshSpaceDeformerToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSpaceDeformerToolActionPropertySet*>(UMeshSpaceDeformerToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter
// (Final, Native, Public)
// Parameters:

void UMeshSpaceDeformerToolActionPropertySet::ShiftToCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSpaceDeformerToolActionPropertySet", "ShiftToCenter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.SpaceDeformerOperatorFactory
// (None)

class UClass* USpaceDeformerOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceDeformerOperatorFactory");

	return Clss;
}


// SpaceDeformerOperatorFactory MeshModelingToolsExp.Default__SpaceDeformerOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class USpaceDeformerOperatorFactory* USpaceDeformerOperatorFactory::GetDefaultObj()
{
	static class USpaceDeformerOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<USpaceDeformerOperatorFactory*>(USpaceDeformerOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSpaceDeformerTool
// (None)

class UClass* UMeshSpaceDeformerTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSpaceDeformerTool");

	return Clss;
}


// MeshSpaceDeformerTool MeshModelingToolsExp.Default__MeshSpaceDeformerTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshSpaceDeformerTool* UMeshSpaceDeformerTool::GetDefaultObj()
{
	static class UMeshSpaceDeformerTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSpaceDeformerTool*>(UMeshSpaceDeformerTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshVertexSculptToolBuilder
// (None)

class UClass* UMeshVertexSculptToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshVertexSculptToolBuilder");

	return Clss;
}


// MeshVertexSculptToolBuilder MeshModelingToolsExp.Default__MeshVertexSculptToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshVertexSculptToolBuilder* UMeshVertexSculptToolBuilder::GetDefaultObj()
{
	static class UMeshVertexSculptToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshVertexSculptToolBuilder*>(UMeshVertexSculptToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VertexBrushSculptProperties
// (None)

class UClass* UVertexBrushSculptProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VertexBrushSculptProperties");

	return Clss;
}


// VertexBrushSculptProperties MeshModelingToolsExp.Default__VertexBrushSculptProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVertexBrushSculptProperties* UVertexBrushSculptProperties::GetDefaultObj()
{
	static class UVertexBrushSculptProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVertexBrushSculptProperties*>(UVertexBrushSculptProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VertexBrushAlphaProperties
// (None)

class UClass* UVertexBrushAlphaProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VertexBrushAlphaProperties");

	return Clss;
}


// VertexBrushAlphaProperties MeshModelingToolsExp.Default__VertexBrushAlphaProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVertexBrushAlphaProperties* UVertexBrushAlphaProperties::GetDefaultObj()
{
	static class UVertexBrushAlphaProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVertexBrushAlphaProperties*>(UVertexBrushAlphaProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshSymmetryProperties
// (None)

class UClass* UMeshSymmetryProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSymmetryProperties");

	return Clss;
}


// MeshSymmetryProperties MeshModelingToolsExp.Default__MeshSymmetryProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSymmetryProperties* UMeshSymmetryProperties::GetDefaultObj()
{
	static class UMeshSymmetryProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSymmetryProperties*>(UMeshSymmetryProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshVertexSculptTool
// (None)

class UClass* UMeshVertexSculptTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshVertexSculptTool");

	return Clss;
}


// MeshVertexSculptTool MeshModelingToolsExp.Default__MeshVertexSculptTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshVertexSculptTool* UMeshVertexSculptTool::GetDefaultObj()
{
	static class UMeshVertexSculptTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshVertexSculptTool*>(UMeshVertexSculptTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MirrorToolBuilder
// (None)

class UClass* UMirrorToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorToolBuilder");

	return Clss;
}


// MirrorToolBuilder MeshModelingToolsExp.Default__MirrorToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorToolBuilder* UMirrorToolBuilder::GetDefaultObj()
{
	static class UMirrorToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorToolBuilder*>(UMirrorToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MirrorToolProperties
// (None)

class UClass* UMirrorToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorToolProperties");

	return Clss;
}


// MirrorToolProperties MeshModelingToolsExp.Default__MirrorToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorToolProperties* UMirrorToolProperties::GetDefaultObj()
{
	static class UMirrorToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorToolProperties*>(UMirrorToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MirrorOperatorFactory
// (None)

class UClass* UMirrorOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorOperatorFactory");

	return Clss;
}


// MirrorOperatorFactory MeshModelingToolsExp.Default__MirrorOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorOperatorFactory* UMirrorOperatorFactory::GetDefaultObj()
{
	static class UMirrorOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorOperatorFactory*>(UMirrorOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MirrorToolActionPropertySet
// (None)

class UClass* UMirrorToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorToolActionPropertySet");

	return Clss;
}


// MirrorToolActionPropertySet MeshModelingToolsExp.Default__MirrorToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorToolActionPropertySet* UMirrorToolActionPropertySet::GetDefaultObj()
{
	static class UMirrorToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorToolActionPropertySet*>(UMirrorToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Up
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Up");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::ShiftToCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "ShiftToCenter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Right
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Right");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Left
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Left");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Forward
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Forward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Forward");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Down
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Down");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Backward
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Backward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Backward");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.MirrorTool
// (None)

class UClass* UMirrorTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorTool");

	return Clss;
}


// MirrorTool MeshModelingToolsExp.Default__MirrorTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMirrorTool* UMirrorTool::GetDefaultObj()
{
	static class UMirrorTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorTool*>(UMirrorTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.OffsetMeshToolProperties
// (None)

class UClass* UOffsetMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetMeshToolProperties");

	return Clss;
}


// OffsetMeshToolProperties MeshModelingToolsExp.Default__OffsetMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UOffsetMeshToolProperties* UOffsetMeshToolProperties::GetDefaultObj()
{
	static class UOffsetMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetMeshToolProperties*>(UOffsetMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.OffsetWeightMapSetProperties
// (None)

class UClass* UOffsetWeightMapSetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetWeightMapSetProperties");

	return Clss;
}


// OffsetWeightMapSetProperties MeshModelingToolsExp.Default__OffsetWeightMapSetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UOffsetWeightMapSetProperties* UOffsetWeightMapSetProperties::GetDefaultObj()
{
	static class UOffsetWeightMapSetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetWeightMapSetProperties*>(UOffsetWeightMapSetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.IterativeOffsetProperties
// (None)

class UClass* UIterativeOffsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IterativeOffsetProperties");

	return Clss;
}


// IterativeOffsetProperties MeshModelingToolsExp.Default__IterativeOffsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UIterativeOffsetProperties* UIterativeOffsetProperties::GetDefaultObj()
{
	static class UIterativeOffsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UIterativeOffsetProperties*>(UIterativeOffsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ImplicitOffsetProperties
// (None)

class UClass* UImplicitOffsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImplicitOffsetProperties");

	return Clss;
}


// ImplicitOffsetProperties MeshModelingToolsExp.Default__ImplicitOffsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UImplicitOffsetProperties* UImplicitOffsetProperties::GetDefaultObj()
{
	static class UImplicitOffsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UImplicitOffsetProperties*>(UImplicitOffsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.OffsetMeshTool
// (None)

class UClass* UOffsetMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetMeshTool");

	return Clss;
}


// OffsetMeshTool MeshModelingToolsExp.Default__OffsetMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UOffsetMeshTool* UOffsetMeshTool::GetDefaultObj()
{
	static class UOffsetMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetMeshTool*>(UOffsetMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.OffsetMeshToolBuilder
// (None)

class UClass* UOffsetMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetMeshToolBuilder");

	return Clss;
}


// OffsetMeshToolBuilder MeshModelingToolsExp.Default__OffsetMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UOffsetMeshToolBuilder* UOffsetMeshToolBuilder::GetDefaultObj()
{
	static class UOffsetMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetMeshToolBuilder*>(UOffsetMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PhysicsObjectToolPropertySet
// (None)

class UClass* UPhysicsObjectToolPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsObjectToolPropertySet");

	return Clss;
}


// PhysicsObjectToolPropertySet MeshModelingToolsExp.Default__PhysicsObjectToolPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsObjectToolPropertySet* UPhysicsObjectToolPropertySet::GetDefaultObj()
{
	static class UPhysicsObjectToolPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsObjectToolPropertySet*>(UPhysicsObjectToolPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.CollisionGeometryVisualizationProperties
// (None)

class UClass* UCollisionGeometryVisualizationProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollisionGeometryVisualizationProperties");

	return Clss;
}


// CollisionGeometryVisualizationProperties MeshModelingToolsExp.Default__CollisionGeometryVisualizationProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCollisionGeometryVisualizationProperties* UCollisionGeometryVisualizationProperties::GetDefaultObj()
{
	static class UCollisionGeometryVisualizationProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollisionGeometryVisualizationProperties*>(UCollisionGeometryVisualizationProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
// (None)

class UClass* UExtractCollisionGeometryToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtractCollisionGeometryToolBuilder");

	return Clss;
}


// ExtractCollisionGeometryToolBuilder MeshModelingToolsExp.Default__ExtractCollisionGeometryToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UExtractCollisionGeometryToolBuilder* UExtractCollisionGeometryToolBuilder::GetDefaultObj()
{
	static class UExtractCollisionGeometryToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtractCollisionGeometryToolBuilder*>(UExtractCollisionGeometryToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ExtractCollisionToolProperties
// (None)

class UClass* UExtractCollisionToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtractCollisionToolProperties");

	return Clss;
}


// ExtractCollisionToolProperties MeshModelingToolsExp.Default__ExtractCollisionToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UExtractCollisionToolProperties* UExtractCollisionToolProperties::GetDefaultObj()
{
	static class UExtractCollisionToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtractCollisionToolProperties*>(UExtractCollisionToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ExtractCollisionGeometryTool
// (None)

class UClass* UExtractCollisionGeometryTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtractCollisionGeometryTool");

	return Clss;
}


// ExtractCollisionGeometryTool MeshModelingToolsExp.Default__ExtractCollisionGeometryTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UExtractCollisionGeometryTool* UExtractCollisionGeometryTool::GetDefaultObj()
{
	static class UExtractCollisionGeometryTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtractCollisionGeometryTool*>(UExtractCollisionGeometryTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PhysicsInspectorToolBuilder
// (None)

class UClass* UPhysicsInspectorToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsInspectorToolBuilder");

	return Clss;
}


// PhysicsInspectorToolBuilder MeshModelingToolsExp.Default__PhysicsInspectorToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsInspectorToolBuilder* UPhysicsInspectorToolBuilder::GetDefaultObj()
{
	static class UPhysicsInspectorToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsInspectorToolBuilder*>(UPhysicsInspectorToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PhysicsInspectorTool
// (None)

class UClass* UPhysicsInspectorTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsInspectorTool");

	return Clss;
}


// PhysicsInspectorTool MeshModelingToolsExp.Default__PhysicsInspectorTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPhysicsInspectorTool* UPhysicsInspectorTool::GetDefaultObj()
{
	static class UPhysicsInspectorTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsInspectorTool*>(UPhysicsInspectorTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SetCollisionGeometryToolBuilder
// (None)

class UClass* USetCollisionGeometryToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetCollisionGeometryToolBuilder");

	return Clss;
}


// SetCollisionGeometryToolBuilder MeshModelingToolsExp.Default__SetCollisionGeometryToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USetCollisionGeometryToolBuilder* USetCollisionGeometryToolBuilder::GetDefaultObj()
{
	static class USetCollisionGeometryToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USetCollisionGeometryToolBuilder*>(USetCollisionGeometryToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SetCollisionGeometryToolProperties
// (None)

class UClass* USetCollisionGeometryToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetCollisionGeometryToolProperties");

	return Clss;
}


// SetCollisionGeometryToolProperties MeshModelingToolsExp.Default__SetCollisionGeometryToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USetCollisionGeometryToolProperties* USetCollisionGeometryToolProperties::GetDefaultObj()
{
	static class USetCollisionGeometryToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USetCollisionGeometryToolProperties*>(USetCollisionGeometryToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SetCollisionGeometryTool
// (None)

class UClass* USetCollisionGeometryTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetCollisionGeometryTool");

	return Clss;
}


// SetCollisionGeometryTool MeshModelingToolsExp.Default__SetCollisionGeometryTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USetCollisionGeometryTool* USetCollisionGeometryTool::GetDefaultObj()
{
	static class USetCollisionGeometryTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USetCollisionGeometryTool*>(USetCollisionGeometryTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PlaneCutToolBuilder
// (None)

class UClass* UPlaneCutToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutToolBuilder");

	return Clss;
}


// PlaneCutToolBuilder MeshModelingToolsExp.Default__PlaneCutToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneCutToolBuilder* UPlaneCutToolBuilder::GetDefaultObj()
{
	static class UPlaneCutToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutToolBuilder*>(UPlaneCutToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.AcceptOutputProperties
// (None)

class UClass* UAcceptOutputProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AcceptOutputProperties");

	return Clss;
}


// AcceptOutputProperties MeshModelingToolsExp.Default__AcceptOutputProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAcceptOutputProperties* UAcceptOutputProperties::GetDefaultObj()
{
	static class UAcceptOutputProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAcceptOutputProperties*>(UAcceptOutputProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PlaneCutToolProperties
// (None)

class UClass* UPlaneCutToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutToolProperties");

	return Clss;
}


// PlaneCutToolProperties MeshModelingToolsExp.Default__PlaneCutToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneCutToolProperties* UPlaneCutToolProperties::GetDefaultObj()
{
	static class UPlaneCutToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutToolProperties*>(UPlaneCutToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PlaneCutOperatorFactory
// (None)

class UClass* UPlaneCutOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutOperatorFactory");

	return Clss;
}


// PlaneCutOperatorFactory MeshModelingToolsExp.Default__PlaneCutOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneCutOperatorFactory* UPlaneCutOperatorFactory::GetDefaultObj()
{
	static class UPlaneCutOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutOperatorFactory*>(UPlaneCutOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.PlaneCutTool
// (None)

class UClass* UPlaneCutTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutTool");

	return Clss;
}


// PlaneCutTool MeshModelingToolsExp.Default__PlaneCutTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPlaneCutTool* UPlaneCutTool::GetDefaultObj()
{
	static class UPlaneCutTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutTool*>(UPlaneCutTool::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.PlaneCutTool.FlipPlane
// (Final, Native, Protected)
// Parameters:

void UPlaneCutTool::FlipPlane()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlaneCutTool", "FlipPlane");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingToolsExp.PlaneCutTool.Cut
// (Final, Native, Protected)
// Parameters:

void UPlaneCutTool::Cut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlaneCutTool", "Cut");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingToolsExp.ProjectToTargetToolBuilder
// (None)

class UClass* UProjectToTargetToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectToTargetToolBuilder");

	return Clss;
}


// ProjectToTargetToolBuilder MeshModelingToolsExp.Default__ProjectToTargetToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UProjectToTargetToolBuilder* UProjectToTargetToolBuilder::GetDefaultObj()
{
	static class UProjectToTargetToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectToTargetToolBuilder*>(UProjectToTargetToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemeshMeshToolProperties
// (None)

class UClass* URemeshMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshMeshToolProperties");

	return Clss;
}


// RemeshMeshToolProperties MeshModelingToolsExp.Default__RemeshMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemeshMeshToolProperties* URemeshMeshToolProperties::GetDefaultObj()
{
	static class URemeshMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshMeshToolProperties*>(URemeshMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ProjectToTargetToolProperties
// (None)

class UClass* UProjectToTargetToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectToTargetToolProperties");

	return Clss;
}


// ProjectToTargetToolProperties MeshModelingToolsExp.Default__ProjectToTargetToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProjectToTargetToolProperties* UProjectToTargetToolProperties::GetDefaultObj()
{
	static class UProjectToTargetToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectToTargetToolProperties*>(UProjectToTargetToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemeshMeshTool
// (None)

class UClass* URemeshMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshMeshTool");

	return Clss;
}


// RemeshMeshTool MeshModelingToolsExp.Default__RemeshMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class URemeshMeshTool* URemeshMeshTool::GetDefaultObj()
{
	static class URemeshMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshMeshTool*>(URemeshMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ProjectToTargetTool
// (None)

class UClass* UProjectToTargetTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectToTargetTool");

	return Clss;
}


// ProjectToTargetTool MeshModelingToolsExp.Default__ProjectToTargetTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UProjectToTargetTool* UProjectToTargetTool::GetDefaultObj()
{
	static class UProjectToTargetTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectToTargetTool*>(UProjectToTargetTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshAnalysisProperties
// (None)

class UClass* UMeshAnalysisProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAnalysisProperties");

	return Clss;
}


// MeshAnalysisProperties MeshModelingToolsExp.Default__MeshAnalysisProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAnalysisProperties* UMeshAnalysisProperties::GetDefaultObj()
{
	static class UMeshAnalysisProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAnalysisProperties*>(UMeshAnalysisProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.MeshStatisticsProperties
// (None)

class UClass* UMeshStatisticsProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshStatisticsProperties");

	return Clss;
}


// MeshStatisticsProperties MeshModelingToolsExp.Default__MeshStatisticsProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshStatisticsProperties* UMeshStatisticsProperties::GetDefaultObj()
{
	static class UMeshStatisticsProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshStatisticsProperties*>(UMeshStatisticsProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemeshMeshToolBuilder
// (None)

class UClass* URemeshMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshMeshToolBuilder");

	return Clss;
}


// RemeshMeshToolBuilder MeshModelingToolsExp.Default__RemeshMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class URemeshMeshToolBuilder* URemeshMeshToolBuilder::GetDefaultObj()
{
	static class URemeshMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshMeshToolBuilder*>(URemeshMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
// (None)

class UClass* URemoveOccludedTrianglesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesToolBuilder");

	return Clss;
}


// RemoveOccludedTrianglesToolBuilder MeshModelingToolsExp.Default__RemoveOccludedTrianglesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesToolBuilder* URemoveOccludedTrianglesToolBuilder::GetDefaultObj()
{
	static class URemoveOccludedTrianglesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesToolBuilder*>(URemoveOccludedTrianglesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
// (None)

class UClass* URemoveOccludedTrianglesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesToolProperties");

	return Clss;
}


// RemoveOccludedTrianglesToolProperties MeshModelingToolsExp.Default__RemoveOccludedTrianglesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesToolProperties* URemoveOccludedTrianglesToolProperties::GetDefaultObj()
{
	static class URemoveOccludedTrianglesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesToolProperties*>(URemoveOccludedTrianglesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
// (None)

class UClass* URemoveOccludedTrianglesAdvancedProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesAdvancedProperties");

	return Clss;
}


// RemoveOccludedTrianglesAdvancedProperties MeshModelingToolsExp.Default__RemoveOccludedTrianglesAdvancedProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesAdvancedProperties* URemoveOccludedTrianglesAdvancedProperties::GetDefaultObj()
{
	static class URemoveOccludedTrianglesAdvancedProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesAdvancedProperties*>(URemoveOccludedTrianglesAdvancedProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
// (None)

class UClass* URemoveOccludedTrianglesOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesOperatorFactory");

	return Clss;
}


// RemoveOccludedTrianglesOperatorFactory MeshModelingToolsExp.Default__RemoveOccludedTrianglesOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesOperatorFactory* URemoveOccludedTrianglesOperatorFactory::GetDefaultObj()
{
	static class URemoveOccludedTrianglesOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesOperatorFactory*>(URemoveOccludedTrianglesOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RemoveOccludedTrianglesTool
// (None)

class UClass* URemoveOccludedTrianglesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesTool");

	return Clss;
}


// RemoveOccludedTrianglesTool MeshModelingToolsExp.Default__RemoveOccludedTrianglesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesTool* URemoveOccludedTrianglesTool::GetDefaultObj()
{
	static class URemoveOccludedTrianglesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesTool*>(URemoveOccludedTrianglesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RevolveBoundaryToolBuilder
// (None)

class UClass* URevolveBoundaryToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryToolBuilder");

	return Clss;
}


// RevolveBoundaryToolBuilder MeshModelingToolsExp.Default__RevolveBoundaryToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryToolBuilder* URevolveBoundaryToolBuilder::GetDefaultObj()
{
	static class URevolveBoundaryToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryToolBuilder*>(URevolveBoundaryToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RevolveBoundaryOperatorFactory
// (None)

class UClass* URevolveBoundaryOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryOperatorFactory");

	return Clss;
}


// RevolveBoundaryOperatorFactory MeshModelingToolsExp.Default__RevolveBoundaryOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryOperatorFactory* URevolveBoundaryOperatorFactory::GetDefaultObj()
{
	static class URevolveBoundaryOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryOperatorFactory*>(URevolveBoundaryOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RevolveBoundaryToolProperties
// (None)

class UClass* URevolveBoundaryToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryToolProperties");

	return Clss;
}


// RevolveBoundaryToolProperties MeshModelingToolsExp.Default__RevolveBoundaryToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryToolProperties* URevolveBoundaryToolProperties::GetDefaultObj()
{
	static class URevolveBoundaryToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryToolProperties*>(URevolveBoundaryToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.RevolveBoundaryTool
// (None)

class UClass* URevolveBoundaryTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryTool");

	return Clss;
}


// RevolveBoundaryTool MeshModelingToolsExp.Default__RevolveBoundaryTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryTool* URevolveBoundaryTool::GetDefaultObj()
{
	static class URevolveBoundaryTool* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryTool*>(URevolveBoundaryTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SculptBrushProperties
// (None)

class UClass* USculptBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SculptBrushProperties");

	return Clss;
}


// SculptBrushProperties MeshModelingToolsExp.Default__SculptBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USculptBrushProperties* USculptBrushProperties::GetDefaultObj()
{
	static class USculptBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USculptBrushProperties*>(USculptBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.KelvinBrushProperties
// (None)

class UClass* UKelvinBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KelvinBrushProperties");

	return Clss;
}


// KelvinBrushProperties MeshModelingToolsExp.Default__KelvinBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UKelvinBrushProperties* UKelvinBrushProperties::GetDefaultObj()
{
	static class UKelvinBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UKelvinBrushProperties*>(UKelvinBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.WorkPlaneProperties
// (None)

class UClass* UWorkPlaneProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorkPlaneProperties");

	return Clss;
}


// WorkPlaneProperties MeshModelingToolsExp.Default__WorkPlaneProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorkPlaneProperties* UWorkPlaneProperties::GetDefaultObj()
{
	static class UWorkPlaneProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorkPlaneProperties*>(UWorkPlaneProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SculptMaxBrushProperties
// (None)

class UClass* USculptMaxBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SculptMaxBrushProperties");

	return Clss;
}


// SculptMaxBrushProperties MeshModelingToolsExp.Default__SculptMaxBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USculptMaxBrushProperties* USculptMaxBrushProperties::GetDefaultObj()
{
	static class USculptMaxBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USculptMaxBrushProperties*>(USculptMaxBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SeamSculptToolBuilder
// (None)

class UClass* USeamSculptToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeamSculptToolBuilder");

	return Clss;
}


// SeamSculptToolBuilder MeshModelingToolsExp.Default__SeamSculptToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USeamSculptToolBuilder* USeamSculptToolBuilder::GetDefaultObj()
{
	static class USeamSculptToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USeamSculptToolBuilder*>(USeamSculptToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SeamSculptToolProperties
// (None)

class UClass* USeamSculptToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeamSculptToolProperties");

	return Clss;
}


// SeamSculptToolProperties MeshModelingToolsExp.Default__SeamSculptToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USeamSculptToolProperties* USeamSculptToolProperties::GetDefaultObj()
{
	static class USeamSculptToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USeamSculptToolProperties*>(USeamSculptToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SeamSculptTool
// (None)

class UClass* USeamSculptTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeamSculptTool");

	return Clss;
}


// SeamSculptTool MeshModelingToolsExp.Default__SeamSculptTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USeamSculptTool* USeamSculptTool::GetDefaultObj()
{
	static class USeamSculptTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USeamSculptTool*>(USeamSculptTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SelfUnionMeshesToolProperties
// (None)

class UClass* USelfUnionMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelfUnionMeshesToolProperties");

	return Clss;
}


// SelfUnionMeshesToolProperties MeshModelingToolsExp.Default__SelfUnionMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USelfUnionMeshesToolProperties* USelfUnionMeshesToolProperties::GetDefaultObj()
{
	static class USelfUnionMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USelfUnionMeshesToolProperties*>(USelfUnionMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SelfUnionMeshesTool
// (None)

class UClass* USelfUnionMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelfUnionMeshesTool");

	return Clss;
}


// SelfUnionMeshesTool MeshModelingToolsExp.Default__SelfUnionMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USelfUnionMeshesTool* USelfUnionMeshesTool::GetDefaultObj()
{
	static class USelfUnionMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USelfUnionMeshesTool*>(USelfUnionMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SelfUnionMeshesToolBuilder
// (None)

class UClass* USelfUnionMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelfUnionMeshesToolBuilder");

	return Clss;
}


// SelfUnionMeshesToolBuilder MeshModelingToolsExp.Default__SelfUnionMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USelfUnionMeshesToolBuilder* USelfUnionMeshesToolBuilder::GetDefaultObj()
{
	static class USelfUnionMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USelfUnionMeshesToolBuilder*>(USelfUnionMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SkinWeightsBindingToolBuilder
// (None)

class UClass* USkinWeightsBindingToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinWeightsBindingToolBuilder");

	return Clss;
}


// SkinWeightsBindingToolBuilder MeshModelingToolsExp.Default__SkinWeightsBindingToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USkinWeightsBindingToolBuilder* USkinWeightsBindingToolBuilder::GetDefaultObj()
{
	static class USkinWeightsBindingToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinWeightsBindingToolBuilder*>(USkinWeightsBindingToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SkinWeightsBindingToolProperties
// (None)

class UClass* USkinWeightsBindingToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinWeightsBindingToolProperties");

	return Clss;
}


// SkinWeightsBindingToolProperties MeshModelingToolsExp.Default__SkinWeightsBindingToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USkinWeightsBindingToolProperties* USkinWeightsBindingToolProperties::GetDefaultObj()
{
	static class USkinWeightsBindingToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinWeightsBindingToolProperties*>(USkinWeightsBindingToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SkinWeightsBindingTool
// (None)

class UClass* USkinWeightsBindingTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinWeightsBindingTool");

	return Clss;
}


// SkinWeightsBindingTool MeshModelingToolsExp.Default__SkinWeightsBindingTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USkinWeightsBindingTool* USkinWeightsBindingTool::GetDefaultObj()
{
	static class USkinWeightsBindingTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinWeightsBindingTool*>(USkinWeightsBindingTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SkinWeightsPaintToolBuilder
// (None)

class UClass* USkinWeightsPaintToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinWeightsPaintToolBuilder");

	return Clss;
}


// SkinWeightsPaintToolBuilder MeshModelingToolsExp.Default__SkinWeightsPaintToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USkinWeightsPaintToolBuilder* USkinWeightsPaintToolBuilder::GetDefaultObj()
{
	static class USkinWeightsPaintToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinWeightsPaintToolBuilder*>(USkinWeightsPaintToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SkinWeightsPaintToolProperties
// (None)

class UClass* USkinWeightsPaintToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinWeightsPaintToolProperties");

	return Clss;
}


// SkinWeightsPaintToolProperties MeshModelingToolsExp.Default__SkinWeightsPaintToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USkinWeightsPaintToolProperties* USkinWeightsPaintToolProperties::GetDefaultObj()
{
	static class USkinWeightsPaintToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinWeightsPaintToolProperties*>(USkinWeightsPaintToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SkinWeightsPaintTool
// (None)

class UClass* USkinWeightsPaintTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinWeightsPaintTool");

	return Clss;
}


// SkinWeightsPaintTool MeshModelingToolsExp.Default__SkinWeightsPaintTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USkinWeightsPaintTool* USkinWeightsPaintTool::GetDefaultObj()
{
	static class USkinWeightsPaintTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinWeightsPaintTool*>(USkinWeightsPaintTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SmoothMeshToolProperties
// (None)

class UClass* USmoothMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothMeshToolProperties");

	return Clss;
}


// SmoothMeshToolProperties MeshModelingToolsExp.Default__SmoothMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothMeshToolProperties* USmoothMeshToolProperties::GetDefaultObj()
{
	static class USmoothMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothMeshToolProperties*>(USmoothMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.IterativeSmoothProperties
// (None)

class UClass* UIterativeSmoothProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IterativeSmoothProperties");

	return Clss;
}


// IterativeSmoothProperties MeshModelingToolsExp.Default__IterativeSmoothProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UIterativeSmoothProperties* UIterativeSmoothProperties::GetDefaultObj()
{
	static class UIterativeSmoothProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UIterativeSmoothProperties*>(UIterativeSmoothProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.DiffusionSmoothProperties
// (None)

class UClass* UDiffusionSmoothProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiffusionSmoothProperties");

	return Clss;
}


// DiffusionSmoothProperties MeshModelingToolsExp.Default__DiffusionSmoothProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDiffusionSmoothProperties* UDiffusionSmoothProperties::GetDefaultObj()
{
	static class UDiffusionSmoothProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiffusionSmoothProperties*>(UDiffusionSmoothProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.ImplicitSmoothProperties
// (None)

class UClass* UImplicitSmoothProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImplicitSmoothProperties");

	return Clss;
}


// ImplicitSmoothProperties MeshModelingToolsExp.Default__ImplicitSmoothProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UImplicitSmoothProperties* UImplicitSmoothProperties::GetDefaultObj()
{
	static class UImplicitSmoothProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UImplicitSmoothProperties*>(UImplicitSmoothProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SmoothWeightMapSetProperties
// (None)

class UClass* USmoothWeightMapSetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothWeightMapSetProperties");

	return Clss;
}


// SmoothWeightMapSetProperties MeshModelingToolsExp.Default__SmoothWeightMapSetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothWeightMapSetProperties* USmoothWeightMapSetProperties::GetDefaultObj()
{
	static class USmoothWeightMapSetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothWeightMapSetProperties*>(USmoothWeightMapSetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SmoothMeshTool
// (None)

class UClass* USmoothMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothMeshTool");

	return Clss;
}


// SmoothMeshTool MeshModelingToolsExp.Default__SmoothMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USmoothMeshTool* USmoothMeshTool::GetDefaultObj()
{
	static class USmoothMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothMeshTool*>(USmoothMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SmoothMeshToolBuilder
// (None)

class UClass* USmoothMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothMeshToolBuilder");

	return Clss;
}


// SmoothMeshToolBuilder MeshModelingToolsExp.Default__SmoothMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothMeshToolBuilder* USmoothMeshToolBuilder::GetDefaultObj()
{
	static class USmoothMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothMeshToolBuilder*>(USmoothMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SplitMeshesToolBuilder
// (None)

class UClass* USplitMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplitMeshesToolBuilder");

	return Clss;
}


// SplitMeshesToolBuilder MeshModelingToolsExp.Default__SplitMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USplitMeshesToolBuilder* USplitMeshesToolBuilder::GetDefaultObj()
{
	static class USplitMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USplitMeshesToolBuilder*>(USplitMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SplitMeshesToolProperties
// (None)

class UClass* USplitMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplitMeshesToolProperties");

	return Clss;
}


// SplitMeshesToolProperties MeshModelingToolsExp.Default__SplitMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USplitMeshesToolProperties* USplitMeshesToolProperties::GetDefaultObj()
{
	static class USplitMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USplitMeshesToolProperties*>(USplitMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.SplitMeshesTool
// (None)

class UClass* USplitMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplitMeshesTool");

	return Clss;
}


// SplitMeshesTool MeshModelingToolsExp.Default__SplitMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USplitMeshesTool* USplitMeshesTool::GetDefaultObj()
{
	static class USplitMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USplitMeshesTool*>(USplitMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.TransferMeshToolBuilder
// (None)

class UClass* UTransferMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransferMeshToolBuilder");

	return Clss;
}


// TransferMeshToolBuilder MeshModelingToolsExp.Default__TransferMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransferMeshToolBuilder* UTransferMeshToolBuilder::GetDefaultObj()
{
	static class UTransferMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransferMeshToolBuilder*>(UTransferMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.TransferMeshToolProperties
// (None)

class UClass* UTransferMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransferMeshToolProperties");

	return Clss;
}


// TransferMeshToolProperties MeshModelingToolsExp.Default__TransferMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransferMeshToolProperties* UTransferMeshToolProperties::GetDefaultObj()
{
	static class UTransferMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransferMeshToolProperties*>(UTransferMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UTransferMeshToolProperties::GetTargetLODNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransferMeshToolProperties", "GetTargetLODNamesFunc");

	Params::UTransferMeshToolProperties_GetTargetLODNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UTransferMeshToolProperties::GetSourceLODNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransferMeshToolProperties", "GetSourceLODNamesFunc");

	Params::UTransferMeshToolProperties_GetSourceLODNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingToolsExp.TransferMeshTool
// (None)

class UClass* UTransferMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransferMeshTool");

	return Clss;
}


// TransferMeshTool MeshModelingToolsExp.Default__TransferMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTransferMeshTool* UTransferMeshTool::GetDefaultObj()
{
	static class UTransferMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransferMeshTool*>(UTransferMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.TransformMeshesToolBuilder
// (None)

class UClass* UTransformMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformMeshesToolBuilder");

	return Clss;
}


// TransformMeshesToolBuilder MeshModelingToolsExp.Default__TransformMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformMeshesToolBuilder* UTransformMeshesToolBuilder::GetDefaultObj()
{
	static class UTransformMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformMeshesToolBuilder*>(UTransformMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.TransformMeshesToolProperties
// (None)

class UClass* UTransformMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformMeshesToolProperties");

	return Clss;
}


// TransformMeshesToolProperties MeshModelingToolsExp.Default__TransformMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformMeshesToolProperties* UTransformMeshesToolProperties::GetDefaultObj()
{
	static class UTransformMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformMeshesToolProperties*>(UTransformMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.TransformMeshesTool
// (None)

class UClass* UTransformMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformMeshesTool");

	return Clss;
}


// TransformMeshesTool MeshModelingToolsExp.Default__TransformMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTransformMeshesTool* UTransformMeshesTool::GetDefaultObj()
{
	static class UTransformMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformMeshesTool*>(UTransformMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VolumeToMeshToolBuilder
// (None)

class UClass* UVolumeToMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumeToMeshToolBuilder");

	return Clss;
}


// VolumeToMeshToolBuilder MeshModelingToolsExp.Default__VolumeToMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UVolumeToMeshToolBuilder* UVolumeToMeshToolBuilder::GetDefaultObj()
{
	static class UVolumeToMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UVolumeToMeshToolBuilder*>(UVolumeToMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VolumeToMeshToolProperties
// (None)

class UClass* UVolumeToMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumeToMeshToolProperties");

	return Clss;
}


// VolumeToMeshToolProperties MeshModelingToolsExp.Default__VolumeToMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVolumeToMeshToolProperties* UVolumeToMeshToolProperties::GetDefaultObj()
{
	static class UVolumeToMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVolumeToMeshToolProperties*>(UVolumeToMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VolumeToMeshTool
// (None)

class UClass* UVolumeToMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumeToMeshTool");

	return Clss;
}


// VolumeToMeshTool MeshModelingToolsExp.Default__VolumeToMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UVolumeToMeshTool* UVolumeToMeshTool::GetDefaultObj()
{
	static class UVolumeToMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UVolumeToMeshTool*>(UVolumeToMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelBlendMeshesToolProperties
// (None)

class UClass* UVoxelBlendMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelBlendMeshesToolProperties");

	return Clss;
}


// VoxelBlendMeshesToolProperties MeshModelingToolsExp.Default__VoxelBlendMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelBlendMeshesToolProperties* UVoxelBlendMeshesToolProperties::GetDefaultObj()
{
	static class UVoxelBlendMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelBlendMeshesToolProperties*>(UVoxelBlendMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelBlendMeshesTool
// (None)

class UClass* UVoxelBlendMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelBlendMeshesTool");

	return Clss;
}


// VoxelBlendMeshesTool MeshModelingToolsExp.Default__VoxelBlendMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UVoxelBlendMeshesTool* UVoxelBlendMeshesTool::GetDefaultObj()
{
	static class UVoxelBlendMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelBlendMeshesTool*>(UVoxelBlendMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
// (None)

class UClass* UVoxelBlendMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelBlendMeshesToolBuilder");

	return Clss;
}


// VoxelBlendMeshesToolBuilder MeshModelingToolsExp.Default__VoxelBlendMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelBlendMeshesToolBuilder* UVoxelBlendMeshesToolBuilder::GetDefaultObj()
{
	static class UVoxelBlendMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelBlendMeshesToolBuilder*>(UVoxelBlendMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
// (None)

class UClass* UVoxelMorphologyMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelMorphologyMeshesToolProperties");

	return Clss;
}


// VoxelMorphologyMeshesToolProperties MeshModelingToolsExp.Default__VoxelMorphologyMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelMorphologyMeshesToolProperties* UVoxelMorphologyMeshesToolProperties::GetDefaultObj()
{
	static class UVoxelMorphologyMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelMorphologyMeshesToolProperties*>(UVoxelMorphologyMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelMorphologyMeshesTool
// (None)

class UClass* UVoxelMorphologyMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelMorphologyMeshesTool");

	return Clss;
}


// VoxelMorphologyMeshesTool MeshModelingToolsExp.Default__VoxelMorphologyMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UVoxelMorphologyMeshesTool* UVoxelMorphologyMeshesTool::GetDefaultObj()
{
	static class UVoxelMorphologyMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelMorphologyMeshesTool*>(UVoxelMorphologyMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
// (None)

class UClass* UVoxelMorphologyMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelMorphologyMeshesToolBuilder");

	return Clss;
}


// VoxelMorphologyMeshesToolBuilder MeshModelingToolsExp.Default__VoxelMorphologyMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelMorphologyMeshesToolBuilder* UVoxelMorphologyMeshesToolBuilder::GetDefaultObj()
{
	static class UVoxelMorphologyMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelMorphologyMeshesToolBuilder*>(UVoxelMorphologyMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
// (None)

class UClass* UVoxelSolidifyMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelSolidifyMeshesToolProperties");

	return Clss;
}


// VoxelSolidifyMeshesToolProperties MeshModelingToolsExp.Default__VoxelSolidifyMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelSolidifyMeshesToolProperties* UVoxelSolidifyMeshesToolProperties::GetDefaultObj()
{
	static class UVoxelSolidifyMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelSolidifyMeshesToolProperties*>(UVoxelSolidifyMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelSolidifyMeshesTool
// (None)

class UClass* UVoxelSolidifyMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelSolidifyMeshesTool");

	return Clss;
}


// VoxelSolidifyMeshesTool MeshModelingToolsExp.Default__VoxelSolidifyMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UVoxelSolidifyMeshesTool* UVoxelSolidifyMeshesTool::GetDefaultObj()
{
	static class UVoxelSolidifyMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelSolidifyMeshesTool*>(UVoxelSolidifyMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
// (None)

class UClass* UVoxelSolidifyMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelSolidifyMeshesToolBuilder");

	return Clss;
}


// VoxelSolidifyMeshesToolBuilder MeshModelingToolsExp.Default__VoxelSolidifyMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelSolidifyMeshesToolBuilder* UVoxelSolidifyMeshesToolBuilder::GetDefaultObj()
{
	static class UVoxelSolidifyMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelSolidifyMeshesToolBuilder*>(UVoxelSolidifyMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.WeldMeshEdgesToolBuilder
// (None)

class UClass* UWeldMeshEdgesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeldMeshEdgesToolBuilder");

	return Clss;
}


// WeldMeshEdgesToolBuilder MeshModelingToolsExp.Default__WeldMeshEdgesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeldMeshEdgesToolBuilder* UWeldMeshEdgesToolBuilder::GetDefaultObj()
{
	static class UWeldMeshEdgesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeldMeshEdgesToolBuilder*>(UWeldMeshEdgesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.WeldMeshEdgesToolProperties
// (None)

class UClass* UWeldMeshEdgesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeldMeshEdgesToolProperties");

	return Clss;
}


// WeldMeshEdgesToolProperties MeshModelingToolsExp.Default__WeldMeshEdgesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeldMeshEdgesToolProperties* UWeldMeshEdgesToolProperties::GetDefaultObj()
{
	static class UWeldMeshEdgesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeldMeshEdgesToolProperties*>(UWeldMeshEdgesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
// (None)

class UClass* UWeldMeshEdgesOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeldMeshEdgesOperatorFactory");

	return Clss;
}


// WeldMeshEdgesOperatorFactory MeshModelingToolsExp.Default__WeldMeshEdgesOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeldMeshEdgesOperatorFactory* UWeldMeshEdgesOperatorFactory::GetDefaultObj()
{
	static class UWeldMeshEdgesOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeldMeshEdgesOperatorFactory*>(UWeldMeshEdgesOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingToolsExp.WeldMeshEdgesTool
// (None)

class UClass* UWeldMeshEdgesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeldMeshEdgesTool");

	return Clss;
}


// WeldMeshEdgesTool MeshModelingToolsExp.Default__WeldMeshEdgesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UWeldMeshEdgesTool* UWeldMeshEdgesTool::GetDefaultObj()
{
	static class UWeldMeshEdgesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeldMeshEdgesTool*>(UWeldMeshEdgesTool::StaticClass()->DefaultObject);

	return Default;
}

}


