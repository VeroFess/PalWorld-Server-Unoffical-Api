#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// (None)

class UClass* UMovieSceneGeometryCollectionSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGeometryCollectionSection");

	return Clss;
}


// MovieSceneGeometryCollectionSection GeometryCollectionTracks.Default__MovieSceneGeometryCollectionSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGeometryCollectionSection* UMovieSceneGeometryCollectionSection::GetDefaultObj()
{
	static class UMovieSceneGeometryCollectionSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGeometryCollectionSection*>(UMovieSceneGeometryCollectionSection::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// (None)

class UClass* UMovieSceneGeometryCollectionTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGeometryCollectionTrack");

	return Clss;
}


// MovieSceneGeometryCollectionTrack GeometryCollectionTracks.Default__MovieSceneGeometryCollectionTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGeometryCollectionTrack* UMovieSceneGeometryCollectionTrack::GetDefaultObj()
{
	static class UMovieSceneGeometryCollectionTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGeometryCollectionTrack*>(UMovieSceneGeometryCollectionTrack::StaticClass()->DefaultObject);

	return Default;
}

}


