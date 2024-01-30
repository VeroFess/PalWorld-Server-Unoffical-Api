#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SocketSubsystemEOS.NetDriverEOSBase
// (None)

class UClass* UNetDriverEOSBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDriverEOSBase");

	return Clss;
}


// NetDriverEOSBase SocketSubsystemEOS.Default__NetDriverEOSBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetDriverEOSBase* UNetDriverEOSBase::GetDefaultObj()
{
	static class UNetDriverEOSBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDriverEOSBase*>(UNetDriverEOSBase::StaticClass()->DefaultObject);

	return Default;
}


// Class SocketSubsystemEOS.NetConnectionEOS
// (None)

class UClass* UNetConnectionEOS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetConnectionEOS");

	return Clss;
}


// NetConnectionEOS SocketSubsystemEOS.Default__NetConnectionEOS
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetConnectionEOS* UNetConnectionEOS::GetDefaultObj()
{
	static class UNetConnectionEOS* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetConnectionEOS*>(UNetConnectionEOS::StaticClass()->DefaultObject);

	return Default;
}

}


