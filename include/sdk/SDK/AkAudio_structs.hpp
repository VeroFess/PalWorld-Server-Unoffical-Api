#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAkResult : uint8
{
	NotImplemented                 = 0,
	Success                        = 1,
	Fail                           = 2,
	PartialSuccess                 = 3,
	NotCompatible                  = 4,
	AlreadyConnected               = 5,
	InvalidFile                    = 7,
	AudioFileHeaderTooLarge        = 8,
	MaxReached                     = 9,
	InvalidID                      = 14,
	IDNotFound                     = 15,
	InvalidInstanceID              = 16,
	NoMoreData                     = 17,
	InvalidStateGroup              = 20,
	ChildAlreadyHasAParent         = 21,
	InvalidLanguage                = 22,
	CannotAddItseflAsAChild        = 23,
	InvalidParameter               = 31,
	ElementAlreadyInList           = 35,
	PathNotFound                   = 36,
	PathNoVertices                 = 37,
	PathNotRunning                 = 38,
	PathNotPaused                  = 39,
	PathNodeAlreadyInList          = 40,
	PathNodeNotInList              = 41,
	DataNeeded                     = 43,
	NoDataNeeded                   = 44,
	DataReady                      = 45,
	NoDataReady                    = 46,
	InsufficientMemory             = 52,
	Cancelled                      = 53,
	UnknownBankID                  = 54,
	BankReadError                  = 56,
	InvalidSwitchType              = 57,
	FormatNotReady                 = 63,
	WrongBankVersion               = 64,
	FileNotFound                   = 66,
	DeviceNotReady                 = 67,
	BankAlreadyLoaded              = 69,
	RenderedFX                     = 71,
	ProcessNeeded                  = 72,
	ProcessDone                    = 73,
	MemManagerNotInitialized       = 74,
	StreamMgrNotInitialized        = 75,
	SSEInstructionsNotSupported    = 76,
	Busy                           = 77,
	UnsupportedChannelConfig       = 78,
	PluginMediaNotAvailable        = 79,
	MustBeVirtualized              = 80,
	CommandTooLarge                = 81,
	RejectedByFilter               = 82,
	InvalidCustomPlatformName      = 83,
	DLLCannotLoad                  = 84,
	DLLPathNotFound                = 85,
	NoJavaVM                       = 86,
	OpenSLError                    = 87,
	PluginNotRegistered            = 88,
	DataAlignmentError             = 89,
	EAkResult_MAX                  = 90,
};

enum class EAkCallbackType : uint8
{
	EndOfEvent                     = 0,
	Marker                         = 2,
	Duration                       = 3,
	Starvation                     = 5,
	MusicPlayStarted               = 7,
	MusicSyncBeat                  = 8,
	MusicSyncBar                   = 9,
	MusicSyncEntry                 = 10,
	MusicSyncExit                  = 11,
	MusicSyncGrid                  = 12,
	MusicSyncUserCue               = 13,
	MusicSyncPoint                 = 14,
	MIDIEvent                      = 16,
	EAkCallbackType_MAX            = 17,
};

enum class EAkAndroidAudioAPI : uint8
{
	AAudio                         = 0,
	OpenSL_ES                      = 1,
	EAkAndroidAudioAPI_MAX         = 2,
};

enum class EAkAudioSessionCategory : int32
{
	Ambient                        = 0,
	SoloAmbient                    = 1,
	PlayAndRecord                  = 2,
	EAkAudioSessionCategory_MAX    = 3,
};

enum class EAkAudioSessionCategoryOptions : uint8
{
	MixWithOthers                  = 0,
	DuckOthers                     = 1,
	AllowBluetooth                 = 2,
	DefaultToSpeaker               = 3,
	EAkAudioSessionCategoryOptions_MAX = 4,
};

enum class EAkAudioSessionMode : int32
{
	Default                        = 0,
	VoiceChat                      = 1,
	GameChat                       = 2,
	VideoRecording                 = 3,
	Measurement                    = 4,
	MoviePlayback                  = 5,
	VideoChat                      = 6,
	EAkAudioSessionMode_MAX        = 7,
};

enum class EReflectionFilterBits : uint8
{
	Wall                           = 0,
	Ceiling                        = 1,
	Floor                          = 2,
	EReflectionFilterBits_MAX      = 3,
};

