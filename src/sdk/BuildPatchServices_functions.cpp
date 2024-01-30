#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BuildPatchServices.BuildPatchManifest
// (None)

class UClass* UBuildPatchManifest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildPatchManifest");

	return Clss;
}


// BuildPatchManifest BuildPatchServices.Default__BuildPatchManifest
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuildPatchManifest* UBuildPatchManifest::GetDefaultObj()
{
	static class UBuildPatchManifest* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildPatchManifest*>(UBuildPatchManifest::StaticClass()->DefaultObject);

	return Default;
}

}


