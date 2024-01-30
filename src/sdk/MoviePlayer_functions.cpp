#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MoviePlayer.MoviePlayerSettings
// (None)

class UClass* UMoviePlayerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePlayerSettings");

	return Clss;
}


// MoviePlayerSettings MoviePlayer.Default__MoviePlayerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePlayerSettings* UMoviePlayerSettings::GetDefaultObj()
{
	static class UMoviePlayerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePlayerSettings*>(UMoviePlayerSettings::StaticClass()->DefaultObject);

	return Default;
}

}