enum class EAkAudioContext : uint8
{
	Foreign                        = 0,
	GameplayAudio                  = 1,
	EditorAudio                    = 2,
	AlwaysActive                   = 3,
	EAkAudioContext_MAX            = 4,
};

enum class EPanningRule : uint8
{
	PanningRule_Speakers           = 0,
	PanningRule_Headphones         = 1,
	PanningRule_MAX                = 2,
};

enum class EAkAcousticPortalState : uint8
{
	Closed                         = 0,
	Open                           = 1,
	AkAcousticPortalState_MAX      = 2,
};

enum class EAkChannelConfiguration : uint8
{
	Ak_Parent                      = 0,
	Ak_MainMix                     = 1,
	Ak_Passthrough                 = 2,
	Ak_LFE                         = 3,
	AK_Audio_Objects               = 4,
	Ak_1_0                         = 5,
	Ak_2_0                         = 6,
	Ak_2_1                         = 7,
	Ak_3_0                         = 8,
	Ak_3_1                         = 9,
	Ak_4_0                         = 10,
	Ak_4_1                         = 11,
	Ak_5_0                         = 12,
	Ak_5_1                         = 13,
	Ak_7_1                         = 14,
	Ak_5_1_2                       = 15,
	Ak_7_1_2                       = 16,
	Ak_7_1_4                       = 17,
	Ak_Auro_9_1                    = 18,
	Ak_Auro_10_1                   = 19,
	Ak_Auro_11_1                   = 20,
	Ak_Auro_13_1                   = 21,
	Ak_Ambisonics_1st_order        = 22,
	Ak_Ambisonics_2nd_order        = 23,
	Ak_Ambisonics_3rd_order        = 24,
	Ak_Ambisonics_4th_order        = 25,
	Ak_Ambisonics_5th_order        = 26,
	AkChannelConfiguration_MAX     = 27,
};

enum class EAkSpeakerConfiguration : uint8
{
	Ak_Speaker_Front_Left          = 1,
	Ak_Speaker_Front_Right         = 2,
	Ak_Speaker_Front_Center        = 4,
	Ak_Speaker_Low_Frequency       = 8,
	Ak_Speaker_Back_Left           = 16,
	Ak_Speaker_Back_Right          = 32,
	// Ak_Speaker_Back_Center         = 256,
	// Ak_Speaker_Side_Left           = 512,
	// Ak_Speaker_Side_Right          = 1024,
	// Ak_Speaker_Top                 = 2048,
	// Ak_Speaker_Height_Front_Left   = 4096,
	// Ak_Speaker_Height_Front_Center = 8192,
	// Ak_Speaker_Height_Front_Right  = 16384,
	// Ak_Speaker_Height_Back_Left    = 32768,
	// Ak_Speaker_Height_Back_Center  = 65536,
	// Ak_Speaker_Height_Back_Right   = 131072,
	// Ak_Speaker_MAX                 = 131073,
};

enum class EAkMultiPositionType : uint8
{
	SingleSource                   = 0,
	MultiSources                   = 1,
	MultiDirections                = 2,
	AkMultiPositionType_MAX        = 3,
};

enum class EAkActionOnEventType : uint8
{
	Stop                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Break                          = 3,
	ReleaseEnvelope                = 4,
	AkActionOnEventType_MAX        = 5,
};

enum class EAkCurveInterpolation : uint8
{
	Log3                           = 0,
	Sine                           = 1,
	Log1                           = 2,
	InvSCurve                      = 3,
	Linear                         = 4,
	SCurve                         = 5,
	Exp1                           = 6,
	SineRecip                      = 7,
	Exp3                           = 8,
	LastFadeCurve                  = 8,
	Constant                       = 9,
	EAkCurveInterpolation_MAX      = 10,
};

enum class ERTPCValueType : uint8
{
	Default                        = 0,
	Global                         = 1,
	GameObject                     = 2,
	PlayingID                      = 3,
	Unavailable                    = 4,
	ERTPCValueType_MAX             = 5,
};

enum class EAkMidiEventType : uint8
{
	AkMidiEventTypeInvalid         = 0,
	AkMidiEventTypeNoteOff         = 128,
	AkMidiEventTypeNoteOn          = 144,
	AkMidiEventTypeNoteAftertouch  = 160,
	AkMidiEventTypeController      = 176,
	AkMidiEventTypeProgramChange   = 192,
	AkMidiEventTypeChannelAftertouch = 208,
	AkMidiEventTypePitchBend       = 224,
	AkMidiEventTypeSysex           = 240,
	AkMidiEventTypeEscape          = 247,
	AkMidiEventTypeMeta            = 255,

};

