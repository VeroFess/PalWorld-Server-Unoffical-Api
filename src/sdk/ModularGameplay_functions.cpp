#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModularGameplay.GameFrameworkComponent
// (None)

class UClass* UGameFrameworkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFrameworkComponent");

	return Clss;
}


// GameFrameworkComponent ModularGameplay.Default__GameFrameworkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFrameworkComponent* UGameFrameworkComponent::GetDefaultObj()
{
	static class UGameFrameworkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFrameworkComponent*>(UGameFrameworkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.ControllerComponent
// (None)

class UClass* UControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllerComponent");

	return Clss;
}


// ControllerComponent ModularGameplay.Default__ControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControllerComponent* UControllerComponent::GetDefaultObj()
{
	static class UControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllerComponent*>(UControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.GameFrameworkComponentManager
// (None)

class UClass* UGameFrameworkComponentManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFrameworkComponentManager");

	return Clss;
}


// GameFrameworkComponentManager ModularGameplay.Default__GameFrameworkComponentManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFrameworkComponentManager* UGameFrameworkComponentManager::GetDefaultObj()
{
	static class UGameFrameworkComponentManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFrameworkComponentManager*>(UGameFrameworkComponentManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class AActor>        ActorClass                                                       (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DelegateToRemove                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::UnregisterClassInitStateDelegate(TSoftClassPtr<class AActor> ActorClass, FDelegateProperty_ DelegateToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "UnregisterClassInitStateDelegate");

	Params::UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.DelegateToRemove = DelegateToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DelegateToRemove                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::UnregisterActorInitStateDelegate(class AActor* Actor, FDelegateProperty_ DelegateToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "UnregisterActorInitStateDelegate");

	Params::UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Params Parms{};

	Parms.Actor = Actor;
	Parms.DelegateToRemove = DelegateToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Receiver                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyInGameWorlds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::SendExtensionEvent(class AActor* Receiver, class FName EventName, bool bOnlyInGameWorlds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "SendExtensionEvent");

	Params::UGameFrameworkComponentManager_SendExtensionEvent_Params Parms{};

	Parms.Receiver = Receiver;
	Parms.EventName = EventName;
	Parms.bOnlyInGameWorlds = bOnlyInGameWorlds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Receiver                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::RemoveReceiver(class AActor* Receiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "RemoveReceiver");

	Params::UGameFrameworkComponentManager_RemoveReceiver_Params Parms{};

	Parms.Receiver = Receiver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class AActor>        ActorClass                                                       (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FeatureName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                RequiredState                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::RegisterAndCallForClassInitState(TSoftClassPtr<class AActor> ActorClass, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "RegisterAndCallForClassInitState");

	Params::UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.FeatureName = FeatureName;
	Parms.RequiredState = RequiredState;
	Parms.Delegate = Delegate;
	Parms.bCallImmediately = bCallImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FeatureName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                RequiredState                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::RegisterAndCallForActorInitState(class AActor* Actor, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "RegisterAndCallForActorInitState");

	Params::UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Params Parms{};

	Parms.Actor = Actor;
	Parms.FeatureName = FeatureName;
	Parms.RequiredState = RequiredState;
	Parms.Delegate = Delegate;
	Parms.bCallImmediately = bCallImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Receiver                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddOnlyInGameWorlds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "AddReceiver");

	Params::UGameFrameworkComponentManager_AddReceiver_Params Parms{};

	Parms.Receiver = Receiver;
	Parms.bAddOnlyInGameWorlds = bAddOnlyInGameWorlds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModularGameplay.GameFrameworkInitStateInterface
// (None)

class UClass* IGameFrameworkInitStateInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFrameworkInitStateInterface");

	return Clss;
}


// GameFrameworkInitStateInterface ModularGameplay.Default__GameFrameworkInitStateInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameFrameworkInitStateInterface* IGameFrameworkInitStateInterface::GetDefaultObj()
{
	static class IGameFrameworkInitStateInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameFrameworkInitStateInterface*>(IGameFrameworkInitStateInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate
// (Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGameFrameworkInitStateInterface::UnregisterInitStateDelegate(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkInitStateInterface", "UnregisterInitStateDelegate");

	Params::IGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                RequiredState                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGameFrameworkInitStateInterface::RegisterAndCallForInitStateChange(const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkInitStateInterface", "RegisterAndCallForInitStateChange");

	Params::IGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Params Parms{};

	Parms.RequiredState = RequiredState;
	Parms.Delegate = Delegate;
	Parms.bCallImmediately = bCallImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                DesiredState                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGameFrameworkInitStateInterface::HasReachedInitState(const struct FGameplayTag& DesiredState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkInitStateInterface", "HasReachedInitState");

	Params::IGameFrameworkInitStateInterface_HasReachedInitState_Params Parms{};

	Parms.DesiredState = DesiredState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.GetInitState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag IGameFrameworkInitStateInterface::GetInitState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkInitStateInterface", "GetInitState");

	Params::IGameFrameworkInitStateInterface_GetInitState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName IGameFrameworkInitStateInterface::GetFeatureName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkInitStateInterface", "GetFeatureName");

	Params::IGameFrameworkInitStateInterface_GetFeatureName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModularGameplay.GameStateComponent
// (None)

class UClass* UGameStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameStateComponent");

	return Clss;
}


// GameStateComponent ModularGameplay.Default__GameStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameStateComponent* UGameStateComponent::GetDefaultObj()
{
	static class UGameStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameStateComponent*>(UGameStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.PawnComponent
// (None)

class UClass* UPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnComponent");

	return Clss;
}


// PawnComponent ModularGameplay.Default__PawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnComponent* UPawnComponent::GetDefaultObj()
{
	static class UPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnComponent*>(UPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.PlayerStateComponent
// (None)

class UClass* UPlayerStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerStateComponent");

	return Clss;
}


// PlayerStateComponent ModularGameplay.Default__PlayerStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerStateComponent* UPlayerStateComponent::GetDefaultObj()
{
	static class UPlayerStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerStateComponent*>(UPlayerStateComponent::StaticClass()->DefaultObject);

	return Default;
}

}


