#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FSR2MovieRenderPipeline.FSR2MoviePipelineSettings
// (None)

class UClass* UFSR2MoviePipelineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FSR2MoviePipelineSettings");

	return Clss;
}


// FSR2MoviePipelineSettings FSR2MovieRenderPipeline.Default__FSR2MoviePipelineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFSR2MoviePipelineSettings* UFSR2MoviePipelineSettings::GetDefaultObj()
{
	static class UFSR2MoviePipelineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFSR2MoviePipelineSettings*>(UFSR2MoviePipelineSettings::StaticClass()->DefaultObject);

	return Default;
}

}


