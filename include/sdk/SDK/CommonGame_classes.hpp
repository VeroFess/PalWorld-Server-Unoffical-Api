#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA8 - 0x30)
// Class CommonGame.AsyncAction_CreateWidgetAsync
class UAsyncAction_CreateWidgetAsync : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8B[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncAction_CreateWidgetAsync* GetDefaultObj();

	class UAsyncAction_CreateWidgetAsync* CreateWidgetAsync(class UObject* WorldContextObject, TSoftClassPtr<class UUserWidget> UserWidgetSoftClass, class APlayerController* OwningPlayer, bool bSuspendInputUntilComplete);
};

// 0x78 (0xA8 - 0x30)
// Class CommonGame.AsyncAction_PushContentToLayerForPlayer
class UAsyncAction_PushContentToLayerForPlayer : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            BeforePush;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AfterPush;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D95[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncAction_PushContentToLayerForPlayer* GetDefaultObj();

	class UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(class APlayerController* OwningPlayer, TSoftClassPtr<class UCommonActivatableWidget> WidgetClass, const struct FGameplayTag& LayerName, bool bSuspendInputUntilComplete);
};

// 0x28 (0x58 - 0x30)
// Class CommonGame.AsyncAction_ShowConfirmation
class UAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnResult;                                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                          TargetLocalPlayer;                                 // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonGameDialogDescriptor*           Descriptor;                                        // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAsyncAction_ShowConfirmation* GetDefaultObj();

	class UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(class UObject* InWorldContextObject, class FText Title, class FText Message);
	class UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(class UObject* InWorldContextObject, class FText Title, class FText Message);
	class UAsyncAction_ShowConfirmation* ShowConfirmationCustom(class UObject* InWorldContextObject, class UCommonGameDialogDescriptor* Descriptor);
};

// 0x10 (0x1D0 - 0x1C0)
// Class CommonGame.CommonGameInstance
class UCommonGameInstance : public UGameInstance
{
public:
	uint8                                        Pad_DB1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonSession_SearchResult*           RequestedSession;                                  // 0x1C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonGameInstance* GetDefaultObj();

	void HandleSystemMessage(const struct FGameplayTag& MessageType, class FText Title, class FText Message);
	void HandlePrivilegeChanged(class UCommonUserInfo* UserInfo, enum class ECommonUserPrivilege Privilege, enum class ECommonUserAvailability OldAvailability, enum class ECommonUserAvailability NewAvailability);
};

// 0x50 (0x2E8 - 0x298)
// Class CommonGame.CommonLocalPlayer
class UCommonLocalPlayer : public ULocalPlayer
{
public:
	uint8                                        Pad_DB4[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonLocalPlayer* GetDefaultObj();

};

// 0x0 (0x850 - 0x850)
// Class CommonGame.CommonPlayerController
class ACommonPlayerController : public AModularPlayerController
{
public:

	static class UClass* StaticClass();
	static class ACommonPlayerController* GetDefaultObj();

};

// 0x448 (0x6F0 - 0x2A8)
// Class CommonGame.CommonPlayerInputKey
class UCommonPlayerInputKey : public UCommonUserWidget
{
public:
	class FName                                  BoundAction;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  BoundKeyFallback;                                  // 0x2B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputTypeOverride;                                 // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PresetNameOverride;                                // 0x2D4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonKeybindForcedHoldStatus    ForcedHoldKeybindStatus;                           // 0x2DC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHoldKeybind;                                    // 0x2DD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowKeybindBorder;                                // 0x2DE(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DDF[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             FrameSize;                                         // 0x2E0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowTimeCountDown;                                // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DE0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  BoundKey;                                          // 0x2F8(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                           HoldProgressBrush;                                 // 0x310(0xD0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           KeyBindTextBorder;                                 // 0x3E0(0xD0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowUnboundStatus;                                // 0x4B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DE2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        KeyBindTextFont;                                   // 0x4B8(0x60)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                        CountdownTextFont;                                 // 0x518(0x60)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMeasuredText                         CountdownText;                                     // 0x578(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMeasuredText                         KeybindText;                                       // 0x5A8(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               KeybindTextPadding;                                // 0x5D8(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             KeybindFrameMinimumSize;                           // 0x5E8(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PercentageMaterialParameterName;                   // 0x5F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ProgressPercentageMID;                             // 0x600(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DE4[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CachedKeyBrush;                                    // 0x620(0xD0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonPlayerInputKey* GetDefaultObj();

