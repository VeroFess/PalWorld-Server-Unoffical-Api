#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ToolMenus.ToolMenu
// (None)

class UClass* UToolMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenu");

	return Clss;
}


// ToolMenu ToolMenus.Default__ToolMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenu* UToolMenu::GetDefaultObj()
{
	static class UToolMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenu*>(UToolMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolMenus.ToolMenu.InitMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FToolMenuOwner              Owner                                                            (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiBoxType           Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenu::InitMenu(const struct FToolMenuOwner& Owner, class FName Name, class FName Parent, enum class EMultiBoxType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenu", "InitMenu");

	Params::UToolMenu_InitMenu_Params Parms{};

	Parms.Owner = Owner;
	Parms.Name = Name;
	Parms.Parent = Parent;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenu.AddSubMenuScript
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Owner                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Label                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Tooltip                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UToolMenu*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolMenu* UToolMenu::AddSubMenuScript(class FName Owner, class FName SectionName, class FName Name, class FText& Label, class FText& Tooltip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenu", "AddSubMenuScript");

	Params::UToolMenu_AddSubMenuScript_Params Parms{};

	Parms.Owner = Owner;
	Parms.SectionName = SectionName;
	Parms.Name = Name;
	Parms.Label = Label;
	Parms.Tooltip = Tooltip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenu.AddSectionScript
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Label                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        InsertName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EToolMenuInsertType     InsertType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenu::AddSectionScript(class FName SectionName, class FText& Label, class FName InsertName, enum class EToolMenuInsertType InsertType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenu", "AddSectionScript");

	Params::UToolMenu_AddSectionScript_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.Label = Label;
	Parms.InsertName = InsertName;
	Parms.InsertType = InsertType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenu.AddMenuEntryObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UToolMenuEntryScript*        InObject                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenu::AddMenuEntryObject(class UToolMenuEntryScript* InObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenu", "AddMenuEntryObject");

	Params::UToolMenu_AddMenuEntryObject_Params Parms{};

	Parms.InObject = InObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenu.AddMenuEntry
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToolMenuEntry              Args                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenu::AddMenuEntry(class FName SectionName, struct FToolMenuEntry& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenu", "AddMenuEntry");

	Params::UToolMenu_AddMenuEntry_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.Args = Args;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenu.AddDynamicSectionScript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToolMenuSectionDynamic*     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenu::AddDynamicSectionScript(class FName SectionName, class UToolMenuSectionDynamic* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenu", "AddDynamicSectionScript");

	Params::UToolMenu_AddDynamicSectionScript_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ToolMenus.ToolMenuContextBase
// (None)

class UClass* UToolMenuContextBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenuContextBase");

	return Clss;
}


// ToolMenuContextBase ToolMenus.Default__ToolMenuContextBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenuContextBase* UToolMenuContextBase::GetDefaultObj()
{
	static class UToolMenuContextBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenuContextBase*>(UToolMenuContextBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ToolMenus.SlateTabManagerContext
// (None)

class UClass* USlateTabManagerContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateTabManagerContext");

	return Clss;
}


// SlateTabManagerContext ToolMenus.Default__SlateTabManagerContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateTabManagerContext* USlateTabManagerContext::GetDefaultObj()
{
	static class USlateTabManagerContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateTabManagerContext*>(USlateTabManagerContext::StaticClass()->DefaultObject);

	return Default;
}


// Class ToolMenus.ToolMenuEntryScript
// (None)

class UClass* UToolMenuEntryScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenuEntryScript");

	return Clss;
}


// ToolMenuEntryScript ToolMenus.Default__ToolMenuEntryScript
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenuEntryScript* UToolMenuEntryScript::GetDefaultObj()
{
	static class UToolMenuEntryScript* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenuEntryScript*>(UToolMenuEntryScript::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolMenus.ToolMenuEntryScript.RegisterMenuEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UToolMenuEntryScript::RegisterMenuEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "RegisterMenuEntry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuEntryScript.IsVisible
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolMenuEntryScript::IsVisible(struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "IsVisible");

	Params::UToolMenuEntryScript_IsVisible_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryScript.InitEntry
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        OwnerName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Menu                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Section                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Label                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Tooltip                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuEntryScript::InitEntry(class FName OwnerName, class FName Menu, class FName Section, class FName Name, class FText& Label, class FText& Tooltip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "InitEntry");

	Params::UToolMenuEntryScript_InitEntry_Params Parms{};

	Parms.OwnerName = OwnerName;
	Parms.Menu = Menu;
	Parms.Section = Section;
	Parms.Name = Name;
	Parms.Label = Label;
	Parms.Tooltip = Tooltip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuEntryScript.GetToolTip
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UToolMenuEntryScript::GetToolTip(struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "GetToolTip");

	Params::UToolMenuEntryScript_GetToolTip_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryScript.GetLabel
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UToolMenuEntryScript::GetLabel(struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "GetLabel");

	Params::UToolMenuEntryScript_GetLabel_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryScript.GetIcon
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptSlateIcon            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FScriptSlateIcon UToolMenuEntryScript::GetIcon(struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "GetIcon");

	Params::UToolMenuEntryScript_GetIcon_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryScript.GetCheckState
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UToolMenuEntryScript::GetCheckState(struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "GetCheckState");

	Params::UToolMenuEntryScript_GetCheckState_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryScript.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuEntryScript::Execute(struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "Execute");

	Params::UToolMenuEntryScript_Execute_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToolMenus.ToolMenuEntryScript.ConstructMenuEntry
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UToolMenu*                   Menu                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuEntryScript::ConstructMenuEntry(class UToolMenu* Menu, class FName SectionName, struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "ConstructMenuEntry");

	Params::UToolMenuEntryScript_ConstructMenuEntry_Params Parms{};

	Parms.Menu = Menu;
	Parms.SectionName = SectionName;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToolMenus.ToolMenuEntryScript.CanExecute
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolMenuEntryScript::CanExecute(struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryScript", "CanExecute");

	Params::UToolMenuEntryScript_CanExecute_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolMenus.ToolMenus
// (None)

class UClass* UToolMenus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenus");

	return Clss;
}


// ToolMenus ToolMenus.Default__ToolMenus
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenus* UToolMenus::GetDefaultObj()
{
	static class UToolMenus* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenus*>(UToolMenus::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolMenus.ToolMenus.UnregisterOwnerByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InOwnerName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenus::UnregisterOwnerByName(class FName InOwnerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "UnregisterOwnerByName");

	Params::UToolMenus_UnregisterOwnerByName_Params Parms{};

	Parms.InOwnerName = InOwnerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenus.SetSectionPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MenuName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OtherSectionName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EToolMenuInsertType     PositionType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenus::SetSectionPosition(class FName MenuName, class FName SectionName, class FName OtherSectionName, enum class EToolMenuInsertType PositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "SetSectionPosition");

	Params::UToolMenus_SetSectionPosition_Params Parms{};

	Parms.MenuName = MenuName;
	Parms.SectionName = SectionName;
	Parms.OtherSectionName = OtherSectionName;
	Parms.PositionType = PositionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenus.SetSectionLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MenuName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Label                                                            (ConstParm, Parm, NativeAccessSpecifierPublic)

void UToolMenus::SetSectionLabel(class FName MenuName, class FName SectionName, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "SetSectionLabel");

	Params::UToolMenus_SetSectionLabel_Params Parms{};

	Parms.MenuName = MenuName;
	Parms.SectionName = SectionName;
	Parms.Label = Label;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenus.RemoveSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MenuName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Section                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenus::RemoveSection(class FName MenuName, class FName Section)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "RemoveSection");

	Params::UToolMenus_RemoveSection_Params Parms{};

	Parms.MenuName = MenuName;
	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenus.RemoveMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MenuName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenus::RemoveMenu(class FName MenuName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "RemoveMenu");

	Params::UToolMenus_RemoveMenu_Params Parms{};

	Parms.MenuName = MenuName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenus.RemoveEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MenuName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Section                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenus::RemoveEntry(class FName MenuName, class FName Section, class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "RemoveEntry");

	Params::UToolMenus_RemoveEntry_Params Parms{};

	Parms.MenuName = MenuName;
	Parms.Section = Section;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenus.RegisterMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Parent                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMultiBoxType           Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWarnIfAlreadyRegistered                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToolMenu*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolMenu* UToolMenus::RegisterMenu(class FName Name, class FName Parent, enum class EMultiBoxType Type, bool bWarnIfAlreadyRegistered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "RegisterMenu");

	Params::UToolMenus_RegisterMenu_Params Parms{};

	Parms.Name = Name;
	Parms.Parent = Parent;
	Parms.Type = Type;
	Parms.bWarnIfAlreadyRegistered = bWarnIfAlreadyRegistered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenus.RefreshMenuWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolMenus::RefreshMenuWidget(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "RefreshMenuWidget");

	Params::UToolMenus_RefreshMenuWidget_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenus.RefreshAllWidgets
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UToolMenus::RefreshAllWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "RefreshAllWidgets");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenus.IsMenuRegistered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolMenus::IsMenuRegistered(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "IsMenuRegistered");

	Params::UToolMenus_IsMenuRegistered_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenus.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UToolMenus*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolMenus* UToolMenus::Get()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "Get");

	Params::UToolMenus_Get_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenus.FindMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToolMenu*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolMenu* UToolMenus::FindMenu(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "FindMenu");

	Params::UToolMenus_FindMenu_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenus.FindContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuContext            InContext                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      InClass                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UToolMenus::FindContext(struct FToolMenuContext& InContext, class UClass* InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "FindContext");

	Params::UToolMenus_FindContext_Params Parms{};

	Parms.InContext = InContext;
	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenus.ExtendMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToolMenu*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolMenu* UToolMenus::ExtendMenu(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "ExtendMenu");

	Params::UToolMenus_ExtendMenu_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenus.AddMenuEntryObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UToolMenuEntryScript*        MenuEntryObject                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolMenus::AddMenuEntryObject(class UToolMenuEntryScript* MenuEntryObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenus", "AddMenuEntryObject");

	Params::UToolMenus_AddMenuEntryObject_Params Parms{};

	Parms.MenuEntryObject = MenuEntryObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolMenus.ToolMenuContextExtensions
// (None)

class UClass* UToolMenuContextExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenuContextExtensions");

	return Clss;
}


// ToolMenuContextExtensions ToolMenus.Default__ToolMenuContextExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenuContextExtensions* UToolMenuContextExtensions::GetDefaultObj()
{
	static class UToolMenuContextExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenuContextExtensions*>(UToolMenuContextExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolMenus.ToolMenuContextExtensions.FindByClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UToolMenuContextExtensions::FindByClass(struct FToolMenuContext& Context, TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuContextExtensions", "FindByClass");

	Params::UToolMenuContextExtensions_FindByClass_Params Parms{};

	Parms.Context = Context;
	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolMenus.ToolMenuEntryExtensions
// (None)

class UClass* UToolMenuEntryExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenuEntryExtensions");

	return Clss;
}


// ToolMenuEntryExtensions ToolMenus.Default__ToolMenuEntryExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenuEntryExtensions* UToolMenuEntryExtensions::GetDefaultObj()
{
	static class UToolMenuEntryExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenuEntryExtensions*>(UToolMenuEntryExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolMenus.ToolMenuEntryExtensions.SetToolTip
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuEntry              Target                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Tooltip                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuEntryExtensions::SetToolTip(struct FToolMenuEntry& Target, class FText& Tooltip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "SetToolTip");

	Params::UToolMenuEntryExtensions_SetToolTip_Params Parms{};

	Parms.Target = Target;
	Parms.Tooltip = Tooltip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuEntryExtensions.SetStringCommand
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuEntry              Target                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EToolMenuStringCommandTypeType                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CustomType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenuEntryExtensions::SetStringCommand(struct FToolMenuEntry& Target, enum class EToolMenuStringCommandType Type, class FName CustomType, const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "SetStringCommand");

	Params::UToolMenuEntryExtensions_SetStringCommand_Params Parms{};

	Parms.Target = Target;
	Parms.Type = Type;
	Parms.CustomType = CustomType;
	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuEntryExtensions.SetLabel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuEntry              Target                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Label                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuEntryExtensions::SetLabel(struct FToolMenuEntry& Target, class FText& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "SetLabel");

	Params::UToolMenuEntryExtensions_SetLabel_Params Parms{};

	Parms.Target = Target;
	Parms.Label = Label;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuEntryExtensions.SetIcon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuEntry              Target                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        StyleSetName                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StyleName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SmallStyleName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenuEntryExtensions::SetIcon(struct FToolMenuEntry& Target, class FName StyleSetName, class FName StyleName, class FName SmallStyleName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "SetIcon");

	Params::UToolMenuEntryExtensions_SetIcon_Params Parms{};

	Parms.Target = Target;
	Parms.StyleSetName = StyleSetName;
	Parms.StyleName = StyleName;
	Parms.SmallStyleName = SmallStyleName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuEntryExtensions.MakeToolMenuOwner
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToolMenuOwner              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FToolMenuOwner UToolMenuEntryExtensions::MakeToolMenuOwner(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "MakeToolMenuOwner");

	Params::UToolMenuEntryExtensions_MakeToolMenuOwner_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryExtensions.MakeStringCommand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EToolMenuStringCommandTypeType                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CustomType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToolMenuStringCommand      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FToolMenuStringCommand UToolMenuEntryExtensions::MakeStringCommand(enum class EToolMenuStringCommandType Type, class FName CustomType, const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "MakeStringCommand");

	Params::UToolMenuEntryExtensions_MakeStringCommand_Params Parms{};

	Parms.Type = Type;
	Parms.CustomType = CustomType;
	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryExtensions.MakeScriptSlateIcon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        StyleSetName                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StyleName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SmallStyleName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptSlateIcon            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FScriptSlateIcon UToolMenuEntryExtensions::MakeScriptSlateIcon(class FName StyleSetName, class FName StyleName, class FName SmallStyleName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "MakeScriptSlateIcon");

	Params::UToolMenuEntryExtensions_MakeScriptSlateIcon_Params Parms{};

	Parms.StyleSetName = StyleSetName;
	Parms.StyleName = StyleName;
	Parms.SmallStyleName = SmallStyleName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryExtensions.InitMenuEntry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InOwner                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InName                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        InLabel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        InToolTip                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EToolMenuStringCommandTypeCommandType                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CustomCommandType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CommandString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToolMenuEntry              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FToolMenuEntry UToolMenuEntryExtensions::InitMenuEntry(class FName InOwner, class FName InName, class FText& InLabel, class FText& InToolTip, enum class EToolMenuStringCommandType CommandType, class FName CustomCommandType, const class FString& CommandString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "InitMenuEntry");

	Params::UToolMenuEntryExtensions_InitMenuEntry_Params Parms{};

	Parms.InOwner = InOwner;
	Parms.InName = InName;
	Parms.InLabel = InLabel;
	Parms.InToolTip = InToolTip;
	Parms.CommandType = CommandType;
	Parms.CustomCommandType = CustomCommandType;
	Parms.CommandString = CommandString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryExtensions.GetToolTip
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuEntry              Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UToolMenuEntryExtensions::GetToolTip(struct FToolMenuEntry& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "GetToolTip");

	Params::UToolMenuEntryExtensions_GetToolTip_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryExtensions.GetLabel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuEntry              Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UToolMenuEntryExtensions::GetLabel(struct FToolMenuEntry& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "GetLabel");

	Params::UToolMenuEntryExtensions_GetLabel_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuEntryExtensions.BreakToolMenuOwner
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FToolMenuOwner              InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenuEntryExtensions::BreakToolMenuOwner(struct FToolMenuOwner& InValue, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "BreakToolMenuOwner");

	Params::UToolMenuEntryExtensions_BreakToolMenuOwner_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function ToolMenus.ToolMenuEntryExtensions.BreakStringCommand
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FToolMenuStringCommand      InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EToolMenuStringCommandTypeType                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CustomType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenuEntryExtensions::BreakStringCommand(struct FToolMenuStringCommand& InValue, enum class EToolMenuStringCommandType* Type, class FName* CustomType, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "BreakStringCommand");

	Params::UToolMenuEntryExtensions_BreakStringCommand_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Type != nullptr)
		*Type = Parms.Type;

	if (CustomType != nullptr)
		*CustomType = Parms.CustomType;

	if (String != nullptr)
		*String = std::move(Parms.String);

}


// Function ToolMenus.ToolMenuEntryExtensions.BreakScriptSlateIcon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptSlateIcon            InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        StyleSetName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StyleName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SmallStyleName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenuEntryExtensions::BreakScriptSlateIcon(struct FScriptSlateIcon& InValue, class FName* StyleSetName, class FName* StyleName, class FName* SmallStyleName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuEntryExtensions", "BreakScriptSlateIcon");

	Params::UToolMenuEntryExtensions_BreakScriptSlateIcon_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StyleSetName != nullptr)
		*StyleSetName = Parms.StyleSetName;

	if (StyleName != nullptr)
		*StyleName = Parms.StyleName;

	if (SmallStyleName != nullptr)
		*SmallStyleName = Parms.SmallStyleName;

}


// Class ToolMenus.ToolMenuSectionExtensions
// (None)

class UClass* UToolMenuSectionExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenuSectionExtensions");

	return Clss;
}


// ToolMenuSectionExtensions ToolMenus.Default__ToolMenuSectionExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenuSectionExtensions* UToolMenuSectionExtensions::GetDefaultObj()
{
	static class UToolMenuSectionExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenuSectionExtensions*>(UToolMenuSectionExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolMenus.ToolMenuSectionExtensions.SetLabel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuSection            Section                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Label                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuSectionExtensions::SetLabel(struct FToolMenuSection& Section, class FText& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuSectionExtensions", "SetLabel");

	Params::UToolMenuSectionExtensions_SetLabel_Params Parms{};

	Parms.Section = Section;
	Parms.Label = Label;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuSectionExtensions.GetLabel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuSection            Section                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UToolMenuSectionExtensions::GetLabel(struct FToolMenuSection& Section)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuSectionExtensions", "GetLabel");

	Params::UToolMenuSectionExtensions_GetLabel_Params Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolMenus.ToolMenuSectionExtensions.AddEntryObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuSection            Section                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UToolMenuEntryScript*        InObject                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolMenuSectionExtensions::AddEntryObject(struct FToolMenuSection& Section, class UToolMenuEntryScript* InObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuSectionExtensions", "AddEntryObject");

	Params::UToolMenuSectionExtensions_AddEntryObject_Params Parms{};

	Parms.Section = Section;
	Parms.InObject = InObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolMenus.ToolMenuSectionExtensions.AddEntry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FToolMenuSection            Section                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FToolMenuEntry              Args                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuSectionExtensions::AddEntry(struct FToolMenuSection& Section, struct FToolMenuEntry& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuSectionExtensions", "AddEntry");

	Params::UToolMenuSectionExtensions_AddEntry_Params Parms{};

	Parms.Section = Section;
	Parms.Args = Args;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ToolMenus.ToolMenuSectionDynamic
// (None)

class UClass* UToolMenuSectionDynamic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenuSectionDynamic");

	return Clss;
}


// ToolMenuSectionDynamic ToolMenus.Default__ToolMenuSectionDynamic
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenuSectionDynamic* UToolMenuSectionDynamic::GetDefaultObj()
{
	static class UToolMenuSectionDynamic* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenuSectionDynamic*>(UToolMenuSectionDynamic::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolMenus.ToolMenuSectionDynamic.ConstructSections
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UToolMenu*                   Menu                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToolMenuContext            Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UToolMenuSectionDynamic::ConstructSections(class UToolMenu* Menu, struct FToolMenuContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolMenuSectionDynamic", "ConstructSections");

	Params::UToolMenuSectionDynamic_ConstructSections_Params Parms{};

	Parms.Menu = Menu;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}

}


