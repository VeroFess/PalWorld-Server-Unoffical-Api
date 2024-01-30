#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkCamera.LiveLinkCameraController
// (None)

class UClass* ULiveLinkCameraController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkCameraController");

	return Clss;
}


// LiveLinkCameraController LiveLinkCamera.Default__LiveLinkCameraController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkCameraController* ULiveLinkCameraController::GetDefaultObj()
{
	static class ULiveLinkCameraController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkCameraController*>(ULiveLinkCameraController::StaticClass()->DefaultObject);

	return Default;
}

}


