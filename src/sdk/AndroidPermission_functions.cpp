#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AndroidPermission.AndroidPermissionCallbackProxy
// (None)

class UClass* UAndroidPermissionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AndroidPermissionCallbackProxy");

	return Clss;
}


// AndroidPermissionCallbackProxy AndroidPermission.Default__AndroidPermissionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAndroidPermissionCallbackProxy* UAndroidPermissionCallbackProxy::GetDefaultObj()
{
	static class UAndroidPermissionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAndroidPermissionCallbackProxy*>(UAndroidPermissionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// (None)

class UClass* UAndroidPermissionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AndroidPermissionFunctionLibrary");

	return Clss;
}


// AndroidPermissionFunctionLibrary AndroidPermission.Default__AndroidPermissionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAndroidPermissionFunctionLibrary* UAndroidPermissionFunctionLibrary::GetDefaultObj()
{
	static class UAndroidPermissionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAndroidPermissionFunctionLibrary*>(UAndroidPermissionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Permission                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAndroidPermissionFunctionLibrary::CheckPermission(const class FString& Permission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AndroidPermissionFunctionLibrary", "CheckPermission");

	Params::UAndroidPermissionFunctionLibrary_CheckPermission_Params Parms{};

	Parms.Permission = Permission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Permissions                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UAndroidPermissionCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(TArray<class FString>& Permissions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AndroidPermissionFunctionLibrary", "AcquirePermissions");

	Params::UAndroidPermissionFunctionLibrary_AcquirePermissions_Params Parms{};

	Parms.Permissions = Permissions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


