#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMediaSoundChannels : int32
{
	Mono                           = 0,
	Stereo                         = 1,
	Surround                       = 2,
	EMediaSoundChannels_MAX        = 3,
};

enum class EMediaSoundComponentFFTSize : uint8
{
	Min_64                         = 0,
	Small_256                      = 1,
	Medium_512                     = 2,
	Large_1024                     = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

enum class EMediaTextureOutputFormat : uint8
{
	MTOF_Default                   = 0,
	MTOF_SRGB_LINOUT               = 1,
	MTOF_MAX                       = 2,
};

enum class EMediaTextureOrientation : uint8
{
	MTORI_Original                 = 0,
	MTORI_CW90                     = 1,
	MTORI_CW180                    = 2,
	MTORI_CW270                    = 3,
	MTORI_MAX                      = 4,
};

enum class EMediaPlayerTrack : uint8
{
	Audio                          = 0,
	Caption                        = 1,
	Metadata                       = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7,
};

enum class EMediaTextureVisibleMipsTiles : uint8
{
	None                           = 0,
	Plane                          = 1,
	Sphere                         = 2,
	EMediaTextureVisibleMipsTiles_MAX = 3,
};

enum class EMediaAudioCaptureDeviceFilter : uint8
{
	None                           = 0,
	Card                           = 1,
	Microphone                     = 2,
	Software                       = 4,
	Unknown                        = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9,
};

enum class EMediaVideoCaptureDeviceFilter : uint8
{
	None                           = 0,
	Card                           = 1,
	Software                       = 2,
	Unknown                        = 4,
	Webcam                         = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8
{
	None                           = 0,
	DepthSensor                    = 1,
	Front                          = 2,
	Rear                           = 4,
	Unknown                        = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
struct FMediaSoundComponentSpectralData
{
public:
	float                                        FrequencyHz;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MediaAssets.MediaSourceCacheSettings
struct FMediaSourceCacheSettings
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToLookAhead;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MediaAssets.MediaCaptureDevice
struct FMediaCaptureDevice
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


