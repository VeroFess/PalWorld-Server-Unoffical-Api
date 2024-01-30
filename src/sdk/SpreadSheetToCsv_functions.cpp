#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpreadSheetToCsv.SpreadSheetImpoter
// (None)

class UClass* USpreadSheetImpoter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpreadSheetImpoter");

	return Clss;
}


// SpreadSheetImpoter SpreadSheetToCsv.Default__SpreadSheetImpoter
// (Public, ClassDefaultObject, ArchetypeObject)

class USpreadSheetImpoter* USpreadSheetImpoter::GetDefaultObj()
{
	static class USpreadSheetImpoter* Default = nullptr;

	if (!Default)
		Default = static_cast<USpreadSheetImpoter*>(USpreadSheetImpoter::StaticClass()->DefaultObject);

	return Default;
}


// Function SpreadSheetToCsv.SpreadSheetImpoter.ToCsvStringForLocalizedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PickCultureName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USpreadSheetImpoter::ToCsvStringForLocalizedText(const class FString& PickCultureName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "ToCsvStringForLocalizedText");

	Params::USpreadSheetImpoter_ToCsvStringForLocalizedText_Params Parms{};

	Parms.PickCultureName = PickCultureName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpreadSheetToCsv.SpreadSheetImpoter.ToCsvString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USpreadSheetImpoter::ToCsvString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "ToCsvString");

	Params::USpreadSheetImpoter_ToCsvString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpreadSheetToCsv.SpreadSheetImpoter.PostProcessImport
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bAppliedPostProcess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpreadSheetImpoter::PostProcessImport(bool* bAppliedPostProcess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "PostProcessImport");

	Params::USpreadSheetImpoter_PostProcessImport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bAppliedPostProcess != nullptr)
		*bAppliedPostProcess = Parms.bAppliedPostProcess;

}


// Function SpreadSheetToCsv.SpreadSheetImpoter.IsExistNewRecord
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpreadSheetImpoter::IsExistNewRecord()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "IsExistNewRecord");

	Params::USpreadSheetImpoter_IsExistNewRecord_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpreadSheetToCsv.SpreadSheetImpoter.GetRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        SheetId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SheetName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Key                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpreadSheetImpoter*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpreadSheetImpoter* USpreadSheetImpoter::GetRequest(class FName SheetId, class FName SheetName, class FName Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "GetRequest");

	Params::USpreadSheetImpoter_GetRequest_Params Parms{};

	Parms.SheetId = SheetId;
	Parms.SheetName = SheetName;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpreadSheetToCsv.SpreadSheetImpoter.FromString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpreadSheetImpoter::FromString(const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "FromString");

	Params::USpreadSheetImpoter_FromString_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpreadSheetToCsv.SpreadSheetImpoter.CreateSheetUrlString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SheetId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SheetNameId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USpreadSheetImpoter::CreateSheetUrlString(class FName SheetId, class FName SheetNameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "CreateSheetUrlString");

	Params::USpreadSheetImpoter_CreateSheetUrlString_Params Parms{};

	Parms.SheetId = SheetId;
	Parms.SheetNameId = SheetNameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpreadSheetToCsv.SpreadSheetImpoter.Create
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USpreadSheetImpoter*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpreadSheetImpoter* USpreadSheetImpoter::Create()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpreadSheetImpoter", "Create");

	Params::USpreadSheetImpoter_Create_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpreadSheetToCsv.SpreadSheetUtility
// (None)

class UClass* USpreadSheetUtility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpreadSheetUtility");

	return Clss;
}


// SpreadSheetUtility SpreadSheetToCsv.Default__SpreadSheetUtility
// (Public, ClassDefaultObject, ArchetypeObject)

class USpreadSheetUtility* USpreadSheetUtility::GetDefaultObj()
{
	static class USpreadSheetUtility* Default = nullptr;

	if (!Default)
		Default = static_cast<USpreadSheetUtility*>(USpreadSheetUtility::StaticClass()->DefaultObject);

	return Default;
}

}


