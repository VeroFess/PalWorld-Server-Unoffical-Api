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

// 0x18 (0x18 - 0x0)
// Function CommonUser.AsyncAction_CommonUserInitialize.LoginForOnlinePlay
struct UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Params
{
public:
	class UCommonUserSubsystem*                  Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalPlayerIndex;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncAction_CommonUserInitialize*     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUser.AsyncAction_CommonUserInitialize.InitializeForLocalPlay
struct UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Params
{
public:
	class UCommonUserSubsystem*                  Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalPlayerIndex;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDeviceId                        PrimaryInputDevice;                                // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseGuestLogin;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncAction_CommonUserInitialize*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUser.AsyncAction_CommonUserInitialize.HandleInitializationComplete
struct UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Params
{
public:
	class UCommonUserInfo*                       UserInfo;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Error;                                             // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class ECommonUserPrivilege              RequestedPrivilege;                                // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserOnlineContext          OnlineContext;                                     // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CommonUser.CommonSession_SearchResult.GetStringSetting
struct UCommonSession_SearchResult_GetStringSetting_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CommonUser.CommonSession_SearchResult.GetPingInMs
struct UCommonSession_SearchResult_GetPingInMs_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUser.CommonSession_SearchResult.GetNumOpenPublicConnections
struct UCommonSession_SearchResult_GetNumOpenPublicConnections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUser.CommonSession_SearchResult.GetNumOpenPrivateConnections
struct UCommonSession_SearchResult_GetNumOpenPrivateConnections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUser.CommonSession_SearchResult.GetMaxPublicConnections
struct UCommonSession_SearchResult_GetMaxPublicConnections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonSession_SearchResult.GetIntSetting
struct UCommonSession_SearchResult_GetIntSetting_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonSession_SearchResult.GetDescription
struct UCommonSession_SearchResult_GetDescription_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonSessionSubsystem.QuickPlaySession
struct UCommonSessionSubsystem_QuickPlaySession_Params
{
public:
	class APlayerController*                     JoiningOrHostingPlayer;                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonSession_HostSessionRequest*     Request;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonSessionSubsystem.JoinSession
struct UCommonSessionSubsystem_JoinSession_Params
{
public:
	class APlayerController*                     JoiningPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonSession_SearchResult*           Request;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonSessionSubsystem.HostSession
struct UCommonSessionSubsystem_HostSession_Params
{
public:
	class APlayerController*                     HostingPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonSession_HostSessionRequest*     Request;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonSessionSubsystem.FindSessions
struct UCommonSessionSubsystem_FindSessions_Params
{
public:
	class APlayerController*                     SearchingPlayer;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonSession_SearchSessionRequest*   Request;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUser.CommonSessionSubsystem.CreateOnlineSearchSessionRequest
struct UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Params
{
public:
	class UCommonSession_SearchSessionRequest*   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUser.CommonSessionSubsystem.CreateOnlineHostSessionRequest
struct UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Params
{
public:
	class UCommonSession_HostSessionRequest*     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CommonUser.CommonUserInfo.GetPrivilegeAvailability
struct UCommonUserInfo_GetPrivilegeAvailability_Params
{
public:
	enum class ECommonUserPrivilege              Privilege;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserAvailability           ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonUserInfo.GetNickname
struct UCommonUserInfo_GetNickname_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUser.CommonUserInfo.GetNetId
struct UCommonUserInfo_GetNetId_Params
{
public:
	enum class ECommonUserOnlineContext          Context;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D48[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x8(0x30)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonUserInfo.GetDebugString
struct UCommonUserInfo_GetDebugString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function CommonUser.CommonUserInfo.GetCachedPrivilegeResult
struct UCommonUserInfo_GetCachedPrivilegeResult_Params
{
public:
	enum class ECommonUserPrivilege              Privilege;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserOnlineContext          Context;                                           // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserPrivilegeResult        ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUser.CommonUserSubsystem.TryToLoginForOnlinePlay
struct UCommonUserSubsystem_TryToLoginForOnlinePlay_Params
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// Function CommonUser.CommonUserSubsystem.TryToInitializeUser
struct UCommonUserSubsystem_TryToInitializeUser_Params
{
public:
	struct FCommonUserInitializeParams           Params;                                            // 0x0(0x28)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D71[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function CommonUser.CommonUserSubsystem.TryToInitializeForLocalPlay
struct UCommonUserSubsystem_TryToInitializeForLocalPlay_Params
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDeviceId                        PrimaryInputDevice;                                // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseGuestLogin;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D77[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUser.CommonUserSubsystem.ShouldWaitForStartInput
struct UCommonUserSubsystem_ShouldWaitForStartInput_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUser.CommonUserSubsystem.SetMaxLocalPlayers
struct UCommonUserSubsystem_SetMaxLocalPlayers_Params
{
public:
	int32                                        InMaxLocalPLayers;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUser.CommonUserSubsystem.SendSystemMessage
struct UCommonUserSubsystem_SendSystemMessage_Params
{
public:
	struct FGameplayTag                          MessageType;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TitleText;                                         // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  BodyText;                                          // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CommonUser.CommonUserSubsystem.ListenForLoginKeyInput
struct UCommonUserSubsystem_ListenForLoginKeyInput_Params
{
public:
	TArray<struct FKey>                          AnyUserKeys;                                       // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          NewUserKeys;                                       // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCommonUserInitializeParams           Params;                                            // 0x20(0x28)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CommonUser.CommonUserSubsystem.HasTraitTag
struct UCommonUserSubsystem_HasTraitTag_Params
{
public:
	struct FGameplayTag                          TraitTag;                                          // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetUserInfoForUniqueNetId
struct UCommonUserSubsystem_GetUserInfoForUniqueNetId_Params
{
public:
	struct FUniqueNetIdRepl                      NetId;                                             // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonUserInfo*                       ReturnValue;                                       // 0x30(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetUserInfoForPlatformUserIndex
struct UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Params
{
public:
	int32                                        PlatformUserIndex;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D96[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUserInfo*                       ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetUserInfoForPlatformUser
struct UCommonUserSubsystem_GetUserInfoForPlatformUser_Params
{
public:
	struct FPlatformUserId                       PlatformUser;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D97[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUserInfo*                       ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetUserInfoForLocalPlayerIndex
struct UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Params
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D99[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUserInfo*                       ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetUserInfoForInputDevice
struct UCommonUserSubsystem_GetUserInfoForInputDevice_Params
{
public:
	struct FInputDeviceId                        InputDevice;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUserInfo*                       ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetUserInfoForControllerId
struct UCommonUserSubsystem_GetUserInfoForControllerId_Params
{
public:
	int32                                        ControllerId;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUserInfo*                       ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetNumLocalPlayers
struct UCommonUserSubsystem_GetNumLocalPlayers_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetMaxLocalPlayers
struct UCommonUserSubsystem_GetMaxLocalPlayers_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUser.CommonUserSubsystem.GetLocalPlayerInitializationState
struct UCommonUserSubsystem_GetLocalPlayerInitializationState_Params
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonUserInitializationState    ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUser.CommonUserSubsystem.CancelUserInitialization
struct UCommonUserSubsystem_CancelUserInitialization_Params
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


