#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemEOS.NetDriverEOS
// (None)

class UClass* UNetDriverEOS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDriverEOS");

	return Clss;
}


// NetDriverEOS OnlineSubsystemEOS.Default__NetDriverEOS
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetDriverEOS* UNetDriverEOS::GetDefaultObj()
{
	static class UNetDriverEOS* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDriverEOS*>(UNetDriverEOS::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemEOS.EOSArtifactSettings
// (None)

class UClass* UEOSArtifactSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSArtifactSettings");

	return Clss;
}


// EOSArtifactSettings OnlineSubsystemEOS.Default__EOSArtifactSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSArtifactSettings* UEOSArtifactSettings::GetDefaultObj()
{
	static class UEOSArtifactSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSArtifactSettings*>(UEOSArtifactSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemEOS.EOSSettings
// (None)

class UClass* UEOSSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSSettings");

	return Clss;
}


// EOSSettings OnlineSubsystemEOS.Default__EOSSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSSettings* UEOSSettings::GetDefaultObj()
{
	static class UEOSSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSSettings*>(UEOSSettings::StaticClass()->DefaultObject);

	return Default;
}

}


