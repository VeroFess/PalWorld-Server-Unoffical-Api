#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
// (None)

class UClass* UMoviePipelineImagePassBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineImagePassBase");

	return Clss;
}


// MoviePipelineImagePassBase MovieRenderPipelineRenderPasses.Default__MoviePipelineImagePassBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineImagePassBase* UMoviePipelineImagePassBase::GetDefaultObj()
{
	static class UMoviePipelineImagePassBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineImagePassBase*>(UMoviePipelineImagePassBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
// (None)

class UClass* UMoviePipelineDeferredPassBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDeferredPassBase");

	return Clss;
}


// MoviePipelineDeferredPassBase MovieRenderPipelineRenderPasses.Default__MoviePipelineDeferredPassBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDeferredPassBase* UMoviePipelineDeferredPassBase::GetDefaultObj()
{
	static class UMoviePipelineDeferredPassBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDeferredPassBase*>(UMoviePipelineDeferredPassBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
// (None)

class UClass* UMoviePipelineDeferredPass_Unlit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDeferredPass_Unlit");

	return Clss;
}


// MoviePipelineDeferredPass_Unlit MovieRenderPipelineRenderPasses.Default__MoviePipelineDeferredPass_Unlit
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDeferredPass_Unlit* UMoviePipelineDeferredPass_Unlit::GetDefaultObj()
{
	static class UMoviePipelineDeferredPass_Unlit* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDeferredPass_Unlit*>(UMoviePipelineDeferredPass_Unlit::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
// (None)

class UClass* UMoviePipelineDeferredPass_DetailLighting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDeferredPass_DetailLighting");

	return Clss;
}


// MoviePipelineDeferredPass_DetailLighting MovieRenderPipelineRenderPasses.Default__MoviePipelineDeferredPass_DetailLighting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDeferredPass_DetailLighting* UMoviePipelineDeferredPass_DetailLighting::GetDefaultObj()
{
	static class UMoviePipelineDeferredPass_DetailLighting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDeferredPass_DetailLighting*>(UMoviePipelineDeferredPass_DetailLighting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
// (None)

class UClass* UMoviePipelineDeferredPass_LightingOnly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDeferredPass_LightingOnly");

	return Clss;
}


// MoviePipelineDeferredPass_LightingOnly MovieRenderPipelineRenderPasses.Default__MoviePipelineDeferredPass_LightingOnly
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDeferredPass_LightingOnly* UMoviePipelineDeferredPass_LightingOnly::GetDefaultObj()
{
	static class UMoviePipelineDeferredPass_LightingOnly* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDeferredPass_LightingOnly*>(UMoviePipelineDeferredPass_LightingOnly::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
// (None)

class UClass* UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDeferredPass_ReflectionsOnly");

	return Clss;
}


// MoviePipelineDeferredPass_ReflectionsOnly MovieRenderPipelineRenderPasses.Default__MoviePipelineDeferredPass_ReflectionsOnly
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDeferredPass_ReflectionsOnly* UMoviePipelineDeferredPass_ReflectionsOnly::GetDefaultObj()
{
	static class UMoviePipelineDeferredPass_ReflectionsOnly* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDeferredPass_ReflectionsOnly*>(UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
// (None)

class UClass* UMoviePipelineDeferredPass_PathTracer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDeferredPass_PathTracer");

	return Clss;
}


// MoviePipelineDeferredPass_PathTracer MovieRenderPipelineRenderPasses.Default__MoviePipelineDeferredPass_PathTracer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDeferredPass_PathTracer* UMoviePipelineDeferredPass_PathTracer::GetDefaultObj()
{
	static class UMoviePipelineDeferredPass_PathTracer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDeferredPass_PathTracer*>(UMoviePipelineDeferredPass_PathTracer::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
// (None)

class UClass* UMoviePipelineImageSequenceOutputBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineImageSequenceOutputBase");

	return Clss;
}


// MoviePipelineImageSequenceOutputBase MovieRenderPipelineRenderPasses.Default__MoviePipelineImageSequenceOutputBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineImageSequenceOutputBase* UMoviePipelineImageSequenceOutputBase::GetDefaultObj()
{
	static class UMoviePipelineImageSequenceOutputBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineImageSequenceOutputBase*>(UMoviePipelineImageSequenceOutputBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
// (None)

class UClass* UMoviePipelineImageSequenceOutput_EXR::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineImageSequenceOutput_EXR");

	return Clss;
}


// MoviePipelineImageSequenceOutput_EXR MovieRenderPipelineRenderPasses.Default__MoviePipelineImageSequenceOutput_EXR
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineImageSequenceOutput_EXR* UMoviePipelineImageSequenceOutput_EXR::GetDefaultObj()
{
	static class UMoviePipelineImageSequenceOutput_EXR* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineImageSequenceOutput_EXR*>(UMoviePipelineImageSequenceOutput_EXR::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
// (None)

class UClass* UMoviePipelineImageSequenceOutput_BMP::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineImageSequenceOutput_BMP");

	return Clss;
}


// MoviePipelineImageSequenceOutput_BMP MovieRenderPipelineRenderPasses.Default__MoviePipelineImageSequenceOutput_BMP
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineImageSequenceOutput_BMP* UMoviePipelineImageSequenceOutput_BMP::GetDefaultObj()
{
	static class UMoviePipelineImageSequenceOutput_BMP* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineImageSequenceOutput_BMP*>(UMoviePipelineImageSequenceOutput_BMP::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
// (None)

class UClass* UMoviePipelineImageSequenceOutput_PNG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineImageSequenceOutput_PNG");

	return Clss;
}


// MoviePipelineImageSequenceOutput_PNG MovieRenderPipelineRenderPasses.Default__MoviePipelineImageSequenceOutput_PNG
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineImageSequenceOutput_PNG* UMoviePipelineImageSequenceOutput_PNG::GetDefaultObj()
{
	static class UMoviePipelineImageSequenceOutput_PNG* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineImageSequenceOutput_PNG*>(UMoviePipelineImageSequenceOutput_PNG::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
// (None)

class UClass* UMoviePipelineImageSequenceOutput_JPG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineImageSequenceOutput_JPG");

	return Clss;
}


// MoviePipelineImageSequenceOutput_JPG MovieRenderPipelineRenderPasses.Default__MoviePipelineImageSequenceOutput_JPG
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineImageSequenceOutput_JPG* UMoviePipelineImageSequenceOutput_JPG::GetDefaultObj()
{
	static class UMoviePipelineImageSequenceOutput_JPG* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineImageSequenceOutput_JPG*>(UMoviePipelineImageSequenceOutput_JPG::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
// (None)

class UClass* UMoviePipelineWaveOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineWaveOutput");

	return Clss;
}


// MoviePipelineWaveOutput MovieRenderPipelineRenderPasses.Default__MoviePipelineWaveOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineWaveOutput* UMoviePipelineWaveOutput::GetDefaultObj()
{
	static class UMoviePipelineWaveOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineWaveOutput*>(UMoviePipelineWaveOutput::StaticClass()->DefaultObject);

	return Default;
}

}


