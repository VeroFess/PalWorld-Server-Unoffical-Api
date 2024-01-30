#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonUI.CommonBoundActionButtonInterface
// (None)

class UClass* ICommonBoundActionButtonInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonBoundActionButtonInterface");

	return Clss;
}


// CommonBoundActionButtonInterface CommonUI.Default__CommonBoundActionButtonInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICommonBoundActionButtonInterface* ICommonBoundActionButtonInterface::GetDefaultObj()
{
	static class ICommonBoundActionButtonInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICommonBoundActionButtonInterface*>(ICommonBoundActionButtonInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeBase
// (None)

class UClass* UCommonStyleSheetTypeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeBase");

	return Clss;
}


// CommonStyleSheetTypeBase CommonUI.Default__CommonStyleSheetTypeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeBase* UCommonStyleSheetTypeBase::GetDefaultObj()
{
	static class UCommonStyleSheetTypeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeBase*>(UCommonStyleSheetTypeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeColor
// (None)

class UClass* UCommonStyleSheetTypeColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeColor");

	return Clss;
}


// CommonStyleSheetTypeColor CommonUI.Default__CommonStyleSheetTypeColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeColor* UCommonStyleSheetTypeColor::GetDefaultObj()
{
	static class UCommonStyleSheetTypeColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeColor*>(UCommonStyleSheetTypeColor::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeOpacity
// (None)

class UClass* UCommonStyleSheetTypeOpacity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeOpacity");

	return Clss;
}


// CommonStyleSheetTypeOpacity CommonUI.Default__CommonStyleSheetTypeOpacity
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeOpacity* UCommonStyleSheetTypeOpacity::GetDefaultObj()
{
	static class UCommonStyleSheetTypeOpacity* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeOpacity*>(UCommonStyleSheetTypeOpacity::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeLineHeightPercentage
// (None)

class UClass* UCommonStyleSheetTypeLineHeightPercentage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeLineHeightPercentage");

	return Clss;
}


// CommonStyleSheetTypeLineHeightPercentage CommonUI.Default__CommonStyleSheetTypeLineHeightPercentage
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeLineHeightPercentage* UCommonStyleSheetTypeLineHeightPercentage::GetDefaultObj()
{
	static class UCommonStyleSheetTypeLineHeightPercentage* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeLineHeightPercentage*>(UCommonStyleSheetTypeLineHeightPercentage::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeFontTypeface
// (None)

class UClass* UCommonStyleSheetTypeFontTypeface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeFontTypeface");

	return Clss;
}


// CommonStyleSheetTypeFontTypeface CommonUI.Default__CommonStyleSheetTypeFontTypeface
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeFontTypeface* UCommonStyleSheetTypeFontTypeface::GetDefaultObj()
{
	static class UCommonStyleSheetTypeFontTypeface* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeFontTypeface*>(UCommonStyleSheetTypeFontTypeface::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeFontSize
// (None)

class UClass* UCommonStyleSheetTypeFontSize::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeFontSize");

	return Clss;
}


// CommonStyleSheetTypeFontSize CommonUI.Default__CommonStyleSheetTypeFontSize
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeFontSize* UCommonStyleSheetTypeFontSize::GetDefaultObj()
{
	static class UCommonStyleSheetTypeFontSize* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeFontSize*>(UCommonStyleSheetTypeFontSize::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeFontLetterSpacing
// (None)

class UClass* UCommonStyleSheetTypeFontLetterSpacing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeFontLetterSpacing");

	return Clss;
}


// CommonStyleSheetTypeFontLetterSpacing CommonUI.Default__CommonStyleSheetTypeFontLetterSpacing
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeFontLetterSpacing* UCommonStyleSheetTypeFontLetterSpacing::GetDefaultObj()
{
	static class UCommonStyleSheetTypeFontLetterSpacing* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeFontLetterSpacing*>(UCommonStyleSheetTypeFontLetterSpacing::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeMarginLeft
// (None)

class UClass* UCommonStyleSheetTypeMarginLeft::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginLeft");

	return Clss;
}


// CommonStyleSheetTypeMarginLeft CommonUI.Default__CommonStyleSheetTypeMarginLeft
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeMarginLeft* UCommonStyleSheetTypeMarginLeft::GetDefaultObj()
{
	static class UCommonStyleSheetTypeMarginLeft* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeMarginLeft*>(UCommonStyleSheetTypeMarginLeft::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeMarginRight
// (None)

class UClass* UCommonStyleSheetTypeMarginRight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginRight");

	return Clss;
}


// CommonStyleSheetTypeMarginRight CommonUI.Default__CommonStyleSheetTypeMarginRight
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeMarginRight* UCommonStyleSheetTypeMarginRight::GetDefaultObj()
{
	static class UCommonStyleSheetTypeMarginRight* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeMarginRight*>(UCommonStyleSheetTypeMarginRight::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeMarginTop
// (None)

class UClass* UCommonStyleSheetTypeMarginTop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginTop");

	return Clss;
}


// CommonStyleSheetTypeMarginTop CommonUI.Default__CommonStyleSheetTypeMarginTop
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeMarginTop* UCommonStyleSheetTypeMarginTop::GetDefaultObj()
{
	static class UCommonStyleSheetTypeMarginTop* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeMarginTop*>(UCommonStyleSheetTypeMarginTop::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheetTypeMarginBottom
// (None)

class UClass* UCommonStyleSheetTypeMarginBottom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginBottom");

	return Clss;
}


// CommonStyleSheetTypeMarginBottom CommonUI.Default__CommonStyleSheetTypeMarginBottom
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheetTypeMarginBottom* UCommonStyleSheetTypeMarginBottom::GetDefaultObj()
{
	static class UCommonStyleSheetTypeMarginBottom* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheetTypeMarginBottom*>(UCommonStyleSheetTypeMarginBottom::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.AnalogSlider
// (None)

class UClass* UAnalogSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnalogSlider");

	return Clss;
}


// AnalogSlider CommonUI.Default__AnalogSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnalogSlider* UAnalogSlider::GetDefaultObj()
{
	static class UAnalogSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnalogSlider*>(UAnalogSlider::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonActionHandlerInterface
// (None)

class UClass* ICommonActionHandlerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActionHandlerInterface");

	return Clss;
}


// CommonActionHandlerInterface CommonUI.Default__CommonActionHandlerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICommonActionHandlerInterface* ICommonActionHandlerInterface::GetDefaultObj()
{
	static class ICommonActionHandlerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICommonActionHandlerInterface*>(ICommonActionHandlerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonActionWidget
// (None)

class UClass* UCommonActionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActionWidget");

	return Clss;
}


// CommonActionWidget CommonUI.Default__CommonActionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActionWidget* UCommonActionWidget::GetDefaultObj()
{
	static class UCommonActionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActionWidget*>(UCommonActionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonActionWidget.SetInputActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableRowHandle> NewInputActions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetInputActions(const TArray<struct FDataTableRowHandle>& NewInputActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "SetInputActions");

	Params::UCommonActionWidget_SetInputActions_Params Parms{};

	Parms.NewInputActions = NewInputActions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActionWidget.SetInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "SetInputAction");

	Params::UCommonActionWidget_SetInputAction_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActionWidget.SetIconRimBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InIconRimBrush                                                   (Parm, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetIconRimBrush(const struct FSlateBrush& InIconRimBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "SetIconRimBrush");

	Params::UCommonActionWidget_SetIconRimBrush_Params Parms{};

	Parms.InIconRimBrush = InIconRimBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "OnInputMethodChanged__DelegateSignature");

	Params::UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActionWidget.IsHeldAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActionWidget::IsHeldAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "IsHeldAction");

	Params::UCommonActionWidget_IsHeldAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActionWidget.GetIcon
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UCommonActionWidget::GetIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "GetIcon");

	Params::UCommonActionWidget_GetIcon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActionWidget.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UCommonActionWidget::GetDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "GetDisplayText");

	Params::UCommonActionWidget_GetDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonUserWidget
// (None)

class UClass* UCommonUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUserWidget");

	return Clss;
}


// CommonUserWidget CommonUI.Default__CommonUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUserWidget* UCommonUserWidget::GetDefaultObj()
{
	static class UCommonUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUserWidget*>(UCommonUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonUserWidget.SetConsumePointerInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInConsumePointerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserWidget", "SetConsumePointerInput");

	Params::UCommonUserWidget_SetConsumePointerInput_Params Parms{};

	Parms.bInConsumePointerInput = bInConsumePointerInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonActivatableWidget
// (None)

class UClass* UCommonActivatableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActivatableWidget");

	return Clss;
}


// CommonActivatableWidget CommonUI.Default__CommonActivatableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActivatableWidget* UCommonActivatableWidget::GetDefaultObj()
{
	static class UCommonActivatableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActivatableWidget*>(UCommonActivatableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonActivatableWidget.SetBindVisibilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        OnActivatedVisibility                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        OnDeactivatedVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAllActive                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidget::SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "SetBindVisibilities");

	Params::UCommonActivatableWidget_SetBindVisibilities_Params Parms{};

	Parms.OnActivatedVisibility = OnActivatedVisibility;
	Parms.OnDeactivatedVisibility = OnDeactivatedVisibility;
	Parms.bInAllActive = bInAllActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActivatableWidget.IsActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatableWidget::IsActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "IsActivated");

	Params::UCommonActivatableWidget_IsActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonActivatableWidget::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "GetDesiredFocusTarget");

	Params::UCommonActivatableWidget_GetDesiredFocusTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.DeactivateWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatableWidget::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "DeactivateWidget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatableWidget::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnHandleBackAction");

	Params::UCommonActivatableWidget_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatableWidget::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonActivatableWidget.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatableWidget::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_GetDesiredFocusTarget");

	Params::UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget*    ActivatableWidget                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidget::BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BindVisibilityToActivation");

	Params::UCommonActivatableWidget_BindVisibilityToActivation_Params Parms{};

	Parms.ActivatableWidget = ActivatableWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActivatableWidget.ActivateWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatableWidget::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "ActivateWidget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonAnimatedSwitcher
// (None)

class UClass* UCommonAnimatedSwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonAnimatedSwitcher");

	return Clss;
}


// CommonAnimatedSwitcher CommonUI.Default__CommonAnimatedSwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonAnimatedSwitcher* UCommonAnimatedSwitcher::GetDefaultObj()
{
	static class UCommonAnimatedSwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonAnimatedSwitcher*>(UCommonAnimatedSwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisableAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "SetDisableTransitionAnimation");

	Params::UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params Parms{};

	Parms.bDisableAnimation = bDisableAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonAnimatedSwitcher::IsTransitionPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "IsTransitionPlaying");

	Params::UCommonAnimatedSwitcher_IsTransitionPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonAnimatedSwitcher::IsCurrentlySwitching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "IsCurrentlySwitching");

	Params::UCommonAnimatedSwitcher_IsCurrentlySwitching_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonAnimatedSwitcher.HasWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonAnimatedSwitcher::HasWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "HasWidgets");

	Params::UCommonAnimatedSwitcher_HasWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanWrap                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "ActivatePreviousWidget");

	Params::UCommonAnimatedSwitcher_ActivatePreviousWidget_Params Parms{};

	Parms.bCanWrap = bCanWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanWrap                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "ActivateNextWidget");

	Params::UCommonAnimatedSwitcher_ActivateNextWidget_Params Parms{};

	Parms.bCanWrap = bCanWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonActivatableWidgetSwitcher
// (None)

class UClass* UCommonActivatableWidgetSwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActivatableWidgetSwitcher");

	return Clss;
}


// CommonActivatableWidgetSwitcher CommonUI.Default__CommonActivatableWidgetSwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActivatableWidgetSwitcher* UCommonActivatableWidgetSwitcher::GetDefaultObj()
{
	static class UCommonActivatableWidgetSwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActivatableWidgetSwitcher*>(UCommonActivatableWidgetSwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonBorderStyle
// (None)

class UClass* UCommonBorderStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonBorderStyle");

	return Clss;
}


// CommonBorderStyle CommonUI.Default__CommonBorderStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonBorderStyle* UCommonBorderStyle::GetDefaultObj()
{
	static class UCommonBorderStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonBorderStyle*>(UCommonBorderStyle::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBorderStyle", "GetBackgroundBrush");

	Params::UCommonBorderStyle_GetBackgroundBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Class CommonUI.CommonBorder
// (None)

class UClass* UCommonBorder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonBorder");

	return Clss;
}


// CommonBorder CommonUI.Default__CommonBorder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonBorder* UCommonBorder::GetDefaultObj()
{
	static class UCommonBorder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonBorder*>(UCommonBorder::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonBorder.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonBorderStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonBorder::SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBorder", "SetStyle");

	Params::UCommonBorder_SetStyle_Params Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonButtonStyle
// (None)

class UClass* UCommonButtonStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonStyle");

	return Clss;
}


// CommonButtonStyle CommonUI.Default__CommonButtonStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonStyle* UCommonButtonStyle::GetDefaultObj()
{
	static class UCommonButtonStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonStyle*>(UCommonButtonStyle::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedTextStyle");

	Params::UCommonButtonStyle_GetSelectedTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedPressedBrush");

	Params::UCommonButtonStyle_GetSelectedPressedBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredTextStyle");

	Params::UCommonButtonStyle_GetSelectedHoveredTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredBrush");

	Params::UCommonButtonStyle_GetSelectedHoveredBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedBaseBrush");

	Params::UCommonButtonStyle_GetSelectedBaseBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalTextStyle");

	Params::UCommonButtonStyle_GetNormalTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalPressedBrush");

	Params::UCommonButtonStyle_GetNormalPressedBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredTextStyle");

	Params::UCommonButtonStyle_GetNormalHoveredTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredBrush");

	Params::UCommonButtonStyle_GetNormalHoveredBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalBaseBrush");

	Params::UCommonButtonStyle_GetNormalBaseBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetMaterialBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetMaterialBrush");

	Params::UCommonButtonStyle_GetMaterialBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetDisabledTextStyle");

	Params::UCommonButtonStyle_GetDisabledTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetDisabledBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetDisabledBrush");

	Params::UCommonButtonStyle_GetDisabledBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function CommonUI.CommonButtonStyle.GetCustomPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutCustomPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetCustomPadding(struct FMargin* OutCustomPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetCustomPadding");

	Params::UCommonButtonStyle_GetCustomPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = std::move(Parms.OutCustomPadding);

}


// Function CommonUI.CommonButtonStyle.GetButtonPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutButtonPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetButtonPadding(struct FMargin* OutButtonPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetButtonPadding");

	Params::UCommonButtonStyle_GetButtonPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = std::move(Parms.OutButtonPadding);

}


// Class CommonUI.CommonButtonInternalBase
// (None)

class UClass* UCommonButtonInternalBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonInternalBase");

	return Clss;
}


// CommonButtonInternalBase CommonUI.Default__CommonButtonInternalBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonInternalBase* UCommonButtonInternalBase::GetDefaultObj()
{
	static class UCommonButtonInternalBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonInternalBase*>(UCommonButtonInternalBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonButtonBase
// (None)

class UClass* UCommonButtonBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonBase");

	return Clss;
}


// CommonButtonBase CommonUI.Default__CommonButtonBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonBase* UCommonButtonBase::GetDefaultObj()
{
	static class UCommonButtonBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonBase*>(UCommonButtonBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonButtonBase::StopDoubleClickPropagation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "StopDoubleClickPropagation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetTriggeringInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetTriggeringInputAction");

	Params::UCommonButtonBase_SetTriggeringInputAction_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetTriggeredInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetTriggeredInputAction");

	Params::UCommonButtonBase_SetTriggeredInputAction_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetTouchMethod");

	Params::UCommonButtonBase_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonButtonStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetStyle");

	Params::UCommonButtonBase_SetStyle_Params Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShouldUseFallbackDefaultInputAction                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetShouldUseFallbackDefaultInputAction");

	Params::UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params Parms{};

	Parms.bInShouldUseFallbackDefaultInputAction = bInShouldUseFallbackDefaultInputAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShouldSelectUponReceivingFocus                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetShouldSelectUponReceivingFocus");

	Params::UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params Parms{};

	Parms.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetSelectedPressedSoundOverride(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedPressedSoundOverride");

	Params::UCommonButtonBase_SetSelectedPressedSoundOverride_Params Parms{};

	Parms.Sound = Sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetSelectedInternal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowSound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedInternal");

	Params::UCommonButtonBase_SetSelectedInternal_Params Parms{};

	Parms.bInSelected = bInSelected;
	Parms.bAllowSound = bAllowSound;
	Parms.bBroadcast = bBroadcast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetSelectedHoveredSoundOverride(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedHoveredSoundOverride");

	Params::UCommonButtonBase_SetSelectedHoveredSoundOverride_Params Parms{};

	Parms.Sound = Sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetPressMethod(enum class EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetPressMethod");

	Params::UCommonButtonBase_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetPressedSoundOverride(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetPressedSoundOverride");

	Params::UCommonButtonBase_SetPressedSoundOverride_Params Parms{};

	Parms.Sound = Sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetMinDimensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMinWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMinHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetMinDimensions(int32 InMinWidth, int32 InMinHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetMinDimensions");

	Params::UCommonButtonBase_SetMinDimensions_Params Parms{};

	Parms.InMinWidth = InMinWidth;
	Parms.InMinHeight = InMinHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetLockedPressedSoundOverride(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetLockedPressedSoundOverride");

	Params::UCommonButtonBase_SetLockedPressedSoundOverride_Params Parms{};

	Parms.Sound = Sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetLockedHoveredSoundOverride(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetLockedHoveredSoundOverride");

	Params::UCommonButtonBase_SetLockedHoveredSoundOverride_Params Parms{};

	Parms.Sound = Sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetIsToggleable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsToggleable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsToggleable(bool bInIsToggleable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsToggleable");

	Params::UCommonButtonBase_SetIsToggleable_Params Parms{};

	Parms.bInIsToggleable = bInIsToggleable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetIsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGiveClickFeedback                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsSelected(bool InSelected, bool bGiveClickFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsSelected");

	Params::UCommonButtonBase_SetIsSelected_Params Parms{};

	Parms.InSelected = InSelected;
	Parms.bGiveClickFeedback = bGiveClickFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetIsSelectable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsSelectable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsSelectable(bool bInIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsSelectable");

	Params::UCommonButtonBase_SetIsSelectable_Params Parms{};

	Parms.bInIsSelectable = bInIsSelectable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetIsLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsLocked                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsLocked(bool bInIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsLocked");

	Params::UCommonButtonBase_SetIsLocked_Params Parms{};

	Parms.bInIsLocked = bInIsLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsInteractionEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsInteractionEnabled");

	Params::UCommonButtonBase_SetIsInteractionEnabled_Params Parms{};

	Parms.bInIsInteractionEnabled = bInIsInteractionEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInteractableWhenSelected                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsInteractableWhenSelected");

	Params::UCommonButtonBase_SetIsInteractableWhenSelected_Params Parms{};

	Parms.bInInteractableWhenSelected = bInInteractableWhenSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetIsFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsFocusable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsFocusable(bool bInIsFocusable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsFocusable");

	Params::UCommonButtonBase_SetIsFocusable_Params Parms{};

	Parms.bInIsFocusable = bInIsFocusable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InProgressMaterialBrush                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        InProgressMaterialParam                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, class FName& InProgressMaterialParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetInputActionProgressMaterial");

	Params::UCommonButtonBase_SetInputActionProgressMaterial_Params Parms{};

	Parms.InProgressMaterialBrush = InProgressMaterialBrush;
	Parms.InProgressMaterialParam = InProgressMaterialParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetHoveredSoundOverride(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetHoveredSoundOverride");

	Params::UCommonButtonBase_SetHoveredSoundOverride_Params Parms{};

	Parms.Sound = Sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetHideInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInHideInputAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetHideInputAction(bool bInHideInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetHideInputAction");

	Params::UCommonButtonBase_SetHideInputAction_Params Parms{};

	Parms.bInHideInputAction = bInHideInputAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetClickMethod(enum class EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetClickMethod");

	Params::UCommonButtonBase_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnTriggeringInputActionChanged");

	Params::UCommonButtonBase_OnTriggeringInputActionChanged_Params Parms{};

	Parms.NewTriggeredAction = NewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnTriggeredInputActionChanged");

	Params::UCommonButtonBase_OnTriggeredInputActionChanged_Params Parms{};

	Parms.NewTriggeredAction = NewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnInputMethodChanged
// (Native, Protected)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnInputMethodChanged");

	Params::UCommonButtonBase_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnActionProgress");

	Params::UCommonButtonBase_OnActionProgress_Params Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnActionComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.NativeOnActionProgress
// (Native, Protected)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::NativeOnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "NativeOnActionProgress");

	Params::UCommonButtonBase_NativeOnActionProgress_Params Parms{};

	Parms.HeldPercent = HeldPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.NativeOnActionComplete
// (Native, Protected)
// Parameters:

void UCommonButtonBase::NativeOnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "NativeOnActionComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "IsPressed");

	Params::UCommonButtonBase_IsPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.IsInteractionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::IsInteractionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "IsInteractionEnabled");

	Params::UCommonButtonBase_IsInteractionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
// (Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::HandleTriggeringActionCommited(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleTriggeringActionCommited");

	Params::UCommonButtonBase_HandleTriggeringActionCommited_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonButtonBase.HandleFocusReceived
// (Native, Protected)
// Parameters:

void UCommonButtonBase::HandleFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleFocusReceived");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.HandleFocusLost
// (Native, Protected)
// Parameters:

void UCommonButtonBase::HandleFocusLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleFocusLost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.HandleButtonReleased
// (Final, Native, Protected)
// Parameters:

void UCommonButtonBase::HandleButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.HandleButtonPressed
// (Final, Native, Protected)
// Parameters:

void UCommonButtonBase::HandleButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.HandleButtonClicked
// (Final, Native, Protected)
// Parameters:

void UCommonButtonBase::HandleButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonStyle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonStyle* UCommonButtonBase::GetStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetStyle");

	Params::UCommonButtonBase_GetStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UCommonButtonBase::GetSingleMaterialStyleMID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetSingleMaterialStyleMID");

	Params::UCommonButtonBase_GetSingleMaterialStyleMID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetShouldSelectUponReceivingFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetShouldSelectUponReceivingFocus");

	Params::UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetSelected");

	Params::UCommonButtonBase_GetSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetLocked");

	Params::UCommonButtonBase_GetLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetIsFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetIsFocusable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetIsFocusable");

	Params::UCommonButtonBase_GetIsFocusable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetInputAction(struct FDataTableRowHandle* InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetInputAction");

	Params::UCommonButtonBase_GetInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InputActionRow != nullptr)
		*InputActionRow = std::move(Parms.InputActionRow);

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UCommonTextStyle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCommonTextStyle> UCommonButtonBase::GetCurrentTextStyleClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentTextStyleClass");

	Params::UCommonButtonBase_GetCurrentTextStyleClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetCurrentTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentTextStyle");

	Params::UCommonButtonBase_GetCurrentTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutCustomPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::GetCurrentCustomPadding(struct FMargin* OutCustomPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentCustomPadding");

	Params::UCommonButtonBase_GetCurrentCustomPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = std::move(Parms.OutCustomPadding);

}


// Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutButtonPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::GetCurrentButtonPadding(struct FMargin* OutButtonPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentButtonPadding");

	Params::UCommonButtonBase_GetCurrentButtonPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = std::move(Parms.OutButtonPadding);

}


// Function CommonUI.CommonButtonBase.DisableButtonWithReason
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        DisabledReason                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonButtonBase::DisableButtonWithReason(class FText& DisabledReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "DisableButtonWithReason");

	Params::UCommonButtonBase_DisableButtonWithReason_Params Parms{};

	Parms.DisabledReason = DisabledReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButtonBase::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "ClearSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonBase.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnLockedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLocked                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::BP_OnLockedChanged(bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockedChanged");

	Params::UCommonButtonBase_BP_OnLockedChanged_Params Parms{};

	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnLockDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockDoubleClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnLockClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnLockClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnInputMethodChanged");

	Params::UCommonButtonBase_BP_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnFocusReceived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnFocusLost
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnFocusLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDoubleClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonButtonBase.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Class CommonUI.CommonCustomNavigation
// (None)

class UClass* UCommonCustomNavigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonCustomNavigation");

	return Clss;
}


// CommonCustomNavigation CommonUI.Default__CommonCustomNavigation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonCustomNavigation* UCommonCustomNavigation::GetDefaultObj()
{
	static class UCommonCustomNavigation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonCustomNavigation*>(UCommonCustomNavigation::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonTextBlock
// (None)

class UClass* UCommonTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTextBlock");

	return Clss;
}


// CommonTextBlock CommonUI.Default__CommonTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonTextBlock* UCommonTextBlock::GetDefaultObj()
{
	static class UCommonTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTextBlock*>(UCommonTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonTextBlock.SetWrapTextWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InWrapTextAt                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetWrapTextWidth(int32 InWrapTextAt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetWrapTextWidth");

	Params::UCommonTextBlock_SetWrapTextWidth_Params Parms{};

	Parms.InWrapTextAt = InWrapTextAt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTextBlock.SetTextCase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseAllCaps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetTextCase(bool bUseAllCaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetTextCase");

	Params::UCommonTextBlock_SetTextCase_Params Parms{};

	Parms.bUseAllCaps = bUseAllCaps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTextBlock.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonTextStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetStyle(TSubclassOf<class UCommonTextStyle> InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetStyle");

	Params::UCommonTextBlock_SetStyle_Params Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTextBlock.SetScrollingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsScrollingEnabled                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetScrollingEnabled");

	Params::UCommonTextBlock_SetScrollingEnabled_Params Parms{};

	Parms.bInIsScrollingEnabled = bInIsScrollingEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTextBlock.SetMargin
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMargin                     InMargin                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetMargin(struct FMargin& InMargin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetMargin");

	Params::UCommonTextBlock_SetMargin_Params Parms{};

	Parms.InMargin = InMargin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTextBlock.SetLineHeightPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLineHeightPercentage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetLineHeightPercentage(float InLineHeightPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetLineHeightPercentage");

	Params::UCommonTextBlock_SetLineHeightPercentage_Params Parms{};

	Parms.InLineHeightPercentage = InLineHeightPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTextBlock.ResetScrollState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonTextBlock::ResetScrollState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "ResetScrollState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTextBlock.GetMargin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FMargin UCommonTextBlock::GetMargin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "GetMargin");

	Params::UCommonTextBlock_GetMargin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonDateTimeTextBlock
// (None)

class UClass* UCommonDateTimeTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonDateTimeTextBlock");

	return Clss;
}


// CommonDateTimeTextBlock CommonUI.Default__CommonDateTimeTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonDateTimeTextBlock* UCommonDateTimeTextBlock::GetDefaultObj()
{
	static class UCommonDateTimeTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonDateTimeTextBlock*>(UCommonDateTimeTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   InTimespan                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetTimespanValue(const struct FTimespan& InTimespan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetTimespanValue");

	Params::UCommonDateTimeTextBlock_SetTimespanValue_Params Parms{};

	Parms.InTimespan = InTimespan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowAsCountdown                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRefreshDelay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetDateTimeValue");

	Params::UCommonDateTimeTextBlock_SetDateTimeValue_Params Parms{};

	Parms.InDateTime = InDateTime;
	Parms.bShowAsCountdown = bShowAsCountdown;
	Parms.InRefreshDelay = InRefreshDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InCompletionText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetCountDownCompletionText(class FText InCompletionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetCountDownCompletionText");

	Params::UCommonDateTimeTextBlock_SetCountDownCompletionText_Params Parms{};

	Parms.InCompletionText = InCompletionText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UCommonDateTimeTextBlock::GetDateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "GetDateTime");

	Params::UCommonDateTimeTextBlock_GetDateTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonGameViewportClient
// (None)

class UClass* UCommonGameViewportClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonGameViewportClient");

	return Clss;
}


// CommonGameViewportClient CommonUI.Default__CommonGameViewportClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonGameViewportClient* UCommonGameViewportClient::GetDefaultObj()
{
	static class UCommonGameViewportClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonGameViewportClient*>(UCommonGameViewportClient::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonHardwareVisibilityBorder
// (None)

class UClass* UCommonHardwareVisibilityBorder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonHardwareVisibilityBorder");

	return Clss;
}


// CommonHardwareVisibilityBorder CommonUI.Default__CommonHardwareVisibilityBorder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonHardwareVisibilityBorder* UCommonHardwareVisibilityBorder::GetDefaultObj()
{
	static class UCommonHardwareVisibilityBorder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonHardwareVisibilityBorder*>(UCommonHardwareVisibilityBorder::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonHierarchicalScrollBox
// (None)

class UClass* UCommonHierarchicalScrollBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonHierarchicalScrollBox");

	return Clss;
}


// CommonHierarchicalScrollBox CommonUI.Default__CommonHierarchicalScrollBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonHierarchicalScrollBox* UCommonHierarchicalScrollBox::GetDefaultObj()
{
	static class UCommonHierarchicalScrollBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonHierarchicalScrollBox*>(UCommonHierarchicalScrollBox::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonLazyImage
// (None)

class UClass* UCommonLazyImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonLazyImage");

	return Clss;
}


// CommonLazyImage CommonUI.Default__CommonLazyImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonLazyImage* UCommonLazyImage::GetDefaultObj()
{
	static class UCommonLazyImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonLazyImage*>(UCommonLazyImage::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TextureParamName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetMaterialTextureParamName(class FName TextureParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetMaterialTextureParamName");

	Params::UCommonLazyImage_SetMaterialTextureParamName_Params Parms{};

	Parms.TextureParamName = TextureParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   LazyTexture                                                      (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyTexture");

	Params::UCommonLazyImage_SetBrushFromLazyTexture_Params Parms{};

	Parms.LazyTexture = LazyTexture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>LazyMaterial                                                     (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& LazyMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyMaterial");

	Params::UCommonLazyImage_SetBrushFromLazyMaterial_Params Parms{};

	Parms.LazyMaterial = LazyMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>      LazyObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchTextureSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyDisplayAsset");

	Params::UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params Parms{};

	Parms.LazyObject = LazyObject;
	Parms.bMatchTextureSize = bMatchTextureSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonLazyImage.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLazyImage::IsLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "IsLoading");

	Params::UCommonLazyImage_IsLoading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonLazyWidget
// (None)

class UClass* UCommonLazyWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonLazyWidget");

	return Clss;
}


// CommonLazyWidget CommonUI.Default__CommonLazyWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonLazyWidget* UCommonLazyWidget::GetDefaultObj()
{
	static class UCommonLazyWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonLazyWidget*>(UCommonLazyWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonLazyWidget.SetLazyContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UUserWidget>   SoftWidget                                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyWidget::SetLazyContent(TSoftClassPtr<class UUserWidget> SoftWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyWidget", "SetLazyContent");

	Params::UCommonLazyWidget_SetLazyContent_Params Parms{};

	Parms.SoftWidget = SoftWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonLazyWidget.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLazyWidget::IsLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyWidget", "IsLoading");

	Params::UCommonLazyWidget_IsLoading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLazyWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UCommonLazyWidget::GetContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyWidget", "GetContent");

	Params::UCommonLazyWidget_GetContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonListView
// (None)

class UClass* UCommonListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonListView");

	return Clss;
}


// CommonListView CommonUI.Default__CommonListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonListView* UCommonListView::GetDefaultObj()
{
	static class UCommonListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonListView*>(UCommonListView::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonListView.SetEntrySpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InEntrySpacing                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::SetEntrySpacing(float InEntrySpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonListView", "SetEntrySpacing");

	Params::UCommonListView_SetEntrySpacing_Params Parms{};

	Parms.InEntrySpacing = InEntrySpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.LoadGuardSlot
// (None)

class UClass* ULoadGuardSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadGuardSlot");

	return Clss;
}


// LoadGuardSlot CommonUI.Default__LoadGuardSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadGuardSlot* ULoadGuardSlot::GetDefaultObj()
{
	static class ULoadGuardSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadGuardSlot*>(ULoadGuardSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadGuardSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGuardSlot", "SetVerticalAlignment");

	Params::ULoadGuardSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.LoadGuardSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULoadGuardSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGuardSlot", "SetPadding");

	Params::ULoadGuardSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadGuardSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGuardSlot", "SetHorizontalAlignment");

	Params::ULoadGuardSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonLoadGuard
// (None)

class UClass* UCommonLoadGuard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonLoadGuard");

	return Clss;
}


// CommonLoadGuard CommonUI.Default__CommonLoadGuard
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonLoadGuard* UCommonLoadGuard::GetDefaultObj()
{
	static class UCommonLoadGuard* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonLoadGuard*>(UCommonLoadGuard::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonLoadGuard.SetLoadingText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InLoadingText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonLoadGuard::SetLoadingText(class FText& InLoadingText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "SetLoadingText");

	Params::UCommonLoadGuard_SetLoadingText_Params Parms{};

	Parms.InLoadingText = InLoadingText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonLoadGuard.SetIsLoading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsLoading                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "SetIsLoading");

	Params::UCommonLoadGuard_SetIsLoading_Params Parms{};

	Parms.bInIsLoading = bInIsLoading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "OnAssetLoaded__DelegateSignature");

	Params::UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonLoadGuard.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLoadGuard::IsLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "IsLoading");

	Params::UCommonLoadGuard_IsLoading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>      InLazyAsset                                                      (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnAssetLoaded                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InLazyAsset, FDelegateProperty_& OnAssetLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "BP_GuardAndLoadAsset");

	Params::UCommonLoadGuard_BP_GuardAndLoadAsset_Params Parms{};

	Parms.InLazyAsset = InLazyAsset;
	Parms.OnAssetLoaded = OnAssetLoaded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonNumericTextBlock
// (None)

class UClass* UCommonNumericTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonNumericTextBlock");

	return Clss;
}


// CommonNumericTextBlock CommonUI.Default__CommonNumericTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonNumericTextBlock* UCommonNumericTextBlock::GetDefaultObj()
{
	static class UCommonNumericTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonNumericTextBlock*>(UCommonNumericTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonNumericTextBlock.SetNumericType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonNumericType      InNumericType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::SetNumericType(enum class ECommonNumericType InNumericType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "SetNumericType");

	Params::UCommonNumericTextBlock_SetNumericType_Params Parms{};

	Parms.InNumericType = InNumericType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::SetCurrentValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "SetCurrentValue");

	Params::UCommonNumericTextBlock_SetCurrentValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnOutro__DelegateSignature");

	Params::UCommonNumericTextBlock_OnOutro__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = NumericTextBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LastValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnInterpolationUpdated__DelegateSignature");

	Params::UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = NumericTextBlock;
	Parms.LastValue = LastValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnInterpolationStarted__DelegateSignature");

	Params::UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = NumericTextBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HadCompleted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnInterpolationEnded__DelegateSignature");

	Params::UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = NumericTextBlock;
	Parms.HadCompleted = HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonNumericTextBlock::IsInterpolatingNumericValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "IsInterpolatingNumericValue");

	Params::UCommonNumericTextBlock_IsInterpolatingNumericValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TargetValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaximumInterpolationDuration                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumChangeRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutroOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "InterpolateToValue");

	Params::UCommonNumericTextBlock_InterpolateToValue_Params Parms{};

	Parms.TargetValue = TargetValue;
	Parms.MaximumInterpolationDuration = MaximumInterpolationDuration;
	Parms.MinimumChangeRate = MinimumChangeRate;
	Parms.OutroOffset = OutroOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonNumericTextBlock.GetTargetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonNumericTextBlock::GetTargetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "GetTargetValue");

	Params::UCommonNumericTextBlock_GetTargetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonPoolableWidgetInterface
// (None)

class UClass* ICommonPoolableWidgetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonPoolableWidgetInterface");

	return Clss;
}


// CommonPoolableWidgetInterface CommonUI.Default__CommonPoolableWidgetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICommonPoolableWidgetInterface* ICommonPoolableWidgetInterface::GetDefaultObj()
{
	static class ICommonPoolableWidgetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICommonPoolableWidgetInterface*>(ICommonPoolableWidgetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ICommonPoolableWidgetInterface::OnReleaseToPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnReleaseToPool");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ICommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnAcquireFromPool");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonRichTextBlock
// (None)

class UClass* UCommonRichTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonRichTextBlock");

	return Clss;
}


// CommonRichTextBlock CommonUI.Default__CommonRichTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonRichTextBlock* UCommonRichTextBlock::GetDefaultObj()
{
	static class UCommonRichTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonRichTextBlock*>(UCommonRichTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonRichTextBlock.SetScrollingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsScrollingEnabled                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRichTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRichTextBlock", "SetScrollingEnabled");

	Params::UCommonRichTextBlock_SetScrollingEnabled_Params Parms{};

	Parms.bInIsScrollingEnabled = bInIsScrollingEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonRotator
// (None)

class UClass* UCommonRotator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonRotator");

	return Clss;
}


// CommonRotator CommonUI.Default__CommonRotator
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonRotator* UCommonRotator::GetDefaultObj()
{
	static class UCommonRotator* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonRotator*>(UCommonRotator::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonRotator.ShiftTextRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonRotator::ShiftTextRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "ShiftTextRight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonRotator.ShiftTextLeft
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonRotator::ShiftTextLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "ShiftTextLeft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonRotator.SetSelectedItem
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::SetSelectedItem(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "SetSelectedItem");

	Params::UCommonRotator_SetSelectedItem_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonRotator.PopulateTextLabels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FText>                Labels                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCommonRotator::PopulateTextLabels(const TArray<class FText>& Labels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "PopulateTextLabels");

	Params::UCommonRotator_PopulateTextLabels_Params Parms{};

	Parms.Labels = Labels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonRotator.GetSelectedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UCommonRotator::GetSelectedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "GetSelectedText");

	Params::UCommonRotator_GetSelectedText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonRotator.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonRotator::GetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "GetSelectedIndex");

	Params::UCommonRotator_GetSelectedIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::BP_OnOptionsPopulated(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "BP_OnOptionsPopulated");

	Params::UCommonRotator_BP_OnOptionsPopulated_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonRotator.BP_OnOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::BP_OnOptionSelected(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "BP_OnOptionSelected");

	Params::UCommonRotator_BP_OnOptionSelected_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CommonUI.CommonTabListWidgetBase
// (None)

class UClass* UCommonTabListWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTabListWidgetBase");

	return Clss;
}


// CommonTabListWidgetBase CommonUI.Default__CommonTabListWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonTabListWidgetBase* UCommonTabListWidgetBase::GetDefaultObj()
{
	static class UCommonTabListWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTabListWidgetBase*>(UCommonTabListWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        NewVisibility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetTabVisibility(class FName TabNameID, enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabVisibility");

	Params::UCommonTabListWidgetBase_SetTabVisibility_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.NewVisibility = NewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetTabInteractionEnabled(class FName TabNameID, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabInteractionEnabled");

	Params::UCommonTabListWidgetBase_SetTabInteractionEnabled_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetTabEnabled(class FName TabNameID, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabEnabled");

	Params::UCommonTabListWidgetBase_SetTabEnabled_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldListen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetListeningForInput(bool bShouldListen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetListeningForInput");

	Params::UCommonTabListWidgetBase_SetListeningForInput_Params Parms{};

	Parms.bShouldListen = bShouldListen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
// (Native, Public, BlueprintCallable)
// Parameters:
// class UCommonAnimatedSwitcher*     CommonSwitcher                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetLinkedSwitcher");

	Params::UCommonTabListWidgetBase_SetLinkedSwitcher_Params Parms{};

	Parms.CommonSwitcher = CommonSwitcher;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.SelectTabByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuppressClickFeedback                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidgetBase::SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SelectTabByID");

	Params::UCommonTabListWidgetBase_SelectTabByID_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.bSuppressClickFeedback = bSuppressClickFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.RemoveTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidgetBase::RemoveTab(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RemoveTab");

	Params::UCommonTabListWidgetBase_RemoveTab_Params Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonTabListWidgetBase::RemoveAllTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RemoveAllTabs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.RegisterTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCommonButtonBase>ButtonWidgetType                                                 (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ContentWidget                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TabIndex                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidgetBase::RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget, int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RegisterTab");

	Params::UCommonTabListWidgetBase_RegisterTab_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.ButtonWidgetType = ButtonWidgetType;
	Parms.ContentWidget = ContentWidget;
	Parms.TabIndex = TabIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::OnTabSelected__DelegateSignature(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabSelected__DelegateSignature");

	Params::UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCommonTabListWidgetBase::OnTabListRebuilt__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabListRebuilt__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::OnTabButtonRemoval__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabButtonRemoval__DelegateSignature");

	Params::UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::OnTabButtonCreation__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabButtonCreation__DelegateSignature");

	Params::UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabRemoval");

	Params::UCommonTabListWidgetBase_HandleTabRemoval_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabCreation");

	Params::UCommonTabListWidgetBase_HandleTabCreation_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
// (Final, Native, Protected)
// Parameters:
// class UCommonButtonBase*           SelectedTabButton                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabButtonSelected");

	Params::UCommonTabListWidgetBase_HandleTabButtonSelected_Params Parms{};

	Parms.SelectedTabButton = SelectedTabButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandlePreviousTabInputAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePreviousTabInputAction");

	Params::UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePreLinkedSwitcherChanged_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePostLinkedSwitcherChanged_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleNextTabInputAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleNextTabInputAction");

	Params::UCommonTabListWidgetBase_HandleNextTabInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonTabListWidgetBase::GetTabIdAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabIdAtIndex");

	Params::UCommonTabListWidgetBase_GetTabIdAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetTabCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonTabListWidgetBase::GetTabCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabCount");

	Params::UCommonTabListWidgetBase_GetTabCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonBase* UCommonTabListWidgetBase::GetTabButtonBaseByID(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabButtonBaseByID");

	Params::UCommonTabListWidgetBase_GetTabButtonBaseByID_Params Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonTabListWidgetBase::GetSelectedTabId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetSelectedTabId");

	Params::UCommonTabListWidgetBase_GetSelectedTabId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonAnimatedSwitcher*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonAnimatedSwitcher* UCommonTabListWidgetBase::GetLinkedSwitcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetLinkedSwitcher");

	Params::UCommonTabListWidgetBase_GetLinkedSwitcher_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetActiveTab
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonTabListWidgetBase::GetActiveTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetActiveTab");

	Params::UCommonTabListWidgetBase_GetActiveTab_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::DisableTabWithReason(class FName TabNameID, class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "DisableTabWithReason");

	Params::UCommonTabListWidgetBase_DisableTabWithReason_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonTextStyle
// (None)

class UClass* UCommonTextStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTextStyle");

	return Clss;
}


// CommonTextStyle CommonUI.Default__CommonTextStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonTextStyle* UCommonTextStyle::GetDefaultObj()
{
	static class UCommonTextStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTextStyle*>(UCommonTextStyle::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonTextStyle.GetStrikeBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 OutStrikeBrush                                                   (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetStrikeBrush(struct FSlateBrush* OutStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetStrikeBrush");

	Params::UCommonTextStyle_GetStrikeBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutStrikeBrush != nullptr)
		*OutStrikeBrush = std::move(Parms.OutStrikeBrush);

}


// Function CommonUI.CommonTextStyle.GetShadowOffset
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   OutShadowOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetShadowOffset(struct FVector2D* OutShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetShadowOffset");

	Params::UCommonTextStyle_GetShadowOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutShadowOffset != nullptr)
		*OutShadowOffset = std::move(Parms.OutShadowOffset);

}


// Function CommonUI.CommonTextStyle.GetShadowColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                OutColor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetShadowColor(struct FLinearColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetShadowColor");

	Params::UCommonTextStyle_GetShadowColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);

}


// Function CommonUI.CommonTextStyle.GetMargin
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutMargin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetMargin(struct FMargin* OutMargin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetMargin");

	Params::UCommonTextStyle_GetMargin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMargin != nullptr)
		*OutMargin = std::move(Parms.OutMargin);

}


// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonTextStyle::GetLineHeightPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetLineHeightPercentage");

	Params::UCommonTextStyle_GetLineHeightPercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTextStyle.GetFont
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              OutFont                                                          (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetFont(struct FSlateFontInfo* OutFont)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetFont");

	Params::UCommonTextStyle_GetFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFont != nullptr)
		*OutFont = std::move(Parms.OutFont);

}


// Function CommonUI.CommonTextStyle.GetColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                OutColor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetColor(struct FLinearColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetColor");

	Params::UCommonTextStyle_GetColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);

}


// Class CommonUI.CommonTextScrollStyle
// (None)

class UClass* UCommonTextScrollStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTextScrollStyle");

	return Clss;
}


// CommonTextScrollStyle CommonUI.Default__CommonTextScrollStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonTextScrollStyle* UCommonTextScrollStyle::GetDefaultObj()
{
	static class UCommonTextScrollStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTextScrollStyle*>(UCommonTextScrollStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonTileView
// (None)

class UClass* UCommonTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTileView");

	return Clss;
}


// CommonTileView CommonUI.Default__CommonTileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonTileView* UCommonTileView::GetDefaultObj()
{
	static class UCommonTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTileView*>(UCommonTileView::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonTreeView
// (None)

class UClass* UCommonTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTreeView");

	return Clss;
}


// CommonTreeView CommonUI.Default__CommonTreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonTreeView* UCommonTreeView::GetDefaultObj()
{
	static class UCommonTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTreeView*>(UCommonTreeView::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonUIEditorSettings
// (None)

class UClass* UCommonUIEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIEditorSettings");

	return Clss;
}


// CommonUIEditorSettings CommonUI.Default__CommonUIEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIEditorSettings* UCommonUIEditorSettings::GetDefaultObj()
{
	static class UCommonUIEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIEditorSettings*>(UCommonUIEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonUILibrary
// (None)

class UClass* UCommonUILibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUILibrary");

	return Clss;
}


// CommonUILibrary CommonUI.Default__CommonUILibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUILibrary* UCommonUILibrary::GetDefaultObj()
{
	static class UCommonUILibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUILibrary*>(UCommonUILibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     StartingWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UWidget>         Type                                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonUILibrary::FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUILibrary", "FindParentWidgetOfType");

	Params::UCommonUILibrary_FindParentWidgetOfType_Params Parms{};

	Parms.StartingWidget = StartingWidget;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonUIRichTextData
// (None)

class UClass* UCommonUIRichTextData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIRichTextData");

	return Clss;
}


// CommonUIRichTextData CommonUI.Default__CommonUIRichTextData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIRichTextData* UCommonUIRichTextData::GetDefaultObj()
{
	static class UCommonUIRichTextData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIRichTextData*>(UCommonUIRichTextData::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonUISettings
// (None)

class UClass* UCommonUISettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUISettings");

	return Clss;
}


// CommonUISettings CommonUI.Default__CommonUISettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUISettings* UCommonUISettings::GetDefaultObj()
{
	static class UCommonUISettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUISettings*>(UCommonUISettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonUISubsystemBase
// (None)

class UClass* UCommonUISubsystemBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUISubsystemBase");

	return Clss;
}


// CommonUISubsystemBase CommonUI.Default__CommonUISubsystemBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUISubsystemBase* UCommonUISubsystemBase::GetDefaultObj()
{
	static class UCommonUISubsystemBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUISubsystemBase*>(UCommonUISubsystemBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRowHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECommonInputType        InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        GamepadName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, class FName& GamepadName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUISubsystemBase", "GetInputActionButtonIcon");

	Params::UCommonUISubsystemBase_GetInputActionButtonIcon_Params Parms{};

	Parms.InputActionRowHandle = InputActionRowHandle;
	Parms.InputType = InputType;
	Parms.GamepadName = GamepadName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonUIVisibilitySubsystem
// (None)

class UClass* UCommonUIVisibilitySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIVisibilitySubsystem");

	return Clss;
}


// CommonUIVisibilitySubsystem CommonUI.Default__CommonUIVisibilitySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIVisibilitySubsystem* UCommonUIVisibilitySubsystem::GetDefaultObj()
{
	static class UCommonUIVisibilitySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIVisibilitySubsystem*>(UCommonUIVisibilitySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonVideoPlayer
// (None)

class UClass* UCommonVideoPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonVideoPlayer");

	return Clss;
}


// CommonVideoPlayer CommonUI.Default__CommonVideoPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonVideoPlayer* UCommonVideoPlayer::GetDefaultObj()
{
	static class UCommonVideoPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonVideoPlayer*>(UCommonVideoPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonVisibilitySwitcher
// (None)

class UClass* UCommonVisibilitySwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonVisibilitySwitcher");

	return Clss;
}


// CommonVisibilitySwitcher CommonUI.Default__CommonVisibilitySwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonVisibilitySwitcher* UCommonVisibilitySwitcher::GetDefaultObj()
{
	static class UCommonVisibilitySwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonVisibilitySwitcher*>(UCommonVisibilitySwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "SetActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::SetActiveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "SetActiveWidget");

	Params::UCommonVisibilitySwitcher_SetActiveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrapping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool bAllowWrapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "IncrementActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params Parms{};

	Parms.bAllowWrapping = bAllowWrapping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonVisibilitySwitcher::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "GetActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonVisibilitySwitcher::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "GetActiveWidget");

	Params::UCommonVisibilitySwitcher_GetActiveWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrapping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool bAllowWrapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "DecrementActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params Parms{};

	Parms.bAllowWrapping = bAllowWrapping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonVisibilitySwitcher::DeactivateVisibleSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "DeactivateVisibleSlot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonVisibilitySwitcher::ActivateVisibleSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "ActivateVisibleSlot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonVisibilitySwitcherSlot
// (None)

class UClass* UCommonVisibilitySwitcherSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonVisibilitySwitcherSlot");

	return Clss;
}


// CommonVisibilitySwitcherSlot CommonUI.Default__CommonVisibilitySwitcherSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonVisibilitySwitcherSlot* UCommonVisibilitySwitcherSlot::GetDefaultObj()
{
	static class UCommonVisibilitySwitcherSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonVisibilitySwitcherSlot*>(UCommonVisibilitySwitcherSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.UCommonVisibilityWidgetBase
// (None)

class UClass* UUCommonVisibilityWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UCommonVisibilityWidgetBase");

	return Clss;
}


// UCommonVisibilityWidgetBase CommonUI.Default__UCommonVisibilityWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UUCommonVisibilityWidgetBase* UUCommonVisibilityWidgetBase::GetDefaultObj()
{
	static class UUCommonVisibilityWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UUCommonVisibilityWidgetBase*>(UUCommonVisibilityWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
// (Final, Native, Static, Protected)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FName> UUCommonVisibilityWidgetBase::GetRegisteredPlatforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UCommonVisibilityWidgetBase", "GetRegisteredPlatforms");

	Params::UUCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonVisualAttachment
// (None)

class UClass* UCommonVisualAttachment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonVisualAttachment");

	return Clss;
}


// CommonVisualAttachment CommonUI.Default__CommonVisualAttachment
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonVisualAttachment* UCommonVisualAttachment::GetDefaultObj()
{
	static class UCommonVisualAttachment* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonVisualAttachment*>(UCommonVisualAttachment::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonWidgetCarousel
// (None)

class UClass* UCommonWidgetCarousel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonWidgetCarousel");

	return Clss;
}


// CommonWidgetCarousel CommonUI.Default__CommonWidgetCarousel
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonWidgetCarousel* UCommonWidgetCarousel::GetDefaultObj()
{
	static class UCommonWidgetCarousel* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonWidgetCarousel*>(UCommonWidgetCarousel::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::SetActiveWidgetIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidgetIndex");

	Params::UCommonWidgetCarousel_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::SetActiveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidget");

	Params::UCommonWidgetCarousel_SetActiveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetCarousel.PreviousPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::PreviousPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "PreviousPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetCarousel.NextPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::NextPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "NextPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "GetWidgetAtIndex");

	Params::UCommonWidgetCarousel_GetWidgetAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonWidgetCarousel::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "GetActiveWidgetIndex");

	Params::UCommonWidgetCarousel_GetActiveWidgetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::EndAutoScrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "EndAutoScrolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollInterval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "BeginAutoScrolling");

	Params::UCommonWidgetCarousel_BeginAutoScrolling_Params Parms{};

	Parms.ScrollInterval = ScrollInterval;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonWidgetCarouselNavBar
// (None)

class UClass* UCommonWidgetCarouselNavBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonWidgetCarouselNavBar");

	return Clss;
}


// CommonWidgetCarouselNavBar CommonUI.Default__CommonWidgetCarouselNavBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonWidgetCarouselNavBar* UCommonWidgetCarouselNavBar::GetDefaultObj()
{
	static class UCommonWidgetCarouselNavBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonWidgetCarouselNavBar*>(UCommonWidgetCarouselNavBar::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonWidgetCarousel*       CommonCarousel                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "SetLinkedCarousel");

	Params::UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params Parms{};

	Parms.CommonCarousel = CommonCarousel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
// (Final, Native, Protected)
// Parameters:
// class UCommonWidgetCarousel*       CommonCarousel                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PageIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarouselNavBar::HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "HandlePageChanged");

	Params::UCommonWidgetCarouselNavBar_HandlePageChanged_Params Parms{};

	Parms.CommonCarousel = CommonCarousel;
	Parms.PageIndex = PageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UCommonButtonBase*           AssociatedButton                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarouselNavBar::HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "HandleButtonClicked");

	Params::UCommonWidgetCarouselNavBar_HandleButtonClicked_Params Parms{};

	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonWidgetGroupBase
// (None)

class UClass* UCommonWidgetGroupBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonWidgetGroupBase");

	return Clss;
}


// CommonWidgetGroupBase CommonUI.Default__CommonWidgetGroupBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonWidgetGroupBase* UCommonWidgetGroupBase::GetDefaultObj()
{
	static class UCommonWidgetGroupBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonWidgetGroupBase*>(UCommonWidgetGroupBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveWidget");

	Params::UCommonWidgetGroupBase_RemoveWidget_Params Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetGroupBase.RemoveAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetGroupBase::RemoveAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonWidgetGroupBase.AddWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetGroupBase::AddWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetGroupBase", "AddWidget");

	Params::UCommonWidgetGroupBase_AddWidget_Params Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonButtonGroupBase
// (None)

class UClass* UCommonButtonGroupBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonGroupBase");

	return Clss;
}


// CommonButtonGroupBase CommonUI.Default__CommonButtonGroupBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonGroupBase* UCommonButtonGroupBase::GetDefaultObj()
{
	static class UCommonButtonGroupBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonGroupBase*>(UCommonButtonGroupBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRequireSelection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SetSelectionRequired(bool bRequireSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SetSelectionRequired");

	Params::UCommonButtonGroupBase_SetSelectionRequired_Params Parms{};

	Parms.bRequireSelection = bRequireSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SelectPreviousButton(bool bAllowWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectPreviousButton");

	Params::UCommonButtonGroupBase_SelectPreviousButton_Params Parms{};

	Parms.bAllowWrap = bAllowWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.SelectNextButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SelectNextButton(bool bAllowWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectNextButton");

	Params::UCommonButtonGroupBase_SelectNextButton_Params Parms{};

	Parms.bAllowWrap = bAllowWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowSound                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SelectButtonAtIndex(int32 ButtonIndex, bool bAllowSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectButtonAtIndex");

	Params::UCommonButtonGroupBase_SelectButtonAtIndex_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;
	Parms.bAllowSound = bAllowSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnSelectionStateChangedBase");

	Params::UCommonButtonGroupBase_OnSelectionStateChangedBase_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.bIsSelected = bIsSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnHandleButtonBaseDoubleClicked");

	Params::UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnHandleButtonBaseClicked");

	Params::UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnButtonBaseUnhovered");

	Params::UCommonButtonGroupBase_OnButtonBaseUnhovered_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnButtonBaseHovered(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnButtonBaseHovered");

	Params::UCommonButtonGroupBase_OnButtonBaseHovered_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonButtonGroupBase.HasAnyButtons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonGroupBase::HasAnyButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "HasAnyButtons");

	Params::UCommonButtonGroupBase_HasAnyButtons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::GetSelectedButtonIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetSelectedButtonIndex");

	Params::UCommonButtonGroupBase_GetSelectedButtonIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonBase*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonBase* UCommonButtonGroupBase::GetSelectedButtonBase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetSelectedButtonBase");

	Params::UCommonButtonGroupBase_GetSelectedButtonBase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::GetHoveredButtonIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetHoveredButtonIndex");

	Params::UCommonButtonGroupBase_GetHoveredButtonIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetButtonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::GetButtonCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetButtonCount");

	Params::UCommonButtonGroupBase_GetButtonCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonBase* UCommonButtonGroupBase::GetButtonBaseAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetButtonBaseAtIndex");

	Params::UCommonButtonGroupBase_GetButtonBaseAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.FindButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonBase*           ButtonToFind                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::FindButtonIndex(class UCommonButtonBase* ButtonToFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "FindButtonIndex");

	Params::UCommonButtonGroupBase_FindButtonIndex_Params Parms{};

	Parms.ButtonToFind = ButtonToFind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.DeselectAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButtonGroupBase::DeselectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "DeselectAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonBoundActionBar
// (None)

class UClass* UCommonBoundActionBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonBoundActionBar");

	return Clss;
}


// CommonBoundActionBar CommonUI.Default__CommonBoundActionBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonBoundActionBar* UCommonBoundActionBar::GetDefaultObj()
{
	static class UCommonBoundActionBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonBoundActionBar*>(UCommonBoundActionBar::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldOnlyDisplayOwningPlayerActions                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBoundActionBar", "SetDisplayOwningPlayerActionsOnly");

	Params::UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params Parms{};

	Parms.bShouldOnlyDisplayOwningPlayerActions = bShouldOnlyDisplayOwningPlayerActions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUI.CommonBoundActionButton
// (None)

class UClass* UCommonBoundActionButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonBoundActionButton");

	return Clss;
}


// CommonBoundActionButton CommonUI.Default__CommonBoundActionButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonBoundActionButton* UCommonBoundActionButton::GetDefaultObj()
{
	static class UCommonBoundActionButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonBoundActionButton*>(UCommonBoundActionButton::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonBoundActionButton::OnUpdateInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBoundActionButton", "OnUpdateInputAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Class CommonUI.CommonGenericInputActionDataTable
// (None)

class UClass* UCommonGenericInputActionDataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonGenericInputActionDataTable");

	return Clss;
}


// CommonGenericInputActionDataTable CommonUI.Default__CommonGenericInputActionDataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonGenericInputActionDataTable* UCommonGenericInputActionDataTable::GetDefaultObj()
{
	static class UCommonGenericInputActionDataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonGenericInputActionDataTable*>(UCommonGenericInputActionDataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonInputActionDataProcessor
// (None)

class UClass* UCommonInputActionDataProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputActionDataProcessor");

	return Clss;
}


// CommonInputActionDataProcessor CommonUI.Default__CommonInputActionDataProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputActionDataProcessor* UCommonInputActionDataProcessor::GetDefaultObj()
{
	static class UCommonInputActionDataProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputActionDataProcessor*>(UCommonInputActionDataProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonUIActionRouterBase
// (None)

class UClass* UCommonUIActionRouterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIActionRouterBase");

	return Clss;
}


// CommonUIActionRouterBase CommonUI.Default__CommonUIActionRouterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIActionRouterBase* UCommonUIActionRouterBase::GetDefaultObj()
{
	static class UCommonUIActionRouterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIActionRouterBase*>(UCommonUIActionRouterBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonUIInputSettings
// (None)

class UClass* UCommonUIInputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIInputSettings");

	return Clss;
}


// CommonUIInputSettings CommonUI.Default__CommonUIInputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIInputSettings* UCommonUIInputSettings::GetDefaultObj()
{
	static class UCommonUIInputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIInputSettings*>(UCommonUIInputSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonStyleSheet
// (None)

class UClass* UCommonStyleSheet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonStyleSheet");

	return Clss;
}


// CommonStyleSheet CommonUI.Default__CommonStyleSheet
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonStyleSheet* UCommonStyleSheet::GetDefaultObj()
{
	static class UCommonStyleSheet* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonStyleSheet*>(UCommonStyleSheet::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonActivatableWidgetContainerBase
// (None)

class UClass* UCommonActivatableWidgetContainerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActivatableWidgetContainerBase");

	return Clss;
}


// CommonActivatableWidgetContainerBase CommonUI.Default__CommonActivatableWidgetContainerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActivatableWidgetContainerBase* UCommonActivatableWidgetContainerBase::GetDefaultObj()
{
	static class UCommonActivatableWidgetContainerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActivatableWidgetContainerBase*>(UCommonActivatableWidgetContainerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidgetContainerBase::SetTransitionDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "SetTransitionDuration");

	Params::UCommonActivatableWidgetContainerBase_SetTransitionDuration_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget*    WidgetToRemove                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidgetContainerBase::RemoveWidget(class UCommonActivatableWidget* WidgetToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "RemoveWidget");

	Params::UCommonActivatableWidgetContainerBase_RemoveWidget_Params Parms{};

	Parms.WidgetToRemove = WidgetToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonActivatableWidgetContainerBase::GetTransitionDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "GetTransitionDuration");

	Params::UCommonActivatableWidgetContainerBase_GetTransitionDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "GetActiveWidget");

	Params::UCommonActivatableWidgetContainerBase_GetActiveWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatableWidgetContainerBase::ClearWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "ClearWidgets");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonActivatableWidget>ActivatableWidgetClass                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "BP_AddWidget");

	Params::UCommonActivatableWidgetContainerBase_BP_AddWidget_Params Parms{};

	Parms.ActivatableWidgetClass = ActivatableWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUI.CommonActivatableWidgetStack
// (None)

class UClass* UCommonActivatableWidgetStack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActivatableWidgetStack");

	return Clss;
}


// CommonActivatableWidgetStack CommonUI.Default__CommonActivatableWidgetStack
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActivatableWidgetStack* UCommonActivatableWidgetStack::GetDefaultObj()
{
	static class UCommonActivatableWidgetStack* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActivatableWidgetStack*>(UCommonActivatableWidgetStack::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUI.CommonActivatableWidgetQueue
// (None)

class UClass* UCommonActivatableWidgetQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActivatableWidgetQueue");

	return Clss;
}


// CommonActivatableWidgetQueue CommonUI.Default__CommonActivatableWidgetQueue
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActivatableWidgetQueue* UCommonActivatableWidgetQueue::GetDefaultObj()
{
	static class UCommonActivatableWidgetQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActivatableWidgetQueue*>(UCommonActivatableWidgetQueue::StaticClass()->DefaultObject);

	return Default;
}

}


