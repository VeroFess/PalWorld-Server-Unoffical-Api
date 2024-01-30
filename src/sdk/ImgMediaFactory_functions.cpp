#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImgMediaFactory.ImgMediaSettings
// (None)

class UClass* UImgMediaSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImgMediaSettings");

	return Clss;
}


// ImgMediaSettings ImgMediaFactory.Default__ImgMediaSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UImgMediaSettings* UImgMediaSettings::GetDefaultObj()
{
	static class UImgMediaSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UImgMediaSettings*>(UImgMediaSettings::StaticClass()->DefaultObject);

	return Default;
}

}


