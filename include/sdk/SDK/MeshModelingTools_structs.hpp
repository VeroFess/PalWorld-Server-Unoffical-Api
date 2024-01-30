#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMakeMeshPlacementType : uint8
{
	GroundPlane                    = 0,
	OnScene                        = 1,
	EMakeMeshPlacementType_MAX     = 2,
};

enum class EMakeMeshPivotLocation : uint8
{
	Base                           = 0,
	Centered                       = 1,
	Top                            = 2,
	EMakeMeshPivotLocation_MAX     = 3,
};

enum class EMakeMeshPolygroupMode : uint8
{
	PerShape                       = 0,
	PerFace                        = 1,
	PerQuad                        = 2,
	EMakeMeshPolygroupMode_MAX     = 3,
};

enum class EProceduralRectType : int32
{
	Rectangle                      = 0,
	RoundedRectangle               = 1,
	EProceduralRectType_MAX        = 2,
};

enum class EProceduralDiscType : int32
{
	Disc                           = 0,
	PuncturedDisc                  = 1,
	EProceduralDiscType_MAX        = 2,
};

enum class EProceduralSphereType : int32
{
	LatLong                        = 0,
	Box                            = 1,
	EProceduralSphereType_MAX      = 2,
};

enum class EProceduralStairsType : int32
{
	Linear                         = 0,
	Floating                       = 1,
	Curved                         = 2,
	Spiral                         = 3,
	EProceduralStairsType_MAX      = 4,
};

enum class EDrawPolygonDrawMode : uint8
{
	Freehand                       = 0,
	Circle                         = 1,
	Square                         = 2,
	Rectangle                      = 3,
	RoundedRectangle               = 4,
	Ring                           = 5,
	EDrawPolygonDrawMode_MAX       = 6,
};

enum class EDrawPolygonExtrudeMode : uint8
{
	Flat                           = 0,
	Fixed                          = 1,
	Interactive                    = 2,
	EDrawPolygonExtrudeMode_MAX    = 3,
};

enum class ELocalFrameMode : int32
{
	FromObject                     = 0,
	FromGeometry                   = 1,
	ELocalFrameMode_MAX            = 2,
};

enum class EEditMeshPolygonsToolActions : uint8
{
	NoAction                       = 0,
	AcceptCurrent                  = 1,
	CancelCurrent                  = 2,
	Extrude                        = 3,
	PushPull                       = 4,
	Offset                         = 5,
	Inset                          = 6,
	Outset                         = 7,
	BevelFaces                     = 8,
	InsertEdge                     = 9,
	InsertEdgeLoop                 = 10,
	Complete                       = 11,
	PlaneCut                       = 12,
	Merge                          = 13,
	Delete                         = 14,
	CutFaces                       = 15,
	RecalculateNormals             = 16,
	FlipNormals                    = 17,
	Retriangulate                  = 18,
	Decompose                      = 19,
	Disconnect                     = 20,
	Duplicate                      = 21,
	CollapseEdge                   = 22,
	WeldEdges                      = 23,
	StraightenEdge                 = 24,
	FillHole                       = 25,
	BridgeEdges                    = 26,
	BevelEdges                     = 27,
	PlanarProjectionUV             = 28,
	SimplifyByGroups               = 29,
	RegenerateExtraCorners         = 30,
	PokeSingleFace                 = 31,
	SplitSingleEdge                = 32,
	FlipSingleEdge                 = 33,
	CollapseSingleEdge             = 34,
	EEditMeshPolygonsToolActions_MAX = 35,
};

enum class EEditMeshPolygonsToolSelectionMode : uint8
{
	Faces                          = 0,
	Edges                          = 1,
	Vertices                       = 2,
	Loops                          = 3,
	Rings                          = 4,
	FacesEdgesVertices             = 5,
	EEditMeshPolygonsToolSelectionMode_MAX = 6,
};

