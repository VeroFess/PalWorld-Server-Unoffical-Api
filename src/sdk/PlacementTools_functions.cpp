#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlacementTools.PlacementToolBase
// (Actor)

class UClass* APlacementToolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlacementToolBase");

	return Clss;
}


// PlacementToolBase PlacementTools.Default__PlacementToolBase
// (Public, ClassDefaultObject, ArchetypeObject)

class APlacementToolBase* APlacementToolBase::GetDefaultObj()
{
	static class APlacementToolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<APlacementToolBase*>(APlacementToolBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PlacementTools.PlacementToolBase.RandomizeSeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void APlacementToolBase::RandomizeSeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlacementToolBase", "RandomizeSeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PlacementTools.PlacementToolBase.Generate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void APlacementToolBase::Generate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlacementToolBase", "Generate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class PlacementTools.BoxPlacement
// (Actor)

class UClass* ABoxPlacement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoxPlacement");

	return Clss;
}


// BoxPlacement PlacementTools.Default__BoxPlacement
// (Public, ClassDefaultObject, ArchetypeObject)

class ABoxPlacement* ABoxPlacement::GetDefaultObj()
{
	static class ABoxPlacement* Default = nullptr;

	if (!Default)
		Default = static_cast<ABoxPlacement*>(ABoxPlacement::StaticClass()->DefaultObject);

	return Default;
}


// Class PlacementTools.SpherePlacement
// (Actor)

class UClass* ASpherePlacement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpherePlacement");

	return Clss;
}


// SpherePlacement PlacementTools.Default__SpherePlacement
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpherePlacement* ASpherePlacement::GetDefaultObj()
{
	static class ASpherePlacement* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpherePlacement*>(ASpherePlacement::StaticClass()->DefaultObject);

	return Default;
}

}


