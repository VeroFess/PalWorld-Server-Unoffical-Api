#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFSR2QualityMode : int32
{
	Unused                         = 0,
	Quality                        = 1,
	Balanced                       = 2,
	Performance                    = 3,
	UltraPerformance               = 4,
	EFSR2QualityMode_MAX           = 5,
};

enum class EFSR2HistoryFormat : int32
{
	FloatRGBA                      = 0,
	FloatR11G11B10                 = 1,
	EFSR2HistoryFormat_MAX         = 2,
};

enum class EFSR2DeDitherMode : int32
{
	Off                            = 0,
	Full                           = 1,
	HairOnly                       = 2,
	EFSR2DeDitherMode_MAX          = 3,
};

enum class EFSR2LandscapeHISMMode : int32
{
	Off                            = 0,
	AllStatic                      = 1,
	StaticWPO                      = 2,
	EFSR2LandscapeHISMMode_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


