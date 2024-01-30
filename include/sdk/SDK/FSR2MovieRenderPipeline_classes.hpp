#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// Class FSR2MovieRenderPipeline.FSR2MoviePipelineSettings
class UFSR2MoviePipelineSettings : public UMoviePipelineViewFamilySetting
{
public:
	enum class EFSR2MoviePipelineQuality         FSR2Quality;                                       // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFSR2MoviePipelineSettings* GetDefaultObj();

};

}


