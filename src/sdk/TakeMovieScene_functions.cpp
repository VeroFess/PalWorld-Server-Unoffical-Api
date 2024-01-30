#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TakeMovieScene.MovieSceneTakeSection
// (None)

class UClass* UMovieSceneTakeSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTakeSection");

	return Clss;
}


// MovieSceneTakeSection TakeMovieScene.Default__MovieSceneTakeSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTakeSection* UMovieSceneTakeSection::GetDefaultObj()
{
	static class UMovieSceneTakeSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTakeSection*>(UMovieSceneTakeSection::StaticClass()->DefaultObject);

	return Default;
}


// Class TakeMovieScene.MovieSceneTakeSettings
// (None)

class UClass* UMovieSceneTakeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTakeSettings");

	return Clss;
}


// MovieSceneTakeSettings TakeMovieScene.Default__MovieSceneTakeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTakeSettings* UMovieSceneTakeSettings::GetDefaultObj()
{
	static class UMovieSceneTakeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTakeSettings*>(UMovieSceneTakeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class TakeMovieScene.MovieSceneTakeTrack
// (None)

class UClass* UMovieSceneTakeTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTakeTrack");

	return Clss;
}


// MovieSceneTakeTrack TakeMovieScene.Default__MovieSceneTakeTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTakeTrack* UMovieSceneTakeTrack::GetDefaultObj()
{
	static class UMovieSceneTakeTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTakeTrack*>(UMovieSceneTakeTrack::StaticClass()->DefaultObject);

	return Default;
}

}


