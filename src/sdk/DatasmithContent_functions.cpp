#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DatasmithContent.DatasmithObjectTemplate
// (None)

class UClass* UDatasmithObjectTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithObjectTemplate");

	return Clss;
}


// DatasmithObjectTemplate DatasmithContent.Default__DatasmithObjectTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithObjectTemplate* UDatasmithObjectTemplate::GetDefaultObj()
{
	static class UDatasmithObjectTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithObjectTemplate*>(UDatasmithObjectTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithActorTemplate
// (None)

class UClass* UDatasmithActorTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithActorTemplate");

	return Clss;
}


// DatasmithActorTemplate DatasmithContent.Default__DatasmithActorTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithActorTemplate* UDatasmithActorTemplate::GetDefaultObj()
{
	static class UDatasmithActorTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithActorTemplate*>(UDatasmithActorTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAdditionalData
// (None)

class UClass* UDatasmithAdditionalData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAdditionalData");

	return Clss;
}


// DatasmithAdditionalData DatasmithContent.Default__DatasmithAdditionalData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithAdditionalData* UDatasmithAdditionalData::GetDefaultObj()
{
	static class UDatasmithAdditionalData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithAdditionalData*>(UDatasmithAdditionalData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAreaLightActor
// (Actor)

class UClass* ADatasmithAreaLightActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAreaLightActor");

	return Clss;
}


// DatasmithAreaLightActor DatasmithContent.Default__DatasmithAreaLightActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADatasmithAreaLightActor* ADatasmithAreaLightActor::GetDefaultObj()
{
	static class ADatasmithAreaLightActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADatasmithAreaLightActor*>(ADatasmithAreaLightActor::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// (None)

class UClass* UDatasmithAreaLightActorTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAreaLightActorTemplate");

	return Clss;
}


// DatasmithAreaLightActorTemplate DatasmithContent.Default__DatasmithAreaLightActorTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithAreaLightActorTemplate* UDatasmithAreaLightActorTemplate::GetDefaultObj()
{
	static class UDatasmithAreaLightActorTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithAreaLightActorTemplate*>(UDatasmithAreaLightActorTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAssetImportData
// (None)

class UClass* UDatasmithAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAssetImportData");

	return Clss;
}


// DatasmithAssetImportData DatasmithContent.Default__DatasmithAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithAssetImportData* UDatasmithAssetImportData::GetDefaultObj()
{
	static class UDatasmithAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithAssetImportData*>(UDatasmithAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshImportData
// (None)

class UClass* UDatasmithStaticMeshImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshImportData");

	return Clss;
}


// DatasmithStaticMeshImportData DatasmithContent.Default__DatasmithStaticMeshImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshImportData* UDatasmithStaticMeshImportData::GetDefaultObj()
{
	static class UDatasmithStaticMeshImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshImportData*>(UDatasmithStaticMeshImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// (None)

class UClass* UDatasmithStaticMeshCADImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshCADImportData");

	return Clss;
}


// DatasmithStaticMeshCADImportData DatasmithContent.Default__DatasmithStaticMeshCADImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshCADImportData* UDatasmithStaticMeshCADImportData::GetDefaultObj()
{
	static class UDatasmithStaticMeshCADImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshCADImportData*>(UDatasmithStaticMeshCADImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSceneImportData
// (None)

class UClass* UDatasmithSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSceneImportData");

	return Clss;
}


// DatasmithSceneImportData DatasmithContent.Default__DatasmithSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSceneImportData* UDatasmithSceneImportData::GetDefaultObj()
{
	static class UDatasmithSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSceneImportData*>(UDatasmithSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithTranslatedSceneImportData
// (None)

class UClass* UDatasmithTranslatedSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithTranslatedSceneImportData");

	return Clss;
}


// DatasmithTranslatedSceneImportData DatasmithContent.Default__DatasmithTranslatedSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithTranslatedSceneImportData* UDatasmithTranslatedSceneImportData::GetDefaultObj()
{
	static class UDatasmithTranslatedSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithTranslatedSceneImportData*>(UDatasmithTranslatedSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithCADImportSceneData
// (None)

class UClass* UDatasmithCADImportSceneData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithCADImportSceneData");

	return Clss;
}


// DatasmithCADImportSceneData DatasmithContent.Default__DatasmithCADImportSceneData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithCADImportSceneData* UDatasmithCADImportSceneData::GetDefaultObj()
{
	static class UDatasmithCADImportSceneData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithCADImportSceneData*>(UDatasmithCADImportSceneData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithMDLSceneImportData
// (None)

class UClass* UDatasmithMDLSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithMDLSceneImportData");

	return Clss;
}


// DatasmithMDLSceneImportData DatasmithContent.Default__DatasmithMDLSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithMDLSceneImportData* UDatasmithMDLSceneImportData::GetDefaultObj()
{
	static class UDatasmithMDLSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithMDLSceneImportData*>(UDatasmithMDLSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithGLTFSceneImportData
// (None)

class UClass* UDatasmithGLTFSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithGLTFSceneImportData");

	return Clss;
}


// DatasmithGLTFSceneImportData DatasmithContent.Default__DatasmithGLTFSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithGLTFSceneImportData* UDatasmithGLTFSceneImportData::GetDefaultObj()
{
	static class UDatasmithGLTFSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithGLTFSceneImportData*>(UDatasmithGLTFSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// (None)

class UClass* UDatasmithStaticMeshGLTFImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshGLTFImportData");

	return Clss;
}


// DatasmithStaticMeshGLTFImportData DatasmithContent.Default__DatasmithStaticMeshGLTFImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshGLTFImportData* UDatasmithStaticMeshGLTFImportData::GetDefaultObj()
{
	static class UDatasmithStaticMeshGLTFImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshGLTFImportData*>(UDatasmithStaticMeshGLTFImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithFBXSceneImportData
// (None)

class UClass* UDatasmithFBXSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithFBXSceneImportData");

	return Clss;
}


// DatasmithFBXSceneImportData DatasmithContent.Default__DatasmithFBXSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithFBXSceneImportData* UDatasmithFBXSceneImportData::GetDefaultObj()
{
	static class UDatasmithFBXSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithFBXSceneImportData*>(UDatasmithFBXSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// (None)

class UClass* UDatasmithDeltaGenAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithDeltaGenAssetImportData");

	return Clss;
}


// DatasmithDeltaGenAssetImportData DatasmithContent.Default__DatasmithDeltaGenAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithDeltaGenAssetImportData* UDatasmithDeltaGenAssetImportData::GetDefaultObj()
{
	static class UDatasmithDeltaGenAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithDeltaGenAssetImportData*>(UDatasmithDeltaGenAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// (None)

class UClass* UDatasmithDeltaGenSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithDeltaGenSceneImportData");

	return Clss;
}


// DatasmithDeltaGenSceneImportData DatasmithContent.Default__DatasmithDeltaGenSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithDeltaGenSceneImportData* UDatasmithDeltaGenSceneImportData::GetDefaultObj()
{
	static class UDatasmithDeltaGenSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithDeltaGenSceneImportData*>(UDatasmithDeltaGenSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithVREDAssetImportData
// (None)

class UClass* UDatasmithVREDAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithVREDAssetImportData");

	return Clss;
}


// DatasmithVREDAssetImportData DatasmithContent.Default__DatasmithVREDAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithVREDAssetImportData* UDatasmithVREDAssetImportData::GetDefaultObj()
{
	static class UDatasmithVREDAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithVREDAssetImportData*>(UDatasmithVREDAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithVREDSceneImportData
// (None)

class UClass* UDatasmithVREDSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithVREDSceneImportData");

	return Clss;
}


// DatasmithVREDSceneImportData DatasmithContent.Default__DatasmithVREDSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithVREDSceneImportData* UDatasmithVREDSceneImportData::GetDefaultObj()
{
	static class UDatasmithVREDSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithVREDSceneImportData*>(UDatasmithVREDSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithIFCSceneImportData
// (None)

class UClass* UDatasmithIFCSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithIFCSceneImportData");

	return Clss;
}


// DatasmithIFCSceneImportData DatasmithContent.Default__DatasmithIFCSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithIFCSceneImportData* UDatasmithIFCSceneImportData::GetDefaultObj()
{
	static class UDatasmithIFCSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithIFCSceneImportData*>(UDatasmithIFCSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// (None)

class UClass* UDatasmithStaticMeshIFCImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshIFCImportData");

	return Clss;
}


// DatasmithStaticMeshIFCImportData DatasmithContent.Default__DatasmithStaticMeshIFCImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshIFCImportData* UDatasmithStaticMeshIFCImportData::GetDefaultObj()
{
	static class UDatasmithStaticMeshIFCImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshIFCImportData*>(UDatasmithStaticMeshIFCImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAssetUserData
// (None)

class UClass* UDatasmithAssetUserData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAssetUserData");

	return Clss;
}


// DatasmithAssetUserData DatasmithContent.Default__DatasmithAssetUserData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithAssetUserData* UDatasmithAssetUserData::GetDefaultObj()
{
	static class UDatasmithAssetUserData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithAssetUserData*>(UDatasmithAssetUserData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithCineCameraActorTemplate
// (None)

class UClass* UDatasmithCineCameraActorTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithCineCameraActorTemplate");

	return Clss;
}


// DatasmithCineCameraActorTemplate DatasmithContent.Default__DatasmithCineCameraActorTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithCineCameraActorTemplate* UDatasmithCineCameraActorTemplate::GetDefaultObj()
{
	static class UDatasmithCineCameraActorTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithCineCameraActorTemplate*>(UDatasmithCineCameraActorTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// (None)

class UClass* UDatasmithCineCameraComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithCineCameraComponentTemplate");

	return Clss;
}


// DatasmithCineCameraComponentTemplate DatasmithContent.Default__DatasmithCineCameraComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithCineCameraComponentTemplate* UDatasmithCineCameraComponentTemplate::GetDefaultObj()
{
	static class UDatasmithCineCameraComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithCineCameraComponentTemplate*>(UDatasmithCineCameraComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// (None)

class UClass* UDatasmithContentBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithContentBlueprintLibrary");

	return Clss;
}


// DatasmithContentBlueprintLibrary DatasmithContent.Default__DatasmithContentBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithContentBlueprintLibrary* UDatasmithContentBlueprintLibrary::GetDefaultObj()
{
	static class UDatasmithContentBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithContentBlueprintLibrary*>(UDatasmithContentBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPartialMatchKey                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValuesForKey(class UObject* Object, class FName Key, bool bPartialMatchKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataValuesForKey");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.bPartialMatchKey = bPartialMatchKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPartialMatchKey                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(class UObject* Object, class FName Key, bool bPartialMatchKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataValueForKey");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.bPartialMatchKey = bPartialMatchKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringToMatch                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutKeys                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataKeysAndValuesForValue");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params Parms{};

	Parms.Object = Object;
	Parms.StringToMatch = StringToMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutKeys != nullptr)
		*OutKeys = std::move(Parms.OutKeys);

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);

}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDatasmithAssetUserData*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserData");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DatasmithContent.DatasmithCustomActionBase
// (None)

class UClass* UDatasmithCustomActionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithCustomActionBase");

	return Clss;
}


// DatasmithCustomActionBase DatasmithContent.Default__DatasmithCustomActionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithCustomActionBase* UDatasmithCustomActionBase::GetDefaultObj()
{
	static class UDatasmithCustomActionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithCustomActionBase*>(UDatasmithCustomActionBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithDecalComponentTemplate
// (None)

class UClass* UDatasmithDecalComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithDecalComponentTemplate");

	return Clss;
}


// DatasmithDecalComponentTemplate DatasmithContent.Default__DatasmithDecalComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithDecalComponentTemplate* UDatasmithDecalComponentTemplate::GetDefaultObj()
{
	static class UDatasmithDecalComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithDecalComponentTemplate*>(UDatasmithDecalComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithImportedSequencesActor
// (Actor)

class UClass* ADatasmithImportedSequencesActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithImportedSequencesActor");

	return Clss;
}


// DatasmithImportedSequencesActor DatasmithContent.Default__DatasmithImportedSequencesActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADatasmithImportedSequencesActor* ADatasmithImportedSequencesActor::GetDefaultObj()
{
	static class ADatasmithImportedSequencesActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADatasmithImportedSequencesActor*>(ADatasmithImportedSequencesActor::StaticClass()->DefaultObject);

	return Default;
}


// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              SequenceToPlay                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADatasmithImportedSequencesActor::PlayLevelSequence(class ULevelSequence* SequenceToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithImportedSequencesActor", "PlayLevelSequence");

	Params::ADatasmithImportedSequencesActor_PlayLevelSequence_Params Parms{};

	Parms.SequenceToPlay = SequenceToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DatasmithContent.DatasmithOptionsBase
// (None)

class UClass* UDatasmithOptionsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithOptionsBase");

	return Clss;
}


// DatasmithOptionsBase DatasmithContent.Default__DatasmithOptionsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithOptionsBase* UDatasmithOptionsBase::GetDefaultObj()
{
	static class UDatasmithOptionsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithOptionsBase*>(UDatasmithOptionsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithCommonTessellationOptions
// (None)

class UClass* UDatasmithCommonTessellationOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithCommonTessellationOptions");

	return Clss;
}


// DatasmithCommonTessellationOptions DatasmithContent.Default__DatasmithCommonTessellationOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithCommonTessellationOptions* UDatasmithCommonTessellationOptions::GetDefaultObj()
{
	static class UDatasmithCommonTessellationOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithCommonTessellationOptions*>(UDatasmithCommonTessellationOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithImportOptions
// (None)

class UClass* UDatasmithImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithImportOptions");

	return Clss;
}


// DatasmithImportOptions DatasmithContent.Default__DatasmithImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithImportOptions* UDatasmithImportOptions::GetDefaultObj()
{
	static class UDatasmithImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithImportOptions*>(UDatasmithImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithLandscapeTemplate
// (None)

class UClass* UDatasmithLandscapeTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithLandscapeTemplate");

	return Clss;
}


// DatasmithLandscapeTemplate DatasmithContent.Default__DatasmithLandscapeTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithLandscapeTemplate* UDatasmithLandscapeTemplate::GetDefaultObj()
{
	static class UDatasmithLandscapeTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithLandscapeTemplate*>(UDatasmithLandscapeTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithLightComponentTemplate
// (None)

class UClass* UDatasmithLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithLightComponentTemplate");

	return Clss;
}


// DatasmithLightComponentTemplate DatasmithContent.Default__DatasmithLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithLightComponentTemplate* UDatasmithLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithLightComponentTemplate*>(UDatasmithLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// (None)

class UClass* UDatasmithMaterialInstanceTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithMaterialInstanceTemplate");

	return Clss;
}


// DatasmithMaterialInstanceTemplate DatasmithContent.Default__DatasmithMaterialInstanceTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithMaterialInstanceTemplate* UDatasmithMaterialInstanceTemplate::GetDefaultObj()
{
	static class UDatasmithMaterialInstanceTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithMaterialInstanceTemplate*>(UDatasmithMaterialInstanceTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// (None)

class UClass* UDatasmithPointLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithPointLightComponentTemplate");

	return Clss;
}


// DatasmithPointLightComponentTemplate DatasmithContent.Default__DatasmithPointLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithPointLightComponentTemplate* UDatasmithPointLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithPointLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithPointLightComponentTemplate*>(UDatasmithPointLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// (None)

class UClass* UDatasmithPostProcessVolumeTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithPostProcessVolumeTemplate");

	return Clss;
}


// DatasmithPostProcessVolumeTemplate DatasmithContent.Default__DatasmithPostProcessVolumeTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithPostProcessVolumeTemplate* UDatasmithPostProcessVolumeTemplate::GetDefaultObj()
{
	static class UDatasmithPostProcessVolumeTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithPostProcessVolumeTemplate*>(UDatasmithPostProcessVolumeTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithScene
// (None)

class UClass* UDatasmithScene::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithScene");

	return Clss;
}


// DatasmithScene DatasmithContent.Default__DatasmithScene
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithScene* UDatasmithScene::GetDefaultObj()
{
	static class UDatasmithScene* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithScene*>(UDatasmithScene::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSceneActor
// (Actor)

class UClass* ADatasmithSceneActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSceneActor");

	return Clss;
}


// DatasmithSceneActor DatasmithContent.Default__DatasmithSceneActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADatasmithSceneActor* ADatasmithSceneActor::GetDefaultObj()
{
	static class ADatasmithSceneActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADatasmithSceneActor*>(ADatasmithSceneActor::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSceneComponentTemplate
// (None)

class UClass* UDatasmithSceneComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSceneComponentTemplate");

	return Clss;
}


// DatasmithSceneComponentTemplate DatasmithContent.Default__DatasmithSceneComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSceneComponentTemplate* UDatasmithSceneComponentTemplate::GetDefaultObj()
{
	static class UDatasmithSceneComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSceneComponentTemplate*>(UDatasmithSceneComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// (None)

class UClass* UDatasmithSkyLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSkyLightComponentTemplate");

	return Clss;
}


// DatasmithSkyLightComponentTemplate DatasmithContent.Default__DatasmithSkyLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSkyLightComponentTemplate* UDatasmithSkyLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithSkyLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSkyLightComponentTemplate*>(UDatasmithSkyLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// (None)

class UClass* UDatasmithSpotLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSpotLightComponentTemplate");

	return Clss;
}


// DatasmithSpotLightComponentTemplate DatasmithContent.Default__DatasmithSpotLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSpotLightComponentTemplate* UDatasmithSpotLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithSpotLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSpotLightComponentTemplate*>(UDatasmithSpotLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// (None)

class UClass* UDatasmithStaticMeshComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshComponentTemplate");

	return Clss;
}


// DatasmithStaticMeshComponentTemplate DatasmithContent.Default__DatasmithStaticMeshComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshComponentTemplate* UDatasmithStaticMeshComponentTemplate::GetDefaultObj()
{
	static class UDatasmithStaticMeshComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshComponentTemplate*>(UDatasmithStaticMeshComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshTemplate
// (None)

class UClass* UDatasmithStaticMeshTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshTemplate");

	return Clss;
}


// DatasmithStaticMeshTemplate DatasmithContent.Default__DatasmithStaticMeshTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshTemplate* UDatasmithStaticMeshTemplate::GetDefaultObj()
{
	static class UDatasmithStaticMeshTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshTemplate*>(UDatasmithStaticMeshTemplate::StaticClass()->DefaultObject);

	return Default;
}

}


