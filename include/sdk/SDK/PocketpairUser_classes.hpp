#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x90 - 0x30)
// Class PocketpairUser.HTTPRequestAsyncFunction
class UHTTPRequestAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C8[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTTPRequestAsyncFunction* GetDefaultObj();

	class UHTTPRequestAsyncFunction* HTTPRequestAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& URL, const class FString& Verb);
};

// 0x20 (0x50 - 0x30)
// Class PocketpairUser.SwitchUserUIDefaultOnlineSubsystemAsyncFunction
class USwitchUserUIDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* GetDefaultObj();

	class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* SwitchUserUIAsyncFunction(class UPocketpairUserSubsystem* Target);
};

// 0x20 (0x50 - 0x30)
// Class PocketpairUser.LoginDefaultOnlineSubsystemAsyncFunction
class ULoginDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoginDefaultOnlineSubsystemAsyncFunction* GetDefaultObj();

	class ULoginDefaultOnlineSubsystemAsyncFunction* LoginDefaultAsyncFunction(class UPocketpairUserSubsystem* Target);
};

// 0x20 (0x50 - 0x30)
// Class PocketpairUser.LoginEOSAsyncFunction
class ULoginEOSAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoginEOSAsyncFunction* GetDefaultObj();

	class ULoginEOSAsyncFunction* LoginEOSAsyncFunction(class UPocketpairUserSubsystem* Target);
};

// 0xB0 (0xE0 - 0x30)
// Class PocketpairUser.CreateSessionAsyncFunction
class UCreateSessionAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1313[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCreateSessionAsyncFunction* GetDefaultObj();

	class UCreateSessionAsyncFunction* CreateSessionAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, int32 PublicConnections, const class FString& InviteCode, const class FString& ServerName, const class FString& Desc, const class FString& ServerAddress, int32 ServerPort, bool IsPassword, const class FString& Version, const class FString& ServerType, const class FString& Region, const class FString& Namespace);
};

// 0xA0 (0xD0 - 0x30)
// Class PocketpairUser.FindSessionsAsyncFunction
class UFindSessionsAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1327[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFindSessionsAsyncFunction* GetDefaultObj();

	class UFindSessionsAsyncFunction* FindSessionsAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, const class FString& InviteCode, const class FString& ServerType, const class FString& Region, int32 LessThanTime, const class FString& WorldGUID, const class FString& Namespace);
};

// 0x150 (0x180 - 0x30)
// Class PocketpairUser.JoinSessionAsyncFunction
class UJoinSessionAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_132A[0x138];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     Controller;                                        // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UJoinSessionAsyncFunction* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class PocketpairUser.SanitizeDisplayNameAsyncFunction
class USanitizeDisplayNameAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1334[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USanitizeDisplayNameAsyncFunction* GetDefaultObj();

	class USanitizeDisplayNameAsyncFunction* SanitizeDisplayNameAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& InString);
};

// 0x48 (0x70 - 0x28)
// Class PocketpairUser.PingIP
class UPingIP : public UObject
{
public:
	uint8                                        Pad_1346[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPingComplete;                                    // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPingFailure;                                     // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPingIP* GetDefaultObj();

	void SendPing(const class FString& IpAddress);
	void PollThread();
	class UPingIP* ConstructPingObject();
};

// 0x10 (0x38 - 0x28)
// Class PocketpairUser.PocketpairUserInfo
class UPocketpairUserInfo : public UObject
{
public:
	uint8                                        Pad_134E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPocketpairUserInfo* GetDefaultObj();

	class FName GetOnlineSubsystemName();
	class FString GetNickname();
	struct FUniqueNetIdRepl GetNetId();
	class FString GetDebugString();
};

// 0x40 (0x68 - 0x28)
// Class PocketpairUser.PocketpairFriend
class UPocketpairFriend : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1357[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPocketpairFriend* GetDefaultObj();

	struct FUniqueNetIdRepl GetNetId();
};

// 0xB8 (0xE8 - 0x30)
// Class PocketpairUser.PocketpairUserSubsystem
class UPocketpairUserSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_13A4[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPocketpairUserInfo*                   LocalUserInfo;                                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13A5[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPocketpairUserSubsystem* GetDefaultObj();

	void UnlockAchievement(const class FString& ID, float Percent);
	void OnSessionInviteReceived(const class FString& InviteCode);
	class FString GetTelemetryUserId();
	class FString GetTelemetrySessionId();
	struct FSocialId GetSocialId(class APlayerController* PlayerController);
	class FString GetSaveDataUserId();
	int32 GetPlayerNo(class APlayerController* PlayerController);
	int32 GetPingResultCache(const class FString& Address);
	class UPocketpairUserInfo* GetLocalUserInfo();
	class FString GetInviteCode();
	class FName GetDefaultOnlineSubsystemName();
	void AddPingResultCache(const class FString& Address, int32 Ping);
};

// 0x38 (0x68 - 0x30)
// Class PocketpairUser.GDKActivityAsyncFunction
class UGDKActivityAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B2[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGDKActivityAsyncFunction* GetDefaultObj();

	class UGDKActivityAsyncFunction* GDKActivityAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& ConnectionString, int32 MaxPlayerNum, int32 CurrentPlayerNum);
};

// 0x18 (0x48 - 0x30)
// Class PocketpairUser.GDKInviteAsyncFunction
class UGDKInviteAsyncFunction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGDKInviteAsyncFunction* GetDefaultObj();

	class UGDKInviteAsyncFunction* GDKInviteAsyncFunction(class UPocketpairUserSubsystem* Target);
};

}


