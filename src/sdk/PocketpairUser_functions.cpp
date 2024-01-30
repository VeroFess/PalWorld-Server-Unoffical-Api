#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PocketpairUser.HTTPRequestAsyncFunction
// (None)

class UClass* UHTTPRequestAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HTTPRequestAsyncFunction");

	return Clss;
}


// HTTPRequestAsyncFunction PocketpairUser.Default__HTTPRequestAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UHTTPRequestAsyncFunction* UHTTPRequestAsyncFunction::GetDefaultObj()
{
	static class UHTTPRequestAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UHTTPRequestAsyncFunction*>(UHTTPRequestAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.HTTPRequestAsyncFunction.HTTPRequestAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Verb                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHTTPRequestAsyncFunction*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHTTPRequestAsyncFunction* UHTTPRequestAsyncFunction::HTTPRequestAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& URL, const class FString& Verb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HTTPRequestAsyncFunction", "HTTPRequestAsyncFunction");

	Params::UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Params Parms{};

	Parms.Target = Target;
	Parms.URL = URL;
	Parms.Verb = Verb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.SwitchUserUIDefaultOnlineSubsystemAsyncFunction
// (None)

class UClass* USwitchUserUIDefaultOnlineSubsystemAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitchUserUIDefaultOnlineSubsystemAsyncFunction");

	return Clss;
}


// SwitchUserUIDefaultOnlineSubsystemAsyncFunction PocketpairUser.Default__SwitchUserUIDefaultOnlineSubsystemAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* USwitchUserUIDefaultOnlineSubsystemAsyncFunction::GetDefaultObj()
{
	static class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<USwitchUserUIDefaultOnlineSubsystemAsyncFunction*>(USwitchUserUIDefaultOnlineSubsystemAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.SwitchUserUIDefaultOnlineSubsystemAsyncFunction.SwitchUserUIAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USwitchUserUIDefaultOnlineSubsystemAsyncFunction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* USwitchUserUIDefaultOnlineSubsystemAsyncFunction::SwitchUserUIAsyncFunction(class UPocketpairUserSubsystem* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchUserUIDefaultOnlineSubsystemAsyncFunction", "SwitchUserUIAsyncFunction");

	Params::USwitchUserUIDefaultOnlineSubsystemAsyncFunction_SwitchUserUIAsyncFunction_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.LoginDefaultOnlineSubsystemAsyncFunction
// (None)

class UClass* ULoginDefaultOnlineSubsystemAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginDefaultOnlineSubsystemAsyncFunction");

	return Clss;
}


// LoginDefaultOnlineSubsystemAsyncFunction PocketpairUser.Default__LoginDefaultOnlineSubsystemAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoginDefaultOnlineSubsystemAsyncFunction* ULoginDefaultOnlineSubsystemAsyncFunction::GetDefaultObj()
{
	static class ULoginDefaultOnlineSubsystemAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginDefaultOnlineSubsystemAsyncFunction*>(ULoginDefaultOnlineSubsystemAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.LoginDefaultOnlineSubsystemAsyncFunction.LoginDefaultAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoginDefaultOnlineSubsystemAsyncFunction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoginDefaultOnlineSubsystemAsyncFunction* ULoginDefaultOnlineSubsystemAsyncFunction::LoginDefaultAsyncFunction(class UPocketpairUserSubsystem* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginDefaultOnlineSubsystemAsyncFunction", "LoginDefaultAsyncFunction");

	Params::ULoginDefaultOnlineSubsystemAsyncFunction_LoginDefaultAsyncFunction_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.LoginEOSAsyncFunction
// (None)

class UClass* ULoginEOSAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginEOSAsyncFunction");

	return Clss;
}


// LoginEOSAsyncFunction PocketpairUser.Default__LoginEOSAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoginEOSAsyncFunction* ULoginEOSAsyncFunction::GetDefaultObj()
{
	static class ULoginEOSAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginEOSAsyncFunction*>(ULoginEOSAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.LoginEOSAsyncFunction.LoginEOSAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoginEOSAsyncFunction*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoginEOSAsyncFunction* ULoginEOSAsyncFunction::LoginEOSAsyncFunction(class UPocketpairUserSubsystem* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginEOSAsyncFunction", "LoginEOSAsyncFunction");

	Params::ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.CreateSessionAsyncFunction
// (None)

class UClass* UCreateSessionAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreateSessionAsyncFunction");

	return Clss;
}


// CreateSessionAsyncFunction PocketpairUser.Default__CreateSessionAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreateSessionAsyncFunction* UCreateSessionAsyncFunction::GetDefaultObj()
{
	static class UCreateSessionAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreateSessionAsyncFunction*>(UCreateSessionAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.CreateSessionAsyncFunction.CreateSessionAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsDedicatedServer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PublicConnections                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InviteCode                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Desc                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerAddress                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ServerPort                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsPassword                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Version                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerType                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Region                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Namespace                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionAsyncFunction* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCreateSessionAsyncFunction* UCreateSessionAsyncFunction::CreateSessionAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, int32 PublicConnections, const class FString& InviteCode, const class FString& ServerName, const class FString& Desc, const class FString& ServerAddress, int32 ServerPort, bool IsPassword, const class FString& Version, const class FString& ServerType, const class FString& Region, const class FString& Namespace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateSessionAsyncFunction", "CreateSessionAsyncFunction");

	Params::UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Params Parms{};

	Parms.Target = Target;
	Parms.IsDedicatedServer = IsDedicatedServer;
	Parms.PublicConnections = PublicConnections;
	Parms.InviteCode = InviteCode;
	Parms.ServerName = ServerName;
	Parms.Desc = Desc;
	Parms.ServerAddress = ServerAddress;
	Parms.ServerPort = ServerPort;
	Parms.IsPassword = IsPassword;
	Parms.Version = Version;
	Parms.ServerType = ServerType;
	Parms.Region = Region;
	Parms.Namespace = Namespace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.FindSessionsAsyncFunction
// (None)

class UClass* UFindSessionsAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FindSessionsAsyncFunction");

	return Clss;
}


// FindSessionsAsyncFunction PocketpairUser.Default__FindSessionsAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UFindSessionsAsyncFunction* UFindSessionsAsyncFunction::GetDefaultObj()
{
	static class UFindSessionsAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UFindSessionsAsyncFunction*>(UFindSessionsAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.FindSessionsAsyncFunction.FindSessionsAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsDedicatedServer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InviteCode                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerType                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Region                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LessThanTime                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WorldGUID                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Namespace                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsAsyncFunction*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFindSessionsAsyncFunction* UFindSessionsAsyncFunction::FindSessionsAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, const class FString& InviteCode, const class FString& ServerType, const class FString& Region, int32 LessThanTime, const class FString& WorldGUID, const class FString& Namespace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsAsyncFunction", "FindSessionsAsyncFunction");

	Params::UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Params Parms{};

	Parms.Target = Target;
	Parms.IsDedicatedServer = IsDedicatedServer;
	Parms.InviteCode = InviteCode;
	Parms.ServerType = ServerType;
	Parms.Region = Region;
	Parms.LessThanTime = LessThanTime;
	Parms.WorldGUID = WorldGUID;
	Parms.Namespace = Namespace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.JoinSessionAsyncFunction
// (None)

class UClass* UJoinSessionAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinSessionAsyncFunction");

	return Clss;
}


// JoinSessionAsyncFunction PocketpairUser.Default__JoinSessionAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UJoinSessionAsyncFunction* UJoinSessionAsyncFunction::GetDefaultObj()
{
	static class UJoinSessionAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinSessionAsyncFunction*>(UJoinSessionAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class PocketpairUser.SanitizeDisplayNameAsyncFunction
// (None)

class UClass* USanitizeDisplayNameAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SanitizeDisplayNameAsyncFunction");

	return Clss;
}


// SanitizeDisplayNameAsyncFunction PocketpairUser.Default__SanitizeDisplayNameAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class USanitizeDisplayNameAsyncFunction* USanitizeDisplayNameAsyncFunction::GetDefaultObj()
{
	static class USanitizeDisplayNameAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<USanitizeDisplayNameAsyncFunction*>(USanitizeDisplayNameAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.SanitizeDisplayNameAsyncFunction.SanitizeDisplayNameAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USanitizeDisplayNameAsyncFunction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USanitizeDisplayNameAsyncFunction* USanitizeDisplayNameAsyncFunction::SanitizeDisplayNameAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SanitizeDisplayNameAsyncFunction", "SanitizeDisplayNameAsyncFunction");

	Params::USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Params Parms{};

	Parms.Target = Target;
	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.PingIP
// (None)

class UClass* UPingIP::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PingIP");

	return Clss;
}


// PingIP PocketpairUser.Default__PingIP
// (Public, ClassDefaultObject, ArchetypeObject)

class UPingIP* UPingIP::GetDefaultObj()
{
	static class UPingIP* Default = nullptr;

	if (!Default)
		Default = static_cast<UPingIP*>(UPingIP::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.PingIP.SendPing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IpAddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPingIP::SendPing(const class FString& IpAddress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingIP", "SendPing");

	Params::UPingIP_SendPing_Params Parms{};

	Parms.IpAddress = IpAddress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PocketpairUser.PingIP.PollThread
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPingIP::PollThread()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingIP", "PollThread");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PocketpairUser.PingIP.ConstructPingObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPingIP*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPingIP* UPingIP::ConstructPingObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingIP", "ConstructPingObject");

	Params::UPingIP_ConstructPingObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.PocketpairUserInfo
// (None)

class UClass* UPocketpairUserInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PocketpairUserInfo");

	return Clss;
}


// PocketpairUserInfo PocketpairUser.Default__PocketpairUserInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UPocketpairUserInfo* UPocketpairUserInfo::GetDefaultObj()
{
	static class UPocketpairUserInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UPocketpairUserInfo*>(UPocketpairUserInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.PocketpairUserInfo.GetOnlineSubsystemName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UPocketpairUserInfo::GetOnlineSubsystemName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserInfo", "GetOnlineSubsystemName");

	Params::UPocketpairUserInfo_GetOnlineSubsystemName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserInfo.GetNickname
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPocketpairUserInfo::GetNickname()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserInfo", "GetNickname");

	Params::UPocketpairUserInfo_GetNickname_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserInfo.GetNetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UPocketpairUserInfo::GetNetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserInfo", "GetNetId");

	Params::UPocketpairUserInfo_GetNetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserInfo.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPocketpairUserInfo::GetDebugString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserInfo", "GetDebugString");

	Params::UPocketpairUserInfo_GetDebugString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.PocketpairFriend
// (None)

class UClass* UPocketpairFriend::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PocketpairFriend");

	return Clss;
}


// PocketpairFriend PocketpairUser.Default__PocketpairFriend
// (Public, ClassDefaultObject, ArchetypeObject)

class UPocketpairFriend* UPocketpairFriend::GetDefaultObj()
{
	static class UPocketpairFriend* Default = nullptr;

	if (!Default)
		Default = static_cast<UPocketpairFriend*>(UPocketpairFriend::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.PocketpairFriend.GetNetId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UPocketpairFriend::GetNetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairFriend", "GetNetId");

	Params::UPocketpairFriend_GetNetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.PocketpairUserSubsystem
// (None)

class UClass* UPocketpairUserSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PocketpairUserSubsystem");

	return Clss;
}


// PocketpairUserSubsystem PocketpairUser.Default__PocketpairUserSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UPocketpairUserSubsystem* UPocketpairUserSubsystem::GetDefaultObj()
{
	static class UPocketpairUserSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UPocketpairUserSubsystem*>(UPocketpairUserSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.PocketpairUserSubsystem.UnlockAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Percent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPocketpairUserSubsystem::UnlockAchievement(const class FString& ID, float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "UnlockAchievement");

	Params::UPocketpairUserSubsystem_UnlockAchievement_Params Parms{};

	Parms.ID = ID;
	Parms.Percent = Percent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PocketpairUser.PocketpairUserSubsystem.OnSessionInviteReceived
// (Final, Native, Public)
// Parameters:
// class FString                      InviteCode                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPocketpairUserSubsystem::OnSessionInviteReceived(const class FString& InviteCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "OnSessionInviteReceived");

	Params::UPocketpairUserSubsystem_OnSessionInviteReceived_Params Parms{};

	Parms.InviteCode = InviteCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetTelemetryUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPocketpairUserSubsystem::GetTelemetryUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetTelemetryUserId");

	Params::UPocketpairUserSubsystem_GetTelemetryUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetTelemetrySessionId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPocketpairUserSubsystem::GetTelemetrySessionId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetTelemetrySessionId");

	Params::UPocketpairUserSubsystem_GetTelemetrySessionId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetSocialId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSocialId                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSocialId UPocketpairUserSubsystem::GetSocialId(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetSocialId");

	Params::UPocketpairUserSubsystem_GetSocialId_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetSaveDataUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPocketpairUserSubsystem::GetSaveDataUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetSaveDataUserId");

	Params::UPocketpairUserSubsystem_GetSaveDataUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetPlayerNo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPocketpairUserSubsystem::GetPlayerNo(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetPlayerNo");

	Params::UPocketpairUserSubsystem_GetPlayerNo_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetPingResultCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Address                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPocketpairUserSubsystem::GetPingResultCache(const class FString& Address)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetPingResultCache");

	Params::UPocketpairUserSubsystem_GetPingResultCache_Params Parms{};

	Parms.Address = Address;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetLocalUserInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPocketpairUserInfo*         ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPocketpairUserInfo* UPocketpairUserSubsystem::GetLocalUserInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetLocalUserInfo");

	Params::UPocketpairUserSubsystem_GetLocalUserInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetInviteCode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPocketpairUserSubsystem::GetInviteCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetInviteCode");

	Params::UPocketpairUserSubsystem_GetInviteCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.GetDefaultOnlineSubsystemName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UPocketpairUserSubsystem::GetDefaultOnlineSubsystemName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "GetDefaultOnlineSubsystemName");

	Params::UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PocketpairUser.PocketpairUserSubsystem.AddPingResultCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Address                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Ping                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPocketpairUserSubsystem::AddPingResultCache(const class FString& Address, int32 Ping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PocketpairUserSubsystem", "AddPingResultCache");

	Params::UPocketpairUserSubsystem_AddPingResultCache_Params Parms{};

	Parms.Address = Address;
	Parms.Ping = Ping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PocketpairUser.GDKActivityAsyncFunction
// (None)

class UClass* UGDKActivityAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GDKActivityAsyncFunction");

	return Clss;
}


// GDKActivityAsyncFunction PocketpairUser.Default__GDKActivityAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UGDKActivityAsyncFunction* UGDKActivityAsyncFunction::GetDefaultObj()
{
	static class UGDKActivityAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGDKActivityAsyncFunction*>(UGDKActivityAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.GDKActivityAsyncFunction.GDKActivityAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ConnectionString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxPlayerNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentPlayerNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGDKActivityAsyncFunction*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGDKActivityAsyncFunction* UGDKActivityAsyncFunction::GDKActivityAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& ConnectionString, int32 MaxPlayerNum, int32 CurrentPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GDKActivityAsyncFunction", "GDKActivityAsyncFunction");

	Params::UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Params Parms{};

	Parms.Target = Target;
	Parms.ConnectionString = ConnectionString;
	Parms.MaxPlayerNum = MaxPlayerNum;
	Parms.CurrentPlayerNum = CurrentPlayerNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PocketpairUser.GDKInviteAsyncFunction
// (None)

class UClass* UGDKInviteAsyncFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GDKInviteAsyncFunction");

	return Clss;
}


// GDKInviteAsyncFunction PocketpairUser.Default__GDKInviteAsyncFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UGDKInviteAsyncFunction* UGDKInviteAsyncFunction::GetDefaultObj()
{
	static class UGDKInviteAsyncFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGDKInviteAsyncFunction*>(UGDKInviteAsyncFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function PocketpairUser.GDKInviteAsyncFunction.GDKInviteAsyncFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPocketpairUserSubsystem*    Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGDKInviteAsyncFunction*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGDKInviteAsyncFunction* UGDKInviteAsyncFunction::GDKInviteAsyncFunction(class UPocketpairUserSubsystem* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GDKInviteAsyncFunction", "GDKInviteAsyncFunction");

	Params::UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


