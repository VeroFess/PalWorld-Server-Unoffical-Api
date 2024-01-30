#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// (None)

class UClass* UOodleNetworkTrainerCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OodleNetworkTrainerCommandlet");

	return Clss;
}


// OodleNetworkTrainerCommandlet OodleNetworkHandlerComponent.Default__OodleNetworkTrainerCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UOodleNetworkTrainerCommandlet* UOodleNetworkTrainerCommandlet::GetDefaultObj()
{
	static class UOodleNetworkTrainerCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UOodleNetworkTrainerCommandlet*>(UOodleNetworkTrainerCommandlet::StaticClass()->DefaultObject);

	return Default;
}

}


