#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Paper2D.PaperCharacter
// (Actor, Pawn)

class UClass* APaperCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperCharacter");

	return Clss;
}


// PaperCharacter Paper2D.Default__PaperCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class APaperCharacter* APaperCharacter::GetDefaultObj()
{
	static class APaperCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<APaperCharacter*>(APaperCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperFlipbook
// (None)

class UClass* UPaperFlipbook::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperFlipbook");

	return Clss;
}


// PaperFlipbook Paper2D.Default__PaperFlipbook
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperFlipbook* UPaperFlipbook::GetDefaultObj()
{
	static class UPaperFlipbook* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperFlipbook*>(UPaperFlipbook::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbook::IsValidKeyFrameIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbook", "IsValidKeyFrameIndex");

	Params::UPaperFlipbook_IsValidKeyFrameIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbook.GetTotalDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbook::GetTotalDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbook", "GetTotalDuration");

	Params::UPaperFlipbook_GetTotalDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClampToEnds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperSprite*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbook", "GetSpriteAtTime");

	Params::UPaperFlipbook_GetSpriteAtTime_Params Parms{};

	Parms.Time = Time;
	Parms.bClampToEnds = bClampToEnds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperSprite*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbook", "GetSpriteAtFrame");

	Params::UPaperFlipbook_GetSpriteAtFrame_Params Parms{};

	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPaperFlipbook::GetNumKeyFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbook", "GetNumKeyFrames");

	Params::UPaperFlipbook_GetNumKeyFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbook.GetNumFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPaperFlipbook::GetNumFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbook", "GetNumFrames");

	Params::UPaperFlipbook_GetNumFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClampToEnds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbook", "GetKeyFrameIndexAtTime");

	Params::UPaperFlipbook_GetKeyFrameIndexAtTime_Params Parms{};

	Parms.Time = Time;
	Parms.bClampToEnds = bClampToEnds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Paper2D.PaperFlipbookActor
// (Actor)

class UClass* APaperFlipbookActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperFlipbookActor");

	return Clss;
}


// PaperFlipbookActor Paper2D.Default__PaperFlipbookActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APaperFlipbookActor* APaperFlipbookActor::GetDefaultObj()
{
	static class APaperFlipbookActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APaperFlipbookActor*>(APaperFlipbookActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperFlipbookComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPaperFlipbookComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperFlipbookComponent");

	return Clss;
}


// PaperFlipbookComponent Paper2D.Default__PaperFlipbookComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperFlipbookComponent* UPaperFlipbookComponent::GetDefaultObj()
{
	static class UPaperFlipbookComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperFlipbookComponent*>(UPaperFlipbookComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.PaperFlipbookComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPaperFlipbookComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetSpriteColor");

	Params::UPaperFlipbookComponent_SetSpriteColor_Params Parms{};

	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetPlayRate(float NewRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetPlayRate");

	Params::UPaperFlipbookComponent_SetPlayRate_Params Parms{};

	Parms.NewRate = NewRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewFramePosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFireEvents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetPlaybackPositionInFrames");

	Params::UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params Parms{};

	Parms.NewFramePosition = NewFramePosition;
	Parms.bFireEvents = bFireEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPosition                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFireEvents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetPlaybackPosition");

	Params::UPaperFlipbookComponent_SetPlaybackPosition_Params Parms{};

	Parms.NewPosition = NewPosition;
	Parms.bFireEvents = bFireEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.SetNewTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewTime                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetNewTime(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetNewTime");

	Params::UPaperFlipbookComponent_SetNewTime_Params Parms{};

	Parms.NewTime = NewTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewLooping                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetLooping");

	Params::UPaperFlipbookComponent_SetLooping_Params Parms{};

	Parms.bNewLooping = bNewLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaperFlipbook*              NewFlipbook                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetFlipbook");

	Params::UPaperFlipbookComponent_SetFlipbook_Params Parms{};

	Parms.NewFlipbook = NewFlipbook;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPaperFlipbookComponent::ReverseFromEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "ReverseFromEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.Reverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPaperFlipbookComponent::Reverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "Reverse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPaperFlipbookComponent::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "PlayFromStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPaperFlipbookComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// (Final, Native, Protected)
// Parameters:
// class UPaperFlipbook*              OldFlipbook                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "OnRep_SourceFlipbook");

	Params::UPaperFlipbookComponent_OnRep_SourceFlipbook_Params Parms{};

	Parms.OldFlipbook = OldFlipbook;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperFlipbookComponent.IsReversing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::IsReversing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "IsReversing");

	Params::UPaperFlipbookComponent_IsReversing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "IsPlaying");

	Params::UPaperFlipbookComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "IsLooping");

	Params::UPaperFlipbookComponent_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UPaperFlipbookComponent::GetSpriteColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetSpriteColor");

	Params::UPaperFlipbookComponent_GetSpriteColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetPlayRate");

	Params::UPaperFlipbookComponent_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetPlaybackPositionInFrames");

	Params::UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetPlaybackPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetPlaybackPosition");

	Params::UPaperFlipbookComponent_GetPlaybackPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbookLengthInFrames");

	Params::UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetFlipbookLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbookLength");

	Params::UPaperFlipbookComponent_GetFlipbookLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetFlipbookFramerate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbookFramerate");

	Params::UPaperFlipbookComponent_GetFlipbookFramerate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperFlipbook*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbook");

	Params::UPaperFlipbookComponent_GetFlipbook_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Paper2D.PaperGroupedSpriteActor
// (Actor)

class UClass* APaperGroupedSpriteActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperGroupedSpriteActor");

	return Clss;
}


// PaperGroupedSpriteActor Paper2D.Default__PaperGroupedSpriteActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APaperGroupedSpriteActor* APaperGroupedSpriteActor::GetDefaultObj()
{
	static class APaperGroupedSpriteActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APaperGroupedSpriteActor*>(APaperGroupedSpriteActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperGroupedSpriteComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPaperGroupedSpriteComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperGroupedSpriteComponent");

	return Clss;
}


// PaperGroupedSpriteComponent Paper2D.Default__PaperGroupedSpriteComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperGroupedSpriteComponent* UPaperGroupedSpriteComponent::GetDefaultObj()
{
	static class UPaperGroupedSpriteComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperGroupedSpriteComponent*>(UPaperGroupedSpriteComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InstanceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  NewInstanceTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMarkRenderStateDirty                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32 InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "UpdateInstanceTransform");

	Params::UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.NewInstanceTransform = NewInstanceTransform;
	Parms.bWorldSpace = bWorldSpace;
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InstanceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                NewInstanceColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMarkRenderStateDirty                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int32 InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "UpdateInstanceColor");

	Params::UPaperGroupedSpriteComponent_UpdateInstanceColor_Params Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.NewInstanceColor = NewInstanceColor;
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     WorldSpaceSortAxis                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "SortInstancesAlongAxis");

	Params::UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params Parms{};

	Parms.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              InstanceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::RemoveInstance(int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "RemoveInstance");

	Params::UPaperGroupedSpriteComponent_RemoveInstance_Params Parms{};

	Parms.InstanceIndex = InstanceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InstanceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OutInstanceTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int32 InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "GetInstanceTransform");

	Params::UPaperGroupedSpriteComponent_GetInstanceTransform_Params Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = std::move(Parms.OutInstanceTransform);

	return Parms.ReturnValue;

}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPaperGroupedSpriteComponent::GetInstanceCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "GetInstanceCount");

	Params::UPaperGroupedSpriteComponent_GetInstanceCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
