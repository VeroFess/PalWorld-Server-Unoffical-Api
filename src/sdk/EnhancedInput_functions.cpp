#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EnhancedInput.EnhancedInputActionDelegateBinding
// (None)

class UClass* UEnhancedInputActionDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputActionDelegateBinding");

	return Clss;
}


// EnhancedInputActionDelegateBinding EnhancedInput.Default__EnhancedInputActionDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputActionDelegateBinding* UEnhancedInputActionDelegateBinding::GetDefaultObj()
{
	static class UEnhancedInputActionDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputActionDelegateBinding*>(UEnhancedInputActionDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputActionValueBinding
// (None)

class UClass* UEnhancedInputActionValueBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputActionValueBinding");

	return Clss;
}


// EnhancedInputActionValueBinding EnhancedInput.Default__EnhancedInputActionValueBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputActionValueBinding* UEnhancedInputActionValueBinding::GetDefaultObj()
{
	static class UEnhancedInputActionValueBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputActionValueBinding*>(UEnhancedInputActionValueBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputComponent
// (None)

class UClass* UEnhancedInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputComponent");

	return Clss;
}


// EnhancedInputComponent EnhancedInput.Default__EnhancedInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputComponent* UEnhancedInputComponent::GetDefaultObj()
{
	static class UEnhancedInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputComponent*>(UEnhancedInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputComponent", "GetBoundActionValue");

	Params::UEnhancedInputComponent_GetBoundActionValue_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.EnhancedInputDeveloperSettings
// (None)

class UClass* UEnhancedInputDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputDeveloperSettings");

	return Clss;
}


// EnhancedInputDeveloperSettings EnhancedInput.Default__EnhancedInputDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputDeveloperSettings* UEnhancedInputDeveloperSettings::GetDefaultObj()
{
	static class UEnhancedInputDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputDeveloperSettings*>(UEnhancedInputDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputLibrary
// (None)

class UClass* UEnhancedInputLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputLibrary");

	return Clss;
}


// EnhancedInputLibrary EnhancedInput.Default__EnhancedInputLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputLibrary* UEnhancedInputLibrary::GetDefaultObj()
{
	static class UEnhancedInputLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputLibrary*>(UEnhancedInputLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        Context                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceImmediately                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "RequestRebuildControlMappingsUsingContext");

	Params::UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params Parms{};

	Parms.Context = Context;
	Parms.bForceImmediately = bForceImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionValueType   ValueType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType ValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValueOfType");

	Params::UEnhancedInputLibrary_MakeInputActionValueOfType_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.ValueType = ValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           MatchValueType                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValue(double X, double Y, double Z, struct FInputActionValue& MatchValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValue");

	Params::UEnhancedInputLibrary_MakeInputActionValue_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.MatchValueType = MatchValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(class AActor* Actor, class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetBoundActionValue");

	Params::UEnhancedInputLibrary_GetBoundActionValue_Params Parms{};

	Parms.Actor = Actor;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEnhancedInputLibrary::Conv_InputActionValueToString(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToString");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToString_Params Parms{};

	Parms.ActionValue = ActionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputLibrary::Conv_InputActionValueToBool(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToBool");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToBool_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis3D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params Parms{};

	Parms.ActionValue = ActionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis2D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis1D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InActionValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionValueType   Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputLibrary::BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, enum class EInputActionValueType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "BreakInputActionValue");

	Params::UEnhancedInputLibrary_BreakInputActionValue_Params Parms{};

	Parms.InActionValue = InActionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Z != nullptr)
		*Z = Parms.Z;

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Class EnhancedInput.EnhancedInputPlatformData
// (None)

class UClass* UEnhancedInputPlatformData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputPlatformData");

	return Clss;
}


// EnhancedInputPlatformData EnhancedInput.Default__EnhancedInputPlatformData
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputPlatformData* UEnhancedInputPlatformData::GetDefaultObj()
{
	static class UEnhancedInputPlatformData* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputPlatformData*>(UEnhancedInputPlatformData::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        InContext                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputMappingContext*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(class UInputMappingContext* InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputPlatformData", "GetContextRedirect");

	Params::UEnhancedInputPlatformData_GetContextRedirect_Params Parms{};

	Parms.InContext = InContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.EnhancedInputPlatformSettings
// (None)

class UClass* UEnhancedInputPlatformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputPlatformSettings");

	return Clss;
}


// EnhancedInputPlatformSettings EnhancedInput.Default__EnhancedInputPlatformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputPlatformSettings* UEnhancedInputPlatformSettings::GetDefaultObj()
{
	static class UEnhancedInputPlatformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputPlatformSettings*>(UEnhancedInputPlatformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputSubsystemInterface
// (None)

class UClass* IEnhancedInputSubsystemInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputSubsystemInterface");

	return Clss;
}


// EnhancedInputSubsystemInterface EnhancedInput.Default__EnhancedInputSubsystemInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IEnhancedInputSubsystemInterface* IEnhancedInputSubsystemInterface::GetDefaultObj()
{
	static class IEnhancedInputSubsystemInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IEnhancedInputSubsystemInterface*>(IEnhancedInputSubsystemInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputMappingRebuildTypeRebuildType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RequestRebuildControlMappings");

	Params::IEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params Parms{};

	Parms.Options = Options;
	Parms.RebuildType = RebuildType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IEnhancedInputSubsystemInterface::RemovePlayerMappedKey(class FName MappingName, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappedKey");

	Params::IEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RemoveMappingContext(class UInputMappingContext* MappingContext, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveMappingContext");

	Params::IEnhancedInputSubsystemInterface_RemoveMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeys");

	Params::IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UInputMappingContext*>PrioritizedActiveContexts                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UInputMappingContext*        InputContext                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMappingQueryResult     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params Parms{};

	Parms.PrioritizedActiveContexts = PrioritizedActiveContexts;
	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.BlockingIssues = BlockingIssues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutIssues != nullptr)
		*OutIssues = std::move(Parms.OutIssues);

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        InputContext                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMappingQueryResult     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInActiveContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params Parms{};

	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.BlockingIssues = BlockingIssues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutIssues != nullptr)
		*OutIssues = std::move(Parms.OutIssues);

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKey> IEnhancedInputSubsystemInterface::QueryKeysMappedToAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryKeysMappedToAction");

	Params::IEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params Parms{};

	Parms.Action = Action;
	Parms.Value = Value;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           RawValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputForAction_Params Parms{};

	Parms.Action = Action;
	Parms.RawValue = RawValue;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutFoundPriority                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IEnhancedInputSubsystemInterface::HasMappingContext(class UInputMappingContext* MappingContext, int32* OutFoundPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "HasMappingContext");

	Params::IEnhancedInputSubsystemInterface_HasMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFoundPriority != nullptr)
		*OutFoundPriority = Parms.OutFoundPriority;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FKey IEnhancedInputSubsystemInterface::GetPlayerMappedKey(class FName MappingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetPlayerMappedKey");

	Params::IEnhancedInputSubsystemInterface_GetPlayerMappedKey_Params Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> IEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappableActionKeyMappings");

	Params::IEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void IEnhancedInputSubsystemInterface::ClearAllMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "ClearAllMappings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        NewKey                                                           (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IEnhancedInputSubsystemInterface::AddPlayerMappedKey(class FName MappingName, const struct FKey& NewKey, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappedKey");

	Params::IEnhancedInputSubsystemInterface_AddPlayerMappedKey_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.NewKey = NewKey;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddMappingContext");

	Params::IEnhancedInputSubsystemInterface_AddMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Priority = Priority;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// (None)

class UClass* UEnhancedInputLocalPlayerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputLocalPlayerSubsystem");

	return Clss;
}


// EnhancedInputLocalPlayerSubsystem EnhancedInput.Default__EnhancedInputLocalPlayerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputLocalPlayerSubsystem* UEnhancedInputLocalPlayerSubsystem::GetDefaultObj()
{
	static class UEnhancedInputLocalPlayerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputLocalPlayerSubsystem*>(UEnhancedInputLocalPlayerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedPlayerInput
// (None)

class UClass* UEnhancedPlayerInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedPlayerInput");

	return Clss;
}


// EnhancedPlayerInput EnhancedInput.Default__EnhancedPlayerInput
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEnhancedPlayerInput* UEnhancedPlayerInput::GetDefaultObj()
{
	static class UEnhancedPlayerInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedPlayerInput*>(UEnhancedPlayerInput::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputAction
// (None)

class UClass* UInputAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputAction");

	return Clss;
}


// InputAction EnhancedInput.Default__InputAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputAction* UInputAction::GetDefaultObj()
{
	static class UInputAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputAction*>(UInputAction::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputDebugKeyDelegateBinding
// (None)

class UClass* UInputDebugKeyDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputDebugKeyDelegateBinding");

	return Clss;
}


// InputDebugKeyDelegateBinding EnhancedInput.Default__InputDebugKeyDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputDebugKeyDelegateBinding* UInputDebugKeyDelegateBinding::GetDefaultObj()
{
	static class UInputDebugKeyDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputDebugKeyDelegateBinding*>(UInputDebugKeyDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputMappingContext
// (None)

class UClass* UInputMappingContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputMappingContext");

	return Clss;
}


// InputMappingContext EnhancedInput.Default__InputMappingContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputMappingContext* UInputMappingContext::GetDefaultObj()
{
	static class UInputMappingContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputMappingContext*>(UInputMappingContext::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputMappingContext.UnmapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapKey(class UInputAction* Action, const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapKey");

	Params::UInputMappingContext_UnmapKey_Params Parms{};

	Parms.Action = Action;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapAllKeysFromAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAllKeysFromAction");

	Params::UInputMappingContext_UnmapAllKeysFromAction_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.UnmapAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInputMappingContext::UnmapAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.UnmapAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAction");

	Params::UInputMappingContext_UnmapAction_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.MapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ToKey                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(class UInputAction* Action, const struct FKey& ToKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "MapKey");

	Params::UInputMappingContext_MapKey_Params Parms{};

	Parms.Action = Action;
	Parms.ToKey = ToKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.InputModifier
// (None)

class UClass* UInputModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifier");

	return Clss;
}


// InputModifier EnhancedInput.Default__InputModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifier* UInputModifier::GetDefaultObj()
{
	static class UInputModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifier*>(UInputModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputModifier.ModifyRaw
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           CurrentValue                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UInputModifier::ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "ModifyRaw");

	Params::UInputModifier_ModifyRaw_Params Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.CurrentValue = CurrentValue;
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputModifier.GetVisualizationColor
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FInputActionValue           SampleValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionValue           FinalValue                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UInputModifier::GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "GetVisualizationColor");

	Params::UInputModifier_GetVisualizationColor_Params Parms{};

	Parms.SampleValue = SampleValue;
	Parms.FinalValue = FinalValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.InputModifierDeadZone
// (None)

class UClass* UInputModifierDeadZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierDeadZone");

	return Clss;
}


// InputModifierDeadZone EnhancedInput.Default__InputModifierDeadZone
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierDeadZone* UInputModifierDeadZone::GetDefaultObj()
{
	static class UInputModifierDeadZone* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierDeadZone*>(UInputModifierDeadZone::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierScalar
// (None)

class UClass* UInputModifierScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierScalar");

	return Clss;
}


// InputModifierScalar EnhancedInput.Default__InputModifierScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierScalar* UInputModifierScalar::GetDefaultObj()
{
	static class UInputModifierScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierScalar*>(UInputModifierScalar::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierScaleByDeltaTime
// (None)

class UClass* UInputModifierScaleByDeltaTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierScaleByDeltaTime");

	return Clss;
}


// InputModifierScaleByDeltaTime EnhancedInput.Default__InputModifierScaleByDeltaTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierScaleByDeltaTime* UInputModifierScaleByDeltaTime::GetDefaultObj()
{
	static class UInputModifierScaleByDeltaTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierScaleByDeltaTime*>(UInputModifierScaleByDeltaTime::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierNegate
// (None)

class UClass* UInputModifierNegate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierNegate");

	return Clss;
}


// InputModifierNegate EnhancedInput.Default__InputModifierNegate
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierNegate* UInputModifierNegate::GetDefaultObj()
{
	static class UInputModifierNegate* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierNegate*>(UInputModifierNegate::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierSmooth
// (None)

class UClass* UInputModifierSmooth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierSmooth");

	return Clss;
}


// InputModifierSmooth EnhancedInput.Default__InputModifierSmooth
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierSmooth* UInputModifierSmooth::GetDefaultObj()
{
	static class UInputModifierSmooth* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierSmooth*>(UInputModifierSmooth::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierResponseCurveExponential
// (None)

class UClass* UInputModifierResponseCurveExponential::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierResponseCurveExponential");

	return Clss;
}


// InputModifierResponseCurveExponential EnhancedInput.Default__InputModifierResponseCurveExponential
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierResponseCurveExponential* UInputModifierResponseCurveExponential::GetDefaultObj()
{
	static class UInputModifierResponseCurveExponential* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierResponseCurveExponential*>(UInputModifierResponseCurveExponential::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierResponseCurveUser
// (None)

class UClass* UInputModifierResponseCurveUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierResponseCurveUser");

	return Clss;
}


// InputModifierResponseCurveUser EnhancedInput.Default__InputModifierResponseCurveUser
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierResponseCurveUser* UInputModifierResponseCurveUser::GetDefaultObj()
{
	static class UInputModifierResponseCurveUser* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierResponseCurveUser*>(UInputModifierResponseCurveUser::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierFOVScaling
// (None)

class UClass* UInputModifierFOVScaling::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierFOVScaling");

	return Clss;
}


// InputModifierFOVScaling EnhancedInput.Default__InputModifierFOVScaling
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierFOVScaling* UInputModifierFOVScaling::GetDefaultObj()
{
	static class UInputModifierFOVScaling* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierFOVScaling*>(UInputModifierFOVScaling::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierToWorldSpace
// (None)

class UClass* UInputModifierToWorldSpace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierToWorldSpace");

	return Clss;
}


// InputModifierToWorldSpace EnhancedInput.Default__InputModifierToWorldSpace
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierToWorldSpace* UInputModifierToWorldSpace::GetDefaultObj()
{
	static class UInputModifierToWorldSpace* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierToWorldSpace*>(UInputModifierToWorldSpace::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierSwizzleAxis
// (None)

class UClass* UInputModifierSwizzleAxis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierSwizzleAxis");

	return Clss;
}


// InputModifierSwizzleAxis EnhancedInput.Default__InputModifierSwizzleAxis
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierSwizzleAxis* UInputModifierSwizzleAxis::GetDefaultObj()
{
	static class UInputModifierSwizzleAxis* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierSwizzleAxis*>(UInputModifierSwizzleAxis::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTrigger
// (None)

class UClass* UInputTrigger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTrigger");

	return Clss;
}


// InputTrigger EnhancedInput.Default__InputTrigger
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTrigger* UInputTrigger::GetDefaultObj()
{
	static class UInputTrigger* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTrigger*>(UInputTrigger::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputTrigger.UpdateState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ModifiedValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETriggerState           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETriggerState UInputTrigger::UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "UpdateState");

	Params::UInputTrigger_UpdateState_Params Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.ModifiedValue = ModifiedValue;
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.IsActuated
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInputActionValue           ForValue                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputTrigger::IsActuated(struct FInputActionValue& ForValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "IsActuated");

	Params::UInputTrigger_IsActuated_Params Parms{};

	Parms.ForValue = ForValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.GetTriggerType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ETriggerType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETriggerType UInputTrigger::GetTriggerType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "GetTriggerType");

	Params::UInputTrigger_GetTriggerType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.InputTriggerTimedBase
// (None)

class UClass* UInputTriggerTimedBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerTimedBase");

	return Clss;
}


// InputTriggerTimedBase EnhancedInput.Default__InputTriggerTimedBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerTimedBase* UInputTriggerTimedBase::GetDefaultObj()
{
	static class UInputTriggerTimedBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerTimedBase*>(UInputTriggerTimedBase::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerDown
// (None)

class UClass* UInputTriggerDown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerDown");

	return Clss;
}


// InputTriggerDown EnhancedInput.Default__InputTriggerDown
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerDown* UInputTriggerDown::GetDefaultObj()
{
	static class UInputTriggerDown* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerDown*>(UInputTriggerDown::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerPressed
// (None)

class UClass* UInputTriggerPressed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerPressed");

	return Clss;
}


// InputTriggerPressed EnhancedInput.Default__InputTriggerPressed
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerPressed* UInputTriggerPressed::GetDefaultObj()
{
	static class UInputTriggerPressed* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerPressed*>(UInputTriggerPressed::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerReleased
// (None)

class UClass* UInputTriggerReleased::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerReleased");

	return Clss;
}


// InputTriggerReleased EnhancedInput.Default__InputTriggerReleased
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerReleased* UInputTriggerReleased::GetDefaultObj()
{
	static class UInputTriggerReleased* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerReleased*>(UInputTriggerReleased::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerHold
// (None)

class UClass* UInputTriggerHold::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerHold");

	return Clss;
}


// InputTriggerHold EnhancedInput.Default__InputTriggerHold
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerHold* UInputTriggerHold::GetDefaultObj()
{
	static class UInputTriggerHold* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerHold*>(UInputTriggerHold::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerHoldAndRelease
// (None)

class UClass* UInputTriggerHoldAndRelease::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerHoldAndRelease");

	return Clss;
}


// InputTriggerHoldAndRelease EnhancedInput.Default__InputTriggerHoldAndRelease
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerHoldAndRelease* UInputTriggerHoldAndRelease::GetDefaultObj()
{
	static class UInputTriggerHoldAndRelease* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerHoldAndRelease*>(UInputTriggerHoldAndRelease::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerTap
// (None)

class UClass* UInputTriggerTap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerTap");

	return Clss;
}


// InputTriggerTap EnhancedInput.Default__InputTriggerTap
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerTap* UInputTriggerTap::GetDefaultObj()
{
	static class UInputTriggerTap* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerTap*>(UInputTriggerTap::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerPulse
// (None)

class UClass* UInputTriggerPulse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerPulse");

	return Clss;
}


// InputTriggerPulse EnhancedInput.Default__InputTriggerPulse
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerPulse* UInputTriggerPulse::GetDefaultObj()
{
	static class UInputTriggerPulse* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerPulse*>(UInputTriggerPulse::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerChordAction
// (None)

class UClass* UInputTriggerChordAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerChordAction");

	return Clss;
}


// InputTriggerChordAction EnhancedInput.Default__InputTriggerChordAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerChordAction* UInputTriggerChordAction::GetDefaultObj()
{
	static class UInputTriggerChordAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerChordAction*>(UInputTriggerChordAction::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerChordBlocker
// (None)

class UClass* UInputTriggerChordBlocker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerChordBlocker");

	return Clss;
}


// InputTriggerChordBlocker EnhancedInput.Default__InputTriggerChordBlocker
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerChordBlocker* UInputTriggerChordBlocker::GetDefaultObj()
{
	static class UInputTriggerChordBlocker* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerChordBlocker*>(UInputTriggerChordBlocker::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerCombo
// (None)

class UClass* UInputTriggerCombo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerCombo");

	return Clss;
}


// InputTriggerCombo EnhancedInput.Default__InputTriggerCombo
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerCombo* UInputTriggerCombo::GetDefaultObj()
{
	static class UInputTriggerCombo* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerCombo*>(UInputTriggerCombo::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.PlayerMappableInputConfig
// (None)

class UClass* UPlayerMappableInputConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerMappableInputConfig");

	return Clss;
}


// PlayerMappableInputConfig EnhancedInput.Default__PlayerMappableInputConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerMappableInputConfig* UPlayerMappableInputConfig::GetDefaultObj()
{
	static class UPlayerMappableInputConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerMappableInputConfig*>(UPlayerMappableInputConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPlayerMappableInputConfig::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "ResetToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPlayerMappableInputConfig::IsDeprecated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "IsDeprecated");

	Params::UPlayerMappableInputConfig_IsDeprecated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetPlayerMappableKeys");

	Params::UPlayerMappableInputConfig_GetPlayerMappableKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UPlayerMappableInputConfig::GetMetadata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMetadata");

	Params::UPlayerMappableInputConfig_GetMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class UInputMappingContext*, int32>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class UInputMappingContext*, int32> UPlayerMappableInputConfig::GetMappingContexts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingContexts");

	Params::UPlayerMappableInputConfig_GetMappingContexts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(class FName MappingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingByName");

	Params::UPlayerMappableInputConfig_GetMappingByName_Params Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                InAction                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(class UInputAction* InAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetKeysBoundToAction");

	Params::UPlayerMappableInputConfig_GetKeysBoundToAction_Params Parms{};

	Parms.InAction = InAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UPlayerMappableInputConfig::GetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetDisplayName");

	Params::UPlayerMappableInputConfig_GetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UPlayerMappableInputConfig::GetConfigName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetConfigName");

	Params::UPlayerMappableInputConfig_GetConfigName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


