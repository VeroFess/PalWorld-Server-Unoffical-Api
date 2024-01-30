#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LocationServicesBPLibrary.LocationServices
// (None)

class UClass* ULocationServices::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocationServices");

	return Clss;
}


// LocationServices LocationServicesBPLibrary.Default__LocationServices
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocationServices* ULocationServices::GetDefaultObj()
{
	static class ULocationServices* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocationServices*>(ULocationServices::StaticClass()->DefaultObject);

	return Default;
}


// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULocationServices::StopLocationServices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationServices", "StopLocationServices");

	Params::ULocationServices_StopLocationServices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULocationServices::StartLocationServices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationServices", "StartLocationServices");

	Params::ULocationServices_StartLocationServices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELocationAccuracy       Accuracy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULocationServices::IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationServices", "IsLocationAccuracyAvailable");

	Params::ULocationServices_IsLocationAccuracyAvailable_Params Parms{};

	Parms.Accuracy = Accuracy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELocationAccuracy       Accuracy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UpdateFrequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDistanceFilter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULocationServices::InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationServices", "InitLocationServices");

	Params::ULocationServices_InitLocationServices_Params Parms{};

	Parms.Accuracy = Accuracy;
	Parms.UpdateFrequency = UpdateFrequency;
	Parms.MinDistanceFilter = MinDistanceFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocationServicesImpl*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocationServicesImpl* ULocationServices::GetLocationServicesImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationServices", "GetLocationServicesImpl");

	Params::ULocationServices_GetLocationServicesImpl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLocationServicesData       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLocationServicesData ULocationServices::GetLastKnownLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationServices", "GetLastKnownLocation");

	Params::ULocationServices_GetLastKnownLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULocationServices::AreLocationServicesEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationServices", "AreLocationServicesEnabled");

	Params::ULocationServices_AreLocationServicesEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LocationServicesBPLibrary.LocationServicesImpl
// (None)

class UClass* ULocationServicesImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocationServicesImpl");

	return Clss;
}


// LocationServicesImpl LocationServicesBPLibrary.Default__LocationServicesImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocationServicesImpl* ULocationServicesImpl::GetDefaultObj()
{
	static class ULocationServicesImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocationServicesImpl*>(ULocationServicesImpl::StaticClass()->DefaultObject);

	return Default;
}

}


