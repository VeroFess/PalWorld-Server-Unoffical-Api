#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Slate.ToolMenuBase
// (None)

class UClass* UToolMenuBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolMenuBase");

	return Clss;
}


// ToolMenuBase Slate.Default__ToolMenuBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolMenuBase* UToolMenuBase::GetDefaultObj()
{
	static class UToolMenuBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolMenuBase*>(UToolMenuBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.SlateSettings
// (None)

class UClass* USlateSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateSettings");

	return Clss;
}


// SlateSettings Slate.Default__SlateSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateSettings* USlateSettings::GetDefaultObj()
{
	static class USlateSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateSettings*>(USlateSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.ButtonWidgetStyle
// (None)

class UClass* UButtonWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonWidgetStyle");

	return Clss;
}


// ButtonWidgetStyle Slate.Default__ButtonWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UButtonWidgetStyle* UButtonWidgetStyle::GetDefaultObj()
{
	static class UButtonWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonWidgetStyle*>(UButtonWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.CheckBoxWidgetStyle
// (None)

class UClass* UCheckBoxWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckBoxWidgetStyle");

	return Clss;
}


// CheckBoxWidgetStyle Slate.Default__CheckBoxWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckBoxWidgetStyle* UCheckBoxWidgetStyle::GetDefaultObj()
{
	static class UCheckBoxWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckBoxWidgetStyle*>(UCheckBoxWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.ComboBoxWidgetStyle
// (None)

class UClass* UComboBoxWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBoxWidgetStyle");

	return Clss;
}


// ComboBoxWidgetStyle Slate.Default__ComboBoxWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBoxWidgetStyle* UComboBoxWidgetStyle::GetDefaultObj()
{
	static class UComboBoxWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBoxWidgetStyle*>(UComboBoxWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.ComboButtonWidgetStyle
// (None)

class UClass* UComboButtonWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboButtonWidgetStyle");

	return Clss;
}


// ComboButtonWidgetStyle Slate.Default__ComboButtonWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboButtonWidgetStyle* UComboButtonWidgetStyle::GetDefaultObj()
{
	static class UComboButtonWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboButtonWidgetStyle*>(UComboButtonWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.EditableTextBoxWidgetStyle
// (None)

class UClass* UEditableTextBoxWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableTextBoxWidgetStyle");

	return Clss;
}


// EditableTextBoxWidgetStyle Slate.Default__EditableTextBoxWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableTextBoxWidgetStyle* UEditableTextBoxWidgetStyle::GetDefaultObj()
{
	static class UEditableTextBoxWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableTextBoxWidgetStyle*>(UEditableTextBoxWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.EditableTextWidgetStyle
// (None)

class UClass* UEditableTextWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableTextWidgetStyle");

	return Clss;
}


// EditableTextWidgetStyle Slate.Default__EditableTextWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableTextWidgetStyle* UEditableTextWidgetStyle::GetDefaultObj()
{
	static class UEditableTextWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableTextWidgetStyle*>(UEditableTextWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.ProgressWidgetStyle
// (None)

class UClass* UProgressWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressWidgetStyle");

	return Clss;
}


// ProgressWidgetStyle Slate.Default__ProgressWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UProgressWidgetStyle* UProgressWidgetStyle::GetDefaultObj()
{
	static class UProgressWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressWidgetStyle*>(UProgressWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.ScrollBarWidgetStyle
// (None)

class UClass* UScrollBarWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBarWidgetStyle");

	return Clss;
}


// ScrollBarWidgetStyle Slate.Default__ScrollBarWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBarWidgetStyle* UScrollBarWidgetStyle::GetDefaultObj()
{
	static class UScrollBarWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBarWidgetStyle*>(UScrollBarWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.ScrollBoxWidgetStyle
// (None)

class UClass* UScrollBoxWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBoxWidgetStyle");

	return Clss;
}


// ScrollBoxWidgetStyle Slate.Default__ScrollBoxWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBoxWidgetStyle* UScrollBoxWidgetStyle::GetDefaultObj()
{
	static class UScrollBoxWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBoxWidgetStyle*>(UScrollBoxWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.SpinBoxWidgetStyle
// (None)

class UClass* USpinBoxWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpinBoxWidgetStyle");

	return Clss;
}


// SpinBoxWidgetStyle Slate.Default__SpinBoxWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USpinBoxWidgetStyle* USpinBoxWidgetStyle::GetDefaultObj()
{
	static class USpinBoxWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USpinBoxWidgetStyle*>(USpinBoxWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class Slate.TextBlockWidgetStyle
// (None)

class UClass* UTextBlockWidgetStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextBlockWidgetStyle");

	return Clss;
}


// TextBlockWidgetStyle Slate.Default__TextBlockWidgetStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextBlockWidgetStyle* UTextBlockWidgetStyle::GetDefaultObj()
{
	static class UTextBlockWidgetStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextBlockWidgetStyle*>(UTextBlockWidgetStyle::StaticClass()->DefaultObject);

	return Default;
}

}


