#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0xF8 - 0x0)
// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
struct UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params
{
public:
	class UModularSynthPresetBank*               InBank;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularSynthPreset                   Preset;                                            // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                PresetName;                                        // 0xE8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Synthesis.ModularSynthComponent.SetSynthPreset
struct UModularSynthComponent_SetSynthPreset_Params
{
public:
	struct FModularSynthPreset                   SynthPreset;                                       // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetSustainGain
struct UModularSynthComponent_SetSustainGain_Params
{
public:
	float                                        SustainGain;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
struct UModularSynthComponent_SetStereoDelayWetlevel_Params
{
public:
	float                                        DelayWetlevel;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
struct UModularSynthComponent_SetStereoDelayTime_Params
{
public:
	float                                        DelayTimeMsec;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
struct UModularSynthComponent_SetStereoDelayRatio_Params
{
public:
	float                                        DelayRatio;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
struct UModularSynthComponent_SetStereoDelayMode_Params
{
public:
	enum class ESynthStereoDelayMode             StereoDelayMode;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
struct UModularSynthComponent_SetStereoDelayIsEnabled_Params
{
public:
	bool                                         StereoDelayEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
struct UModularSynthComponent_SetStereoDelayFeedback_Params
{
public:
	float                                        DelayFeedback;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetSpread
struct UModularSynthComponent_SetSpread_Params
{
public:
	float                                        Spread;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetReleaseTime
struct UModularSynthComponent_SetReleaseTime_Params
{
public:
	float                                        ReleaseTimeMsec;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetPortamento
struct UModularSynthComponent_SetPortamento_Params
{
public:
	float                                        Portamento;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetPitchBend
struct UModularSynthComponent_SetPitchBend_Params
{
public:
	float                                        PitchBend;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetPan
struct UModularSynthComponent_SetPan_Params
{
public:
	float                                        Pan;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscType
struct UModularSynthComponent_SetOscType_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESynth1OscType                    OscType;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2220[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscSync
struct UModularSynthComponent_SetOscSync_Params
{
public:
	bool                                         bIsSynced;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscSemitones
struct UModularSynthComponent_SetOscSemitones_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Semitones;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
struct UModularSynthComponent_SetOscPulsewidth_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pulsewidth;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscOctave
struct UModularSynthComponent_SetOscOctave_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Octave;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscGainMod
struct UModularSynthComponent_SetOscGainMod_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscGainMod;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscGain
struct UModularSynthComponent_SetOscGain_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscGain;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
struct UModularSynthComponent_SetOscFrequencyMod_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscFreqMod;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetOscCents
struct UModularSynthComponent_SetOscCents_Params
{
public:
	int32                                        OscIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cents;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
struct UModularSynthComponent_SetModEnvSustainGain_Params
{
public:
	float                                        SustainGain;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
struct UModularSynthComponent_SetModEnvReleaseTime_Params
{
public:
	float                                        Release;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvPatch
struct UModularSynthComponent_SetModEnvPatch_Params
{
public:
	enum class ESynthModEnvPatch                 InPatchType;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvInvert
struct UModularSynthComponent_SetModEnvInvert_Params
{
public:
	bool                                         bInvert;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvDepth
struct UModularSynthComponent_SetModEnvDepth_Params
{
public:
	float                                        Depth;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
struct UModularSynthComponent_SetModEnvDecayTime_Params
{
public:
	float                                        DecayTimeMsec;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
struct UModularSynthComponent_SetModEnvBiasPatch_Params
{
public:
	enum class ESynthModEnvBiasPatch             InPatchType;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
struct UModularSynthComponent_SetModEnvBiasInvert_Params
{
public:
	bool                                         bInvert;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
struct UModularSynthComponent_SetModEnvAttackTime_Params
{
public:
	float                                        AttackTimeMsec;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetLFOType
struct UModularSynthComponent_SetLFOType_Params
{
public:
	int32                                        LFOIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESynthLFOType                     LFOType;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetLFOPatch
struct UModularSynthComponent_SetLFOPatch_Params
{
public:
	int32                                        LFOIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESynthLFOPatchType                LFOPatchType;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetLFOMode
struct UModularSynthComponent_SetLFOMode_Params
{
public:
	int32                                        LFOIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESynthLFOMode                     LFOMode;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2230[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetLFOGainMod
struct UModularSynthComponent_SetLFOGainMod_Params
{
public:
	int32                                        LFOIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GainMod;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetLFOGain
struct UModularSynthComponent_SetLFOGain_Params
{
public:
	int32                                        LFOIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gain;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
struct UModularSynthComponent_SetLFOFrequencyMod_Params
{
public:
	int32                                        LFOIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrequencyModHz;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetLFOFrequency
struct UModularSynthComponent_SetLFOFrequency_Params
{
public:
	int32                                        LFOIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrequencyHz;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetGainDb
struct UModularSynthComponent_SetGainDb_Params
{
public:
	float                                        GainDb;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetFilterType
struct UModularSynthComponent_SetFilterType_Params
{
public:
	enum class ESynthFilterType                  FilterType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetFilterQMod
struct UModularSynthComponent_SetFilterQMod_Params
{
public:
	float                                        FilterQ;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetFilterQ
struct UModularSynthComponent_SetFilterQ_Params
{
public:
	float                                        FilterQ;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
struct UModularSynthComponent_SetFilterFrequencyMod_Params
{
public:
	float                                        FilterFrequencyHz;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetFilterFrequency
struct UModularSynthComponent_SetFilterFrequency_Params
{
public:
	float                                        FilterFrequencyHz;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
struct UModularSynthComponent_SetFilterAlgorithm_Params
{
public:
	enum class ESynthFilterAlgorithm             FilterAlgorithm;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetEnableUnison
struct UModularSynthComponent_SetEnableUnison_Params
{
public:
	bool                                         EnableUnison;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
struct UModularSynthComponent_SetEnableRetrigger_Params
{
public:
	bool                                         RetriggerEnabled;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
struct UModularSynthComponent_SetEnablePolyphony_Params
{
public:
	bool                                         bEnablePolyphony;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.SetEnablePatch
struct UModularSynthComponent_SetEnablePatch_Params
{
public:
	struct FPatchId                              PatchId;                                           // 0x0(0x4)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2247[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetEnableLegato
struct UModularSynthComponent_SetEnableLegato_Params
{
public:
	bool                                         LegatoEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetDecayTime
struct UModularSynthComponent_SetDecayTime_Params
{
public:
	float                                        DecayTimeMsec;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetChorusFrequency
struct UModularSynthComponent_SetChorusFrequency_Params
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetChorusFeedback
struct UModularSynthComponent_SetChorusFeedback_Params
{
public:
	float                                        Feedback;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.ModularSynthComponent.SetChorusEnabled
struct UModularSynthComponent_SetChorusEnabled_Params
{
public:
	bool                                         EnableChorus;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetChorusDepth
struct UModularSynthComponent_SetChorusDepth_Params
{
public:
	float                                        Depth;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.ModularSynthComponent.SetAttackTime
struct UModularSynthComponent_SetAttackTime_Params
{
public:
	float                                        AttackTimeMsec;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.ModularSynthComponent.NoteOn
struct UModularSynthComponent_NoteOn_Params
{
public:
	float                                        Note;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Velocity;                                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.ModularSynthComponent.NoteOff
struct UModularSynthComponent_NoteOff_Params
{
public:
	float                                        Note;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllNotesOff;                                      // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillAllNotes;                                     // 0x5(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Synthesis.ModularSynthComponent.CreatePatch
struct UModularSynthComponent_CreatePatch_Params
{
public:
	enum class ESynth1PatchSource                PatchSource;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSynth1PatchCable>             PatchCables;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bEnableByDefault;                                  // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPatchId                              ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
struct USourceEffectBitCrusherPreset_SetSettings_Params
{
public:
	struct FSourceEffectBitCrusherBaseSettings   Settings;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
struct USourceEffectBitCrusherPreset_SetSampleRateModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             InModulators;                                      // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
struct USourceEffectBitCrusherPreset_SetSampleRateModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
struct USourceEffectBitCrusherPreset_SetSampleRate_Params
{
public:
	float                                        SampleRate;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
struct USourceEffectBitCrusherPreset_SetModulationSettings_Params
{
public:
	struct FSourceEffectBitCrusherSettings       ModulationSettings;                                // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetBits
struct USourceEffectBitCrusherPreset_SetBits_Params
{
public:
	float                                        Bits;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
struct USourceEffectBitCrusherPreset_SetBitModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             InModulators;                                      // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
struct USourceEffectBitCrusherPreset_SetBitModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetWetModulators
struct USourceEffectChorusPreset_SetWetModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
struct USourceEffectChorusPreset_SetWetModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetWet
struct USourceEffectChorusPreset_SetWet_Params
{
public:
	float                                        WetAmount;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators
struct USourceEffectChorusPreset_SetSpreadModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
struct USourceEffectChorusPreset_SetSpreadModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetSpread
struct USourceEffectChorusPreset_SetSpread_Params
{
public:
	float                                        Spread;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetSettings
struct USourceEffectChorusPreset_SetSettings_Params
{
public:
	struct FSourceEffectChorusBaseSettings       Settings;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x258 (0x258 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
struct USourceEffectChorusPreset_SetModulationSettings_Params
{
public:
	struct FSourceEffectChorusSettings           ModulationSettings;                                // 0x0(0x258)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
struct USourceEffectChorusPreset_SetFrequencyModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
struct USourceEffectChorusPreset_SetFrequencyModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetFrequency
struct USourceEffectChorusPreset_SetFrequency_Params
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
struct USourceEffectChorusPreset_SetFeedbackModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
struct USourceEffectChorusPreset_SetFeedbackModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetFeedback
struct USourceEffectChorusPreset_SetFeedback_Params
{
public:
	float                                        Feedback;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetDryModulators
struct USourceEffectChorusPreset_SetDryModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
struct USourceEffectChorusPreset_SetDryModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetDry
struct USourceEffectChorusPreset_SetDry_Params
{
public:
	float                                        DryAmount;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetDepthModulators
struct USourceEffectChorusPreset_SetDepthModulators_Params
{
public:
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
struct USourceEffectChorusPreset_SetDepthModulator_Params
{
public:
	class USoundModulatorBase*                   Modulator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SourceEffectChorusPreset.SetDepth
struct USourceEffectChorusPreset_SetDepth_Params
{
public:
	float                                        Depth;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
struct USourceEffectConvolutionReverbPreset_SetSettings_Params
{
public:
	struct FSourceEffectConvolutionReverbSettings InSettings;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
struct USourceEffectConvolutionReverbPreset_SetImpulseResponse_Params
{
public:
	class UAudioImpulseResponse*                 InImpulseResponse;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
struct USourceEffectDynamicsProcessorPreset_SetSettings_Params
{
public:
	struct FSourceEffectDynamicsProcessorSettings InSettings;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
struct USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params
{
public:
	class UEnvelopeFollowerListener*             EnvelopeFollowerListener;                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
struct USourceEffectEnvelopeFollowerPreset_SetSettings_Params
{
public:
	struct FSourceEffectEnvelopeFollowerSettings InSettings;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
struct USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params
{
public:
	class UEnvelopeFollowerListener*             EnvelopeFollowerListener;                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.SourceEffectEQPreset.SetSettings
struct USourceEffectEQPreset_SetSettings_Params
{
public:
	struct FSourceEffectEQSettings               InSettings;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Synthesis.SourceEffectFilterPreset.SetSettings
struct USourceEffectFilterPreset_SetSettings_Params
{
public:
	struct FSourceEffectFilterSettings           InSettings;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
struct USourceEffectFoldbackDistortionPreset_SetSettings_Params
{
public:
	struct FSourceEffectFoldbackDistortionSettings InSettings;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
struct USourceEffectMidSideSpreaderPreset_SetSettings_Params
{
public:
	struct FSourceEffectMidSideSpreaderSettings  InSettings;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Synthesis.SourceEffectMotionFilterPreset.SetSettings
struct USourceEffectMotionFilterPreset_SetSettings_Params
{
public:
	struct FSourceEffectMotionFilterSettings     InSettings;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectPannerPreset.SetSettings
struct USourceEffectPannerPreset_SetSettings_Params
{
public:
	struct FSourceEffectPannerSettings           InSettings;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.SourceEffectPhaserPreset.SetSettings
struct USourceEffectPhaserPreset_SetSettings_Params
{
public:
	struct FSourceEffectPhaserSettings           InSettings;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
struct USourceEffectRingModulationPreset_SetSettings_Params
{
public:
	struct FSourceEffectRingModulationSettings   InSettings;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
struct USourceEffectSimpleDelayPreset_SetSettings_Params
{
public:
	struct FSourceEffectSimpleDelaySettings      InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
struct USourceEffectStereoDelayPreset_SetSettings_Params
{
public:
	struct FSourceEffectStereoDelaySettings      InSettings;                                        // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
struct USourceEffectWaveShaperPreset_SetSettings_Params
{
public:
	struct FSourceEffectWaveShaperSettings       InSettings;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
struct USubmixEffectConvolutionReverbPreset_SetSettings_Params
{
public:
	struct FSubmixEffectConvolutionReverbSettings InSettings;                                        // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
struct USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params
{
public:
	class UAudioImpulseResponse*                 InImpulseResponse;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength
struct USubmixEffectDelayStatics_SetMaximumDelayLength_Params
{
public:
	struct FSubmixEffectDelaySettings            DelaySettings;                                     // 0x0(0xC)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaximumDelayLength;                                // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings            ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime
struct USubmixEffectDelayStatics_SetInterpolationTime_Params
{
public:
	struct FSubmixEffectDelaySettings            DelaySettings;                                     // 0x0(0xC)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InterpolationTime;                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings            ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Synthesis.SubmixEffectDelayStatics.SetDelayLength
struct USubmixEffectDelayStatics_SetDelayLength_Params
{
public:
	struct FSubmixEffectDelaySettings            DelaySettings;                                     // 0x0(0xC)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DelayLength;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings            ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.SubmixEffectDelayPreset.SetSettings
struct USubmixEffectDelayPreset_SetSettings_Params
{
public:
	struct FSubmixEffectDelaySettings            InSettings;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
struct USubmixEffectDelayPreset_SetInterpolationTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectDelayPreset.SetDelay
struct USubmixEffectDelayPreset_SetDelay_Params
{
public:
	float                                        Length;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
struct USubmixEffectDelayPreset_SetDefaultSettings_Params
{
public:
	struct FSubmixEffectDelaySettings            InSettings;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
struct USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.SubmixEffectFilterPreset.SetSettings
struct USubmixEffectFilterPreset_SetSettings_Params
{
public:
	struct FSubmixEffectFilterSettings           InSettings;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
struct USubmixEffectFilterPreset_SetFilterType_Params
{
public:
	enum class ESubmixFilterType                 InType;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
struct USubmixEffectFilterPreset_SetFilterQMod_Params
{
public:
	float                                        InQ;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
struct USubmixEffectFilterPreset_SetFilterQ_Params
{
public:
	float                                        InQ;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
struct USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params
{
public:
	float                                        InFrequency;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
struct USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params
{
public:
	float                                        InFrequency;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
struct USubmixEffectFilterPreset_SetFilterAlgorithm_Params
{
public:
	enum class ESubmixFilterAlgorithm            InAlgorithm;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
struct USubmixEffectFlexiverbPreset_SetSettings_Params
{
public:
	struct FSubmixEffectFlexiverbSettings        InSettings;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
struct USubmixEffectMultibandCompressorPreset_SetSettings_Params
{
public:
	struct FSubmixEffectMultibandCompressorSettings InSettings;                                        // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
struct USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Params
{
public:
	class USoundSubmix*                          Submix;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
struct USubmixEffectMultibandCompressorPreset_SetAudioBus_Params
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
struct USubmixEffectStereoDelayPreset_SetSettings_Params
{
public:
	struct FSubmixEffectStereoDelaySettings      InSettings;                                        // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
struct USubmixEffectTapDelayPreset_SetTap_Params
{
public:
	int32                                        TapId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTapDelayInfo                         TapInfo;                                           // 0x4(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
struct USubmixEffectTapDelayPreset_SetSettings_Params
{
public:
	struct FSubmixEffectTapDelaySettings         InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
struct USubmixEffectTapDelayPreset_SetInterpolationTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
struct USubmixEffectTapDelayPreset_RemoveTap_Params
{
public:
	int32                                        TapId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
struct USubmixEffectTapDelayPreset_GetTapIds_Params
{
public:
	TArray<int32>                                TapIds;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
struct USubmixEffectTapDelayPreset_GetTap_Params
{
public:
	int32                                        TapId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTapDelayInfo                         TapInfo;                                           // 0x4(0x18)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
struct USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
struct USubmixEffectTapDelayPreset_AddTap_Params
{
public:
	int32                                        TapId;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.SetSustainGain
struct UGranularSynth_SetSustainGain_Params
{
public:
	float                                        SustainGain;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.GranularSynth.SetSoundWave
struct UGranularSynth_SetSoundWave_Params
{
public:
	class USoundWave*                            InSoundWave;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.GranularSynth.SetScrubMode
struct UGranularSynth_SetScrubMode_Params
{
public:
	bool                                         bScrubMode;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.SetReleaseTimeMsec
struct UGranularSynth_SetReleaseTimeMsec_Params
{
public:
	float                                        ReleaseTimeMsec;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.GranularSynth.SetPlayheadTime
struct UGranularSynth_SetPlayheadTime_Params
{
public:
	float                                        InPositionSec;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LerpTimeSec;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGranularSynthSeekType            SeekType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.SetPlaybackSpeed
struct UGranularSynth_SetPlaybackSpeed_Params
{
public:
	float                                        InPlayheadRate;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.GranularSynth.SetGrainVolume
struct UGranularSynth_SetGrainVolume_Params
{
public:
	float                                        BaseVolume;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             VolumeRange;                                       // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.SetGrainsPerSecond
struct UGranularSynth_SetGrainsPerSecond_Params
{
public:
	float                                        InGrainsPerSecond;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.SetGrainProbability
struct UGranularSynth_SetGrainProbability_Params
{
public:
	float                                        InGrainProbability;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.GranularSynth.SetGrainPitch
struct UGranularSynth_SetGrainPitch_Params
{
public:
	float                                        BasePitch;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PitchRange;                                        // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.GranularSynth.SetGrainPan
struct UGranularSynth_SetGrainPan_Params
{
public:
	float                                        BasePan;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PanRange;                                          // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.GranularSynth.SetGrainEnvelopeType
struct UGranularSynth_SetGrainEnvelopeType_Params
{
public:
	enum class EGranularSynthEnvelopeType        EnvelopeType;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.GranularSynth.SetGrainDuration
struct UGranularSynth_SetGrainDuration_Params
{
public:
	float                                        BaseDurationMsec;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DurationRange;                                     // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.SetDecayTime
struct UGranularSynth_SetDecayTime_Params
{
public:
	float                                        DecayTimeMsec;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.SetAttackTime
struct UGranularSynth_SetAttackTime_Params
{
public:
	float                                        AttackTimeMsec;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Synthesis.GranularSynth.NoteOn
struct UGranularSynth_NoteOn_Params
{
public:
	float                                        Note;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Velocity;                                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.GranularSynth.NoteOff
struct UGranularSynth_NoteOff_Params
{
public:
	float                                        Note;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKill;                                             // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.GranularSynth.IsLoaded
struct UGranularSynth_IsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.GetSampleDuration
struct UGranularSynth_GetSampleDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
struct UGranularSynth_GetCurrentPlayheadTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
struct USynthComponentMonoWaveTable_SetWaveTablePosition_Params
{
public:
	float                                        InPosition;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
struct USynthComponentMonoWaveTable_SetSustainPedalState_Params
{
public:
	bool                                         InSustainPedalState;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
struct USynthComponentMonoWaveTable_SetPosLfoType_Params
{
public:
	enum class ESynthLFOType                     InLfoType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
struct USynthComponentMonoWaveTable_SetPosLfoFrequency_Params
{
public:
	float                                        InLfoFrequency;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
struct USynthComponentMonoWaveTable_SetPosLfoDepth_Params
{
public:
	float                                        InLfoDepth;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
struct USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params
{
public:
	float                                        InSustainGain;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
struct USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params
{
public:
	float                                        InReleaseTimeMsec;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
struct USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params
{
public:
	bool                                         bInInvert;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
struct USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params
{
public:
	float                                        InDepth;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
struct USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params
{
public:
	float                                        InDecayTimeMsec;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
struct USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params
{
public:
	bool                                         bInBiasInvert;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
struct USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params
{
public:
	float                                        InDepth;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
struct USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params
{
public:
	float                                        InAttackTimeMsec;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
struct USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params
{
public:
	float                                        InNewQ;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
struct USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params
{
public:
	float                                        InMidiNote;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
struct USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params
{
public:
	float                                        FrequencyOffsetCents;                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
struct USynthComponentMonoWaveTable_SetFrequency_Params
{
public:
	float                                        FrequencyHz;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
struct USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params
{
public:
	float                                        InSustainGain;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
struct USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params
{
public:
	float                                        InReleaseTimeMsec;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
struct USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params
{
public:
	float                                        InDecayTimeMsec;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
struct USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params
{
public:
	bool                                         bInInvert;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
struct USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params
{
public:
	float                                        InDepth;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
struct USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params
{
public:
	bool                                         bInBiasInvert;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
struct USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params
{
public:
	float                                        InDepth;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
struct USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params
{
public:
	float                                        InAttackTimeMsec;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
struct USynthComponentMonoWaveTable_SetCurveValue_Params
{
public:
	int32                                        TableIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeyframeIndex;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewValue;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
struct USynthComponentMonoWaveTable_SetCurveTangent_Params
{
public:
	int32                                        TableIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNewTangent;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2310[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
struct USynthComponentMonoWaveTable_SetCurveInterpolationType_Params
{
public:
	enum class ECurveInterpolationType           InterpolationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2314[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TableIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2315[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
struct USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params
{
public:
	float                                        InSustainGain;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
struct USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params
{
public:
	float                                        InReleaseTimeMsec;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
struct USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params
{
public:
	bool                                         bInInvert;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
struct USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params
{
public:
	float                                        InDepth;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
struct USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params
{
public:
	float                                        InDecayTimeMsec;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
struct USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params
{
public:
	bool                                         bInBiasInvert;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
struct USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params
{
public:
	float                                        InDepth;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
struct USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params
{
public:
	float                                        InAttackTimeMsec;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
struct USynthComponentMonoWaveTable_RefreshWaveTable_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
struct USynthComponentMonoWaveTable_NoteOn_Params
{
public:
	float                                        InMidiNote;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InVelocity;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
struct USynthComponentMonoWaveTable_NoteOff_Params
{
public:
	float                                        InMidiNote;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
struct USynthComponentMonoWaveTable_GetNumTableEntries_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
struct USynthComponentMonoWaveTable_GetMaxTableIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
struct USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params
{
public:
	float                                        TableIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
struct USynthComponentMonoWaveTable_GetCurveTangent_Params
{
public:
	int32                                        TableIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentToneGenerator.SetVolume
struct USynthComponentToneGenerator_SetVolume_Params
{
public:
	float                                        InVolume;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthComponentToneGenerator.SetFrequency
struct USynthComponentToneGenerator_SetFrequency_Params
{
public:
	float                                        InFrequency;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SynthSamplePlayer.SetSoundWave
struct USynthSamplePlayer_SetSoundWave_Params
{
public:
	class USoundWave*                            InSoundWave;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
struct USynthSamplePlayer_SetScrubTimeWidth_Params
{
public:
	float                                        InScrubTimeWidthSec;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthSamplePlayer.SetScrubMode
struct USynthSamplePlayer_SetScrubMode_Params
{
public:
	bool                                         bScrubMode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SynthSamplePlayer.SetPitch
struct USynthSamplePlayer_SetPitch_Params
{
public:
	float                                        InPitch;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSec;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Synthesis.SynthSamplePlayer.SeekToTime
struct USynthSamplePlayer_SeekToTime_Params
{
public:
	float                                        TimeSec;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESamplePlayerSeekType             SeekType;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWrap;                                             // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthSamplePlayer.IsLoaded
struct USynthSamplePlayer_IsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthSamplePlayer.GetSampleDuration
struct USynthSamplePlayer_GetSampleDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
struct USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
struct USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
struct USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Params
{
public:
	float                                        InLinearValue;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDomainMin;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDomainMax;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRangeMin;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRangeMax;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
struct USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Params
{
public:
	float                                        InLogFrequencyValue;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDomainMin;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDomainMax;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRangeMin;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRangeMax;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.Synth2DSlider.SetValue
struct USynth2DSlider_SetValue_Params
{
public:
	struct FVector2D                             InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.Synth2DSlider.SetStepSize
struct USynth2DSlider_SetStepSize_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.Synth2DSlider.SetSliderHandleColor
struct USynth2DSlider_SetSliderHandleColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.Synth2DSlider.SetLocked
struct USynth2DSlider_SetLocked_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.Synth2DSlider.SetIndentHandle
struct USynth2DSlider_SetIndentHandle_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Synthesis.Synth2DSlider.GetValue
struct USynth2DSlider_GetValue_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthKnob.SetValue
struct USynthKnob_SetValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthKnob.SetStepSize
struct USynthKnob_SetStepSize_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Synthesis.SynthKnob.SetLocked
struct USynthKnob_SetLocked_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Synthesis.SynthKnob.GetValue
struct USynthKnob_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


