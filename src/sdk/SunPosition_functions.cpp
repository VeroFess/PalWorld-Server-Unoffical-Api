#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SunPosition.SunPositionFunctionLibrary
// (None)

class UClass* USunPositionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SunPositionFunctionLibrary");

	return Clss;
}


// SunPositionFunctionLibrary SunPosition.Default__SunPositionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USunPositionFunctionLibrary* USunPositionFunctionLibrary::GetDefaultObj()
{
	static class USunPositionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USunPositionFunctionLibrary*>(USunPositionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SunPosition.SunPositionFunctionLibrary.GetSunPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Latitude                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Longitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeZone                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDaylightSavingTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Year                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Month                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Day                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Hours                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Minutes                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSunPositionData            SunPositionData                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void USunPositionFunctionLibrary::GetSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, int32 Year, int32 Month, int32 Day, int32 Hours, int32 Minutes, int32 Seconds, struct FSunPositionData* SunPositionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SunPositionFunctionLibrary", "GetSunPosition");

	Params::USunPositionFunctionLibrary_GetSunPosition_Params Parms{};

	Parms.Latitude = Latitude;
	Parms.Longitude = Longitude;
	Parms.TimeZone = TimeZone;
	Parms.bIsDaylightSavingTime = bIsDaylightSavingTime;
	Parms.Year = Year;
	Parms.Month = Month;
	Parms.Day = Day;
	Parms.Hours = Hours;
	Parms.Minutes = Minutes;
	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SunPositionData != nullptr)
		*SunPositionData = std::move(Parms.SunPositionData);

}

}


