#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshModelingTools.RevolveProperties
// (None)

class UClass* URevolveProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveProperties");

	return Clss;
}


// RevolveProperties MeshModelingTools.Default__RevolveProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveProperties* URevolveProperties::GetDefaultObj()
{
	static class URevolveProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveProperties*>(URevolveProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DeleteGeometrySelectionCommand
// (None)

class UClass* UDeleteGeometrySelectionCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeleteGeometrySelectionCommand");

	return Clss;
}


// DeleteGeometrySelectionCommand MeshModelingTools.Default__DeleteGeometrySelectionCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeleteGeometrySelectionCommand* UDeleteGeometrySelectionCommand::GetDefaultObj()
{
	static class UDeleteGeometrySelectionCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeleteGeometrySelectionCommand*>(UDeleteGeometrySelectionCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditActivityContext
// (None)

class UClass* UPolyEditActivityContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditActivityContext");

	return Clss;
}


// PolyEditActivityContext MeshModelingTools.Default__PolyEditActivityContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditActivityContext* UPolyEditActivityContext::GetDefaultObj()
{
	static class UPolyEditActivityContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditActivityContext*>(UPolyEditActivityContext::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddPrimitiveToolBuilder
// (None)

class UClass* UAddPrimitiveToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPrimitiveToolBuilder");

	return Clss;
}


// AddPrimitiveToolBuilder MeshModelingTools.Default__AddPrimitiveToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAddPrimitiveToolBuilder* UAddPrimitiveToolBuilder::GetDefaultObj()
{
	static class UAddPrimitiveToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPrimitiveToolBuilder*>(UAddPrimitiveToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralShapeToolProperties
// (None)

class UClass* UProceduralShapeToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralShapeToolProperties");

	return Clss;
}


// ProceduralShapeToolProperties MeshModelingTools.Default__ProceduralShapeToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralShapeToolProperties* UProceduralShapeToolProperties::GetDefaultObj()
{
	static class UProceduralShapeToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralShapeToolProperties*>(UProceduralShapeToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralBoxToolProperties
// (None)

class UClass* UProceduralBoxToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralBoxToolProperties");

	return Clss;
}


// ProceduralBoxToolProperties MeshModelingTools.Default__ProceduralBoxToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralBoxToolProperties* UProceduralBoxToolProperties::GetDefaultObj()
{
	static class UProceduralBoxToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralBoxToolProperties*>(UProceduralBoxToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralRectangleToolProperties
// (None)

class UClass* UProceduralRectangleToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralRectangleToolProperties");

	return Clss;
}


// ProceduralRectangleToolProperties MeshModelingTools.Default__ProceduralRectangleToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralRectangleToolProperties* UProceduralRectangleToolProperties::GetDefaultObj()
{
	static class UProceduralRectangleToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralRectangleToolProperties*>(UProceduralRectangleToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralDiscToolProperties
// (None)

class UClass* UProceduralDiscToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralDiscToolProperties");

	return Clss;
}


// ProceduralDiscToolProperties MeshModelingTools.Default__ProceduralDiscToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralDiscToolProperties* UProceduralDiscToolProperties::GetDefaultObj()
{
	static class UProceduralDiscToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralDiscToolProperties*>(UProceduralDiscToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralTorusToolProperties
// (None)

class UClass* UProceduralTorusToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralTorusToolProperties");

	return Clss;
}


// ProceduralTorusToolProperties MeshModelingTools.Default__ProceduralTorusToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralTorusToolProperties* UProceduralTorusToolProperties::GetDefaultObj()
{
	static class UProceduralTorusToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralTorusToolProperties*>(UProceduralTorusToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralCylinderToolProperties
// (None)

class UClass* UProceduralCylinderToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralCylinderToolProperties");

	return Clss;
}


// ProceduralCylinderToolProperties MeshModelingTools.Default__ProceduralCylinderToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralCylinderToolProperties* UProceduralCylinderToolProperties::GetDefaultObj()
{
	static class UProceduralCylinderToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralCylinderToolProperties*>(UProceduralCylinderToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralConeToolProperties
// (None)

class UClass* UProceduralConeToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralConeToolProperties");

	return Clss;
}


// ProceduralConeToolProperties MeshModelingTools.Default__ProceduralConeToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralConeToolProperties* UProceduralConeToolProperties::GetDefaultObj()
{
	static class UProceduralConeToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralConeToolProperties*>(UProceduralConeToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralArrowToolProperties
// (None)

class UClass* UProceduralArrowToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralArrowToolProperties");

	return Clss;
}


// ProceduralArrowToolProperties MeshModelingTools.Default__ProceduralArrowToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralArrowToolProperties* UProceduralArrowToolProperties::GetDefaultObj()
{
	static class UProceduralArrowToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralArrowToolProperties*>(UProceduralArrowToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralSphereToolProperties
// (None)

class UClass* UProceduralSphereToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralSphereToolProperties");

	return Clss;
}


// ProceduralSphereToolProperties MeshModelingTools.Default__ProceduralSphereToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralSphereToolProperties* UProceduralSphereToolProperties::GetDefaultObj()
{
	static class UProceduralSphereToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralSphereToolProperties*>(UProceduralSphereToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralStairsToolProperties
// (None)

class UClass* UProceduralStairsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralStairsToolProperties");

	return Clss;
}


// ProceduralStairsToolProperties MeshModelingTools.Default__ProceduralStairsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralStairsToolProperties* UProceduralStairsToolProperties::GetDefaultObj()
{
	static class UProceduralStairsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralStairsToolProperties*>(UProceduralStairsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddPrimitiveTool
// (None)

class UClass* UAddPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPrimitiveTool");

	return Clss;
}


// AddPrimitiveTool MeshModelingTools.Default__AddPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddPrimitiveTool* UAddPrimitiveTool::GetDefaultObj()
{
	static class UAddPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPrimitiveTool*>(UAddPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddBoxPrimitiveTool
// (None)

class UClass* UAddBoxPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddBoxPrimitiveTool");

	return Clss;
}


// AddBoxPrimitiveTool MeshModelingTools.Default__AddBoxPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddBoxPrimitiveTool* UAddBoxPrimitiveTool::GetDefaultObj()
{
	static class UAddBoxPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddBoxPrimitiveTool*>(UAddBoxPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddCylinderPrimitiveTool
// (None)

class UClass* UAddCylinderPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddCylinderPrimitiveTool");

	return Clss;
}


// AddCylinderPrimitiveTool MeshModelingTools.Default__AddCylinderPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddCylinderPrimitiveTool* UAddCylinderPrimitiveTool::GetDefaultObj()
{
	static class UAddCylinderPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddCylinderPrimitiveTool*>(UAddCylinderPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddConePrimitiveTool
// (None)

class UClass* UAddConePrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddConePrimitiveTool");

	return Clss;
}


// AddConePrimitiveTool MeshModelingTools.Default__AddConePrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddConePrimitiveTool* UAddConePrimitiveTool::GetDefaultObj()
{
	static class UAddConePrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddConePrimitiveTool*>(UAddConePrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddRectanglePrimitiveTool
// (None)

class UClass* UAddRectanglePrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddRectanglePrimitiveTool");

	return Clss;
}


// AddRectanglePrimitiveTool MeshModelingTools.Default__AddRectanglePrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddRectanglePrimitiveTool* UAddRectanglePrimitiveTool::GetDefaultObj()
{
	static class UAddRectanglePrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddRectanglePrimitiveTool*>(UAddRectanglePrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddDiscPrimitiveTool
// (None)

class UClass* UAddDiscPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddDiscPrimitiveTool");

	return Clss;
}


// AddDiscPrimitiveTool MeshModelingTools.Default__AddDiscPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddDiscPrimitiveTool* UAddDiscPrimitiveTool::GetDefaultObj()
{
	static class UAddDiscPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddDiscPrimitiveTool*>(UAddDiscPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddTorusPrimitiveTool
// (None)

class UClass* UAddTorusPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddTorusPrimitiveTool");

	return Clss;
}


// AddTorusPrimitiveTool MeshModelingTools.Default__AddTorusPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddTorusPrimitiveTool* UAddTorusPrimitiveTool::GetDefaultObj()
{
	static class UAddTorusPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddTorusPrimitiveTool*>(UAddTorusPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddArrowPrimitiveTool
// (None)

class UClass* UAddArrowPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddArrowPrimitiveTool");

	return Clss;
}


// AddArrowPrimitiveTool MeshModelingTools.Default__AddArrowPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddArrowPrimitiveTool* UAddArrowPrimitiveTool::GetDefaultObj()
{
	static class UAddArrowPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddArrowPrimitiveTool*>(UAddArrowPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddSpherePrimitiveTool
// (None)

class UClass* UAddSpherePrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddSpherePrimitiveTool");

	return Clss;
}


// AddSpherePrimitiveTool MeshModelingTools.Default__AddSpherePrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddSpherePrimitiveTool* UAddSpherePrimitiveTool::GetDefaultObj()
{
	static class UAddSpherePrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddSpherePrimitiveTool*>(UAddSpherePrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddStairsPrimitiveTool
// (None)

class UClass* UAddStairsPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddStairsPrimitiveTool");

	return Clss;
}


// AddStairsPrimitiveTool MeshModelingTools.Default__AddStairsPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddStairsPrimitiveTool* UAddStairsPrimitiveTool::GetDefaultObj()
{
	static class UAddStairsPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddStairsPrimitiveTool*>(UAddStairsPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CombineMeshesToolBuilder
// (None)

class UClass* UCombineMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombineMeshesToolBuilder");

	return Clss;
}


// CombineMeshesToolBuilder MeshModelingTools.Default__CombineMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCombineMeshesToolBuilder* UCombineMeshesToolBuilder::GetDefaultObj()
{
	static class UCombineMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombineMeshesToolBuilder*>(UCombineMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CombineMeshesToolProperties
// (None)

class UClass* UCombineMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombineMeshesToolProperties");

	return Clss;
}


// CombineMeshesToolProperties MeshModelingTools.Default__CombineMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCombineMeshesToolProperties* UCombineMeshesToolProperties::GetDefaultObj()
{
	static class UCombineMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombineMeshesToolProperties*>(UCombineMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CombineMeshesTool
// (None)

class UClass* UCombineMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombineMeshesTool");

	return Clss;
}


// CombineMeshesTool MeshModelingTools.Default__CombineMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UCombineMeshesTool* UCombineMeshesTool::GetDefaultObj()
{
	static class UCombineMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombineMeshesTool*>(UCombineMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CSGMeshesToolProperties
// (None)

class UClass* UCSGMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGMeshesToolProperties");

	return Clss;
}


// CSGMeshesToolProperties MeshModelingTools.Default__CSGMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCSGMeshesToolProperties* UCSGMeshesToolProperties::GetDefaultObj()
{
	static class UCSGMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGMeshesToolProperties*>(UCSGMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.TrimMeshesToolProperties
// (None)

class UClass* UTrimMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrimMeshesToolProperties");

	return Clss;
}


// TrimMeshesToolProperties MeshModelingTools.Default__TrimMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UTrimMeshesToolProperties* UTrimMeshesToolProperties::GetDefaultObj()
{
	static class UTrimMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrimMeshesToolProperties*>(UTrimMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CSGMeshesTool
// (None)

class UClass* UCSGMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGMeshesTool");

	return Clss;
}


// CSGMeshesTool MeshModelingTools.Default__CSGMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UCSGMeshesTool* UCSGMeshesTool::GetDefaultObj()
{
	static class UCSGMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGMeshesTool*>(UCSGMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CSGMeshesToolBuilder
// (None)

class UClass* UCSGMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGMeshesToolBuilder");

	return Clss;
}


// CSGMeshesToolBuilder MeshModelingTools.Default__CSGMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCSGMeshesToolBuilder* UCSGMeshesToolBuilder::GetDefaultObj()
{
	static class UCSGMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGMeshesToolBuilder*>(UCSGMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CutMeshWithMeshToolProperties
// (None)

class UClass* UCutMeshWithMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CutMeshWithMeshToolProperties");

	return Clss;
}


// CutMeshWithMeshToolProperties MeshModelingTools.Default__CutMeshWithMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCutMeshWithMeshToolProperties* UCutMeshWithMeshToolProperties::GetDefaultObj()
{
	static class UCutMeshWithMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCutMeshWithMeshToolProperties*>(UCutMeshWithMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CutMeshWithMeshTool
// (None)

class UClass* UCutMeshWithMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CutMeshWithMeshTool");

	return Clss;
}


// CutMeshWithMeshTool MeshModelingTools.Default__CutMeshWithMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UCutMeshWithMeshTool* UCutMeshWithMeshTool::GetDefaultObj()
{
	static class UCutMeshWithMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UCutMeshWithMeshTool*>(UCutMeshWithMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CutMeshWithMeshToolBuilder
// (None)

class UClass* UCutMeshWithMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CutMeshWithMeshToolBuilder");

	return Clss;
}


// CutMeshWithMeshToolBuilder MeshModelingTools.Default__CutMeshWithMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCutMeshWithMeshToolBuilder* UCutMeshWithMeshToolBuilder::GetDefaultObj()
{
	static class UCutMeshWithMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCutMeshWithMeshToolBuilder*>(UCutMeshWithMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawAndRevolveToolBuilder
// (None)

class UClass* UDrawAndRevolveToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawAndRevolveToolBuilder");

	return Clss;
}


// DrawAndRevolveToolBuilder MeshModelingTools.Default__DrawAndRevolveToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawAndRevolveToolBuilder* UDrawAndRevolveToolBuilder::GetDefaultObj()
{
	static class UDrawAndRevolveToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawAndRevolveToolBuilder*>(UDrawAndRevolveToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveToolProperties
// (None)

class UClass* URevolveToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveToolProperties");

	return Clss;
}


// RevolveToolProperties MeshModelingTools.Default__RevolveToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveToolProperties* URevolveToolProperties::GetDefaultObj()
{
	static class URevolveToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveToolProperties*>(URevolveToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveOperatorFactory
// (None)

class UClass* URevolveOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveOperatorFactory");

	return Clss;
}


// RevolveOperatorFactory MeshModelingTools.Default__RevolveOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveOperatorFactory* URevolveOperatorFactory::GetDefaultObj()
{
	static class URevolveOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveOperatorFactory*>(URevolveOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawAndRevolveTool
// (None)

class UClass* UDrawAndRevolveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawAndRevolveTool");

	return Clss;
}


// DrawAndRevolveTool MeshModelingTools.Default__DrawAndRevolveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDrawAndRevolveTool* UDrawAndRevolveTool::GetDefaultObj()
{
	static class UDrawAndRevolveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawAndRevolveTool*>(UDrawAndRevolveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonToolBuilder
// (None)

class UClass* UDrawPolygonToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonToolBuilder");

	return Clss;
}


// DrawPolygonToolBuilder MeshModelingTools.Default__DrawPolygonToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonToolBuilder* UDrawPolygonToolBuilder::GetDefaultObj()
{
	static class UDrawPolygonToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonToolBuilder*>(UDrawPolygonToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonToolStandardProperties
// (None)

class UClass* UDrawPolygonToolStandardProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonToolStandardProperties");

	return Clss;
}


// DrawPolygonToolStandardProperties MeshModelingTools.Default__DrawPolygonToolStandardProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonToolStandardProperties* UDrawPolygonToolStandardProperties::GetDefaultObj()
{
	static class UDrawPolygonToolStandardProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonToolStandardProperties*>(UDrawPolygonToolStandardProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonToolSnapProperties
// (None)

class UClass* UDrawPolygonToolSnapProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonToolSnapProperties");

	return Clss;
}


// DrawPolygonToolSnapProperties MeshModelingTools.Default__DrawPolygonToolSnapProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonToolSnapProperties* UDrawPolygonToolSnapProperties::GetDefaultObj()
{
	static class UDrawPolygonToolSnapProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonToolSnapProperties*>(UDrawPolygonToolSnapProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonTool
// (None)

class UClass* UDrawPolygonTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonTool");

	return Clss;
}


// DrawPolygonTool MeshModelingTools.Default__DrawPolygonTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonTool* UDrawPolygonTool::GetDefaultObj()
{
	static class UDrawPolygonTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonTool*>(UDrawPolygonTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// (None)

class UClass* UEditMeshPolygonsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolBuilder");

	return Clss;
}


// EditMeshPolygonsToolBuilder MeshModelingTools.Default__EditMeshPolygonsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolBuilder* UEditMeshPolygonsToolBuilder::GetDefaultObj()
{
	static class UEditMeshPolygonsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolBuilder*>(UEditMeshPolygonsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditCommonProperties
// (None)

class UClass* UPolyEditCommonProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditCommonProperties");

	return Clss;
}


// PolyEditCommonProperties MeshModelingTools.Default__PolyEditCommonProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditCommonProperties* UPolyEditCommonProperties::GetDefaultObj()
{
	static class UPolyEditCommonProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditCommonProperties*>(UPolyEditCommonProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
// (None)

class UClass* UEditMeshPolygonsActionModeToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsActionModeToolBuilder");

	return Clss;
}


// EditMeshPolygonsActionModeToolBuilder MeshModelingTools.Default__EditMeshPolygonsActionModeToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsActionModeToolBuilder* UEditMeshPolygonsActionModeToolBuilder::GetDefaultObj()
{
	static class UEditMeshPolygonsActionModeToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsActionModeToolBuilder*>(UEditMeshPolygonsActionModeToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
// (None)

class UClass* UEditMeshPolygonsSelectionModeToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsSelectionModeToolBuilder");

	return Clss;
}


// EditMeshPolygonsSelectionModeToolBuilder MeshModelingTools.Default__EditMeshPolygonsSelectionModeToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsSelectionModeToolBuilder* UEditMeshPolygonsSelectionModeToolBuilder::GetDefaultObj()
{
	static class UEditMeshPolygonsSelectionModeToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsSelectionModeToolBuilder*>(UEditMeshPolygonsSelectionModeToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// (None)

class UClass* UEditMeshPolygonsToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolActionPropertySet");

	return Clss;
}


// EditMeshPolygonsToolActionPropertySet MeshModelingTools.Default__EditMeshPolygonsToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolActionPropertySet* UEditMeshPolygonsToolActionPropertySet::GetDefaultObj()
{
	static class UEditMeshPolygonsToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolActionPropertySet*>(UEditMeshPolygonsToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditTopologyProperties
// (None)

class UClass* UPolyEditTopologyProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditTopologyProperties");

	return Clss;
}


// PolyEditTopologyProperties MeshModelingTools.Default__PolyEditTopologyProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditTopologyProperties* UPolyEditTopologyProperties::GetDefaultObj()
{
	static class UPolyEditTopologyProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditTopologyProperties*>(UPolyEditTopologyProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.PolyEditTopologyProperties.RegenerateExtraCorners
// (Final, Native, Public)
// Parameters:

void UPolyEditTopologyProperties::RegenerateExtraCorners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PolyEditTopologyProperties", "RegenerateExtraCorners");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolActions
// (None)

class UClass* UEditMeshPolygonsToolActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolActions");

	return Clss;
}


// EditMeshPolygonsToolActions MeshModelingTools.Default__EditMeshPolygonsToolActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolActions* UEditMeshPolygonsToolActions::GetDefaultObj()
{
	static class UEditMeshPolygonsToolActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolActions*>(UEditMeshPolygonsToolActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.SimplifyByGroups
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::SimplifyByGroups()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "SimplifyByGroups");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Retriangulate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Retriangulate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::RecalcNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "RecalcNormals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.PushPull
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::PushPull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "PushPull");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Outset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Outset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Offset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Offset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Merge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Merge");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Inset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Inset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdgeLoop
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::InsertEdgeLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "InsertEdgeLoop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdge
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::InsertEdge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "InsertEdge");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Flip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Flip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Extrude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Extrude");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Duplicate
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Duplicate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Duplicate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Disconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Delete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Delete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Decompose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Decompose");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::CutFaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "CutFaces");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Bevel
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Bevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Bevel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// (None)

class UClass* UEditMeshPolygonsToolActions_Triangles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolActions_Triangles");

	return Clss;
}


// EditMeshPolygonsToolActions_Triangles MeshModelingTools.Default__EditMeshPolygonsToolActions_Triangles
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolActions_Triangles* UEditMeshPolygonsToolActions_Triangles::GetDefaultObj()
{
	static class UEditMeshPolygonsToolActions_Triangles* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolActions_Triangles*>(UEditMeshPolygonsToolActions_Triangles::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::RecalcNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "RecalcNormals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.PushPull
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::PushPull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "PushPull");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Poke()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Poke");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Outset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Outset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Offset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Offset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Inset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Inset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Flip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Flip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Extrude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Extrude");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Duplicate
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Duplicate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Duplicate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Disconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Delete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Delete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::CutFaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "CutFaces");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// (None)

class UClass* UEditMeshPolygonsToolUVActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolUVActions");

	return Clss;
}


// EditMeshPolygonsToolUVActions MeshModelingTools.Default__EditMeshPolygonsToolUVActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolUVActions* UEditMeshPolygonsToolUVActions::GetDefaultObj()
{
	static class UEditMeshPolygonsToolUVActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolUVActions*>(UEditMeshPolygonsToolUVActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolUVActions::PlanarProjection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolUVActions", "PlanarProjection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// (None)

class UClass* UEditMeshPolygonsToolEdgeActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolEdgeActions");

	return Clss;
}


// EditMeshPolygonsToolEdgeActions MeshModelingTools.Default__EditMeshPolygonsToolEdgeActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolEdgeActions* UEditMeshPolygonsToolEdgeActions::GetDefaultObj()
{
	static class UEditMeshPolygonsToolEdgeActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolEdgeActions*>(UEditMeshPolygonsToolEdgeActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::Weld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Weld");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::Straighten()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Straighten");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::FillHole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "FillHole");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bridge
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::Bridge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Bridge");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bevel
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::Bevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Bevel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// (None)

class UClass* UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolEdgeActions_Triangles");

	return Clss;
}


// EditMeshPolygonsToolEdgeActions_Triangles MeshModelingTools.Default__EditMeshPolygonsToolEdgeActions_Triangles
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolEdgeActions_Triangles* UEditMeshPolygonsToolEdgeActions_Triangles::GetDefaultObj()
{
	static class UEditMeshPolygonsToolEdgeActions_Triangles* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolEdgeActions_Triangles*>(UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Weld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Weld");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Split()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Split");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Flip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Flip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "FillHole");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Collapse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolCancelAction
// (None)

class UClass* UEditMeshPolygonsToolCancelAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolCancelAction");

	return Clss;
}


// EditMeshPolygonsToolCancelAction MeshModelingTools.Default__EditMeshPolygonsToolCancelAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolCancelAction* UEditMeshPolygonsToolCancelAction::GetDefaultObj()
{
	static class UEditMeshPolygonsToolCancelAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolCancelAction*>(UEditMeshPolygonsToolCancelAction::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolCancelAction.Done
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolCancelAction::Done()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolCancelAction", "Done");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction
// (None)

class UClass* UEditMeshPolygonsToolAcceptCancelAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolAcceptCancelAction");

	return Clss;
}


// EditMeshPolygonsToolAcceptCancelAction MeshModelingTools.Default__EditMeshPolygonsToolAcceptCancelAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolAcceptCancelAction* UEditMeshPolygonsToolAcceptCancelAction::GetDefaultObj()
{
	static class UEditMeshPolygonsToolAcceptCancelAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolAcceptCancelAction*>(UEditMeshPolygonsToolAcceptCancelAction::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Cancel
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolAcceptCancelAction::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolAcceptCancelAction", "Cancel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Apply
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolAcceptCancelAction::Apply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolAcceptCancelAction", "Apply");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsTool
// (None)

class UClass* UEditMeshPolygonsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsTool");

	return Clss;
}


// EditMeshPolygonsTool MeshModelingTools.Default__EditMeshPolygonsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsTool* UEditMeshPolygonsTool::GetDefaultObj()
{
	static class UEditMeshPolygonsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsTool*>(UEditMeshPolygonsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.NewMeshMaterialProperties
// (None)

class UClass* UNewMeshMaterialProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewMeshMaterialProperties");

	return Clss;
}


// NewMeshMaterialProperties MeshModelingTools.Default__NewMeshMaterialProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNewMeshMaterialProperties* UNewMeshMaterialProperties::GetDefaultObj()
{
	static class UNewMeshMaterialProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewMeshMaterialProperties*>(UNewMeshMaterialProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ExistingMeshMaterialProperties
// (None)

class UClass* UExistingMeshMaterialProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExistingMeshMaterialProperties");

	return Clss;
}


// ExistingMeshMaterialProperties MeshModelingTools.Default__ExistingMeshMaterialProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UExistingMeshMaterialProperties* UExistingMeshMaterialProperties::GetDefaultObj()
{
	static class UExistingMeshMaterialProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UExistingMeshMaterialProperties*>(UExistingMeshMaterialProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.ExistingMeshMaterialProperties.GetUVChannelNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UExistingMeshMaterialProperties::GetUVChannelNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExistingMeshMaterialProperties", "GetUVChannelNamesFunc");

	Params::UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingTools.MeshEditingViewProperties
// (None)

class UClass* UMeshEditingViewProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshEditingViewProperties");

	return Clss;
}


// MeshEditingViewProperties MeshModelingTools.Default__MeshEditingViewProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshEditingViewProperties* UMeshEditingViewProperties::GetDefaultObj()
{
	static class UMeshEditingViewProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshEditingViewProperties*>(UMeshEditingViewProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshUVChannelProperties
// (None)

class UClass* UMeshUVChannelProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshUVChannelProperties");

	return Clss;
}


// MeshUVChannelProperties MeshModelingTools.Default__MeshUVChannelProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshUVChannelProperties* UMeshUVChannelProperties::GetDefaultObj()
{
	static class UMeshUVChannelProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshUVChannelProperties*>(UMeshUVChannelProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.MeshUVChannelProperties.GetUVChannelNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UMeshUVChannelProperties::GetUVChannelNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshUVChannelProperties", "GetUVChannelNamesFunc");

	Params::UMeshUVChannelProperties_GetUVChannelNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingTools.RecomputeUVsToolBuilder
// (None)

class UClass* URecomputeUVsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecomputeUVsToolBuilder");

	return Clss;
}


// RecomputeUVsToolBuilder MeshModelingTools.Default__RecomputeUVsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class URecomputeUVsToolBuilder* URecomputeUVsToolBuilder::GetDefaultObj()
{
	static class URecomputeUVsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<URecomputeUVsToolBuilder*>(URecomputeUVsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RecomputeUVsTool
// (None)

class UClass* URecomputeUVsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecomputeUVsTool");

	return Clss;
}


// RecomputeUVsTool MeshModelingTools.Default__RecomputeUVsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class URecomputeUVsTool* URecomputeUVsTool::GetDefaultObj()
{
	static class URecomputeUVsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<URecomputeUVsTool*>(URecomputeUVsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditBevelEdgeProperties
// (None)

class UClass* UPolyEditBevelEdgeProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditBevelEdgeProperties");

	return Clss;
}


// PolyEditBevelEdgeProperties MeshModelingTools.Default__PolyEditBevelEdgeProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditBevelEdgeProperties* UPolyEditBevelEdgeProperties::GetDefaultObj()
{
	static class UPolyEditBevelEdgeProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditBevelEdgeProperties*>(UPolyEditBevelEdgeProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditBevelEdgeActivity
// (None)

class UClass* UPolyEditBevelEdgeActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditBevelEdgeActivity");

	return Clss;
}


// PolyEditBevelEdgeActivity MeshModelingTools.Default__PolyEditBevelEdgeActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditBevelEdgeActivity* UPolyEditBevelEdgeActivity::GetDefaultObj()
{
	static class UPolyEditBevelEdgeActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditBevelEdgeActivity*>(UPolyEditBevelEdgeActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditCutProperties
// (None)

class UClass* UPolyEditCutProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditCutProperties");

	return Clss;
}


// PolyEditCutProperties MeshModelingTools.Default__PolyEditCutProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditCutProperties* UPolyEditCutProperties::GetDefaultObj()
{
	static class UPolyEditCutProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditCutProperties*>(UPolyEditCutProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditCutFacesActivity
// (None)

class UClass* UPolyEditCutFacesActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditCutFacesActivity");

	return Clss;
}


// PolyEditCutFacesActivity MeshModelingTools.Default__PolyEditCutFacesActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditCutFacesActivity* UPolyEditCutFacesActivity::GetDefaultObj()
{
	static class UPolyEditCutFacesActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditCutFacesActivity*>(UPolyEditCutFacesActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditExtrudeProperties
// (None)

class UClass* UPolyEditExtrudeProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditExtrudeProperties");

	return Clss;
}


// PolyEditExtrudeProperties MeshModelingTools.Default__PolyEditExtrudeProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditExtrudeProperties* UPolyEditExtrudeProperties::GetDefaultObj()
{
	static class UPolyEditExtrudeProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditExtrudeProperties*>(UPolyEditExtrudeProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditOffsetProperties
// (None)

class UClass* UPolyEditOffsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditOffsetProperties");

	return Clss;
}


// PolyEditOffsetProperties MeshModelingTools.Default__PolyEditOffsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditOffsetProperties* UPolyEditOffsetProperties::GetDefaultObj()
{
	static class UPolyEditOffsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditOffsetProperties*>(UPolyEditOffsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditPushPullProperties
// (None)

class UClass* UPolyEditPushPullProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditPushPullProperties");

	return Clss;
}


// PolyEditPushPullProperties MeshModelingTools.Default__PolyEditPushPullProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditPushPullProperties* UPolyEditPushPullProperties::GetDefaultObj()
{
	static class UPolyEditPushPullProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditPushPullProperties*>(UPolyEditPushPullProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditExtrudeActivity
// (None)

class UClass* UPolyEditExtrudeActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditExtrudeActivity");

	return Clss;
}


// PolyEditExtrudeActivity MeshModelingTools.Default__PolyEditExtrudeActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditExtrudeActivity* UPolyEditExtrudeActivity::GetDefaultObj()
{
	static class UPolyEditExtrudeActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditExtrudeActivity*>(UPolyEditExtrudeActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.GroupEdgeInsertionProperties
// (None)

class UClass* UGroupEdgeInsertionProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupEdgeInsertionProperties");

	return Clss;
}


// GroupEdgeInsertionProperties MeshModelingTools.Default__GroupEdgeInsertionProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupEdgeInsertionProperties* UGroupEdgeInsertionProperties::GetDefaultObj()
{
	static class UGroupEdgeInsertionProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupEdgeInsertionProperties*>(UGroupEdgeInsertionProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditInsertEdgeActivity
// (None)

class UClass* UPolyEditInsertEdgeActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditInsertEdgeActivity");

	return Clss;
}


// PolyEditInsertEdgeActivity MeshModelingTools.Default__PolyEditInsertEdgeActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditInsertEdgeActivity* UPolyEditInsertEdgeActivity::GetDefaultObj()
{
	static class UPolyEditInsertEdgeActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditInsertEdgeActivity*>(UPolyEditInsertEdgeActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EdgeLoopInsertionProperties
// (None)

class UClass* UEdgeLoopInsertionProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EdgeLoopInsertionProperties");

	return Clss;
}


// EdgeLoopInsertionProperties MeshModelingTools.Default__EdgeLoopInsertionProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEdgeLoopInsertionProperties* UEdgeLoopInsertionProperties::GetDefaultObj()
{
	static class UEdgeLoopInsertionProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEdgeLoopInsertionProperties*>(UEdgeLoopInsertionProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditInsertEdgeLoopActivity
// (None)

class UClass* UPolyEditInsertEdgeLoopActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditInsertEdgeLoopActivity");

	return Clss;
}


// PolyEditInsertEdgeLoopActivity MeshModelingTools.Default__PolyEditInsertEdgeLoopActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditInsertEdgeLoopActivity* UPolyEditInsertEdgeLoopActivity::GetDefaultObj()
{
	static class UPolyEditInsertEdgeLoopActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditInsertEdgeLoopActivity*>(UPolyEditInsertEdgeLoopActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditInsetOutsetProperties
// (None)

class UClass* UPolyEditInsetOutsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditInsetOutsetProperties");

	return Clss;
}


// PolyEditInsetOutsetProperties MeshModelingTools.Default__PolyEditInsetOutsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditInsetOutsetProperties* UPolyEditInsetOutsetProperties::GetDefaultObj()
{
	static class UPolyEditInsetOutsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditInsetOutsetProperties*>(UPolyEditInsetOutsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditInsetOutsetActivity
// (None)

class UClass* UPolyEditInsetOutsetActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditInsetOutsetActivity");

	return Clss;
}


// PolyEditInsetOutsetActivity MeshModelingTools.Default__PolyEditInsetOutsetActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditInsetOutsetActivity* UPolyEditInsetOutsetActivity::GetDefaultObj()
{
	static class UPolyEditInsetOutsetActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditInsetOutsetActivity*>(UPolyEditInsetOutsetActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditSetUVProperties
// (None)

class UClass* UPolyEditSetUVProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditSetUVProperties");

	return Clss;
}


// PolyEditSetUVProperties MeshModelingTools.Default__PolyEditSetUVProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditSetUVProperties* UPolyEditSetUVProperties::GetDefaultObj()
{
	static class UPolyEditSetUVProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditSetUVProperties*>(UPolyEditSetUVProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditPlanarProjectionUVActivity
// (None)

class UClass* UPolyEditPlanarProjectionUVActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditPlanarProjectionUVActivity");

	return Clss;
}


// PolyEditPlanarProjectionUVActivity MeshModelingTools.Default__PolyEditPlanarProjectionUVActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditPlanarProjectionUVActivity* UPolyEditPlanarProjectionUVActivity::GetDefaultObj()
{
	static class UPolyEditPlanarProjectionUVActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditPlanarProjectionUVActivity*>(UPolyEditPlanarProjectionUVActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVLayoutToolBuilder
// (None)

class UClass* UUVLayoutToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutToolBuilder");

	return Clss;
}


// UVLayoutToolBuilder MeshModelingTools.Default__UVLayoutToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVLayoutToolBuilder* UUVLayoutToolBuilder::GetDefaultObj()
{
	static class UUVLayoutToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutToolBuilder*>(UUVLayoutToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVLayoutTool
// (None)

class UClass* UUVLayoutTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutTool");

	return Clss;
}


// UVLayoutTool MeshModelingTools.Default__UVLayoutTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UUVLayoutTool* UUVLayoutTool::GetDefaultObj()
{
	static class UUVLayoutTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutTool*>(UUVLayoutTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionToolBuilder
// (None)

class UClass* UUVProjectionToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionToolBuilder");

	return Clss;
}


// UVProjectionToolBuilder MeshModelingTools.Default__UVProjectionToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionToolBuilder* UUVProjectionToolBuilder::GetDefaultObj()
{
	static class UUVProjectionToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionToolBuilder*>(UUVProjectionToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionToolEditActions
// (None)

class UClass* UUVProjectionToolEditActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionToolEditActions");

	return Clss;
}


// UVProjectionToolEditActions MeshModelingTools.Default__UVProjectionToolEditActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionToolEditActions* UUVProjectionToolEditActions::GetDefaultObj()
{
	static class UUVProjectionToolEditActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionToolEditActions*>(UUVProjectionToolEditActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.UVProjectionToolEditActions.Reset
// (Final, Native, Public)
// Parameters:

void UUVProjectionToolEditActions::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UVProjectionToolEditActions", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.UVProjectionToolEditActions.AutoFitAlign
// (Final, Native, Public)
// Parameters:

void UUVProjectionToolEditActions::AutoFitAlign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UVProjectionToolEditActions", "AutoFitAlign");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.UVProjectionToolEditActions.AutoFit
// (Final, Native, Public)
// Parameters:

void UUVProjectionToolEditActions::AutoFit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UVProjectionToolEditActions", "AutoFit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.UVProjectionToolProperties
// (None)

class UClass* UUVProjectionToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionToolProperties");

	return Clss;
}


// UVProjectionToolProperties MeshModelingTools.Default__UVProjectionToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionToolProperties* UUVProjectionToolProperties::GetDefaultObj()
{
	static class UUVProjectionToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionToolProperties*>(UUVProjectionToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionOperatorFactory
// (None)

class UClass* UUVProjectionOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionOperatorFactory");

	return Clss;
}


// UVProjectionOperatorFactory MeshModelingTools.Default__UVProjectionOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionOperatorFactory* UUVProjectionOperatorFactory::GetDefaultObj()
{
	static class UUVProjectionOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionOperatorFactory*>(UUVProjectionOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionTool
// (None)

class UClass* UUVProjectionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionTool");

	return Clss;
}


// UVProjectionTool MeshModelingTools.Default__UVProjectionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UUVProjectionTool* UUVProjectionTool::GetDefaultObj()
{
	static class UUVProjectionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionTool*>(UUVProjectionTool::StaticClass()->DefaultObject);

	return Default;
}

}


