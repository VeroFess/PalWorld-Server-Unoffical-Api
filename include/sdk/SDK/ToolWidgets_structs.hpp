#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFilterBarLayout : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	EFilterBarLayout_MAX           = 2,
};

enum class EFilterPillStyle : uint8
{
	Default                        = 0,
	Basic                          = 1,
	EFilterPillStyle_MAX           = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct ToolWidgets.CustomTextFilterData
struct FCustomTextFilterData
{
public:
	class FText                                  FilterLabel;                                       // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  FilterString;                                      // 0x18(0x18)(NativeAccessSpecifierPublic)
	struct FLinearColor                          FilterColor;                                       // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


