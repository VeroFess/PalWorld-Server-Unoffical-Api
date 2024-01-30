#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x70 - 0x30)
// Class CommonUser.AsyncAction_CommonUserInitialize
class UAsyncAction_CommonUserInitialize : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnInitializationComplete;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCD[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncAction_CommonUserInitialize* GetDefaultObj();

	class UAsyncAction_CommonUserInitialize* LoginForOnlinePlay(class UCommonUserSubsystem* Target, int32 LocalPlayerIndex);
	class UAsyncAction_CommonUserInitialize* InitializeForLocalPlay(class UCommonUserSubsystem* Target, int32 LocalPlayerIndex, const struct FInputDeviceId& PrimaryInputDevice, bool bCanUseGuestLogin);
	void HandleInitializationComplete(class UCommonUserInfo* UserInfo, bool bSuccess, class FText Error, enum class ECommonUserPrivilege RequestedPrivilege, enum class ECommonUserOnlineContext OnlineContext);
};

// 0xB0 (0xD8 - 0x28)
// Class CommonUser.CommonSession_HostSessionRequest
class UCommonSession_HostSessionRequest : public UObject
{
public:
	enum class ECommonSessionOnlineMode          OnlineMode;                                        // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLobbies;                                       // 0x29(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModeNameForAdvertisement;                          // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetId                       MapID;                                             // 0x40(0x10)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 Map;                                               // 0x50(0x30)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ExtraArgs;                                         // 0x80(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MaxPlayerCount;                                    // 0xD0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonSession_HostSessionRequest* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// Class CommonUser.CommonSession_SearchResult
class UCommonSession_SearchResult : public UObject
{
public:
	uint8                                        Pad_D00[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonSession_SearchResult* GetDefaultObj();

	void GetStringSetting(class FName Key, class FString* Value, bool* bFoundValue);
	int32 GetPingInMs();
	int32 GetNumOpenPublicConnections();
	int32 GetNumOpenPrivateConnections();
	int32 GetMaxPublicConnections();
	void GetIntSetting(class FName Key, int32* Value, bool* bFoundValue);
	class FString GetDescription();
};

// 0x40 (0x68 - 0x28)
// Class CommonUser.CommonSession_SearchSessionRequest
class UCommonSession_SearchSessionRequest : public UObject
{
public:
	enum class ECommonSessionOnlineMode          OnlineMode;                                        // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLobbies;                                       // 0x29(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D05[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCommonSession_SearchResult*>   Results;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_D06[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            K2_OnSearchFinished;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonSession_SearchSessionRequest* GetDefaultObj();

};

// 0xB0 (0xE0 - 0x30)
// Class CommonUser.CommonSessionSubsystem
class UCommonSessionSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_D1B[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            K2_OnUserRequestedSessionEvent;                    // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            K2_OnJoinSessionCompleteEvent;                     // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1F[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            K2_OnCreateSessionCompleteEvent;                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D20[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonSessionSubsystem* GetDefaultObj();

	void QuickPlaySession(class APlayerController* JoiningOrHostingPlayer, class UCommonSession_HostSessionRequest* Request);
	void JoinSession(class APlayerController* JoiningPlayer, class UCommonSession_SearchResult* Request);
	void HostSession(class APlayerController* HostingPlayer, class UCommonSession_HostSessionRequest* Request);
	void FindSessions(class APlayerController* SearchingPlayer, class UCommonSession_SearchSessionRequest* Request);
	class UCommonSession_SearchSessionRequest* CreateOnlineSearchSessionRequest();
	class UCommonSession_HostSessionRequest* CreateOnlineHostSessionRequest();
	void CleanUpSessions();
};

// 0x60 (0x88 - 0x28)
// Class CommonUser.CommonUserInfo
class UCommonUserInfo : public UObject
{
public:
	struct FInputDeviceId                        PrimaryInputDevice;                                // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlatformUserId                       PlatformUser;                                      // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalPlayerIndex;                                  // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeGuest;                                       // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGuest;                                          // 0x35(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserInitializationState    InitializationState;                               // 0x36(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D62[0x51];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUserInfo* GetDefaultObj();

	enum class ECommonUserAvailability GetPrivilegeAvailability(enum class ECommonUserPrivilege Privilege);
	class FString GetNickname();
	struct FUniqueNetIdRepl GetNetId(enum class ECommonUserOnlineContext Context);
	class FString GetDebugString();
	enum class ECommonUserPrivilegeResult GetCachedPrivilegeResult(enum class ECommonUserPrivilege Privilege, enum class ECommonUserOnlineContext Context);
};

// 0x128 (0x158 - 0x30)
// Class CommonUser.CommonUserSubsystem
class UCommonUserSubsystem : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnUserInitializeComplete;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHandleSystemMessage;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUserPrivilegeChanged;                            // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBD[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class UCommonUserInfo*>          LocalUserInfos;                                    // 0xD0(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_DBF[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUserSubsystem* GetDefaultObj();

	bool TryToLoginForOnlinePlay(int32 LocalPlayerIndex);
	bool TryToInitializeUser(const struct FCommonUserInitializeParams& Params);
	bool TryToInitializeForLocalPlay(int32 LocalPlayerIndex, const struct FInputDeviceId& PrimaryInputDevice, bool bCanUseGuestLogin);
	bool ShouldWaitForStartInput();
	void SetMaxLocalPlayers(int32 InMaxLocalPLayers);
	void SendSystemMessage(const struct FGameplayTag& MessageType, class FText TitleText, class FText BodyText);
	void ResetUserState();
	void ListenForLoginKeyInput(const TArray<struct FKey>& AnyUserKeys, const TArray<struct FKey>& NewUserKeys, const struct FCommonUserInitializeParams& Params);
	bool HasTraitTag(const struct FGameplayTag& TraitTag);
	class UCommonUserInfo* GetUserInfoForUniqueNetId(struct FUniqueNetIdRepl& NetId);
	class UCommonUserInfo* GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex);
	class UCommonUserInfo* GetUserInfoForPlatformUser(const struct FPlatformUserId& PlatformUser);
	class UCommonUserInfo* GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex);
	class UCommonUserInfo* GetUserInfoForInputDevice(const struct FInputDeviceId& InputDevice);
	class UCommonUserInfo* GetUserInfoForControllerId(int32 ControllerId);
	int32 GetNumLocalPlayers();
	int32 GetMaxLocalPlayers();
	enum class ECommonUserInitializationState GetLocalPlayerInitializationState(int32 LocalPlayerIndex);
	bool CancelUserInitialization(int32 LocalPlayerIndex);
};

}


