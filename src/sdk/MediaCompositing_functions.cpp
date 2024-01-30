#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// (None)

class UClass* UMovieSceneMediaPlayerPropertySection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMediaPlayerPropertySection");

	return Clss;
}


// MovieSceneMediaPlayerPropertySection MediaCompositing.Default__MovieSceneMediaPlayerPropertySection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMediaPlayerPropertySection* UMovieSceneMediaPlayerPropertySection::GetDefaultObj()
{
	static class UMovieSceneMediaPlayerPropertySection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMediaPlayerPropertySection*>(UMovieSceneMediaPlayerPropertySection::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// (None)

class UClass* UMovieSceneMediaPlayerPropertyTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMediaPlayerPropertyTrack");

	return Clss;
}


// MovieSceneMediaPlayerPropertyTrack MediaCompositing.Default__MovieSceneMediaPlayerPropertyTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMediaPlayerPropertyTrack* UMovieSceneMediaPlayerPropertyTrack::GetDefaultObj()
{
	static class UMovieSceneMediaPlayerPropertyTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMediaPlayerPropertyTrack*>(UMovieSceneMediaPlayerPropertyTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaCompositing.MovieSceneMediaSection
// (None)

class UClass* UMovieSceneMediaSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMediaSection");

	return Clss;
}


// MovieSceneMediaSection MediaCompositing.Default__MovieSceneMediaSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMediaSection* UMovieSceneMediaSection::GetDefaultObj()
{
	static class UMovieSceneMediaSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMediaSection*>(UMovieSceneMediaSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaCompositing.MovieSceneMediaTrack
// (None)

class UClass* UMovieSceneMediaTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMediaTrack");

	return Clss;
}


// MovieSceneMediaTrack MediaCompositing.Default__MovieSceneMediaTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMediaTrack* UMovieSceneMediaTrack::GetDefaultObj()
{
	static class UMovieSceneMediaTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMediaTrack*>(UMovieSceneMediaTrack::StaticClass()->DefaultObject);

	return Default;
}

}


