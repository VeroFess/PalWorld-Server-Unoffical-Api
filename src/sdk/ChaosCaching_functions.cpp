#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosCaching.ChaosCacheCollection
// (None)

class UClass* UChaosCacheCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCacheCollection");

	return Clss;
}


// ChaosCacheCollection ChaosCaching.Default__ChaosCacheCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosCacheCollection* UChaosCacheCollection::GetDefaultObj()
{
	static class UChaosCacheCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosCacheCollection*>(UChaosCacheCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.ChaosCacheManager
// (Actor)

class UClass* AChaosCacheManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCacheManager");

	return Clss;
}


// ChaosCacheManager ChaosCaching.Default__ChaosCacheManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AChaosCacheManager* AChaosCacheManager::GetDefaultObj()
{
	static class AChaosCacheManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaosCacheManager*>(AChaosCacheManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InCacheName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AChaosCacheManager::TriggerComponentByCache(class FName InCacheName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerComponentByCache");

	Params::AChaosCacheManager_TriggerComponentByCache_Params Parms{};

	Parms.InCacheName = InCacheName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.TriggerComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AChaosCacheManager::TriggerComponent(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerComponent");

	Params::AChaosCacheManager_TriggerComponent_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.TriggerAll
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AChaosCacheManager::TriggerAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.SetStartTime
// (Final, Native, Public)
// Parameters:
// float                              InStartTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AChaosCacheManager::SetStartTime(float InStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "SetStartTime");

	Params::AChaosCacheManager_SetStartTime_Params Parms{};

	Parms.InStartTime = InStartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AChaosCacheManager::ResetSingleTransform(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "ResetSingleTransform");

	Params::AChaosCacheManager_ResetSingleTransform_Params Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AChaosCacheManager::ResetAllComponentTransforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "ResetAllComponentTransforms");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ChaosCaching.ChaosCachePlayer
// (Actor)

class UClass* AChaosCachePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCachePlayer");

	return Clss;
}


// ChaosCachePlayer ChaosCaching.Default__ChaosCachePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class AChaosCachePlayer* AChaosCachePlayer::GetDefaultObj()
{
	static class AChaosCachePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaosCachePlayer*>(AChaosCachePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.ChaosCache
// (None)

class UClass* UChaosCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCache");

	return Clss;
}


// ChaosCache ChaosCaching.Default__ChaosCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosCache* UChaosCache::GetDefaultObj()
{
	static class UChaosCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosCache*>(UChaosCache::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.MovieSceneChaosCacheSection
// (None)

class UClass* UMovieSceneChaosCacheSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneChaosCacheSection");

	return Clss;
}


// MovieSceneChaosCacheSection ChaosCaching.Default__MovieSceneChaosCacheSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneChaosCacheSection* UMovieSceneChaosCacheSection::GetDefaultObj()
{
	static class UMovieSceneChaosCacheSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneChaosCacheSection*>(UMovieSceneChaosCacheSection::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.MovieSceneChaosCacheTrack
// (None)

class UClass* UMovieSceneChaosCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneChaosCacheTrack");

	return Clss;
}


// MovieSceneChaosCacheTrack ChaosCaching.Default__MovieSceneChaosCacheTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneChaosCacheTrack* UMovieSceneChaosCacheTrack::GetDefaultObj()
{
	static class UMovieSceneChaosCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneChaosCacheTrack*>(UMovieSceneChaosCacheTrack::StaticClass()->DefaultObject);

	return Default;
}

}


