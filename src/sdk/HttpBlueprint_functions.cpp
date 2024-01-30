#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HttpBlueprint.HttpBlueprintFunctionLibrary
// (None)

class UClass* UHttpBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HttpBlueprintFunctionLibrary");

	return Clss;
}


// HttpBlueprintFunctionLibrary HttpBlueprint.Default__HttpBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHttpBlueprintFunctionLibrary* UHttpBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UHttpBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHttpBlueprintFunctionLibrary*>(UHttpBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.RemoveHeader
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHttpHeader                 HeaderObject                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      HeaderToRemove                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHttpBlueprintFunctionLibrary::RemoveHeader(struct FHttpHeader& HeaderObject, const class FString& HeaderToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HttpBlueprintFunctionLibrary", "RemoveHeader");

	Params::UHttpBlueprintFunctionLibrary_RemoveHeader_Params Parms{};

	Parms.HeaderObject = HeaderObject;
	Parms.HeaderToRemove = HeaderToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.MakeRequestHeader
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<class FString, class FString> Headers                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHttpHeader                 OutHeader                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UHttpBlueprintFunctionLibrary::MakeRequestHeader(TMap<class FString, class FString>& Headers, struct FHttpHeader* OutHeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HttpBlueprintFunctionLibrary", "MakeRequestHeader");

	Params::UHttpBlueprintFunctionLibrary_MakeRequestHeader_Params Parms{};

	Parms.Headers = Headers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHeader != nullptr)
		*OutHeader = std::move(Parms.OutHeader);

}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetHeaderValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHttpHeader                 HeaderObject                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      HeaderName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutHeaderValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHttpBlueprintFunctionLibrary::GetHeaderValue(struct FHttpHeader& HeaderObject, const class FString& HeaderName, class FString* OutHeaderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HttpBlueprintFunctionLibrary", "GetHeaderValue");

	Params::UHttpBlueprintFunctionLibrary_GetHeaderValue_Params Parms{};

	Parms.HeaderObject = HeaderObject;
	Parms.HeaderName = HeaderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHeaderValue != nullptr)
		*OutHeaderValue = std::move(Parms.OutHeaderValue);

	return Parms.ReturnValue;

}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders_Map
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHttpHeader                 HeaderObject                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> UHttpBlueprintFunctionLibrary::GetAllHeaders_Map(struct FHttpHeader& HeaderObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HttpBlueprintFunctionLibrary", "GetAllHeaders_Map");

	Params::UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Params Parms{};

	Parms.HeaderObject = HeaderObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHttpHeader                 HeaderObject                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UHttpBlueprintFunctionLibrary::GetAllHeaders(struct FHttpHeader& HeaderObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HttpBlueprintFunctionLibrary", "GetAllHeaders");

	Params::UHttpBlueprintFunctionLibrary_GetAllHeaders_Params Parms{};

	Parms.HeaderObject = HeaderObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.AddHeader
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHttpHeader                 HeaderObject                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      NewHeader                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewHeaderValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHttpBlueprintFunctionLibrary::AddHeader(struct FHttpHeader& HeaderObject, const class FString& NewHeader, const class FString& NewHeaderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HttpBlueprintFunctionLibrary", "AddHeader");

	Params::UHttpBlueprintFunctionLibrary_AddHeader_Params Parms{};

	Parms.HeaderObject = HeaderObject;
	Parms.NewHeader = NewHeader;
	Parms.NewHeaderValue = NewHeaderValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


