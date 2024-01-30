#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// (None)

class UClass* UClothConfigCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothConfigCommon");

	return Clss;
}


// ClothConfigCommon ClothingSystemRuntimeCommon.Default__ClothConfigCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothConfigCommon* UClothConfigCommon::GetDefaultObj()
{
	static class UClothConfigCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothConfigCommon*>(UClothConfigCommon::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// (None)

class UClass* UClothSharedConfigCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothSharedConfigCommon");

	return Clss;
}


// ClothSharedConfigCommon ClothingSystemRuntimeCommon.Default__ClothSharedConfigCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothSharedConfigCommon* UClothSharedConfigCommon::GetDefaultObj()
{
	static class UClothSharedConfigCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothSharedConfigCommon*>(UClothSharedConfigCommon::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// (None)

class UClass* UClothingAssetCustomData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetCustomData");

	return Clss;
}


// ClothingAssetCustomData ClothingSystemRuntimeCommon.Default__ClothingAssetCustomData
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetCustomData* UClothingAssetCustomData::GetDefaultObj()
{
	static class UClothingAssetCustomData* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetCustomData*>(UClothingAssetCustomData::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// (None)

class UClass* UClothingAssetCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothingAssetCommon");

	return Clss;
}


// ClothingAssetCommon ClothingSystemRuntimeCommon.Default__ClothingAssetCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothingAssetCommon* UClothingAssetCommon::GetDefaultObj()
{
	static class UClothingAssetCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothingAssetCommon*>(UClothingAssetCommon::StaticClass()->DefaultObject);

	return Default;
}


// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// (None)

class UClass* UClothLODDataCommon_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClothLODDataCommon_Legacy");

	return Clss;
}


// ClothLODDataCommon_Legacy ClothingSystemRuntimeCommon.Default__ClothLODDataCommon_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UClothLODDataCommon_Legacy* UClothLODDataCommon_Legacy::GetDefaultObj()
{
	static class UClothLODDataCommon_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UClothLODDataCommon_Legacy*>(UClothLODDataCommon_Legacy::StaticClass()->DefaultObject);

	return Default;
}

}