enum class EAkMidiCcValues : uint8
{
	AkMidiCcBankSelectCoarse       = 0,
	AkMidiCcModWheelCoarse         = 1,
	AkMidiCcBreathCtrlCoarse       = 2,
	AkMidiCcCtrl3Coarse            = 3,
	AkMidiCcFootPedalCoarse        = 4,
	AkMidiCcPortamentoCoarse       = 5,
	AkMidiCcDataEntryCoarse        = 6,
	AkMidiCcVolumeCoarse           = 7,
	AkMidiCcBalanceCoarse          = 8,
	AkMidiCcCtrl9Coarse            = 9,
	AkMidiCcPanPositionCoarse      = 10,
	AkMidiCcExpressionCoarse       = 11,
	AkMidiCcEffectCtrl1Coarse      = 12,
	AkMidiCcEffectCtrl2Coarse      = 13,
	AkMidiCcCtrl14Coarse           = 14,
	AkMidiCcCtrl15Coarse           = 15,
	AkMidiCcGenSlider1             = 16,
	AkMidiCcGenSlider2             = 17,
	AkMidiCcGenSlider3             = 18,
	AkMidiCcGenSlider4             = 19,
	AkMidiCcCtrl20Coarse           = 20,
	AkMidiCcCtrl21Coarse           = 21,
	AkMidiCcCtrl22Coarse           = 22,
	AkMidiCcCtrl23Coarse           = 23,
	AkMidiCcCtrl24Coarse           = 24,
	AkMidiCcCtrl25Coarse           = 25,
	AkMidiCcCtrl26Coarse           = 26,
	AkMidiCcCtrl27Coarse           = 27,
	AkMidiCcCtrl28Coarse           = 28,
	AkMidiCcCtrl29Coarse           = 29,
	AkMidiCcCtrl30Coarse           = 30,
	AkMidiCcCtrl31Coarse           = 31,
	AkMidiCcBankSelectFine         = 32,
	AkMidiCcModWheelFine           = 33,
	AkMidiCcBreathCtrlFine         = 34,
	AkMidiCcCtrl3Fine              = 35,
	AkMidiCcFootPedalFine          = 36,
	AkMidiCcPortamentoFine         = 37,
	AkMidiCcDataEntryFine          = 38,
	AkMidiCcVolumeFine             = 39,
	AkMidiCcBalanceFine            = 40,
	AkMidiCcCtrl9Fine              = 41,
	AkMidiCcPanPositionFine        = 42,
	AkMidiCcExpressionFine         = 43,
	AkMidiCcEffectCtrl1Fine        = 44,
	AkMidiCcEffectCtrl2Fine        = 45,
	AkMidiCcCtrl14Fine             = 46,
	AkMidiCcCtrl15Fine             = 47,
	AkMidiCcCtrl20Fine             = 52,
	AkMidiCcCtrl21Fine             = 53,
	AkMidiCcCtrl22Fine             = 54,
	AkMidiCcCtrl23Fine             = 55,
	AkMidiCcCtrl24Fine             = 56,
	AkMidiCcCtrl25Fine             = 57,
	AkMidiCcCtrl26Fine             = 58,
	AkMidiCcCtrl27Fine             = 59,
	AkMidiCcCtrl28Fine             = 60,
	AkMidiCcCtrl29Fine             = 61,
	AkMidiCcCtrl30Fine             = 62,
	AkMidiCcCtrl31Fine             = 63,
	AkMidiCcHoldPedal              = 64,
	AkMidiCcPortamentoOnOff        = 65,
	AkMidiCcSustenutoPedal         = 66,
	AkMidiCcSoftPedal              = 67,
	AkMidiCcLegatoPedal            = 68,
	AkMidiCcHoldPedal2             = 69,
	AkMidiCcSoundVariation         = 70,
	AkMidiCcSoundTimbre            = 71,
	AkMidiCcSoundReleaseTime       = 72,
	AkMidiCcSoundAttackTime        = 73,
	AkMidiCcSoundBrightness        = 74,
	AkMidiCcSoundCtrl6             = 75,
	AkMidiCcSoundCtrl7             = 76,
	AkMidiCcSoundCtrl8             = 77,
	AkMidiCcSoundCtrl9             = 78,
	AkMidiCcSoundCtrl10            = 79,
	AkMidiCcGeneralButton1         = 80,
	AkMidiCcGeneralButton2         = 81,
	AkMidiCcGeneralButton3         = 82,
	AkMidiCcGeneralButton4         = 83,
	AkMidiCcReverbLevel            = 91,
	AkMidiCcTremoloLevel           = 92,
	AkMidiCcChorusLevel            = 93,
	AkMidiCcCelesteLevel           = 94,
	AkMidiCcPhaserLevel            = 95,
	AkMidiCcDataButtonP1           = 96,
	AkMidiCcDataButtonM1           = 97,
	AkMidiCcNonRegisterCoarse      = 98,
	AkMidiCcNonRegisterFine        = 99,
	AkMidiCcAllSoundOff            = 120,
	AkMidiCcAllControllersOff      = 121,
	AkMidiCcLocalKeyboard          = 122,
	AkMidiCcAllNotesOff            = 123,
	AkMidiCcOmniModeOff            = 124,
	AkMidiCcOmniModeOn             = 125,
	AkMidiCcOmniMonophonicOn       = 126,
	AkMidiCcOmniPolyphonicOn       = 127,
	EAkMidiCcValues_MAX            = 128,
};

