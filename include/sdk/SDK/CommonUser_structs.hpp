#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonUserAvailability : uint8
{
	Unknown                        = 0,
	NowAvailable                   = 1,
	PossiblyAvailable              = 2,
	CurrentlyUnavailable           = 3,
	AlwaysUnavailable              = 4,
	Invalid                        = 5,
	ECommonUserAvailability_MAX    = 6,
};

enum class ECommonUserPrivilege : uint8
{
	CanPlay                        = 0,
	CanPlayOnline                  = 1,
	CanCommunicateViaTextOnline    = 2,
	CanCommunicateViaVoiceOnline   = 3,
	CanUseUserGeneratedContent     = 4,
	CanUseCrossPlay                = 5,
	Invalid_Count                  = 6,
	ECommonUserPrivilege_MAX       = 7,
};

enum class ECommonUserOnlineContext : uint8
{
	Game                           = 0,
	Default                        = 1,
	Service                        = 2,
	ServiceOrDefault               = 3,
	Platform                       = 4,
	PlatformOrDefault              = 5,
	Invalid                        = 6,
	ECommonUserOnlineContext_MAX   = 7,
};

enum class ECommonUserInitializationState : uint8
{
	Unknown                        = 0,
	DoingInitialLogin              = 1,
	DoingNetworkLogin              = 2,
	FailedtoLogin                  = 3,
	LoggedInOnline                 = 4,
	LoggedInLocalOnly              = 5,
	Invalid                        = 6,
	ECommonUserInitializationState_MAX = 7,
};

enum class ECommonUserPrivilegeResult : uint8
{
	Unknown                        = 0,
	Available                      = 1,
	UserNotLoggedIn                = 2,
	LicenseInvalid                 = 3,
	VersionOutdated                = 4,
	NetworkConnectionUnavailable   = 5,
	AgeRestricted                  = 6,
	AccountTypeRestricted          = 7,
	AccountUseRestricted           = 8,
	PlatformFailure                = 9,
	ECommonUserPrivilegeResult_MAX = 10,
};

enum class ECommonSessionOnlineMode : uint8
{
	Offline                        = 0,
	LAN                            = 1,
	Online                         = 2,
	ECommonSessionOnlineMode_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct CommonUser.OnlineResultInformation
struct FOnlineResultInformation
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorId;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ErrorText;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CommonUser.CommonUserInitializeParams
struct FCommonUserInitializeParams
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerId;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDeviceId                        PrimaryInputDevice;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlatformUserId                       PlatformUser;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserPrivilege              RequestedPrivilege;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserOnlineContext          OnlineContext;                                     // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCreateNewLocalPlayer;                          // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseGuestLogin;                                 // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressLoginErrors;                              // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnUserInitializeComplete;                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


