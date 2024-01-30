#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonUser.AsyncAction_CommonUserInitialize
// (None)

class UClass* UAsyncAction_CommonUserInitialize::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncAction_CommonUserInitialize");

	return Clss;
}


// AsyncAction_CommonUserInitialize CommonUser.Default__AsyncAction_CommonUserInitialize
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncAction_CommonUserInitialize* UAsyncAction_CommonUserInitialize::GetDefaultObj()
{
	static class UAsyncAction_CommonUserInitialize* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncAction_CommonUserInitialize*>(UAsyncAction_CommonUserInitialize::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUser.AsyncAction_CommonUserInitialize.LoginForOnlinePlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCommonUserSubsystem*        Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_CommonUserInitialize*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_CommonUserInitialize* UAsyncAction_CommonUserInitialize::LoginForOnlinePlay(class UCommonUserSubsystem* Target, int32 LocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_CommonUserInitialize", "LoginForOnlinePlay");

	Params::UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Params Parms{};

	Parms.Target = Target;
	Parms.LocalPlayerIndex = LocalPlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.AsyncAction_CommonUserInitialize.InitializeForLocalPlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCommonUserSubsystem*        Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDeviceId              PrimaryInputDevice                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanUseGuestLogin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_CommonUserInitialize*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_CommonUserInitialize* UAsyncAction_CommonUserInitialize::InitializeForLocalPlay(class UCommonUserSubsystem* Target, int32 LocalPlayerIndex, const struct FInputDeviceId& PrimaryInputDevice, bool bCanUseGuestLogin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_CommonUserInitialize", "InitializeForLocalPlay");

	Params::UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Params Parms{};

	Parms.Target = Target;
	Parms.LocalPlayerIndex = LocalPlayerIndex;
	Parms.PrimaryInputDevice = PrimaryInputDevice;
	Parms.bCanUseGuestLogin = bCanUseGuestLogin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.AsyncAction_CommonUserInitialize.HandleInitializationComplete
// (Native, Public)
// Parameters:
// class UCommonUserInfo*             UserInfo                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Error                                                            (Parm, NativeAccessSpecifierPublic)
// enum class ECommonUserPrivilege    RequestedPrivilege                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonUserOnlineContextOnlineContext                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncAction_CommonUserInitialize::HandleInitializationComplete(class UCommonUserInfo* UserInfo, bool bSuccess, class FText Error, enum class ECommonUserPrivilege RequestedPrivilege, enum class ECommonUserOnlineContext OnlineContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_CommonUserInitialize", "HandleInitializationComplete");

	Params::UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Params Parms{};

	Parms.UserInfo = UserInfo;
	Parms.bSuccess = bSuccess;
	Parms.Error = Error;
	Parms.RequestedPrivilege = RequestedPrivilege;
	Parms.OnlineContext = OnlineContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUser.CommonSession_HostSessionRequest
// (None)

class UClass* UCommonSession_HostSessionRequest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonSession_HostSessionRequest");

	return Clss;
}


// CommonSession_HostSessionRequest CommonUser.Default__CommonSession_HostSessionRequest
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonSession_HostSessionRequest* UCommonSession_HostSessionRequest::GetDefaultObj()
{
	static class UCommonSession_HostSessionRequest* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonSession_HostSessionRequest*>(UCommonSession_HostSessionRequest::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUser.CommonSession_SearchResult
// (None)

class UClass* UCommonSession_SearchResult::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonSession_SearchResult");

	return Clss;
}


// CommonSession_SearchResult CommonUser.Default__CommonSession_SearchResult
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonSession_SearchResult* UCommonSession_SearchResult::GetDefaultObj()
{
	static class UCommonSession_SearchResult* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonSession_SearchResult*>(UCommonSession_SearchResult::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUser.CommonSession_SearchResult.GetStringSetting
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonSession_SearchResult::GetStringSetting(class FName Key, class FString* Value, bool* bFoundValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSession_SearchResult", "GetStringSetting");

	Params::UCommonSession_SearchResult_GetStringSetting_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	if (bFoundValue != nullptr)
		*bFoundValue = Parms.bFoundValue;

}


// Function CommonUser.CommonSession_SearchResult.GetPingInMs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonSession_SearchResult::GetPingInMs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSession_SearchResult", "GetPingInMs");

	Params::UCommonSession_SearchResult_GetPingInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonSession_SearchResult.GetNumOpenPublicConnections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonSession_SearchResult::GetNumOpenPublicConnections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSession_SearchResult", "GetNumOpenPublicConnections");

	Params::UCommonSession_SearchResult_GetNumOpenPublicConnections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonSession_SearchResult.GetNumOpenPrivateConnections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonSession_SearchResult::GetNumOpenPrivateConnections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSession_SearchResult", "GetNumOpenPrivateConnections");

	Params::UCommonSession_SearchResult_GetNumOpenPrivateConnections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonSession_SearchResult.GetMaxPublicConnections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonSession_SearchResult::GetMaxPublicConnections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSession_SearchResult", "GetMaxPublicConnections");

	Params::UCommonSession_SearchResult_GetMaxPublicConnections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonSession_SearchResult.GetIntSetting
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonSession_SearchResult::GetIntSetting(class FName Key, int32* Value, bool* bFoundValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSession_SearchResult", "GetIntSetting");

	Params::UCommonSession_SearchResult_GetIntSetting_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (bFoundValue != nullptr)
		*bFoundValue = Parms.bFoundValue;

}


// Function CommonUser.CommonSession_SearchResult.GetDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCommonSession_SearchResult::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSession_SearchResult", "GetDescription");

	Params::UCommonSession_SearchResult_GetDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUser.CommonSession_SearchSessionRequest
// (None)

class UClass* UCommonSession_SearchSessionRequest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonSession_SearchSessionRequest");

	return Clss;
}


// CommonSession_SearchSessionRequest CommonUser.Default__CommonSession_SearchSessionRequest
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonSession_SearchSessionRequest* UCommonSession_SearchSessionRequest::GetDefaultObj()
{
	static class UCommonSession_SearchSessionRequest* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonSession_SearchSessionRequest*>(UCommonSession_SearchSessionRequest::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUser.CommonSessionSubsystem
// (None)

class UClass* UCommonSessionSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonSessionSubsystem");

	return Clss;
}


// CommonSessionSubsystem CommonUser.Default__CommonSessionSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonSessionSubsystem* UCommonSessionSubsystem::GetDefaultObj()
{
	static class UCommonSessionSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonSessionSubsystem*>(UCommonSessionSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUser.CommonSessionSubsystem.QuickPlaySession
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           JoiningOrHostingPlayer                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonSession_HostSessionRequest*Request                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonSessionSubsystem::QuickPlaySession(class APlayerController* JoiningOrHostingPlayer, class UCommonSession_HostSessionRequest* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSessionSubsystem", "QuickPlaySession");

	Params::UCommonSessionSubsystem_QuickPlaySession_Params Parms{};

	Parms.JoiningOrHostingPlayer = JoiningOrHostingPlayer;
	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonSessionSubsystem.JoinSession
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           JoiningPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonSession_SearchResult* Request                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonSessionSubsystem::JoinSession(class APlayerController* JoiningPlayer, class UCommonSession_SearchResult* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSessionSubsystem", "JoinSession");

	Params::UCommonSessionSubsystem_JoinSession_Params Parms{};

	Parms.JoiningPlayer = JoiningPlayer;
	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonSessionSubsystem.HostSession
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           HostingPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonSession_HostSessionRequest*Request                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonSessionSubsystem::HostSession(class APlayerController* HostingPlayer, class UCommonSession_HostSessionRequest* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSessionSubsystem", "HostSession");

	Params::UCommonSessionSubsystem_HostSession_Params Parms{};

	Parms.HostingPlayer = HostingPlayer;
	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonSessionSubsystem.FindSessions
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           SearchingPlayer                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonSession_SearchSessionRequest*Request                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonSessionSubsystem::FindSessions(class APlayerController* SearchingPlayer, class UCommonSession_SearchSessionRequest* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSessionSubsystem", "FindSessions");

	Params::UCommonSessionSubsystem_FindSessions_Params Parms{};

	Parms.SearchingPlayer = SearchingPlayer;
	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonSessionSubsystem.CreateOnlineSearchSessionRequest
// (Native, Public, BlueprintCallable)
// Parameters:
// class UCommonSession_SearchSessionRequest*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonSession_SearchSessionRequest* UCommonSessionSubsystem::CreateOnlineSearchSessionRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSessionSubsystem", "CreateOnlineSearchSessionRequest");

	Params::UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonSessionSubsystem.CreateOnlineHostSessionRequest
// (Native, Public, BlueprintCallable)
// Parameters:
// class UCommonSession_HostSessionRequest*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonSession_HostSessionRequest* UCommonSessionSubsystem::CreateOnlineHostSessionRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSessionSubsystem", "CreateOnlineHostSessionRequest");

	Params::UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonSessionSubsystem.CleanUpSessions
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonSessionSubsystem::CleanUpSessions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonSessionSubsystem", "CleanUpSessions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CommonUser.CommonUserInfo
// (None)

class UClass* UCommonUserInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUserInfo");

	return Clss;
}


// CommonUserInfo CommonUser.Default__CommonUserInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUserInfo* UCommonUserInfo::GetDefaultObj()
{
	static class UCommonUserInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUserInfo*>(UCommonUserInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUser.CommonUserInfo.GetPrivilegeAvailability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonUserPrivilege    Privilege                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonUserAvailability ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonUserAvailability UCommonUserInfo::GetPrivilegeAvailability(enum class ECommonUserPrivilege Privilege)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserInfo", "GetPrivilegeAvailability");

	Params::UCommonUserInfo_GetPrivilegeAvailability_Params Parms{};

	Parms.Privilege = Privilege;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserInfo.GetNickname
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCommonUserInfo::GetNickname()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserInfo", "GetNickname");

	Params::UCommonUserInfo_GetNickname_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserInfo.GetNetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonUserOnlineContextContext                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UCommonUserInfo::GetNetId(enum class ECommonUserOnlineContext Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserInfo", "GetNetId");

	Params::UCommonUserInfo_GetNetId_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserInfo.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCommonUserInfo::GetDebugString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserInfo", "GetDebugString");

	Params::UCommonUserInfo_GetDebugString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserInfo.GetCachedPrivilegeResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonUserPrivilege    Privilege                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonUserOnlineContextContext                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonUserPrivilegeResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonUserPrivilegeResult UCommonUserInfo::GetCachedPrivilegeResult(enum class ECommonUserPrivilege Privilege, enum class ECommonUserOnlineContext Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserInfo", "GetCachedPrivilegeResult");

	Params::UCommonUserInfo_GetCachedPrivilegeResult_Params Parms{};

	Parms.Privilege = Privilege;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUser.CommonUserSubsystem
// (None)

class UClass* UCommonUserSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUserSubsystem");

	return Clss;
}


// CommonUserSubsystem CommonUser.Default__CommonUserSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUserSubsystem* UCommonUserSubsystem::GetDefaultObj()
{
	static class UCommonUserSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUserSubsystem*>(UCommonUserSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUser.CommonUserSubsystem.TryToLoginForOnlinePlay
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUserSubsystem::TryToLoginForOnlinePlay(int32 LocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "TryToLoginForOnlinePlay");

	Params::UCommonUserSubsystem_TryToLoginForOnlinePlay_Params Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.TryToInitializeUser
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FCommonUserInitializeParams Params                                                           (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUserSubsystem::TryToInitializeUser(const struct FCommonUserInitializeParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "TryToInitializeUser");

	Params::UCommonUserSubsystem_TryToInitializeUser_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.TryToInitializeForLocalPlay
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDeviceId              PrimaryInputDevice                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanUseGuestLogin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUserSubsystem::TryToInitializeForLocalPlay(int32 LocalPlayerIndex, const struct FInputDeviceId& PrimaryInputDevice, bool bCanUseGuestLogin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "TryToInitializeForLocalPlay");

	Params::UCommonUserSubsystem_TryToInitializeForLocalPlay_Params Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;
	Parms.PrimaryInputDevice = PrimaryInputDevice;
	Parms.bCanUseGuestLogin = bCanUseGuestLogin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.ShouldWaitForStartInput
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUserSubsystem::ShouldWaitForStartInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "ShouldWaitForStartInput");

	Params::UCommonUserSubsystem_ShouldWaitForStartInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.SetMaxLocalPlayers
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMaxLocalPLayers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUserSubsystem::SetMaxLocalPlayers(int32 InMaxLocalPLayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "SetMaxLocalPlayers");

	Params::UCommonUserSubsystem_SetMaxLocalPlayers_Params Parms{};

	Parms.InMaxLocalPLayers = InMaxLocalPLayers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonUserSubsystem.SendSystemMessage
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MessageType                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        TitleText                                                        (Parm, NativeAccessSpecifierPublic)
// class FText                        BodyText                                                         (Parm, NativeAccessSpecifierPublic)

void UCommonUserSubsystem::SendSystemMessage(const struct FGameplayTag& MessageType, class FText TitleText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "SendSystemMessage");

	Params::UCommonUserSubsystem_SendSystemMessage_Params Parms{};

	Parms.MessageType = MessageType;
	Parms.TitleText = TitleText;
	Parms.BodyText = BodyText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonUserSubsystem.ResetUserState
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonUserSubsystem::ResetUserState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "ResetUserState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonUserSubsystem.ListenForLoginKeyInput
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FKey>                AnyUserKeys                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FKey>                NewUserKeys                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FCommonUserInitializeParams Params                                                           (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UCommonUserSubsystem::ListenForLoginKeyInput(const TArray<struct FKey>& AnyUserKeys, const TArray<struct FKey>& NewUserKeys, const struct FCommonUserInitializeParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "ListenForLoginKeyInput");

	Params::UCommonUserSubsystem_ListenForLoginKeyInput_Params Parms{};

	Parms.AnyUserKeys = AnyUserKeys;
	Parms.NewUserKeys = NewUserKeys;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUser.CommonUserSubsystem.HasTraitTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                TraitTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUserSubsystem::HasTraitTag(const struct FGameplayTag& TraitTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "HasTraitTag");

	Params::UCommonUserSubsystem_HasTraitTag_Params Parms{};

	Parms.TraitTag = TraitTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetUserInfoForUniqueNetId
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FUniqueNetIdRepl            NetId                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonUserInfo*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForUniqueNetId(struct FUniqueNetIdRepl& NetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetUserInfoForUniqueNetId");

	Params::UCommonUserSubsystem_GetUserInfoForUniqueNetId_Params Parms{};

	Parms.NetId = NetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetUserInfoForPlatformUserIndex
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// int32                              PlatformUserIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonUserInfo*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetUserInfoForPlatformUserIndex");

	Params::UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Params Parms{};

	Parms.PlatformUserIndex = PlatformUserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetUserInfoForPlatformUser
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FPlatformUserId             PlatformUser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonUserInfo*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForPlatformUser(const struct FPlatformUserId& PlatformUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetUserInfoForPlatformUser");

	Params::UCommonUserSubsystem_GetUserInfoForPlatformUser_Params Parms{};

	Parms.PlatformUser = PlatformUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetUserInfoForLocalPlayerIndex
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonUserInfo*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetUserInfoForLocalPlayerIndex");

	Params::UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Params Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetUserInfoForInputDevice
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FInputDeviceId              InputDevice                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonUserInfo*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForInputDevice(const struct FInputDeviceId& InputDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetUserInfoForInputDevice");

	Params::UCommonUserSubsystem_GetUserInfoForInputDevice_Params Parms{};

	Parms.InputDevice = InputDevice;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetUserInfoForControllerId
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// int32                              ControllerId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonUserInfo*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForControllerId(int32 ControllerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetUserInfoForControllerId");

	Params::UCommonUserSubsystem_GetUserInfoForControllerId_Params Parms{};

	Parms.ControllerId = ControllerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetNumLocalPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonUserSubsystem::GetNumLocalPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetNumLocalPlayers");

	Params::UCommonUserSubsystem_GetNumLocalPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetMaxLocalPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonUserSubsystem::GetMaxLocalPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetMaxLocalPlayers");

	Params::UCommonUserSubsystem_GetMaxLocalPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.GetLocalPlayerInitializationState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonUserInitializationStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonUserInitializationState UCommonUserSubsystem::GetLocalPlayerInitializationState(int32 LocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "GetLocalPlayerInitializationState");

	Params::UCommonUserSubsystem_GetLocalPlayerInitializationState_Params Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUser.CommonUserSubsystem.CancelUserInitialization
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUserSubsystem::CancelUserInitialization(int32 LocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserSubsystem", "CancelUserInitialization");

	Params::UCommonUserSubsystem_CancelUserInitialization_Params Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


