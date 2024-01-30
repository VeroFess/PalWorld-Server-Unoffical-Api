#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Party.Chatroom
// (None)

class UClass* UChatroom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chatroom");

	return Clss;
}


// Chatroom Party.Default__Chatroom
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatroom* UChatroom::GetDefaultObj()
{
	static class UChatroom* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatroom*>(UChatroom::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialManager
// (None)

class UClass* USocialManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialManager");

	return Clss;
}


// SocialManager Party.Default__SocialManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialManager* USocialManager::GetDefaultObj()
{
	static class USocialManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialManager*>(USocialManager::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialToolkit
// (None)

class UClass* USocialToolkit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialToolkit");

	return Clss;
}


// SocialToolkit Party.Default__SocialToolkit
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialToolkit* USocialToolkit::GetDefaultObj()
{
	static class USocialToolkit* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialToolkit*>(USocialToolkit::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialChatManager
// (None)

class UClass* USocialChatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatManager");

	return Clss;
}


// SocialChatManager Party.Default__SocialChatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatManager* USocialChatManager::GetDefaultObj()
{
	static class USocialChatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatManager*>(USocialChatManager::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialChatChannel
// (None)

class UClass* USocialChatChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatChannel");

	return Clss;
}


// SocialChatChannel Party.Default__SocialChatChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatChannel* USocialChatChannel::GetDefaultObj()
{
	static class USocialChatChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatChannel*>(USocialChatChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialChatRoom
// (None)

class UClass* USocialChatRoom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatRoom");

	return Clss;
}


// SocialChatRoom Party.Default__SocialChatRoom
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatRoom* USocialChatRoom::GetDefaultObj()
{
	static class USocialChatRoom* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatRoom*>(USocialChatRoom::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialGroupChannel
// (None)

class UClass* USocialGroupChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialGroupChannel");

	return Clss;
}


// SocialGroupChannel Party.Default__SocialGroupChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialGroupChannel* USocialGroupChannel::GetDefaultObj()
{
	static class USocialGroupChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialGroupChannel*>(USocialGroupChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialPartyChatRoom
// (None)

class UClass* USocialPartyChatRoom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialPartyChatRoom");

	return Clss;
}


// SocialPartyChatRoom Party.Default__SocialPartyChatRoom
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialPartyChatRoom* USocialPartyChatRoom::GetDefaultObj()
{
	static class USocialPartyChatRoom* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialPartyChatRoom*>(USocialPartyChatRoom::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialPrivateMessageChannel
// (None)

class UClass* USocialPrivateMessageChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialPrivateMessageChannel");

	return Clss;
}


// SocialPrivateMessageChannel Party.Default__SocialPrivateMessageChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialPrivateMessageChannel* USocialPrivateMessageChannel::GetDefaultObj()
{
	static class USocialPrivateMessageChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialPrivateMessageChannel*>(USocialPrivateMessageChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialReadOnlyChatChannel
// (None)

class UClass* USocialReadOnlyChatChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialReadOnlyChatChannel");

	return Clss;
}


// SocialReadOnlyChatChannel Party.Default__SocialReadOnlyChatChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialReadOnlyChatChannel* USocialReadOnlyChatChannel::GetDefaultObj()
{
	static class USocialReadOnlyChatChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialReadOnlyChatChannel*>(USocialReadOnlyChatChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialParty
// (None)

class UClass* USocialParty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialParty");

	return Clss;
}


// SocialParty Party.Default__SocialParty
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialParty* USocialParty::GetDefaultObj()
{
	static class USocialParty* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialParty*>(USocialParty::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.PartyMember
// (None)

class UClass* UPartyMember::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyMember");

	return Clss;
}


// PartyMember Party.Default__PartyMember
// (Public, ClassDefaultObject, ArchetypeObject)

class UPartyMember* UPartyMember::GetDefaultObj()
{
	static class UPartyMember* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyMember*>(UPartyMember::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialDebugTools
// (None)

class UClass* USocialDebugTools::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialDebugTools");

	return Clss;
}


// SocialDebugTools Party.Default__SocialDebugTools
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialDebugTools* USocialDebugTools::GetDefaultObj()
{
	static class USocialDebugTools* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialDebugTools*>(USocialDebugTools::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialSettings
// (None)

class UClass* USocialSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialSettings");

	return Clss;
}


// SocialSettings Party.Default__SocialSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialSettings* USocialSettings::GetDefaultObj()
{
	static class USocialSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialSettings*>(USocialSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.SocialUser
// (None)

class UClass* USocialUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUser");

	return Clss;
}


// SocialUser Party.Default__SocialUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUser* USocialUser::GetDefaultObj()
{
	static class USocialUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUser*>(USocialUser::StaticClass()->DefaultObject);

	return Default;
}

}


