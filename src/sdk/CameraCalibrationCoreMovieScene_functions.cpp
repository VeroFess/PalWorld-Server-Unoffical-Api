#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CameraCalibrationCoreMovieScene.MovieSceneLensComponentSection
// (None)

class UClass* UMovieSceneLensComponentSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLensComponentSection");

	return Clss;
}


// MovieSceneLensComponentSection CameraCalibrationCoreMovieScene.Default__MovieSceneLensComponentSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLensComponentSection* UMovieSceneLensComponentSection::GetDefaultObj()
{
	static class UMovieSceneLensComponentSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLensComponentSection*>(UMovieSceneLensComponentSection::StaticClass()->DefaultObject);

	return Default;
}


// Class CameraCalibrationCoreMovieScene.MovieSceneLensComponentTrack
// (None)

class UClass* UMovieSceneLensComponentTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLensComponentTrack");

	return Clss;
}


// MovieSceneLensComponentTrack CameraCalibrationCoreMovieScene.Default__MovieSceneLensComponentTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLensComponentTrack* UMovieSceneLensComponentTrack::GetDefaultObj()
{
	static class UMovieSceneLensComponentTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLensComponentTrack*>(UMovieSceneLensComponentTrack::StaticClass()->DefaultObject);

	return Default;
}

}


