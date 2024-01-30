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

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetMeterValueColor
struct UAudioMeter_SetMeterValueColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
struct UAudioMeter_SetMeterScaleLabelColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetMeterScaleColor
struct UAudioMeter_SetMeterScaleColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetMeterPeakColor
struct UAudioMeter_SetMeterPeakColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetMeterClippingColor
struct UAudioMeter_SetMeterClippingColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetMeterChannelInfo
struct UAudioMeter_SetMeterChannelInfo_Params
{
public:
	TArray<struct FMeterChannelInfo>             InMeterChannelInfo;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
struct UAudioMeter_SetMeterBackgroundColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.SetBackgroundColor
struct UAudioMeter_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
struct UAudioMeter_GetMeterChannelInfo__DelegateSignature_Params
{
public:
	TArray<struct FMeterChannelInfo>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioMeter.GetMeterChannelInfo
struct UAudioMeter_GetMeterChannelInfo_Params
{
public:
	TArray<struct FMeterChannelInfo>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
struct UAudioRadialSlider_SetWidgetLayout_Params
{
public:
	enum class EAudioRadialSliderLayout          InLayout;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
struct UAudioRadialSlider_SetValueTextReadOnly_Params
{
public:
	bool                                         bIsReadOnly;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
struct UAudioRadialSlider_SetUnitsTextReadOnly_Params
{
public:
	bool                                         bIsReadOnly;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetUnitsText
struct UAudioRadialSlider_SetUnitsText_Params
{
public:
	class FText                                  Units;                                             // 0x0(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
struct UAudioRadialSlider_SetTextLabelBackgroundColor_Params
{
public:
	struct FSlateColor                           InColor;                                           // 0x0(0x14)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetSliderThickness
struct UAudioRadialSlider_SetSliderThickness_Params
{
public:
	float                                        InThickness;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
struct UAudioRadialSlider_SetSliderProgressColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetSliderBarColor
struct UAudioRadialSlider_SetSliderBarColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetShowUnitsText
struct UAudioRadialSlider_SetShowUnitsText_Params
{
public:
	bool                                         bShowUnitsText;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
struct UAudioRadialSlider_SetShowLabelOnlyOnHover_Params
{
public:
	bool                                         bShowLabelOnlyOnHover;                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetOutputRange
struct UAudioRadialSlider_SetOutputRange_Params
{
public:
	struct FVector2D                             InOutputRange;                                     // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
struct UAudioRadialSlider_SetHandStartEndRatio_Params
{
public:
	struct FVector2D                             InHandStartEndRatio;                               // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
struct UAudioRadialSlider_SetCenterBackgroundColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioWidgets.AudioRadialSlider.GetSliderValue
struct UAudioRadialSlider_GetSliderValue_Params
{
public:
	float                                        OutputValue;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioWidgets.AudioRadialSlider.GetOutputValue
struct UAudioRadialSlider_GetOutputValue_Params
{
public:
	float                                        InSliderValue;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
struct UAudioSliderBase_SetWidgetBackgroundColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
struct UAudioSliderBase_SetValueTextReadOnly_Params
{
public:
	bool                                         bIsReadOnly;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
struct UAudioSliderBase_SetUnitsTextReadOnly_Params
{
public:
	bool                                         bIsReadOnly;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetUnitsText
struct UAudioSliderBase_SetUnitsText_Params
{
public:
	class FText                                  Units;                                             // 0x0(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
struct UAudioSliderBase_SetTextLabelBackgroundColor_Params
{
public:
	struct FSlateColor                           InColor;                                           // 0x0(0x14)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
struct UAudioSliderBase_SetSliderThumbColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetSliderBarColor
struct UAudioSliderBase_SetSliderBarColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
struct UAudioSliderBase_SetSliderBackgroundColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetShowUnitsText
struct UAudioSliderBase_SetShowUnitsText_Params
{
public:
	bool                                         bShowUnitsText;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
struct UAudioSliderBase_SetShowLabelOnlyOnHover_Params
{
public:
	bool                                         bShowLabelOnlyOnHover;                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioWidgets.AudioSliderBase.GetSliderValue
struct UAudioSliderBase_GetSliderValue_Params
{
public:
	float                                        OutputValue;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioWidgets.AudioSliderBase.GetOutputValue
struct UAudioSliderBase_GetOutputValue_Params
{
public:
	float                                        InSliderValue;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioWidgets.AudioSliderBase.GetLinValue
struct UAudioSliderBase_GetLinValue_Params
{
public:
	float                                        OutputValue;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


