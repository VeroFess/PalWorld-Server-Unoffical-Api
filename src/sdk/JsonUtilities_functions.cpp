#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class JsonUtilities.JsonUtilitiesDummyObject
// (None)

class UClass* UJsonUtilitiesDummyObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonUtilitiesDummyObject");

	return Clss;
}


// JsonUtilitiesDummyObject JsonUtilities.Default__JsonUtilitiesDummyObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonUtilitiesDummyObject* UJsonUtilitiesDummyObject::GetDefaultObj()
{
	static class UJsonUtilitiesDummyObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonUtilitiesDummyObject*>(UJsonUtilitiesDummyObject::StaticClass()->DefaultObject);

	return Default;
}

}


