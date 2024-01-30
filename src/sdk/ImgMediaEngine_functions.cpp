#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImgMediaEngine.ImgMediaPlaybackComponent
// (None)

class UClass* UImgMediaPlaybackComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImgMediaPlaybackComponent");

	return Clss;
}


// ImgMediaPlaybackComponent ImgMediaEngine.Default__ImgMediaPlaybackComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UImgMediaPlaybackComponent* UImgMediaPlaybackComponent::GetDefaultObj()
{
	static class UImgMediaPlaybackComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UImgMediaPlaybackComponent*>(UImgMediaPlaybackComponent::StaticClass()->DefaultObject);

	return Default;
}

}


