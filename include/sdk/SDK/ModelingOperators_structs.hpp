#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERecomputeUVsPropertiesUnwrapType : int32
{
	ExpMap                         = 0,
	Conformal                      = 1,
	SpectralConformal              = 2,
	IslandMerging                  = 3,
	ERecomputeUVsPropertiesUnwrapType_MAX = 4,
};

enum class ERecomputeUVsPropertiesIslandMode : int32
{
	PolyGroups                     = 0,
	ExistingUVs                    = 1,
	ERecomputeUVsPropertiesIslandMode_MAX = 2,
};

enum class ERecomputeUVsToolOrientationMode : int32
{
	None                           = 0,
	MinBounds                      = 1,
	ERecomputeUVsToolOrientationMode_MAX = 2,
};

enum class ERecomputeUVsPropertiesLayoutType : int32
{
	None                           = 0,
	Repack                         = 1,
	NormalizeToBounds              = 2,
	NormalizeToWorld               = 3,
	ERecomputeUVsPropertiesLayoutType_MAX = 4,
};

enum class EUVLayoutType : int32
{
	Transform                      = 0,
	Stack                          = 1,
	Repack                         = 2,
	EUVLayoutType_MAX              = 3,
};

enum class ENormalCalculationMethod : uint8
{
	AreaWeighted                   = 0,
	AngleWeighted                  = 1,
	AreaAngleWeighting             = 2,
	ENormalCalculationMethod_MAX   = 3,
};

enum class ESplitNormalMethod : uint8
{
	UseExistingTopology            = 0,
	FaceNormalThreshold            = 1,
	FaceGroupID                    = 2,
	PerTriangle                    = 3,
	PerVertex                      = 4,
	ESplitNormalMethod_MAX         = 5,
};

enum class EHoleFillOpFillType : uint8
{
	TriangleFan                    = 0,
	PolygonEarClipping             = 1,
	Planar                         = 2,
	Minimal                        = 3,
	Smooth                         = 4,
	EHoleFillOpFillType_MAX        = 5,
};

enum class ERemeshType : uint8
{
	Standard                       = 0,
	FullPass                       = 1,
	NormalFlow                     = 2,
	ERemeshType_MAX                = 3,
};

enum class ERemeshSmoothingType : uint8
{
	Uniform                        = 0,
	Cotangent                      = 1,
	MeanValue                      = 2,
	ERemeshSmoothingType_MAX       = 3,
};

enum class ECSGOperation : uint8
{
	DifferenceAB                   = 0,
	DifferenceBA                   = 1,
	Intersect                      = 2,
	Union                          = 3,
	ECSGOperation_MAX              = 4,
};

enum class ETrimOperation : uint8
{
	TrimA                          = 0,
	TrimB                          = 1,
	ETrimOperation_MAX             = 2,
};

enum class ETrimSide : uint8
{
	RemoveInside                   = 0,
	RemoveOutside                  = 1,
	ETrimSide_MAX                  = 2,
};

enum class EMorphologyOperation : uint8
{
	Dilate                         = 0,
	Contract                       = 1,
	Close                          = 2,
	Open                           = 3,
	EMorphologyOperation_MAX       = 4,
};

enum class EUVProjectionMethod : uint8
{
	Box                            = 0,
	Cylinder                       = 1,
	Plane                          = 2,
	ExpMap                         = 3,
	EUVProjectionMethod_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


