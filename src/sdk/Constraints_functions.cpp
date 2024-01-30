#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Constraints.TransformableHandle
// (None)

class UClass* UTransformableHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformableHandle");

	return Clss;
}


// TransformableHandle Constraints.Default__TransformableHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformableHandle* UTransformableHandle::GetDefaultObj()
{
	static class UTransformableHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformableHandle*>(UTransformableHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.ConstraintsActor
// (Actor)

class UClass* AConstraintsActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstraintsActor");

	return Clss;
}


// ConstraintsActor Constraints.Default__ConstraintsActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AConstraintsActor* AConstraintsActor::GetDefaultObj()
{
	static class AConstraintsActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AConstraintsActor*>(AConstraintsActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableConstraint
// (None)

class UClass* UTickableConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableConstraint");

	return Clss;
}


// TickableConstraint Constraints.Default__TickableConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableConstraint* UTickableConstraint::GetDefaultObj()
{
	static class UTickableConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableConstraint*>(UTickableConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.ConstraintsManager
// (None)

class UClass* UConstraintsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstraintsManager");

	return Clss;
}


// ConstraintsManager Constraints.Default__ConstraintsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstraintsManager* UConstraintsManager::GetDefaultObj()
{
	static class UConstraintsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstraintsManager*>(UConstraintsManager::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.ConstraintsScriptingLibrary
// (None)

class UClass* UConstraintsScriptingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstraintsScriptingLibrary");

	return Clss;
}


// ConstraintsScriptingLibrary Constraints.Default__ConstraintsScriptingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstraintsScriptingLibrary* UConstraintsScriptingLibrary::GetDefaultObj()
{
	static class UConstraintsScriptingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstraintsScriptingLibrary*>(UConstraintsScriptingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConstraintsScriptingLibrary::RemoveConstraint(class UWorld* InWorld, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "RemoveConstraint");

	Params::UConstraintsScriptingLibrary_RemoveConstraint_Params Parms{};

	Parms.InWorld = InWorld;
	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.GetManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConstraintsManager*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConstraintsManager* UConstraintsScriptingLibrary::GetManager(class UWorld* InWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "GetManager");

	Params::UConstraintsScriptingLibrary_GetManager_Params Parms{};

	Parms.InWorld = InWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             InSceneComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InSocketName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableComponentHandle*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTransformableComponentHandle* UConstraintsScriptingLibrary::CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, class FName& InSocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateTransformableComponentHandle");

	Params::UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params Parms{};

	Parms.InWorld = InWorld;
	Parms.InSceneComponent = InSceneComponent;
	Parms.InSocketName = InSocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateFromType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETransformConstraintTypeInType                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTickableTransformConstraint*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTickableTransformConstraint* UConstraintsScriptingLibrary::CreateFromType(class UWorld* InWorld, enum class ETransformConstraintType InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateFromType");

	Params::UConstraintsScriptingLibrary_CreateFromType_Params Parms{};

	Parms.InWorld = InWorld;
	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.AddConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableHandle*        InParentHandle                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableHandle*        InChildHandle                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTickableTransformConstraint*InConstraint                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaintainOffset                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConstraintsScriptingLibrary::AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "AddConstraint");

	Params::UConstraintsScriptingLibrary_AddConstraint_Params Parms{};

	Parms.InWorld = InWorld;
	Parms.InParentHandle = InParentHandle;
	Parms.InChildHandle = InChildHandle;
	Parms.InConstraint = InConstraint;
	Parms.bMaintainOffset = bMaintainOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Constraints.TransformableComponentHandle
// (None)

class UClass* UTransformableComponentHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformableComponentHandle");

	return Clss;
}


// TransformableComponentHandle Constraints.Default__TransformableComponentHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformableComponentHandle* UTransformableComponentHandle::GetDefaultObj()
{
	static class UTransformableComponentHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformableComponentHandle*>(UTransformableComponentHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableTransformConstraint
// (None)

class UClass* UTickableTransformConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableTransformConstraint");

	return Clss;
}


// TickableTransformConstraint Constraints.Default__TickableTransformConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableTransformConstraint* UTickableTransformConstraint::GetDefaultObj()
{
	static class UTickableTransformConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableTransformConstraint*>(UTickableTransformConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableTranslationConstraint
// (None)

class UClass* UTickableTranslationConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableTranslationConstraint");

	return Clss;
}


// TickableTranslationConstraint Constraints.Default__TickableTranslationConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableTranslationConstraint* UTickableTranslationConstraint::GetDefaultObj()
{
	static class UTickableTranslationConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableTranslationConstraint*>(UTickableTranslationConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableRotationConstraint
// (None)

class UClass* UTickableRotationConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableRotationConstraint");

	return Clss;
}


// TickableRotationConstraint Constraints.Default__TickableRotationConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableRotationConstraint* UTickableRotationConstraint::GetDefaultObj()
{
	static class UTickableRotationConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableRotationConstraint*>(UTickableRotationConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableScaleConstraint
// (None)

class UClass* UTickableScaleConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableScaleConstraint");

	return Clss;
}


// TickableScaleConstraint Constraints.Default__TickableScaleConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableScaleConstraint* UTickableScaleConstraint::GetDefaultObj()
{
	static class UTickableScaleConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableScaleConstraint*>(UTickableScaleConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableParentConstraint
// (None)

class UClass* UTickableParentConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableParentConstraint");

	return Clss;
}


// TickableParentConstraint Constraints.Default__TickableParentConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableParentConstraint* UTickableParentConstraint::GetDefaultObj()
{
	static class UTickableParentConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableParentConstraint*>(UTickableParentConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableLookAtConstraint
// (None)

class UClass* UTickableLookAtConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableLookAtConstraint");

	return Clss;
}


// TickableLookAtConstraint Constraints.Default__TickableLookAtConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableLookAtConstraint* UTickableLookAtConstraint::GetDefaultObj()
{
	static class UTickableLookAtConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableLookAtConstraint*>(UTickableLookAtConstraint::StaticClass()->DefaultObject);

	return Default;
}

}