enum class ESetMeshMaterialMode : uint8
{
	Original                       = 0,
	Checkerboard                   = 1,
	Override                       = 2,
	ESetMeshMaterialMode_MAX       = 3,
};

enum class EMeshEditingMaterialModes : int32
{
	ExistingMaterial               = 0,
	Diffuse                        = 1,
	Grey                           = 2,
	Soft                           = 3,
	Transparent                    = 4,
	TangentNormal                  = 5,
	VertexColor                    = 6,
	CustomImage                    = 7,
	Custom                         = 8,
	EMeshEditingMaterialModes_MAX  = 9,
};

enum class ERevolvePropertiesCapFillMode : uint8
{
	None                           = 0,
	CenterFan                      = 1,
	Delaunay                       = 2,
	EarClipping                    = 3,
	ERevolvePropertiesCapFillMode_MAX = 4,
};

enum class ERevolvePropertiesPolygroupMode : uint8
{
	PerShape                       = 0,
	PerFace                        = 1,
	PerRevolveStep                 = 2,
	PerPathSegment                 = 3,
	ERevolvePropertiesPolygroupMode_MAX = 4,
};

enum class ERevolvePropertiesQuadSplit : uint8
{
	Uniform                        = 0,
	Compact                        = 1,
	ERevolvePropertiesQuadSplit_MAX = 2,
};

enum class EPolyEditCutPlaneOrientation : int32
{
	FaceNormals                    = 0,
	ViewDirection                  = 1,
	EPolyEditCutPlaneOrientation_MAX = 2,
};

enum class EPolyEditExtrudeDirection : int32
{
	SelectionNormal                = 0,
	WorldX                         = 1,
	WorldY                         = 2,
	WorldZ                         = 3,
	LocalX                         = 4,
	LocalY                         = 5,
	LocalZ                         = 6,
	EPolyEditExtrudeDirection_MAX  = 7,
};

enum class EPolyEditExtrudeDistanceMode : int32
{
	ClickInViewport                = 0,
	Fixed                          = 1,
	EPolyEditExtrudeDistanceMode_MAX = 2,
};

enum class EPolyEditExtrudeModeOptions : int32
{
	SingleDirection                = 3,
	SelectedTriangleNormals        = 0,
	SelectedTriangleNormalsEven    = 1,
	EPolyEditExtrudeModeOptions_MAX = 4,
};

enum class EPolyEditOffsetModeOptions : int32
{
	VertexNormals                  = 2,
	SelectedTriangleNormals        = 0,
	SelectedTriangleNormalsEven    = 1,
	EPolyEditOffsetModeOptions_MAX = 3,
};

enum class EPolyEditPushPullModeOptions : int32
{
	SelectedTriangleNormals        = 0,
	SelectedTriangleNormalsEven    = 1,
	SingleDirection                = 3,
	VertexNormals                  = 2,
	EPolyEditPushPullModeOptions_MAX = 4,
};

enum class EGroupEdgeInsertionMode : int32
{
	Retriangulate                  = 0,
	PlaneCut                       = 1,
	EGroupEdgeInsertionMode_MAX    = 2,
};

enum class EEdgeLoopPositioningMode : int32
{
	Even                           = 0,
	ProportionOffset               = 1,
	DistanceOffset                 = 2,
	EEdgeLoopPositioningMode_MAX   = 3,
};

enum class EEdgeLoopInsertionMode : int32
{
	Retriangulate                  = 0,
	PlaneCut                       = 1,
	EEdgeLoopInsertionMode_MAX     = 2,
};

enum class EUVProjectionToolActions : uint8
{
	NoAction                       = 0,
	AutoFit                        = 1,
	AutoFitAlign                   = 2,
	Reset                          = 3,
	EUVProjectionToolActions_MAX   = 4,
};

enum class EUVProjectionToolInitializationMode : int32
{
	Default                        = 0,
	UsePrevious                    = 1,
	AutoFit                        = 2,
	AutoFitAlign                   = 3,
	EUVProjectionToolInitializationMode_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