enum class EAkCodecId : uint8
{
	None                           = 0,
	PCM                            = 1,
	ADPCM                          = 2,
	XMA                            = 3,
	Vorbis                         = 4,
	AAC                            = 10,
	ATRAC9                         = 12,
	OpusNX                         = 17,
	AkOpus                         = 19,
	AkOpusWEM                      = 20,
	AkCodecId_MAX                  = 21,
};

enum class EAkMeshType : uint8
{
	StaticMesh                     = 0,
	CollisionMesh                  = 1,
	AkMeshType_MAX                 = 2,
};

enum class EAkPanningRule : int32
{
	Speakers                       = 0,
	Headphones                     = 1,
	EAkPanningRule_MAX             = 2,
};

enum class EAkChannelConfigType : int32
{
	Anonymous                      = 0,
	Standard                       = 1,
	Ambisonic                      = 2,
	EAkChannelConfigType_MAX       = 3,
};

enum class EAkChannelMask : uint8
{
	FrontLeft                      = 0,
	FrontRight                     = 1,
	FrontCenter                    = 2,
	LowFrequency                   = 3,
	BackLeft                       = 4,
	BackRight                      = 5,
	BackCenter                     = 8,
	SideLeft                       = 9,
	SideRight                      = 10,
	Top                            = 11,
	HeightFrontLeft                = 12,
	HeightFrontCenter              = 13,
	HeightFrontRight               = 14,
	HeightBackLeft                 = 15,
	HeightBackCenter               = 16,
	HeightBackRight                = 17,
	EAkChannelMask_MAX             = 18,
};

enum class EAkCommSystem : int32
{
	Socket                         = 0,
	HTCS                           = 1,
	EAkCommSystem_MAX              = 2,
};