	void UpdateKeybindWidget();
	void StopHoldProgress(class FName HoldActionName, bool bCompletedSuccessfully);
	void StartHoldProgress(class FName HoldActionName, float HoldDuration);
	void SetShowProgressCountDown(bool bShow);
	void SetPresetNameOverride(class FName NewValue);
	void SetForcedHoldKeybindStatus(enum class ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus);
	void SetForcedHoldKeybind(bool InForcedHoldKeybind);
	void SetBoundKey(const struct FKey& NewBoundAction);
	void SetBoundAction(class FName NewBoundAction);
	void SetAxisScale(float NewValue);
	bool IsHoldKeybind();
	bool IsBoundKeyValid();
};

// 0x0 (0x28 - 0x28)
// Class CommonGame.CommonUIExtensions
class UCommonUIExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCommonUIExtensions* GetDefaultObj();

	class FName SuspendInputForPlayer(class APlayerController* PlayerController, class FName SuspendReason);
	void ResumeInputForPlayer(class APlayerController* PlayerController, class FName SuspendToken);
	void PushStreamedContentToLayer_ForPlayer(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSoftClassPtr<class UCommonActivatableWidget> WidgetClass);
	class UCommonActivatableWidget* PushContentToLayer_ForPlayer(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSubclassOf<class UCommonActivatableWidget> WidgetClass);
	void PopContentFromLayer(class UCommonActivatableWidget* ActivatableWidget);
	bool IsOwningPlayerUsingTouch(class UUserWidget* WidgetContextObject);
	bool IsOwningPlayerUsingGamepad(class UUserWidget* WidgetContextObject);
	enum class ECommonInputType GetOwningPlayerInputType(class UUserWidget* WidgetContextObject);
	class ULocalPlayer* GetLocalPlayerFromController(class APlayerController* PlayerController);
};

// 0x38 (0x68 - 0x30)
// Class CommonGame.GameUIManagerSubsystem
class UGameUIManagerSubsystem : public UGameInstanceSubsystem
{
public:
	class UGameUIPolicy*                         CurrentPolicy;                                     // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UGameUIPolicy>           DefaultUIPolicyClass;                              // 0x38(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameUIManagerSubsystem* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class CommonGame.GameUIPolicy
class UGameUIPolicy : public UObject
{
public:
	uint8                                        Pad_E43[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UPrimaryGameLayout>      LayoutClass;                                       // 0x30(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRootViewportLayoutInfo>       RootViewportLayouts;                               // 0x60(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameUIPolicy* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class CommonGame.CommonGameDialogDescriptor
class UCommonGameDialogDescriptor : public UObject
{
public:
	class FText                                  Header;                                            // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConfirmationDialogAction>     ButtonActions;                                     // 0x58(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonGameDialogDescriptor* GetDefaultObj();

};

// 0x0 (0x3E8 - 0x3E8)
// Class CommonGame.CommonGameDialog
class UCommonGameDialog : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass();
	static class UCommonGameDialog* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class CommonGame.CommonMessagingSubsystem
class UCommonMessagingSubsystem : public ULocalPlayerSubsystem
{
public:

	static class UClass* StaticClass();
	static class UCommonMessagingSubsystem* GetDefaultObj();

};

// 0x68 (0x310 - 0x2A8)
// Class CommonGame.PrimaryGameLayout
class UPrimaryGameLayout : public UCommonUserWidget
{
public:
	uint8                                        Pad_E5B[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, class UCommonActivatableWidgetContainerBase*> Layers;                                            // 0x2C0(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPrimaryGameLayout* GetDefaultObj();

	void RegisterLayer(const struct FGameplayTag& LayerTag, class UCommonActivatableWidgetContainerBase* LayerWidget);
};

}


