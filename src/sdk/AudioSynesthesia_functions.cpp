#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioSynesthesia.AudioSynesthesiaSettings
// (None)

class UClass* UAudioSynesthesiaSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioSynesthesiaSettings");

	return Clss;
}


// AudioSynesthesiaSettings AudioSynesthesia.Default__AudioSynesthesiaSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioSynesthesiaSettings* UAudioSynesthesiaSettings::GetDefaultObj()
{
	static class UAudioSynesthesiaSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioSynesthesiaSettings*>(UAudioSynesthesiaSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
// (None)

class UClass* USynesthesiaSpectrumAnalysisSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynesthesiaSpectrumAnalysisSettings");

	return Clss;
}


// SynesthesiaSpectrumAnalysisSettings AudioSynesthesia.Default__SynesthesiaSpectrumAnalysisSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USynesthesiaSpectrumAnalysisSettings* USynesthesiaSpectrumAnalysisSettings::GetDefaultObj()
{
	static class USynesthesiaSpectrumAnalysisSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USynesthesiaSpectrumAnalysisSettings*>(USynesthesiaSpectrumAnalysisSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
// (None)

class UClass* USynesthesiaSpectrumAnalyzer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynesthesiaSpectrumAnalyzer");

	return Clss;
}


// SynesthesiaSpectrumAnalyzer AudioSynesthesia.Default__SynesthesiaSpectrumAnalyzer
// (Public, ClassDefaultObject, ArchetypeObject)

class USynesthesiaSpectrumAnalyzer* USynesthesiaSpectrumAnalyzer::GetDefaultObj()
{
	static class USynesthesiaSpectrumAnalyzer* Default = nullptr;

	if (!Default)
		Default = static_cast<USynesthesiaSpectrumAnalyzer*>(USynesthesiaSpectrumAnalyzer::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynesthesiaSpectrumAnalyzer", "GetNumCenterFrequencies");

	Params::USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              InSampleRate                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutCenterFrequencies                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USynesthesiaSpectrumAnalyzer::GetCenterFrequencies(float InSampleRate, TArray<float>* OutCenterFrequencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynesthesiaSpectrumAnalyzer", "GetCenterFrequencies");

	Params::USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Params Parms{};

	Parms.InSampleRate = InSampleRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCenterFrequencies != nullptr)
		*OutCenterFrequencies = std::move(Parms.OutCenterFrequencies);

}


// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// (None)

class UClass* UAudioSynesthesiaNRTSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioSynesthesiaNRTSettings");

	return Clss;
}


// AudioSynesthesiaNRTSettings AudioSynesthesia.Default__AudioSynesthesiaNRTSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioSynesthesiaNRTSettings* UAudioSynesthesiaNRTSettings::GetDefaultObj()
{
	static class UAudioSynesthesiaNRTSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioSynesthesiaNRTSettings*>(UAudioSynesthesiaNRTSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.AudioSynesthesiaNRT
// (None)

class UClass* UAudioSynesthesiaNRT::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioSynesthesiaNRT");

	return Clss;
}


// AudioSynesthesiaNRT AudioSynesthesia.Default__AudioSynesthesiaNRT
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioSynesthesiaNRT* UAudioSynesthesiaNRT::GetDefaultObj()
{
	static class UAudioSynesthesiaNRT* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioSynesthesiaNRT*>(UAudioSynesthesiaNRT::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.ConstantQNRTSettings
// (None)

class UClass* UConstantQNRTSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstantQNRTSettings");

	return Clss;
}


// ConstantQNRTSettings AudioSynesthesia.Default__ConstantQNRTSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstantQNRTSettings* UConstantQNRTSettings::GetDefaultObj()
{
	static class UConstantQNRTSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstantQNRTSettings*>(UConstantQNRTSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.ConstantQNRT
// (None)

class UClass* UConstantQNRT::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstantQNRT");

	return Clss;
}


// ConstantQNRT AudioSynesthesia.Default__ConstantQNRT
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstantQNRT* UConstantQNRT::GetDefaultObj()
{
	static class UConstantQNRT* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstantQNRT*>(UConstantQNRT::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutConstantQ                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>* OutConstantQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstantQNRT", "GetNormalizedChannelConstantQAtTime");

	Params::UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConstantQ != nullptr)
		*OutConstantQ = std::move(Parms.OutConstantQ);

}


// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutConstantQ                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>* OutConstantQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstantQNRT", "GetChannelConstantQAtTime");

	Params::UConstantQNRT_GetChannelConstantQAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConstantQ != nullptr)
		*OutConstantQ = std::move(Parms.OutConstantQ);

}


// Class AudioSynesthesia.LoudnessSettings
// (None)

class UClass* ULoudnessSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoudnessSettings");

	return Clss;
}


// LoudnessSettings AudioSynesthesia.Default__LoudnessSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoudnessSettings* ULoudnessSettings::GetDefaultObj()
{
	static class ULoudnessSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoudnessSettings*>(ULoudnessSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.LoudnessAnalyzer
// (None)

class UClass* ULoudnessAnalyzer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoudnessAnalyzer");

	return Clss;
}


// LoudnessAnalyzer AudioSynesthesia.Default__LoudnessAnalyzer
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoudnessAnalyzer* ULoudnessAnalyzer::GetDefaultObj()
{
	static class ULoudnessAnalyzer* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoudnessAnalyzer*>(ULoudnessAnalyzer::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.LoudnessNRTSettings
// (None)

class UClass* ULoudnessNRTSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoudnessNRTSettings");

	return Clss;
}


// LoudnessNRTSettings AudioSynesthesia.Default__LoudnessNRTSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoudnessNRTSettings* ULoudnessNRTSettings::GetDefaultObj()
{
	static class ULoudnessNRTSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoudnessNRTSettings*>(ULoudnessNRTSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.LoudnessNRT
// (None)

class UClass* ULoudnessNRT::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoudnessNRT");

	return Clss;
}


// LoudnessNRT AudioSynesthesia.Default__LoudnessNRT
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoudnessNRT* ULoudnessNRT::GetDefaultObj()
{
	static class ULoudnessNRT* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoudnessNRT*>(ULoudnessNRT::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedLoudnessAtTime");

	Params::ULoudnessNRT_GetNormalizedLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32 InChannel, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedChannelLoudnessAtTime");

	Params::ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetLoudnessAtTime");

	Params::ULoudnessNRT_GetLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32 InChannel, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetChannelLoudnessAtTime");

	Params::ULoudnessNRT_GetChannelLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Class AudioSynesthesia.MeterSettings
// (None)

class UClass* UMeterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeterSettings");

	return Clss;
}


// MeterSettings AudioSynesthesia.Default__MeterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeterSettings* UMeterSettings::GetDefaultObj()
{
	static class UMeterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeterSettings*>(UMeterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.MeterAnalyzer
// (None)

class UClass* UMeterAnalyzer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeterAnalyzer");

	return Clss;
}


// MeterAnalyzer AudioSynesthesia.Default__MeterAnalyzer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeterAnalyzer* UMeterAnalyzer::GetDefaultObj()
{
	static class UMeterAnalyzer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeterAnalyzer*>(UMeterAnalyzer::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.OnsetNRTSettings
// (None)

class UClass* UOnsetNRTSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnsetNRTSettings");

	return Clss;
}


// OnsetNRTSettings AudioSynesthesia.Default__OnsetNRTSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnsetNRTSettings* UOnsetNRTSettings::GetDefaultObj()
{
	static class UOnsetNRTSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnsetNRTSettings*>(UOnsetNRTSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioSynesthesia.OnsetNRT
// (None)

class UClass* UOnsetNRT::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnsetNRT");

	return Clss;
}


// OnsetNRT AudioSynesthesia.Default__OnsetNRT
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnsetNRT* UOnsetNRT::GetDefaultObj()
{
	static class UOnsetNRT* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnsetNRT*>(UOnsetNRT::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InStartSeconds                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetTimestamps                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetStrengths                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnsetNRT", "GetNormalizedChannelOnsetsBetweenTimes");

	Params::UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params Parms{};

	Parms.InStartSeconds = InStartSeconds;
	Parms.InEndSeconds = InEndSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = std::move(Parms.OutOnsetTimestamps);

	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = std::move(Parms.OutOnsetStrengths);

}


// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InStartSeconds                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetTimestamps                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetStrengths                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnsetNRT", "GetChannelOnsetsBetweenTimes");

	Params::UOnsetNRT_GetChannelOnsetsBetweenTimes_Params Parms{};

	Parms.InStartSeconds = InStartSeconds;
	Parms.InEndSeconds = InEndSeconds;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = std::move(Parms.OutOnsetTimestamps);

	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = std::move(Parms.OutOnsetStrengths);

}

}


