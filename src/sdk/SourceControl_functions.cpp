#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SourceControl.SourceControlHelpers
// (None)

class UClass* USourceControlHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceControlHelpers");

	return Clss;
}


// SourceControlHelpers SourceControl.Default__SourceControlHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceControlHelpers* USourceControlHelpers::GetDefaultObj()
{
	static class USourceControlHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceControlHelpers*>(USourceControlHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function SourceControl.SourceControlHelpers.SyncFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::SyncFiles(TArray<class FString>& InFiles, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "SyncFiles");

	Params::USourceControlHelpers_SyncFiles_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.SyncFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::SyncFile(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "SyncFile");

	Params::USourceControlHelpers_SyncFile_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.RevertUnchangedFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::RevertUnchangedFiles(TArray<class FString>& InFiles, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "RevertUnchangedFiles");

	Params::USourceControlHelpers_RevertUnchangedFiles_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.RevertUnchangedFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::RevertUnchangedFile(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "RevertUnchangedFile");

	Params::USourceControlHelpers_RevertUnchangedFile_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.RevertFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::RevertFiles(TArray<class FString>& InFiles, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "RevertFiles");

	Params::USourceControlHelpers_RevertFiles_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.RevertFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::RevertFile(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "RevertFile");

	Params::USourceControlHelpers_RevertFile_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction SourceControl.SourceControlHelpers.QueryFileStateDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSourceControlState         FileStateOut                                                     (Parm, NativeAccessSpecifierPublic)

void USourceControlHelpers::QueryFileStateDelegate__DelegateSignature(const struct FSourceControlState& FileStateOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "QueryFileStateDelegate__DelegateSignature");

	Params::USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Params Parms{};

	Parms.FileStateOut = FileStateOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SourceControl.SourceControlHelpers.QueryFileState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSourceControlState         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSourceControlState USourceControlHelpers::QueryFileState(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "QueryFileState");

	Params::USourceControlHelpers_QueryFileState_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.MarkFilesForDelete
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::MarkFilesForDelete(TArray<class FString>& InFiles, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "MarkFilesForDelete");

	Params::USourceControlHelpers_MarkFilesForDelete_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.MarkFilesForAdd
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::MarkFilesForAdd(TArray<class FString>& InFiles, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "MarkFilesForAdd");

	Params::USourceControlHelpers_MarkFilesForAdd_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.MarkFileForDelete
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::MarkFileForDelete(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "MarkFileForDelete");

	Params::USourceControlHelpers_MarkFileForDelete_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.MarkFileForAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::MarkFileForAdd(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "MarkFileForAdd");

	Params::USourceControlHelpers_MarkFileForAdd_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.LastErrorMsg
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USourceControlHelpers::LastErrorMsg()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "LastErrorMsg");

	Params::USourceControlHelpers_LastErrorMsg_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.IsEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "IsEnabled");

	Params::USourceControlHelpers_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.IsAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::IsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "IsAvailable");

	Params::USourceControlHelpers_IsAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CurrentProvider
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USourceControlHelpers::CurrentProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CurrentProvider");

	Params::USourceControlHelpers_CurrentProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CopyFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InSourceFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InDestFile                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::CopyFile(const class FString& InSourceFile, const class FString& InDestFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CopyFile");

	Params::USourceControlHelpers_CopyFile_Params Parms{};

	Parms.InSourceFile = InSourceFile;
	Parms.InDestFile = InDestFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CheckOutOrAddFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::CheckOutOrAddFiles(TArray<class FString>& InFiles, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CheckOutOrAddFiles");

	Params::USourceControlHelpers_CheckOutOrAddFiles_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CheckOutOrAddFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::CheckOutOrAddFile(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CheckOutOrAddFile");

	Params::USourceControlHelpers_CheckOutOrAddFile_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CheckOutFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::CheckOutFiles(TArray<class FString>& InFiles, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CheckOutFiles");

	Params::USourceControlHelpers_CheckOutFiles_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CheckOutFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::CheckOutFile(const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CheckOutFile");

	Params::USourceControlHelpers_CheckOutFile_Params Parms{};

	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CheckInFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFiles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InDescription                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKeepCheckedOut                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::CheckInFiles(TArray<class FString>& InFiles, const class FString& InDescription, bool bSilent, bool bKeepCheckedOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CheckInFiles");

	Params::USourceControlHelpers_CheckInFiles_Params Parms{};

	Parms.InFiles = InFiles;
	Parms.InDescription = InDescription;
	Parms.bSilent = bSilent;
	Parms.bKeepCheckedOut = bKeepCheckedOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.CheckInFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InDescription                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKeepCheckedOut                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USourceControlHelpers::CheckInFile(const class FString& InFile, const class FString& InDescription, bool bSilent, bool bKeepCheckedOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "CheckInFile");

	Params::USourceControlHelpers_CheckInFile_Params Parms{};

	Parms.InFile = InFile;
	Parms.InDescription = InDescription;
	Parms.bSilent = bSilent;
	Parms.bKeepCheckedOut = bKeepCheckedOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SourceControl.SourceControlHelpers.AsyncQueryFileState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 FileStateCallback                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceControlHelpers::AsyncQueryFileState(FDelegateProperty_ FileStateCallback, const class FString& InFile, bool bSilent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceControlHelpers", "AsyncQueryFileState");

	Params::USourceControlHelpers_AsyncQueryFileState_Params Parms{};

	Parms.FileStateCallback = FileStateCallback;
	Parms.InFile = InFile;
	Parms.bSilent = bSilent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SourceControl.SourceControlPreferences
// (None)

class UClass* USourceControlPreferences::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceControlPreferences");

	return Clss;
}


// SourceControlPreferences SourceControl.Default__SourceControlPreferences
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceControlPreferences* USourceControlPreferences::GetDefaultObj()
{
	static class USourceControlPreferences* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceControlPreferences*>(USourceControlPreferences::StaticClass()->DefaultObject);

	return Default;
}

}


