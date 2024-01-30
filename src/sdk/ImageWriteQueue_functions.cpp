#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// (None)

class UClass* UImageWriteBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageWriteBlueprintLibrary");

	return Clss;
}


// ImageWriteBlueprintLibrary ImageWriteQueue.Default__ImageWriteBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageWriteBlueprintLibrary* UImageWriteBlueprintLibrary::GetDefaultObj()
{
	static class UImageWriteBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageWriteBlueprintLibrary*>(UImageWriteBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageWriteOptions          Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const class FString& Filename, struct FImageWriteOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImageWriteBlueprintLibrary", "ExportToDisk");

	Params::UImageWriteBlueprintLibrary_ExportToDisk_Params Parms{};

	Parms.Texture = Texture;
	Parms.Filename = Filename;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


