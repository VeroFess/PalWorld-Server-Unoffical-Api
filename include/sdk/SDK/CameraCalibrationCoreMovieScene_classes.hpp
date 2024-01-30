#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x158 - 0x108)
// Class CameraCalibrationCoreMovieScene.MovieSceneLensComponentSection
class UMovieSceneLensComponentSection : public UMovieSceneHookSection
{
public:
	bool                                         bReapplyNodalOffset;                               // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULensFile*                             OverrideLensFile;                                  // 0x110(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensFile*                             CachedLensFile;                                    // 0x118(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatChannel>       DistortionParameterChannels;                       // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatChannel>       FxFyChannels;                                      // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatChannel>       ImageCenterChannels;                               // 0x140(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FDB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneLensComponentSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class CameraCalibrationCoreMovieScene.MovieSceneLensComponentTrack
class UMovieSceneLensComponentTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneLensComponentTrack* GetDefaultObj();

};

}


