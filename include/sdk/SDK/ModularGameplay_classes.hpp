#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.GameFrameworkComponent
class UGameFrameworkComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UGameFrameworkComponent* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.ControllerComponent
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UControllerComponent* GetDefaultObj();

};

// 0x208 (0x238 - 0x30)
// Class ModularGameplay.GameFrameworkComponentManager
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_5F3[0x208];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFrameworkComponentManager* GetDefaultObj();

	bool UnregisterClassInitStateDelegate(TSoftClassPtr<class AActor> ActorClass, FDelegateProperty_ DelegateToRemove);
	bool UnregisterActorInitStateDelegate(class AActor* Actor, FDelegateProperty_ DelegateToRemove);
	void SendExtensionEvent(class AActor* Receiver, class FName EventName, bool bOnlyInGameWorlds);
	void RemoveReceiver(class AActor* Receiver);
	bool RegisterAndCallForClassInitState(TSoftClassPtr<class AActor> ActorClass, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately);
	bool RegisterAndCallForActorInitState(class AActor* Actor, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately);
	void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);
};

// 0x0 (0x28 - 0x28)
// Class ModularGameplay.GameFrameworkInitStateInterface
class IGameFrameworkInitStateInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameFrameworkInitStateInterface* GetDefaultObj();

	bool UnregisterInitStateDelegate(FDelegateProperty_ Delegate);
	bool RegisterAndCallForInitStateChange(const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately);
	bool HasReachedInitState(const struct FGameplayTag& DesiredState);
	struct FGameplayTag GetInitState();
	class FName GetFeatureName();
};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.GameStateComponent
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UGameStateComponent* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.PawnComponent
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPawnComponent* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ModularGameplay.PlayerStateComponent
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayerStateComponent* GetDefaultObj();

};

}


