#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// (None)

class UClass* UShaderPlatformQualitySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShaderPlatformQualitySettings");

	return Clss;
}


// ShaderPlatformQualitySettings MaterialShaderQualitySettings.Default__ShaderPlatformQualitySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UShaderPlatformQualitySettings* UShaderPlatformQualitySettings::GetDefaultObj()
{
	static class UShaderPlatformQualitySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UShaderPlatformQualitySettings*>(UShaderPlatformQualitySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// (None)

class UClass* UMaterialShaderQualitySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialShaderQualitySettings");

	return Clss;
}


// MaterialShaderQualitySettings MaterialShaderQualitySettings.Default__MaterialShaderQualitySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialShaderQualitySettings* UMaterialShaderQualitySettings::GetDefaultObj()
{
	static class UMaterialShaderQualitySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialShaderQualitySettings*>(UMaterialShaderQualitySettings::StaticClass()->DefaultObject);

	return Default;
}

}