// (Native, Public, BlueprintCallable)
// Parameters:

void UPaperGroupedSpriteComponent::ClearInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "ClearInstances");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperSprite*                Sprite                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPaperGroupedSpriteComponent::AddInstance(struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "AddInstance");

	Params::UPaperGroupedSpriteComponent_AddInstance_Params Parms{};

	Parms.Transform = Transform;
	Parms.Sprite = Sprite;
	Parms.bWorldSpace = bWorldSpace;
	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Paper2D.PaperRuntimeSettings
// (None)

class UClass* UPaperRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperRuntimeSettings");

	return Clss;
}


// PaperRuntimeSettings Paper2D.Default__PaperRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperRuntimeSettings* UPaperRuntimeSettings::GetDefaultObj()
{
	static class UPaperRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperRuntimeSettings*>(UPaperRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperSprite
// (None)

class UClass* UPaperSprite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperSprite");

	return Clss;
}


// PaperSprite Paper2D.Default__PaperSprite
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperSprite* UPaperSprite::GetDefaultObj()
{
	static class UPaperSprite* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperSprite*>(UPaperSprite::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperSpriteActor
// (Actor)

class UClass* APaperSpriteActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperSpriteActor");

	return Clss;
}


// PaperSpriteActor Paper2D.Default__PaperSpriteActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APaperSpriteActor* APaperSpriteActor::GetDefaultObj()
{
	static class APaperSpriteActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APaperSpriteActor*>(APaperSpriteActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperSpriteAtlas
// (None)

class UClass* UPaperSpriteAtlas::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperSpriteAtlas");

	return Clss;
}


// PaperSpriteAtlas Paper2D.Default__PaperSpriteAtlas
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperSpriteAtlas* UPaperSpriteAtlas::GetDefaultObj()
{
	static class UPaperSpriteAtlas* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperSpriteAtlas*>(UPaperSpriteAtlas::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperSpriteBlueprintLibrary
// (None)

class UClass* UPaperSpriteBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperSpriteBlueprintLibrary");

	return Clss;
}


// PaperSpriteBlueprintLibrary Paper2D.Default__PaperSpriteBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperSpriteBlueprintLibrary* UPaperSpriteBlueprintLibrary::GetDefaultObj()
{
	static class UPaperSpriteBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperSpriteBlueprintLibrary*>(UPaperSpriteBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperSprite*                Sprite                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperSpriteBlueprintLibrary", "MakeBrushFromSprite");

	Params::UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params Parms{};

	Parms.Sprite = Sprite;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Paper2D.PaperSpriteComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPaperSpriteComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperSpriteComponent");

	return Clss;
}


// PaperSpriteComponent Paper2D.Default__PaperSpriteComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperSpriteComponent* UPaperSpriteComponent::GetDefaultObj()
{
	static class UPaperSpriteComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperSpriteComponent*>(UPaperSpriteComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperSpriteComponent", "SetSpriteColor");

	Params::UPaperSpriteComponent_SetSpriteColor_Params Parms{};

	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperSpriteComponent.SetSprite
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaperSprite*                NewSprite                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperSpriteComponent", "SetSprite");

	Params::UPaperSpriteComponent_SetSprite_Params Parms{};

	Parms.NewSprite = NewSprite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperSpriteComponent.GetSprite
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperSprite*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperSpriteComponent", "GetSprite");

	Params::UPaperSpriteComponent_GetSprite_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Paper2D.PaperTileLayer
// (None)

class UClass* UPaperTileLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTileLayer");

	return Clss;
}


// PaperTileLayer Paper2D.Default__PaperTileLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperTileLayer* UPaperTileLayer::GetDefaultObj()
{
	static class UPaperTileLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperTileLayer*>(UPaperTileLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperTileMap
// (None)

class UClass* UPaperTileMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTileMap");

	return Clss;
}


// PaperTileMap Paper2D.Default__PaperTileMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperTileMap* UPaperTileMap::GetDefaultObj()
{
	static class UPaperTileMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperTileMap*>(UPaperTileMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperTileMapActor
// (Actor)

class UClass* APaperTileMapActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTileMapActor");

	return Clss;
}


// PaperTileMapActor Paper2D.Default__PaperTileMapActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APaperTileMapActor* APaperTileMapActor::GetDefaultObj()
{
	static class APaperTileMapActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APaperTileMapActor*>(APaperTileMapActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperTileMapComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPaperTileMapComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTileMapComponent");

	return Clss;
}


// PaperTileMapComponent Paper2D.Default__PaperTileMapComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperTileMapComponent* UPaperTileMapComponent::GetDefaultObj()
{
	static class UPaperTileMapComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperTileMapComponent*>(UPaperTileMapComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "SetTileMapColor");

	Params::UPaperTileMapComponent_SetTileMapColor_Params Parms{};

	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.SetTileMap
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaperTileMap*               NewTileMap                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "SetTileMap");

	Params::UPaperTileMapComponent_SetTileMap_Params Parms{};

	Parms.NewTileMap = NewTileMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperTileMapComponent.SetTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Layer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo              NewValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetTile(int32 X, int32 Y, int32 Layer, const struct FPaperTileInfo& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "SetTile");

	Params::UPaperTileMapComponent_SetTile_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Layer = Layer;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.SetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Layer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int32 Layer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "SetLayerColor");

	Params::UPaperTileMapComponent_SetLayerColor_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.Layer = Layer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Layer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasCollision                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOverrideThickness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CustomThickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOverrideOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CustomOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildCollision                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "SetLayerCollision");

	Params::UPaperTileMapComponent_SetLayerCollision_Params Parms{};

	Parms.Layer = Layer;
	Parms.bHasCollision = bHasCollision;
	Parms.bOverrideThickness = bOverrideThickness;
	Parms.CustomThickness = CustomThickness;
	Parms.bOverrideOffset = bOverrideOffset;
	Parms.CustomOffset = CustomOffset;
	Parms.bRebuildCollision = bRebuildCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildCollision                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "SetDefaultCollisionThickness");

	Params::UPaperTileMapComponent_SetDefaultCollisionThickness_Params Parms{};

	Parms.Thickness = Thickness;
	Parms.bRebuildCollision = bRebuildCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.ResizeMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewWidthInTiles                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewHeightInTiles                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "ResizeMap");

	Params::UPaperTileMapComponent_ResizeMap_Params Parms{};

	Parms.NewWidthInTiles = NewWidthInTiles;
	Parms.NewHeightInTiles = NewHeightInTiles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.RebuildCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPaperTileMapComponent::RebuildCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "RebuildCollision");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperTileMapComponent::OwnsTileMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "OwnsTileMap");

	Params::UPaperTileMapComponent_OwnsTileMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPaperTileMapComponent::MakeTileMapEditable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "MakeTileMapEditable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TileX                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TileY                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Points                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              LayerIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::GetTilePolygon(int32 TileX, int32 TileY, TArray<struct FVector>* Points, int32 LayerIndex, bool bWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTilePolygon");

	Params::UPaperTileMapComponent_GetTilePolygon_Params Parms{};

	Parms.TileX = TileX;
	Parms.TileY = TileY;
	Parms.LayerIndex = LayerIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Points != nullptr)
		*Points = std::move(Parms.Points);

}


// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTileMapColor");

	Params::UPaperTileMapComponent_GetTileMapColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TileX                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TileY                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LayerIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTileCornerPosition");

	Params::UPaperTileMapComponent_GetTileCornerPosition_Params Parms{};

	Parms.TileX = TileX;
	Parms.TileY = TileY;
	Parms.LayerIndex = LayerIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TileX                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TileY                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LayerIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTileCenterPosition");

	Params::UPaperTileMapComponent_GetTileCenterPosition_Params Parms{};

	Parms.TileX = TileX;
	Parms.TileY = TileY;
	Parms.LayerIndex = LayerIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperTileMapComponent.GetTile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Layer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int32 X, int32 Y, int32 Layer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTile");

	Params::UPaperTileMapComponent_GetTile_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Layer = Layer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperTileMapComponent.GetMapSize
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              MapWidth                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MapHeight                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLayers                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::GetMapSize(int32* MapWidth, int32* MapHeight, int32* NumLayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "GetMapSize");

	Params::UPaperTileMapComponent_GetMapSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MapWidth != nullptr)
		*MapWidth = Parms.MapWidth;

	if (MapHeight != nullptr)
		*MapHeight = Parms.MapHeight;

	if (NumLayers != nullptr)
		*NumLayers = Parms.NumLayers;

}


