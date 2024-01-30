#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonInput.CommonInputActionDomain
// (None)

class UClass* UCommonInputActionDomain::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputActionDomain");

	return Clss;
}


// CommonInputActionDomain CommonInput.Default__CommonInputActionDomain
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputActionDomain* UCommonInputActionDomain::GetDefaultObj()
{
	static class UCommonInputActionDomain* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputActionDomain*>(UCommonInputActionDomain::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonInput.CommonInputActionDomainTable
// (None)

class UClass* UCommonInputActionDomainTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputActionDomainTable");

	return Clss;
}


// CommonInputActionDomainTable CommonInput.Default__CommonInputActionDomainTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputActionDomainTable* UCommonInputActionDomainTable::GetDefaultObj()
{
	static class UCommonInputActionDomainTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputActionDomainTable*>(UCommonInputActionDomainTable::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonInput.CommonUIInputData
// (None)

class UClass* UCommonUIInputData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIInputData");

	return Clss;
}


// CommonUIInputData CommonInput.Default__CommonUIInputData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIInputData* UCommonUIInputData::GetDefaultObj()
{
	static class UCommonUIInputData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIInputData*>(UCommonUIInputData::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonInput.CommonInputBaseControllerData
// (None)

class UClass* UCommonInputBaseControllerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputBaseControllerData");

	return Clss;
}


// CommonInputBaseControllerData CommonInput.Default__CommonInputBaseControllerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputBaseControllerData* UCommonInputBaseControllerData::GetDefaultObj()
{
	static class UCommonInputBaseControllerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputBaseControllerData*>(UCommonInputBaseControllerData::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
// (Final, Native, Static, Public)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FName> UCommonInputBaseControllerData::GetRegisteredGamepads()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputBaseControllerData", "GetRegisteredGamepads");

	Params::UCommonInputBaseControllerData_GetRegisteredGamepads_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonInput.CommonInputPlatformSettings
// (None)

class UClass* UCommonInputPlatformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputPlatformSettings");

	return Clss;
}


// CommonInputPlatformSettings CommonInput.Default__CommonInputPlatformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputPlatformSettings* UCommonInputPlatformSettings::GetDefaultObj()
{
	static class UCommonInputPlatformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputPlatformSettings*>(UCommonInputPlatformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonInput.CommonInputSettings
// (None)

class UClass* UCommonInputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputSettings");

	return Clss;
}


// CommonInputSettings CommonInput.Default__CommonInputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputSettings* UCommonInputSettings::GetDefaultObj()
{
	static class UCommonInputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputSettings*>(UCommonInputSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonInput.CommonInputSubsystem
// (None)

class UClass* UCommonInputSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputSubsystem");

	return Clss;
}


// CommonInputSubsystem CommonInput.Default__CommonInputSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputSubsystem* UCommonInputSubsystem::GetDefaultObj()
{
	static class UCommonInputSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputSubsystem*>(UCommonInputSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::ShouldShowInputKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "ShouldShowInputKeys");

	Params::UCommonInputSubsystem_ShouldShowInputKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InGamepadInputType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetGamepadInputType(class FName InGamepadInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "SetGamepadInputType");

	Params::UCommonInputSubsystem_SetGamepadInputType_Params Parms{};

	Parms.InGamepadInputType = InGamepadInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetCurrentInputType(enum class ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "SetCurrentInputType");

	Params::UCommonInputSubsystem_SetCurrentInputType_Params Parms{};

	Parms.NewInputType = NewInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::IsUsingPointerInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "IsUsingPointerInput");

	Params::UCommonInputSubsystem_IsUsingPointerInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.IsInputMethodActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        InputMethod                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::IsInputMethodActive(enum class ECommonInputType InputMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "IsInputMethodActive");

	Params::UCommonInputSubsystem_IsInputMethodActive_Params Parms{};

	Parms.InputMethod = InputMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonInputSubsystem::GetDefaultInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetDefaultInputType");

	Params::UCommonInputSubsystem_GetDefaultInputType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonInputSubsystem::GetCurrentInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentInputType");

	Params::UCommonInputSubsystem_GetCurrentInputType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonInputSubsystem::GetCurrentGamepadName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentGamepadName");

	Params::UCommonInputSubsystem_GetCurrentGamepadName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