enum class EAkFitToGeometryMode : uint8
{
	OrientedBox                    = 0,
	AlignedBox                     = 1,
	ConvexPolyhedron               = 2,
	EAkFitToGeometryMode_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AKWaapiJsonObject
struct FAKWaapiJsonObject
{
public:
	uint8                                        Pad_175B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkWaapiSubscriptionId
struct FAkWaapiSubscriptionId
{
public:
	uint8                                        Pad_175C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct AkAudio.AkAdvancedInitializationSettings
struct FAkAdvancedInitializationSettings
{
public:
	uint32                                       IO_MemorySize;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       IO_Granularity;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetAutoStreamBufferLength;                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamCache;                                    // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1761[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaximumPinnedBytesInCache;                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGameSyncPreparation;                         // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1762[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ContinuousPlaybackLookAhead;                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MonitorQueuePoolSize;                              // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaximumHardwareTimeoutMs;                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DebugOutOfRangeCheckEnabled;                       // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1763[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugOutOfRangeLimit;                              // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x30 - 0x2C)
// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{
public:
	bool                                         EnableMultiCoreRendering;                          // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1764[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint32                                       AudioAPI;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RoundFrameSizeToHardwareSize;                      // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1767[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct AkAudio.AkAudioSession
struct FAkAudioSession
{
public:
	enum class EAkAudioSessionCategory           AudioSessionCategory;                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       AudioSessionCategoryOptions;                       // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAudioSessionMode               AudioSessionMode;                                  // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AkAudio.AkChannelMask
struct FAkChannelMask
{
public:
	int32                                        ChannelMask;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkOutputSettings
struct FAkOutputSettings
{
public:
	class FString                                AudioDeviceSharesetName;                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IdDevice;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPanningRule                      PanRule;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfiguration           ChannelConfig;                                     // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1768[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct AkAudio.AkMidiEventBase
struct FAkMidiEventBase
{
public:
	enum class EAkMidiEventType                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Chan;                                              // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiGeneric
struct FAkMidiGeneric : public FAkMidiEventBase
{
public:
	uint8                                        Param1;                                            // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Param2;                                            // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiNoteOnOff
struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
public:
	uint8                                        Note;                                              // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Velocity;                                          // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiCc
struct FAkMidiCc : public FAkMidiEventBase
{
public:
	enum class EAkMidiCcValues                   Cc;                                                // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x8 - 0x2)
// ScriptStruct AkAudio.AkMidiPitchBend
struct FAkMidiPitchBend : public FAkMidiEventBase
{
public:
	uint8                                        ValueLsb;                                          // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ValueMsb;                                          // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FullValue;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiNoteAftertouch
struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
public:
	uint8                                        Note;                                              // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x3 - 0x2)
// ScriptStruct AkAudio.AkMidiChannelAftertouch
struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
public:
	uint8                                        Value;                                             // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x3 - 0x2)
// ScriptStruct AkAudio.AkMidiProgramChange
struct FAkMidiProgramChange : public FAkMidiEventBase
{
public:
	uint8                                        ProgramNum;                                        // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AkAudio.AkSegmentInfo
struct FAkSegmentInfo
{
public:
	int32                                        CurrentPosition;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreEntryDuration;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveDuration;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PostExitDuration;                                  // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingLookAheadTime;                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BeatDuration;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BarDuration;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridDuration;                                      // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridOffset;                                        // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AkAudio.AkExternalSourceInfo
struct FAkExternalSourceInfo
{
public:
	class FString                                ExternalSrcName;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCodecId                        CodecID;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Filename;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkExternalMediaAsset*                 ExternalSourceAsset;                               // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStreamed;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkGeometrySurfaceOverride
struct FAkGeometrySurfaceOverride
{
public:
	class UAkAcousticTexture*                    AcousticTexture;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableOcclusionOverride : 1;                      // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D8 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_176E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionValue;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceArea;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1770[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkAcousticSurface
struct FAkAcousticSurface
{
public:
	uint32                                       Texture;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Occlusion;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkTriangle
struct FAkTriangle
{
public:
	uint16                                       Point0;                                            // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Point1;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Point2;                                            // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Surface;                                           // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AkAudio.AkGeometryData
struct FAkGeometryData
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAkAcousticSurface>            Surfaces;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAkTriangle>                   Triangles;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>             ToOverrideAcousticTexture;                         // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>             ToOverrideOcclusion;                               // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x34 - 0x30)
// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1775[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkPluginInfo
struct FAkPluginInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PluginID;                                          // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1779[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Dll;                                               // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkMainOutputSettings
struct FAkMainOutputSettings
{
public:
	class FString                                AudioDeviceShareset;                               // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DeviceID;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkPanningRule                    PanningRule;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfigType              ChannelConfigType;                                 // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ChannelMask;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfChannels;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AkAudio.AkSpatialAudioSettings
struct FAkSpatialAudioSettings
{
public:
	uint32                                       MaxSoundPropagationDepth;                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementThreshold;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfPrimaryRays;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ReflectionOrder;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumPathLength;                                 // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CPULimitPercentage;                                // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableDiffractionOnReflections;                    // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGeometricDiffractionAndTransmission;         // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CalcEmitterVirtualPosition;                        // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseObstruction;                                    // 0x1B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseOcclusion;                                      // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AkAudio.AkCommunicationSettings
struct FAkCommunicationSettings
{
public:
	uint32                                       PoolSize;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DiscoveryBroadcastPort;                            // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       CommandPort;                                       // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NotificationPort;                                  // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NetworkName;                                       // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{
public:
	bool                                         InitializeSystemComms;                             // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{
public:
	enum class EAkCommSystem                     CommunicationSystem;                               // 0x20(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1780[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AkAudio.AkCommonInitializationSettings
struct FAkCommonInitializationSettings
{
public:
	uint32                                       MaximumNumberOfMemoryPools;                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaximumNumberOfPositioningPaths;                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CommandQueueSize;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SamplesPerFrame;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkMainOutputSettings                 MainOutputSettings;                                // 0x10(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        StreamingLookAheadRatio;                           // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NumberOfRefillsInVoice;                            // 0x3C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1781[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkSpatialAudioSettings               SpatialAudioSettings;                              // 0x40(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x68 - 0x60)
// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{
public:
	uint32                                       SampleRate;                                        // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1782[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkBoolPropertyToControl
struct FAkBoolPropertyToControl
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkPropertyToControl
struct FAkPropertyToControl
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint32                                       ACPBatchBufferSize;                                // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1784[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkReverbDescriptor
struct FAkReverbDescriptor
{
public:
	uint8                                        Pad_1785[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
struct FAkGeometrySurfacePropertiesToMap
{
public:
	TSoftObjectPtr<class UAkAcousticTexture>     AcousticTexture;                                   // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionValue;                                    // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1786[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkAcousticTextureParams
struct FAkAcousticTextureParams
{
public:
	struct FVector4                              AbsorptionValues;                                  // 0x0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1787[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkWwiseObjectDetails
struct FAkWwiseObjectDetails
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemPath;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AkAudio.AkWwiseItemToControl
struct FAkWwiseItemToControl
{
public:
	struct FAkWwiseObjectDetails                 ItemPicked;                                        // 0x0(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
	class FString                                ItemPath;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkSurfaceEdgeVerts
struct FAkSurfaceEdgeVerts
{
public:
	uint8                                        Pad_1788[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AkAudio.AkSurfaceEdgeInfo
struct FAkSurfaceEdgeInfo
{
public:
	uint8                                        Pad_1789[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkSurfacePoly
struct FAkSurfacePoly
{
public:
	class UAkAcousticTexture*                    Texture;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Occlusion;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSurface;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SurfaceArea;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_178D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkWaapiFieldNames
struct FAkWaapiFieldNames
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkWaapiUri
struct FAkWaapiUri
{
public:
	class FString                                Uri;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaxSystemAudioObjects;                             // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x34 - 0x30)
// ScriptStruct AkAudio.AkWinGDKAdvancedInitializationSettings
struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1790[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x34 - 0x30)
// ScriptStruct AkAudio.AkXboxOneGDKAdvancedInitializationSettings
struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint16                                       MaximumNumberOfXMAVoices;                          // 0x30(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1791[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkXboxOneGDKApuHeapInitializationSettings
struct FAkXboxOneGDKApuHeapInitializationSettings
{
public:
	uint32                                       CachedSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NonCachedSize;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x34 - 0x30)
// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint16                                       MaximumNumberOfXMAVoices;                          // 0x30(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1794[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
struct FAkXboxOneApuHeapInitializationSettings
{
public:
	uint32                                       CachedSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NonCachedSize;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AkAudio.AkXSXAdvancedInitializationSettings
struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint16                                       MaximumNumberOfXMAVoices;                          // 0x30(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1795[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       MaximumNumberOfOpusVoices;                         // 0x34(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1796[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkXSXApuHeapInitializationSettings
struct FAkXSXApuHeapInitializationSettings
{
public:
	uint32                                       CachedSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NonCachedSize;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAkAudioEventSection*        Section;                                           // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAkAudioRTPCSection*         Section;                                           // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
struct FMovieSceneTangentDataSerializationHelper
{
public:
	float                                        ArriveTangent;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1798[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArriveTangentWeight;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangentWeight;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
struct FMovieSceneFloatValueSerializationHelper
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1799[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTangentDataSerializationHelper Tangent;                                           // 0x8(0x14)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
struct FMovieSceneFloatChannelSerializationHelper
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Times;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatValueSerializationHelper> Values;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDefaultValue;                                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


