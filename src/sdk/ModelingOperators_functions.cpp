#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModelingOperators.RecomputeUVsToolProperties
// (None)

class UClass* URecomputeUVsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecomputeUVsToolProperties");

	return Clss;
}


// RecomputeUVsToolProperties ModelingOperators.Default__RecomputeUVsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URecomputeUVsToolProperties* URecomputeUVsToolProperties::GetDefaultObj()
{
	static class URecomputeUVsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URecomputeUVsToolProperties*>(URecomputeUVsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingOperators.UVLayoutProperties
// (None)

class UClass* UUVLayoutProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutProperties");

	return Clss;
}


// UVLayoutProperties ModelingOperators.Default__UVLayoutProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVLayoutProperties* UUVLayoutProperties::GetDefaultObj()
{
	static class UUVLayoutProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutProperties*>(UUVLayoutProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingOperators.RecomputeUVsOpFactory
// (None)

class UClass* URecomputeUVsOpFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecomputeUVsOpFactory");

	return Clss;
}


// RecomputeUVsOpFactory ModelingOperators.Default__RecomputeUVsOpFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class URecomputeUVsOpFactory* URecomputeUVsOpFactory::GetDefaultObj()
{
	static class URecomputeUVsOpFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<URecomputeUVsOpFactory*>(URecomputeUVsOpFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingOperators.UVLayoutOperatorFactory
// (None)

class UClass* UUVLayoutOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutOperatorFactory");

	return Clss;
}


// UVLayoutOperatorFactory ModelingOperators.Default__UVLayoutOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVLayoutOperatorFactory* UUVLayoutOperatorFactory::GetDefaultObj()
{
	static class UUVLayoutOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutOperatorFactory*>(UUVLayoutOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}

}


