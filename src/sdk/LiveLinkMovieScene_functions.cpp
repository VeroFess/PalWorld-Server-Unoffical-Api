#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// (None)

class UClass* UMovieSceneLiveLinkSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLiveLinkSection");

	return Clss;
}


// MovieSceneLiveLinkSection LiveLinkMovieScene.Default__MovieSceneLiveLinkSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLiveLinkSection* UMovieSceneLiveLinkSection::GetDefaultObj()
{
	static class UMovieSceneLiveLinkSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLiveLinkSection*>(UMovieSceneLiveLinkSection::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// (None)

class UClass* UMovieSceneLiveLinkSubSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSection");

	return Clss;
}


// MovieSceneLiveLinkSubSection LiveLinkMovieScene.Default__MovieSceneLiveLinkSubSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLiveLinkSubSection* UMovieSceneLiveLinkSubSection::GetDefaultObj()
{
	static class UMovieSceneLiveLinkSubSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLiveLinkSubSection*>(UMovieSceneLiveLinkSubSection::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// (None)

class UClass* UMovieSceneLiveLinkSubSectionAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionAnimation");

	return Clss;
}


// MovieSceneLiveLinkSubSectionAnimation LiveLinkMovieScene.Default__MovieSceneLiveLinkSubSectionAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLiveLinkSubSectionAnimation* UMovieSceneLiveLinkSubSectionAnimation::GetDefaultObj()
{
	static class UMovieSceneLiveLinkSubSectionAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLiveLinkSubSectionAnimation*>(UMovieSceneLiveLinkSubSectionAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// (None)

class UClass* UMovieSceneLiveLinkSubSectionBasicRole::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionBasicRole");

	return Clss;
}


// MovieSceneLiveLinkSubSectionBasicRole LiveLinkMovieScene.Default__MovieSceneLiveLinkSubSectionBasicRole
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLiveLinkSubSectionBasicRole* UMovieSceneLiveLinkSubSectionBasicRole::GetDefaultObj()
{
	static class UMovieSceneLiveLinkSubSectionBasicRole* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLiveLinkSubSectionBasicRole*>(UMovieSceneLiveLinkSubSectionBasicRole::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// (None)

class UClass* UMovieSceneLiveLinkSubSectionProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionProperties");

	return Clss;
}


// MovieSceneLiveLinkSubSectionProperties LiveLinkMovieScene.Default__MovieSceneLiveLinkSubSectionProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLiveLinkSubSectionProperties* UMovieSceneLiveLinkSubSectionProperties::GetDefaultObj()
{
	static class UMovieSceneLiveLinkSubSectionProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLiveLinkSubSectionProperties*>(UMovieSceneLiveLinkSubSectionProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// (None)

class UClass* UMovieSceneLiveLinkTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLiveLinkTrack");

	return Clss;
}


// MovieSceneLiveLinkTrack LiveLinkMovieScene.Default__MovieSceneLiveLinkTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLiveLinkTrack* UMovieSceneLiveLinkTrack::GetDefaultObj()
{
	static class UMovieSceneLiveLinkTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLiveLinkTrack*>(UMovieSceneLiveLinkTrack::StaticClass()->DefaultObject);

	return Default;
}

}


