#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimationCore.AnimationDataSourceRegistry
// (None)

class UClass* UAnimationDataSourceRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationDataSourceRegistry");

	return Clss;
}


// AnimationDataSourceRegistry AnimationCore.Default__AnimationDataSourceRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationDataSourceRegistry* UAnimationDataSourceRegistry::GetDefaultObj()
{
	static class UAnimationDataSourceRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationDataSourceRegistry*>(UAnimationDataSourceRegistry::StaticClass()->DefaultObject);

	return Default;
}

}


