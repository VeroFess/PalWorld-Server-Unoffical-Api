#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SlateCore.SlateWidgetStyleAsset
// (None)

class UClass* USlateWidgetStyleAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateWidgetStyleAsset");

	return Clss;
}


// SlateWidgetStyleAsset SlateCore.Default__SlateWidgetStyleAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateWidgetStyleAsset* USlateWidgetStyleAsset::GetDefaultObj()
{
	static class USlateWidgetStyleAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateWidgetStyleAsset*>(USlateWidgetStyleAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class SlateCore.FontBulkData
// (None)

class UClass* UFontBulkData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FontBulkData");

	return Clss;
}


// FontBulkData SlateCore.Default__FontBulkData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFontBulkData* UFontBulkData::GetDefaultObj()
{
	static class UFontBulkData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFontBulkData*>(UFontBulkData::StaticClass()->DefaultObject);

	return Default;
}


// Class SlateCore.FontFaceInterface
// (None)

class UClass* IFontFaceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FontFaceInterface");

	return Clss;
}


// FontFaceInterface SlateCore.Default__FontFaceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IFontFaceInterface* IFontFaceInterface::GetDefaultObj()
{
	static class IFontFaceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IFontFaceInterface*>(IFontFaceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SlateCore.FontProviderInterface
// (None)

class UClass* IFontProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FontProviderInterface");

	return Clss;
}


// FontProviderInterface SlateCore.Default__FontProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IFontProviderInterface* IFontProviderInterface::GetDefaultObj()
{
	static class IFontProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IFontProviderInterface*>(IFontProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SlateCore.SlateTypes
// (None)

class UClass* USlateTypes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateTypes");

	return Clss;
}


// SlateTypes SlateCore.Default__SlateTypes
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateTypes* USlateTypes::GetDefaultObj()
{
	static class USlateTypes* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateTypes*>(USlateTypes::StaticClass()->DefaultObject);

	return Default;
}


// Class SlateCore.SlateWidgetStyleContainerBase
// (None)

class UClass* USlateWidgetStyleContainerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateWidgetStyleContainerBase");

	return Clss;
}


// SlateWidgetStyleContainerBase SlateCore.Default__SlateWidgetStyleContainerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateWidgetStyleContainerBase* USlateWidgetStyleContainerBase::GetDefaultObj()
{
	static class USlateWidgetStyleContainerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateWidgetStyleContainerBase*>(USlateWidgetStyleContainerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class SlateCore.SlateWidgetStyleContainerInterface
// (None)

class UClass* ISlateWidgetStyleContainerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateWidgetStyleContainerInterface");

	return Clss;
}


// SlateWidgetStyleContainerInterface SlateCore.Default__SlateWidgetStyleContainerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISlateWidgetStyleContainerInterface* ISlateWidgetStyleContainerInterface::GetDefaultObj()
{
	static class ISlateWidgetStyleContainerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISlateWidgetStyleContainerInterface*>(ISlateWidgetStyleContainerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SlateCore.SlateThemeManager
// (None)

class UClass* USlateThemeManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateThemeManager");

	return Clss;
}


// SlateThemeManager SlateCore.Default__SlateThemeManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateThemeManager* USlateThemeManager::GetDefaultObj()
{
	static class USlateThemeManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateThemeManager*>(USlateThemeManager::StaticClass()->DefaultObject);

	return Default;
}

}


