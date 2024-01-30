#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Overlay.Overlays
// (None)

class UClass* UOverlays::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Overlays");

	return Clss;
}


// Overlays Overlay.Default__Overlays
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverlays* UOverlays::GetDefaultObj()
{
	static class UOverlays* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlays*>(UOverlays::StaticClass()->DefaultObject);

	return Default;
}


// Class Overlay.BasicOverlays
// (None)

class UClass* UBasicOverlays::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicOverlays");

	return Clss;
}


// BasicOverlays Overlay.Default__BasicOverlays
// (Public, ClassDefaultObject, ArchetypeObject)

class UBasicOverlays* UBasicOverlays::GetDefaultObj()
{
	static class UBasicOverlays* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasicOverlays*>(UBasicOverlays::StaticClass()->DefaultObject);

	return Default;
}


// Class Overlay.LocalizedOverlays
// (None)

class UClass* ULocalizedOverlays::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalizedOverlays");

	return Clss;
}


// LocalizedOverlays Overlay.Default__LocalizedOverlays
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocalizedOverlays* ULocalizedOverlays::GetDefaultObj()
{
	static class ULocalizedOverlays* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalizedOverlays*>(ULocalizedOverlays::StaticClass()->DefaultObject);

	return Default;
}

}


