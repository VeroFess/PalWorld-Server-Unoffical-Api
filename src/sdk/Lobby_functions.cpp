#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Lobby.LobbyBeaconClient
// (Actor)

class UClass* ALobbyBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconClient");

	return Clss;
}


// LobbyBeaconClient Lobby.Default__LobbyBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ALobbyBeaconClient* ALobbyBeaconClient::GetDefaultObj()
{
	static class ALobbyBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobbyBeaconClient*>(ALobbyBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InPartyOwnerId                                                   (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerSetPartyOwner");

	Params::ALobbyBeaconClient_ServerSetPartyOwner_Params Parms{};

	Parms.InUniqueId = InUniqueId;
	Parms.InPartyOwnerId = InPartyOwnerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerNotifyJoiningServer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      InSessionId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UrlString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerLoginPlayer");

	Params::ALobbyBeaconClient_ServerLoginPlayer_Params Parms{};

	Parms.InSessionId = InSessionId;
	Parms.InUniqueId = InUniqueId;
	Parms.UrlString = UrlString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            PlayerToKick                                                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerKickPlayer");

	Params::ALobbyBeaconClient_ServerKickPlayer_Params Parms{};

	Parms.PlayerToKick = PlayerToKick;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerDisconnectFromLobby");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                      Msg                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerCheat(const class FString& Msg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerCheat");

	Params::ALobbyBeaconClient_ServerCheat_Params Parms{};

	Parms.Msg = Msg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        KickReason                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientWasKicked(class FText& KickReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientWasKicked");

	Params::ALobbyBeaconClient_ClientWasKicked_Params Parms{};

	Parms.KickReason = KickReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FJoinabilitySettings        Settings                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientSetInviteFlags(struct FJoinabilitySettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientSetInviteFlags");

	Params::ALobbyBeaconClient_ClientSetInviteFlags_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerLeft");

	Params::ALobbyBeaconClient_ClientPlayerLeft_Params Parms{};

	Parms.InUniqueId = InUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        NewPlayerName                                                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerJoined");

	Params::ALobbyBeaconClient_ClientPlayerJoined_Params Parms{};

	Parms.NewPlayerName = NewPlayerName;
	Parms.InUniqueId = InUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientLoginComplete");

	Params::ALobbyBeaconClient_ClientLoginComplete_Params Parms{};

	Parms.InUniqueId = InUniqueId;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ALobbyBeaconClient::ClientJoinGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientJoinGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientAckJoiningServer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Lobby.LobbyBeaconHost
// (Actor)

class UClass* ALobbyBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconHost");

	return Clss;
}


// LobbyBeaconHost Lobby.Default__LobbyBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ALobbyBeaconHost* ALobbyBeaconHost::GetDefaultObj()
{
	static class ALobbyBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobbyBeaconHost*>(ALobbyBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class Lobby.LobbyBeaconPlayerState
// (Actor)

class UClass* ALobbyBeaconPlayerState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconPlayerState");

	return Clss;
}


// LobbyBeaconPlayerState Lobby.Default__LobbyBeaconPlayerState
// (Public, ClassDefaultObject, ArchetypeObject)

class ALobbyBeaconPlayerState* ALobbyBeaconPlayerState::GetDefaultObj()
{
	static class ALobbyBeaconPlayerState* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobbyBeaconPlayerState*>(ALobbyBeaconPlayerState::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconPlayerState::OnRep_UniqueId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_UniqueId");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_PartyOwner");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_InLobby");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Lobby.LobbyBeaconState
// (Actor)

class UClass* ALobbyBeaconState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconState");

	return Clss;
}


// LobbyBeaconState Lobby.Default__LobbyBeaconState
// (Public, ClassDefaultObject, ArchetypeObject)

class ALobbyBeaconState* ALobbyBeaconState::GetDefaultObj()
{
	static class ALobbyBeaconState* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobbyBeaconState*>(ALobbyBeaconState::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconState", "OnRep_WaitForPlayersTimeRemaining");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconState", "OnRep_LobbyStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


