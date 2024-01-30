#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataRegistry.DataRegistrySettings
// (None)

class UClass* UDataRegistrySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataRegistrySettings");

	return Clss;
}


// DataRegistrySettings DataRegistry.Default__DataRegistrySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataRegistrySettings* UDataRegistrySettings::GetDefaultObj()
{
	static class UDataRegistrySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataRegistrySettings*>(UDataRegistrySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.DataRegistry
// (None)

class UClass* UDataRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataRegistry");

	return Clss;
}


// DataRegistry DataRegistry.Default__DataRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataRegistry* UDataRegistry::GetDefaultObj()
{
	static class UDataRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataRegistry*>(UDataRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.DataRegistrySource
// (None)

class UClass* UDataRegistrySource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataRegistrySource");

	return Clss;
}


// DataRegistrySource DataRegistry.Default__DataRegistrySource
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataRegistrySource* UDataRegistrySource::GetDefaultObj()
{
	static class UDataRegistrySource* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataRegistrySource*>(UDataRegistrySource::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.MetaDataRegistrySource
// (None)

class UClass* UMetaDataRegistrySource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaDataRegistrySource");

	return Clss;
}


// MetaDataRegistrySource DataRegistry.Default__MetaDataRegistrySource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaDataRegistrySource* UMetaDataRegistrySource::GetDefaultObj()
{
	static class UMetaDataRegistrySource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaDataRegistrySource*>(UMetaDataRegistrySource::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.DataRegistrySource_CurveTable
// (None)

class UClass* UDataRegistrySource_CurveTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataRegistrySource_CurveTable");

	return Clss;
}


// DataRegistrySource_CurveTable DataRegistry.Default__DataRegistrySource_CurveTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataRegistrySource_CurveTable* UDataRegistrySource_CurveTable::GetDefaultObj()
{
	static class UDataRegistrySource_CurveTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataRegistrySource_CurveTable*>(UDataRegistrySource_CurveTable::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.MetaDataRegistrySource_CurveTable
// (None)

class UClass* UMetaDataRegistrySource_CurveTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaDataRegistrySource_CurveTable");

	return Clss;
}


// MetaDataRegistrySource_CurveTable DataRegistry.Default__MetaDataRegistrySource_CurveTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaDataRegistrySource_CurveTable* UMetaDataRegistrySource_CurveTable::GetDefaultObj()
{
	static class UMetaDataRegistrySource_CurveTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaDataRegistrySource_CurveTable*>(UMetaDataRegistrySource_CurveTable::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.DataRegistrySource_DataTable
// (None)

class UClass* UDataRegistrySource_DataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataRegistrySource_DataTable");

	return Clss;
}


// DataRegistrySource_DataTable DataRegistry.Default__DataRegistrySource_DataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataRegistrySource_DataTable* UDataRegistrySource_DataTable::GetDefaultObj()
{
	static class UDataRegistrySource_DataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataRegistrySource_DataTable*>(UDataRegistrySource_DataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.MetaDataRegistrySource_DataTable
// (None)

class UClass* UMetaDataRegistrySource_DataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaDataRegistrySource_DataTable");

	return Clss;
}


// MetaDataRegistrySource_DataTable DataRegistry.Default__MetaDataRegistrySource_DataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaDataRegistrySource_DataTable* UMetaDataRegistrySource_DataTable::GetDefaultObj()
{
	static class UMetaDataRegistrySource_DataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaDataRegistrySource_DataTable*>(UMetaDataRegistrySource_DataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class DataRegistry.DataRegistrySubsystem
// (None)

class UClass* UDataRegistrySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataRegistrySubsystem");

	return Clss;
}


// DataRegistrySubsystem DataRegistry.Default__DataRegistrySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataRegistrySubsystem* UDataRegistrySubsystem::GetDefaultObj()
{
	static class UDataRegistrySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataRegistrySubsystem*>(UDataRegistrySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryType           B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "NotEqual_DataRegistryType");

	Params::UDataRegistrySubsystem_NotEqual_DataRegistryType_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryId             B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "NotEqual_DataRegistryId");

	Params::UDataRegistrySubsystem_NotEqual_DataRegistryId_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           DataRegistryType                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "IsValidDataRegistryType");

	Params::UDataRegistrySubsystem_IsValidDataRegistryType_Params Parms{};

	Parms.DataRegistryType = DataRegistryType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             DataRegistryId                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "IsValidDataRegistryId");

	Params::UDataRegistrySubsystem_IsValidDataRegistryId_Params Parms{};

	Parms.DataRegistryId = DataRegistryId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryLookup         ResolvedLookup                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutItem                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "GetCachedItemFromLookupBP");

	Params::UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.ResolvedLookup = ResolvedLookup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItem != nullptr)
		*OutItem = std::move(Parms.OutItem);

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutItem                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase& OutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "GetCachedItemBP");

	Params::UDataRegistrySubsystem_GetCachedItemBP_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.OutItem = OutItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDataRegistrySubsystemGetItemResultOutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutItem                                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::FindCachedItemBP(const struct FDataRegistryId& ItemId, enum class EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "FindCachedItemBP");

	Params::UDataRegistrySubsystem_FindCachedItemBP_Params Parms{};

	Parms.ItemId = ItemId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutItem != nullptr)
		*OutItem = std::move(Parms.OutItem);

}


// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InputValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDataRegistrySubsystemGetItemResultOutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "EvaluateDataRegistryCurve");

	Params::UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.InputValue = InputValue;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryType           B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "EqualEqual_DataRegistryType");

	Params::UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryId             B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "EqualEqual_DataRegistryId");

	Params::UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           DataRegistryType                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDataRegistrySubsystem::Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "Conv_DataRegistryTypeToString");

	Params::UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params Parms{};

	Parms.DataRegistryType = DataRegistryType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             DataRegistryId                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDataRegistrySubsystem::Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "Conv_DataRegistryIdToString");

	Params::UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params Parms{};

	Parms.DataRegistryId = DataRegistryId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 AcquireCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::AcquireItemBP(const struct FDataRegistryId& ItemId, FDelegateProperty_ AcquireCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "AcquireItemBP");

	Params::UDataRegistrySubsystem_AcquireItemBP_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.AcquireCallback = AcquireCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


