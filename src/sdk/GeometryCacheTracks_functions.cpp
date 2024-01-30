#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// (None)

class UClass* UMovieSceneGeometryCacheSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGeometryCacheSection");

	return Clss;
}


// MovieSceneGeometryCacheSection GeometryCacheTracks.Default__MovieSceneGeometryCacheSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGeometryCacheSection* UMovieSceneGeometryCacheSection::GetDefaultObj()
{
	static class UMovieSceneGeometryCacheSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGeometryCacheSection*>(UMovieSceneGeometryCacheSection::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// (None)

class UClass* UMovieSceneGeometryCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGeometryCacheTrack");

	return Clss;
}


// MovieSceneGeometryCacheTrack GeometryCacheTracks.Default__MovieSceneGeometryCacheTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGeometryCacheTrack* UMovieSceneGeometryCacheTrack::GetDefaultObj()
{
	static class UMovieSceneGeometryCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGeometryCacheTrack*>(UMovieSceneGeometryCacheTrack::StaticClass()->DefaultObject);

	return Default;
}

}


