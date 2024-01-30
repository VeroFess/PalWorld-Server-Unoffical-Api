#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GLTFExporter.GLTFExporter
// (None)

class UClass* UGLTFExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFExporter");

	return Clss;
}


// GLTFExporter GLTFExporter.Default__GLTFExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFExporter* UGLTFExporter::GetDefaultObj()
{
	static class UGLTFExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFExporter*>(UGLTFExporter::StaticClass()->DefaultObject);

	return Default;
}


// Function GLTFExporter.GLTFExporter.ExportToGLTF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGLTFExportOptions*          Options                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<class AActor*>                SelectedActors                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGLTFExportMessages         OutMessages                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGLTFExporter::ExportToGLTF(class UObject* Object, const class FString& FilePath, class UGLTFExportOptions* Options, TSet<class AActor*>& SelectedActors, struct FGLTFExportMessages* OutMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GLTFExporter", "ExportToGLTF");

	Params::UGLTFExporter_ExportToGLTF_Params Parms{};

	Parms.Object = Object;
	Parms.FilePath = FilePath;
	Parms.Options = Options;
	Parms.SelectedActors = SelectedActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMessages != nullptr)
		*OutMessages = std::move(Parms.OutMessages);

	return Parms.ReturnValue;

}


// Class GLTFExporter.GLTFAnimSequenceExporter
// (None)

class UClass* UGLTFAnimSequenceExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFAnimSequenceExporter");

	return Clss;
}


// GLTFAnimSequenceExporter GLTFExporter.Default__GLTFAnimSequenceExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFAnimSequenceExporter* UGLTFAnimSequenceExporter::GetDefaultObj()
{
	static class UGLTFAnimSequenceExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFAnimSequenceExporter*>(UGLTFAnimSequenceExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class GLTFExporter.GLTFExportOptions
// (None)

class UClass* UGLTFExportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFExportOptions");

	return Clss;
}


// GLTFExportOptions GLTFExporter.Default__GLTFExportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFExportOptions* UGLTFExportOptions::GetDefaultObj()
{
	static class UGLTFExportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFExportOptions*>(UGLTFExportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function GLTFExporter.GLTFExportOptions.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGLTFExportOptions::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GLTFExportOptions", "ResetToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GLTFExporter.GLTFLevelExporter
// (None)

class UClass* UGLTFLevelExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFLevelExporter");

	return Clss;
}


// GLTFLevelExporter GLTFExporter.Default__GLTFLevelExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFLevelExporter* UGLTFLevelExporter::GetDefaultObj()
{
	static class UGLTFLevelExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFLevelExporter*>(UGLTFLevelExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class GLTFExporter.GLTFLevelSequenceExporter
// (None)

class UClass* UGLTFLevelSequenceExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFLevelSequenceExporter");

	return Clss;
}


// GLTFLevelSequenceExporter GLTFExporter.Default__GLTFLevelSequenceExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFLevelSequenceExporter* UGLTFLevelSequenceExporter::GetDefaultObj()
{
	static class UGLTFLevelSequenceExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFLevelSequenceExporter*>(UGLTFLevelSequenceExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class GLTFExporter.GLTFLevelVariantSetsExporter
// (None)

class UClass* UGLTFLevelVariantSetsExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFLevelVariantSetsExporter");

	return Clss;
}


// GLTFLevelVariantSetsExporter GLTFExporter.Default__GLTFLevelVariantSetsExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFLevelVariantSetsExporter* UGLTFLevelVariantSetsExporter::GetDefaultObj()
{
	static class UGLTFLevelVariantSetsExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFLevelVariantSetsExporter*>(UGLTFLevelVariantSetsExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class GLTFExporter.GLTFMaterialExporter
// (None)

class UClass* UGLTFMaterialExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFMaterialExporter");

	return Clss;
}


// GLTFMaterialExporter GLTFExporter.Default__GLTFMaterialExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFMaterialExporter* UGLTFMaterialExporter::GetDefaultObj()
{
	static class UGLTFMaterialExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFMaterialExporter*>(UGLTFMaterialExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class GLTFExporter.GLTFMaterialExportOptions
// (None)

class UClass* UGLTFMaterialExportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFMaterialExportOptions");

	return Clss;
}


// GLTFMaterialExportOptions GLTFExporter.Default__GLTFMaterialExportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFMaterialExportOptions* UGLTFMaterialExportOptions::GetDefaultObj()
{
	static class UGLTFMaterialExportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFMaterialExportOptions*>(UGLTFMaterialExportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class GLTFExporter.GLTFProxyOptions
// (None)

class UClass* UGLTFProxyOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFProxyOptions");

	return Clss;
}


// GLTFProxyOptions GLTFExporter.Default__GLTFProxyOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFProxyOptions* UGLTFProxyOptions::GetDefaultObj()
{
	static class UGLTFProxyOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFProxyOptions*>(UGLTFProxyOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function GLTFExporter.GLTFProxyOptions.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGLTFProxyOptions::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GLTFProxyOptions", "ResetToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GLTFExporter.GLTFSkeletalMeshExporter
// (None)

class UClass* UGLTFSkeletalMeshExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFSkeletalMeshExporter");

	return Clss;
}


// GLTFSkeletalMeshExporter GLTFExporter.Default__GLTFSkeletalMeshExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFSkeletalMeshExporter* UGLTFSkeletalMeshExporter::GetDefaultObj()
{
	static class UGLTFSkeletalMeshExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFSkeletalMeshExporter*>(UGLTFSkeletalMeshExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class GLTFExporter.GLTFStaticMeshExporter
// (None)

class UClass* UGLTFStaticMeshExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFStaticMeshExporter");

	return Clss;
}


// GLTFStaticMeshExporter GLTFExporter.Default__GLTFStaticMeshExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFStaticMeshExporter* UGLTFStaticMeshExporter::GetDefaultObj()
{
	static class UGLTFStaticMeshExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFStaticMeshExporter*>(UGLTFStaticMeshExporter::StaticClass()->DefaultObject);

	return Default;
}

}


