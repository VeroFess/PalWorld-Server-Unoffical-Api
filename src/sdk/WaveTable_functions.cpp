#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WaveTable.WaveTableBank
// (None)

class UClass* UWaveTableBank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaveTableBank");

	return Clss;
}


// WaveTableBank WaveTable.Default__WaveTableBank
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaveTableBank* UWaveTableBank::GetDefaultObj()
{
	static class UWaveTableBank* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaveTableBank*>(UWaveTableBank::StaticClass()->DefaultObject);

	return Default;
}

}


