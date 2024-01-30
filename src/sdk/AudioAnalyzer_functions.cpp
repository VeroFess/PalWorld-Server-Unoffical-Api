#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioAnalyzer.AudioAnalyzerAssetBase
// (None)

class UClass* UAudioAnalyzerAssetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerAssetBase");

	return Clss;
}


// AudioAnalyzerAssetBase AudioAnalyzer.Default__AudioAnalyzerAssetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerAssetBase* UAudioAnalyzerAssetBase::GetDefaultObj()
{
	static class UAudioAnalyzerAssetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerAssetBase*>(UAudioAnalyzerAssetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioAnalyzer.AudioAnalyzerSettings
// (None)

class UClass* UAudioAnalyzerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerSettings");

	return Clss;
}


// AudioAnalyzerSettings AudioAnalyzer.Default__AudioAnalyzerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerSettings* UAudioAnalyzerSettings::GetDefaultObj()
{
	static class UAudioAnalyzerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerSettings*>(UAudioAnalyzerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioAnalyzer.AudioAnalyzer
// (None)

class UClass* UAudioAnalyzer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzer");

	return Clss;
}


// AudioAnalyzer AudioAnalyzer.Default__AudioAnalyzer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzer* UAudioAnalyzer::GetDefaultObj()
{
	static class UAudioAnalyzer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzer*>(UAudioAnalyzer::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioAnalyzer::StopAnalyzing(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioAnalyzer", "StopAnalyzing");

	Params::UAudioAnalyzer_StopAnalyzing_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioBus*                   AudioBusToAnalyze                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioAnalyzer::StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioAnalyzer", "StartAnalyzing");

	Params::UAudioAnalyzer_StartAnalyzing_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioBusToAnalyze = AudioBusToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// (None)

class UClass* UAudioAnalyzerNRTSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerNRTSettings");

	return Clss;
}


// AudioAnalyzerNRTSettings AudioAnalyzer.Default__AudioAnalyzerNRTSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerNRTSettings* UAudioAnalyzerNRTSettings::GetDefaultObj()
{
	static class UAudioAnalyzerNRTSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerNRTSettings*>(UAudioAnalyzerNRTSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioAnalyzer.AudioAnalyzerNRT
// (None)

class UClass* UAudioAnalyzerNRT::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerNRT");

	return Clss;
}


// AudioAnalyzerNRT AudioAnalyzer.Default__AudioAnalyzerNRT
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerNRT* UAudioAnalyzerNRT::GetDefaultObj()
{
	static class UAudioAnalyzerNRT* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerNRT*>(UAudioAnalyzerNRT::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioAnalyzer.AudioAnalyzerSubsystem
// (None)

class UClass* UAudioAnalyzerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerSubsystem");

	return Clss;
}


// AudioAnalyzerSubsystem AudioAnalyzer.Default__AudioAnalyzerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerSubsystem* UAudioAnalyzerSubsystem::GetDefaultObj()
{
	static class UAudioAnalyzerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerSubsystem*>(UAudioAnalyzerSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