// Function Paper2D.PaperTileMapComponent.GetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Layer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int32 Layer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "GetLayerColor");

	Params::UPaperTileMapComponent_GetLayerColor_Params Parms{};

	Parms.Layer = Layer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MapWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MapHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TileWidth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TileHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PixelsPerUnrealUnit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateLayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "CreateNewTileMap");

	Params::UPaperTileMapComponent_CreateNewTileMap_Params Parms{};

	Parms.MapWidth = MapWidth;
	Parms.MapHeight = MapHeight;
	Parms.TileWidth = TileWidth;
	Parms.TileHeight = TileHeight;
	Parms.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	Parms.bCreateLayer = bCreateLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Paper2D.PaperTileMapComponent.AddNewLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPaperTileLayer*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTileMapComponent", "AddNewLayer");

	Params::UPaperTileMapComponent_AddNewLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Paper2D.PaperTileSet
// (None)

class UClass* UPaperTileSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTileSet");

	return Clss;
}


// PaperTileSet Paper2D.Default__PaperTileSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperTileSet* UPaperTileSet::GetDefaultObj()
{
	static class UPaperTileSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperTileSet*>(UPaperTileSet::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.MaterialExpressionSpriteTextureSampler
// (None)

class UClass* UMaterialExpressionSpriteTextureSampler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionSpriteTextureSampler");

	return Clss;
}


// MaterialExpressionSpriteTextureSampler Paper2D.Default__MaterialExpressionSpriteTextureSampler
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionSpriteTextureSampler* UMaterialExpressionSpriteTextureSampler::GetDefaultObj()
{
	static class UMaterialExpressionSpriteTextureSampler* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionSpriteTextureSampler*>(UMaterialExpressionSpriteTextureSampler::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperTerrainActor
// (Actor)

class UClass* APaperTerrainActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTerrainActor");

	return Clss;
}


// PaperTerrainActor Paper2D.Default__PaperTerrainActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APaperTerrainActor* APaperTerrainActor::GetDefaultObj()
{
	static class APaperTerrainActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APaperTerrainActor*>(APaperTerrainActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperTerrainComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPaperTerrainComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTerrainComponent");

	return Clss;
}


// PaperTerrainComponent Paper2D.Default__PaperTerrainComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperTerrainComponent* UPaperTerrainComponent::GetDefaultObj()
{
	static class UPaperTerrainComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperTerrainComponent*>(UPaperTerrainComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperTerrainComponent", "SetTerrainColor");

	Params::UPaperTerrainComponent_SetTerrainColor_Params Parms{};

	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Paper2D.PaperTerrainMaterial
// (None)

class UClass* UPaperTerrainMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTerrainMaterial");

	return Clss;
}


// PaperTerrainMaterial Paper2D.Default__PaperTerrainMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperTerrainMaterial* UPaperTerrainMaterial::GetDefaultObj()
{
	static class UPaperTerrainMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperTerrainMaterial*>(UPaperTerrainMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.PaperTerrainSplineComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPaperTerrainSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperTerrainSplineComponent");

	return Clss;
}


// PaperTerrainSplineComponent Paper2D.Default__PaperTerrainSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPaperTerrainSplineComponent* UPaperTerrainSplineComponent::GetDefaultObj()
{
	static class UPaperTerrainSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperTerrainSplineComponent*>(UPaperTerrainSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Paper2D.TileMapBlueprintLibrary
// (None)

class UClass* UTileMapBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TileMapBlueprintLibrary");

	return Clss;
}


// TileMapBlueprintLibrary Paper2D.Default__TileMapBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTileMapBlueprintLibrary* UTileMapBlueprintLibrary::GetDefaultObj()
{
	static class UTileMapBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTileMapBlueprintLibrary*>(UTileMapBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              TileIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperTileSet*               TileSet                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlipH                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlipV                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlipD                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileMapBlueprintLibrary", "MakeTile");

	Params::UTileMapBlueprintLibrary_MakeTile_Params Parms{};

	Parms.TileIndex = TileIndex;
	Parms.TileSet = TileSet;
	Parms.bFlipH = bFlipH;
	Parms.bFlipV = bFlipV;
	Parms.bFlipD = bFlipD;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaperTileInfo              Tile                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UTileMapBlueprintLibrary::GetTileUserData(const struct FPaperTileInfo& Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileMapBlueprintLibrary", "GetTileUserData");

	Params::UTileMapBlueprintLibrary_GetTileUserData_Params Parms{};

	Parms.Tile = Tile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaperTileInfo              Tile                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UTileMapBlueprintLibrary::GetTileTransform(const struct FPaperTileInfo& Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileMapBlueprintLibrary", "GetTileTransform");

	Params::UTileMapBlueprintLibrary_GetTileTransform_Params Parms{};

	Parms.Tile = Tile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaperTileInfo              Tile                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              TileIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperTileSet*               TileSet                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlipH                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlipV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlipD                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTileMapBlueprintLibrary::BreakTile(const struct FPaperTileInfo& Tile, int32* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileMapBlueprintLibrary", "BreakTile");

	Params::UTileMapBlueprintLibrary_BreakTile_Params Parms{};

	Parms.Tile = Tile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TileIndex != nullptr)
		*TileIndex = Parms.TileIndex;

	if (TileSet != nullptr)
		*TileSet = Parms.TileSet;

	if (bFlipH != nullptr)
		*bFlipH = Parms.bFlipH;

	if (bFlipV != nullptr)
		*bFlipV = Parms.bFlipV;

	if (bFlipD != nullptr)
		*bFlipD = Parms.bFlipD;

}

}


