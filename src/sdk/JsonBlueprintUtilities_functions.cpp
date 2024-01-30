#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class JsonBlueprintUtilities.JsonBlueprintFunctionLibrary
// (None)

class UClass* UJsonBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonBlueprintFunctionLibrary");

	return Clss;
}


// JsonBlueprintFunctionLibrary JsonBlueprintUtilities.Default__JsonBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonBlueprintFunctionLibrary* UJsonBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UJsonBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonBlueprintFunctionLibrary*>(UJsonBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.ToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonObjectWrapper          JsonObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      OutJsonString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::ToString(struct FJsonObjectWrapper& JsonObject, class FString* OutJsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "ToString");

	Params::UJsonBlueprintFunctionLibrary_ToString_Params Parms{};

	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonString != nullptr)
		*OutJsonString = std::move(Parms.OutJsonString);

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.ToFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonObjectWrapper          JsonObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFilePath                   File                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::ToFile(struct FJsonObjectWrapper& JsonObject, struct FFilePath& File)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "ToFile");

	Params::UJsonBlueprintFunctionLibrary_ToFile_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.File = File;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.StructToJsonString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Struct                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutJsonString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::StructToJsonString(int32& Struct, class FString* OutJsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "StructToJsonString");

	Params::UJsonBlueprintFunctionLibrary_StructToJsonString_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonString != nullptr)
		*OutJsonString = std::move(Parms.OutJsonString);

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.SetField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonObjectWrapper          JsonObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::SetField(struct FJsonObjectWrapper& JsonObject, const class FString& FieldName, int32& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "SetField");

	Params::UJsonBlueprintFunctionLibrary_SetField_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.HasField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonObjectWrapper          JsonObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::HasField(struct FJsonObjectWrapper& JsonObject, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "HasField");

	Params::UJsonBlueprintFunctionLibrary_HasField_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.GetFieldNames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonObjectWrapper          JsonObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              FieldNames                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::GetFieldNames(struct FJsonObjectWrapper& JsonObject, TArray<class FString>* FieldNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "GetFieldNames");

	Params::UJsonBlueprintFunctionLibrary_GetFieldNames_Params Parms{};

	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FieldNames != nullptr)
		*FieldNames = std::move(Parms.FieldNames);

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.GetField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonObjectWrapper          JsonObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::GetField(struct FJsonObjectWrapper& JsonObject, const class FString& FieldName, int32* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "GetField");

	Params::UJsonBlueprintFunctionLibrary_GetField_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.FromString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJsonObjectWrapper          OutJsonObject                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::FromString(class UObject* WorldContextObject, const class FString& JsonString, struct FJsonObjectWrapper* OutJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "FromString");

	Params::UJsonBlueprintFunctionLibrary_FromString_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.JsonString = JsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonObject != nullptr)
		*OutJsonObject = std::move(Parms.OutJsonObject);

	return Parms.ReturnValue;

}


// Function JsonBlueprintUtilities.JsonBlueprintFunctionLibrary.FromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFilePath                   File                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJsonObjectWrapper          OutJsonObject                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonBlueprintFunctionLibrary::FromFile(class UObject* WorldContextObject, struct FFilePath& File, struct FJsonObjectWrapper* OutJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonBlueprintFunctionLibrary", "FromFile");

	Params::UJsonBlueprintFunctionLibrary_FromFile_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.File = File;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonObject != nullptr)
		*OutJsonObject = std::move(Parms.OutJsonObject);

	return Parms.ReturnValue;

}

}


