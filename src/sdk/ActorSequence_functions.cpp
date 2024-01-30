#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ActorSequence.ActorSequence
// (None)

class UClass* UActorSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorSequence");

	return Clss;
}


// ActorSequence ActorSequence.Default__ActorSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UActorSequence* UActorSequence::GetDefaultObj()
{
	static class UActorSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorSequence*>(UActorSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class ActorSequence.ActorSequenceComponent
// (None)

class UClass* UActorSequenceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorSequenceComponent");

	return Clss;
}


// ActorSequenceComponent ActorSequence.Default__ActorSequenceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UActorSequenceComponent* UActorSequenceComponent::GetDefaultObj()
{
	static class UActorSequenceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorSequenceComponent*>(UActorSequenceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ActorSequence.ActorSequenceComponent.StopSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActorSequenceComponent::StopSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActorSequenceComponent", "StopSequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ActorSequence.ActorSequenceComponent.PlaySequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActorSequenceComponent::PlaySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActorSequenceComponent", "PlaySequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ActorSequence.ActorSequenceComponent.PauseSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActorSequenceComponent::PauseSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActorSequenceComponent", "PauseSequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ActorSequence.ActorSequencePlayer
// (None)

class UClass* UActorSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorSequencePlayer");

	return Clss;
}


// ActorSequencePlayer ActorSequence.Default__ActorSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UActorSequencePlayer* UActorSequencePlayer::GetDefaultObj()
{
	static class UActorSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorSequencePlayer*>(UActorSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}

}


