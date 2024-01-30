#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C
// (Actor)

class UClass* APPSkyCreator_ControllerExample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPSkyCreator_ControllerExample_C");

	return Clss;
}


// PPSkyCreator_ControllerExample_C PPSkyCreator_ControllerExample.Default__PPSkyCreator_ControllerExample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APPSkyCreator_ControllerExample_C* APPSkyCreator_ControllerExample_C::GetDefaultObj()
{
	static class APPSkyCreator_ControllerExample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APPSkyCreator_ControllerExample_C*>(APPSkyCreator_ControllerExample_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.SetRainVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPPSkyCreatorWeatherFXSettingsCallFunc_GetWeatherFXSettings_ReturnValue                        (NoDestructor)

void APPSkyCreator_ControllerExample_C::SetRainVolume(const struct FPPSkyCreatorWeatherFXSettings& CallFunc_GetWeatherFXSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "SetRainVolume");

	Params::APPSkyCreator_ControllerExample_C_SetRainVolume_Params Parms{};

	Parms.CallFunc_GetWeatherFXSettings_ReturnValue = CallFunc_GetWeatherFXSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.WeatherMaterialFX_Interpolation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpSnowAmount_Alpha_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpSnowAmount_Alpha_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWetnessAmount_Alpha_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWetnessAmount_Alpha_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APPSkyCreator_ControllerExample_C::WeatherMaterialFX_Interpolation(double CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_4, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_4, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_4, double CallFunc_GetWorldDeltaSeconds_ReturnValue_5, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_5, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_5, float CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast, float CallFunc_PrintString_Duration_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_LerpSnowAmount_Alpha_ImplicitCast, float CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast, float CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast_1, float CallFunc_PrintString_Duration_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, float CallFunc_LerpSnowAmount_Alpha_ImplicitCast_1, float CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast_1, float CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast, float CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast, float CallFunc_PrintString_Duration_ImplicitCast_2, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, float CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast, float CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast_1, float CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast_1, float CallFunc_PrintString_Duration_ImplicitCast_3, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3, double CallFunc_MapRangeClamped_Value_ImplicitCast_3, float CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast_1, float CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast, float CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast, float CallFunc_PrintString_Duration_ImplicitCast_4, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4, double CallFunc_MapRangeClamped_Value_ImplicitCast_4, float CallFunc_LerpWetnessAmount_Alpha_ImplicitCast, float CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast_1, float CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast_1, float CallFunc_PrintString_Duration_ImplicitCast_5, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5, double CallFunc_MapRangeClamped_Value_ImplicitCast_5, float CallFunc_LerpWetnessAmount_Alpha_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "WeatherMaterialFX_Interpolation");

	Params::APPSkyCreator_ControllerExample_C_WeatherMaterialFX_Interpolation_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1 = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_2 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_2 = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_2 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_3 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_3;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_3 = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_3 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_4 = CallFunc_GetWorldDeltaSeconds_ReturnValue_4;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_4 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_4;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_4 = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_4 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_4;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_5 = CallFunc_GetWorldDeltaSeconds_ReturnValue_5;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_5 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_5;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_5 = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_5 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_5;
	Parms.CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast = CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast;
	Parms.CallFunc_PrintString_Duration_ImplicitCast = CallFunc_PrintString_Duration_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_LerpSnowAmount_Alpha_ImplicitCast = CallFunc_LerpSnowAmount_Alpha_ImplicitCast;
	Parms.CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast = CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast;
	Parms.CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast_1 = CallFunc_LerpSnowAmount_SnowAmountA_ImplicitCast_1;
	Parms.CallFunc_PrintString_Duration_ImplicitCast_1 = CallFunc_PrintString_Duration_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_LerpSnowAmount_Alpha_ImplicitCast_1 = CallFunc_LerpSnowAmount_Alpha_ImplicitCast_1;
	Parms.CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast_1 = CallFunc_LerpSnowAmount_SnowAmountB_ImplicitCast_1;
	Parms.CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast = CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast;
	Parms.CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast = CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast;
	Parms.CallFunc_PrintString_Duration_ImplicitCast_2 = CallFunc_PrintString_Duration_ImplicitCast_2;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_2 = CallFunc_MapRangeClamped_Value_ImplicitCast_2;
	Parms.CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast = CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast;
	Parms.CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast_1 = CallFunc_LerpPuddlesAmount_PuddlesAmountB_ImplicitCast_1;
	Parms.CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast_1 = CallFunc_LerpPuddlesAmount_PuddlesAmountA_ImplicitCast_1;
	Parms.CallFunc_PrintString_Duration_ImplicitCast_3 = CallFunc_PrintString_Duration_ImplicitCast_3;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_3 = CallFunc_MapRangeClamped_Value_ImplicitCast_3;
	Parms.CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast_1 = CallFunc_LerpPuddlesAmount_Alpha_ImplicitCast_1;
	Parms.CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast = CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast;
	Parms.CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast = CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast;
	Parms.CallFunc_PrintString_Duration_ImplicitCast_4 = CallFunc_PrintString_Duration_ImplicitCast_4;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_4 = CallFunc_MapRangeClamped_Value_ImplicitCast_4;
	Parms.CallFunc_LerpWetnessAmount_Alpha_ImplicitCast = CallFunc_LerpWetnessAmount_Alpha_ImplicitCast;
	Parms.CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast_1 = CallFunc_LerpWetnessAmount_WetnessAmountB_ImplicitCast_1;
	Parms.CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast_1 = CallFunc_LerpWetnessAmount_WetnessAmountA_ImplicitCast_1;
	Parms.CallFunc_PrintString_Duration_ImplicitCast_5 = CallFunc_PrintString_Duration_ImplicitCast_5;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_5 = CallFunc_MapRangeClamped_Value_ImplicitCast_5;
	Parms.CallFunc_LerpWetnessAmount_Alpha_ImplicitCast_1 = CallFunc_LerpWetnessAmount_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APPSkyCreator*               CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APPSkyCreator_ControllerExample_C::UserConstructionScript(class APPSkyCreator* CallFunc_GetActorOfClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "UserConstructionScript");

	Params::APPSkyCreator_ControllerExample_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APPSkyCreator_ControllerExample_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "ReceiveTick");

	Params::APPSkyCreator_ControllerExample_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_WeatherInterpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_WeatherInterpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_WeatherInterpolation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_WeatherInterpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_WeatherInterpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_WeatherInterpolation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_WeatherChangeInterval
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_WeatherChangeInterval()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_WeatherChangeInterval");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_WeatherChangeInterval
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_WeatherChangeInterval()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_WeatherChangeInterval");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_PuddlesAccumulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_PuddlesAccumulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_PuddlesAccumulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_WetnessAccumulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_WetnessAccumulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_WetnessAccumulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_WetnessDry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_WetnessDry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_WetnessDry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_PuddlesDry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_PuddlesDry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_PuddlesDry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_WetnessAccumulate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_WetnessAccumulate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_WetnessAccumulate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_WetnessDry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_WetnessDry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_WetnessDry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_PuddlesAccumulate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_PuddlesAccumulate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_PuddlesAccumulate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_PuddlesDry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_PuddlesDry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_PuddlesDry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_SnowAccumulate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_SnowAccumulate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_SnowAccumulate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Start_SnowMelt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Start_SnowMelt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Start_SnowMelt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_SnowAccumulate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_SnowAccumulate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_SnowAccumulate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.Finish_SnowDry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APPSkyCreator_ControllerExample_C::Finish_SnowDry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "Finish_SnowDry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.LightningStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LightningPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APPSkyCreator_ControllerExample_C::LightningStrike(const struct FVector& LightningPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "LightningStrike");

	Params::APPSkyCreator_ControllerExample_C_LightningStrike_Params Parms{};

	Parms.LightningPosition = LightningPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PPSkyCreator_ControllerExample.PPSkyCreator_ControllerExample_C.ExecuteUbergraph_PPSkyCreator_ControllerExample
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPPSkyCreatorWeatherSettingsCallFunc_GetWeatherPresetSettings_ReturnValue                    (NoDestructor)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetTime_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPPSkyCreatorWeatherSettingsCallFunc_GetWeatherSettings_ReturnValue                          (NoDestructor)
// class UPPSkyCreatorWeatherPreset*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPPSkyCreatorWeatherSettingsCallFunc_GetWeatherPresetSettings_ReturnValue_1                  (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPPSkyCreatorWindSettings   K2Node_MakeStruct_PPSkyCreatorWindSettings                       (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_6                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_7                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LightningPosition                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetTime_InTime_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RealtimeTimeOfDay_DayCycleDuration_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWeatherSettings_Alpha_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RealtimeTimeOfDay_DeltaSeconds_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWindIndependentSettings_Alpha_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_CloudWindDirection_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_CloudWindSpeed_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PrecipitationWindDirection_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PrecipitationWindSpeed_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentWetnessAmount_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_NextWetnessAmount_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentPuddlesAmount_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_NextPuddlesAmount_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentSnowAmount_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_NextSnowAmount_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APPSkyCreator_ControllerExample_C::ExecuteUbergraph_PPSkyCreator_ControllerExample(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float K2Node_Event_DeltaSeconds, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherPresetSettings_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, float CallFunc_GetTime_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherSettings_ReturnValue, class UPPSkyCreatorWeatherPreset* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherPresetSettings_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_3, const struct FPPSkyCreatorWindSettings& K2Node_MakeStruct_PPSkyCreatorWindSettings, bool CallFunc_HasAuthority_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasAuthority_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_9, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FVector& K2Node_CustomEvent_LightningPosition, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, float CallFunc_SetTime_InTime_ImplicitCast, float CallFunc_RealtimeTimeOfDay_DayCycleDuration_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_LerpWeatherSettings_Alpha_ImplicitCast, float CallFunc_RealtimeTimeOfDay_DeltaSeconds_ImplicitCast, float CallFunc_PrintString_Duration_ImplicitCast, float CallFunc_PrintString_Duration_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, float CallFunc_LerpWindIndependentSettings_Alpha_ImplicitCast, float K2Node_MakeStruct_CloudWindDirection_ImplicitCast, float K2Node_MakeStruct_CloudWindSpeed_ImplicitCast, float K2Node_MakeStruct_PrecipitationWindDirection_ImplicitCast, float K2Node_MakeStruct_PrecipitationWindSpeed_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5, double K2Node_VariableSet_CurrentWetnessAmount_ImplicitCast, double K2Node_VariableSet_NextWetnessAmount_ImplicitCast, double K2Node_VariableSet_CurrentPuddlesAmount_ImplicitCast, double K2Node_VariableSet_NextPuddlesAmount_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_6, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_7, double K2Node_VariableSet_CurrentSnowAmount_ImplicitCast, double K2Node_VariableSet_NextSnowAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPSkyCreator_ControllerExample_C", "ExecuteUbergraph_PPSkyCreator_ControllerExample");

	Params::APPSkyCreator_ControllerExample_C_ExecuteUbergraph_PPSkyCreator_ControllerExample_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetWeatherPresetSettings_ReturnValue = CallFunc_GetWeatherPresetSettings_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_GetTime_ReturnValue = CallFunc_GetTime_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetWeatherSettings_ReturnValue = CallFunc_GetWeatherSettings_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;
	Parms.CallFunc_GetWeatherPresetSettings_ReturnValue_1 = CallFunc_GetWeatherPresetSettings_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.K2Node_MakeStruct_PPSkyCreatorWindSettings = K2Node_MakeStruct_PPSkyCreatorWindSettings;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.CallFunc_HasAuthority_ReturnValue_7 = CallFunc_HasAuthority_ReturnValue_7;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_6 = CallFunc_K2_SetTimerDelegate_ReturnValue_6;
	Parms.CallFunc_HasAuthority_ReturnValue_8 = CallFunc_HasAuthority_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_7 = CallFunc_K2_SetTimerDelegate_ReturnValue_7;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_9 = CallFunc_HasAuthority_ReturnValue_9;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_LightningPosition = K2Node_CustomEvent_LightningPosition;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SetTime_InTime_ImplicitCast = CallFunc_SetTime_InTime_ImplicitCast;
	Parms.CallFunc_RealtimeTimeOfDay_DayCycleDuration_ImplicitCast = CallFunc_RealtimeTimeOfDay_DayCycleDuration_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_LerpWeatherSettings_Alpha_ImplicitCast = CallFunc_LerpWeatherSettings_Alpha_ImplicitCast;
	Parms.CallFunc_RealtimeTimeOfDay_DeltaSeconds_ImplicitCast = CallFunc_RealtimeTimeOfDay_DeltaSeconds_ImplicitCast;
	Parms.CallFunc_PrintString_Duration_ImplicitCast = CallFunc_PrintString_Duration_ImplicitCast;
	Parms.CallFunc_PrintString_Duration_ImplicitCast_1 = CallFunc_PrintString_Duration_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
	Parms.CallFunc_LerpWindIndependentSettings_Alpha_ImplicitCast = CallFunc_LerpWindIndependentSettings_Alpha_ImplicitCast;
	Parms.K2Node_MakeStruct_CloudWindDirection_ImplicitCast = K2Node_MakeStruct_CloudWindDirection_ImplicitCast;
	Parms.K2Node_MakeStruct_CloudWindSpeed_ImplicitCast = K2Node_MakeStruct_CloudWindSpeed_ImplicitCast;
	Parms.K2Node_MakeStruct_PrecipitationWindDirection_ImplicitCast = K2Node_MakeStruct_PrecipitationWindDirection_ImplicitCast;
	Parms.K2Node_MakeStruct_PrecipitationWindSpeed_ImplicitCast = K2Node_MakeStruct_PrecipitationWindSpeed_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5;
	Parms.K2Node_VariableSet_CurrentWetnessAmount_ImplicitCast = K2Node_VariableSet_CurrentWetnessAmount_ImplicitCast;
	Parms.K2Node_VariableSet_NextWetnessAmount_ImplicitCast = K2Node_VariableSet_NextWetnessAmount_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentPuddlesAmount_ImplicitCast = K2Node_VariableSet_CurrentPuddlesAmount_ImplicitCast;
	Parms.K2Node_VariableSet_NextPuddlesAmount_ImplicitCast = K2Node_VariableSet_NextPuddlesAmount_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_6 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_6;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_7 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_7;
	Parms.K2Node_VariableSet_CurrentSnowAmount_ImplicitCast = K2Node_VariableSet_CurrentSnowAmount_ImplicitCast;
	Parms.K2Node_VariableSet_NextSnowAmount_ImplicitCast = K2Node_VariableSet_NextSnowAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


