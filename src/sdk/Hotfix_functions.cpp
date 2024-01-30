#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Hotfix.OnlineHotfixManager
// (None)

class UClass* UOnlineHotfixManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineHotfixManager");

	return Clss;
}


// OnlineHotfixManager Hotfix.Default__OnlineHotfixManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineHotfixManager* UOnlineHotfixManager::GetDefaultObj()
{
	static class UOnlineHotfixManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineHotfixManager*>(UOnlineHotfixManager::StaticClass()->DefaultObject);

	return Default;
}


// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (Native, Public, BlueprintCallable)
// Parameters:

void UOnlineHotfixManager::StartHotfixProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineHotfixManager", "StartHotfixProcess");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Hotfix.UpdateManager
// (None)

class UClass* UUpdateManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateManager");

	return Clss;
}


// UpdateManager Hotfix.Default__UpdateManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UUpdateManager* UUpdateManager::GetDefaultObj()
{
	static class UUpdateManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateManager*>(UUpdateManager::StaticClass()->DefaultObject);

	return Default;
}

}


