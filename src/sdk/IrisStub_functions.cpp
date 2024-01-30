#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IrisStub.DataStream
// (None)

class UClass* UDataStream::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataStream");

	return Clss;
}


// DataStream IrisStub.Default__DataStream
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataStream* UDataStream::GetDefaultObj()
{
	static class UDataStream* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataStream*>(UDataStream::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.IrisObjectReferencePackageMap
// (None)

class UClass* UIrisObjectReferencePackageMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IrisObjectReferencePackageMap");

	return Clss;
}


// IrisObjectReferencePackageMap IrisStub.Default__IrisObjectReferencePackageMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UIrisObjectReferencePackageMap* UIrisObjectReferencePackageMap::GetDefaultObj()
{
	static class UIrisObjectReferencePackageMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UIrisObjectReferencePackageMap*>(UIrisObjectReferencePackageMap::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.NetBlobHandler
// (None)

class UClass* UNetBlobHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetBlobHandler");

	return Clss;
}


// NetBlobHandler IrisStub.Default__NetBlobHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetBlobHandler* UNetBlobHandler::GetDefaultObj()
{
	static class UNetBlobHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetBlobHandler*>(UNetBlobHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.NetObjectPrioritizerConfig
// (None)

class UClass* UNetObjectPrioritizerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectPrioritizerConfig");

	return Clss;
}


// NetObjectPrioritizerConfig IrisStub.Default__NetObjectPrioritizerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectPrioritizerConfig* UNetObjectPrioritizerConfig::GetDefaultObj()
{
	static class UNetObjectPrioritizerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectPrioritizerConfig*>(UNetObjectPrioritizerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.NetObjectCountLimiterConfig
// (None)

class UClass* UNetObjectCountLimiterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectCountLimiterConfig");

	return Clss;
}


// NetObjectCountLimiterConfig IrisStub.Default__NetObjectCountLimiterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectCountLimiterConfig* UNetObjectCountLimiterConfig::GetDefaultObj()
{
	static class UNetObjectCountLimiterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectCountLimiterConfig*>(UNetObjectCountLimiterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.NetObjectFilterConfig
// (None)

class UClass* UNetObjectFilterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectFilterConfig");

	return Clss;
}


// NetObjectFilterConfig IrisStub.Default__NetObjectFilterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectFilterConfig* UNetObjectFilterConfig::GetDefaultObj()
{
	static class UNetObjectFilterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectFilterConfig*>(UNetObjectFilterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.NetObjectFilter
// (None)

class UClass* UNetObjectFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectFilter");

	return Clss;
}


// NetObjectFilter IrisStub.Default__NetObjectFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectFilter* UNetObjectFilter::GetDefaultObj()
{
	static class UNetObjectFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectFilter*>(UNetObjectFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.NetObjectPrioritizer
// (None)

class UClass* UNetObjectPrioritizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectPrioritizer");

	return Clss;
}


// NetObjectPrioritizer IrisStub.Default__NetObjectPrioritizer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectPrioritizer* UNetObjectPrioritizer::GetDefaultObj()
{
	static class UNetObjectPrioritizer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectPrioritizer*>(UNetObjectPrioritizer::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.ReplicationBridge
// (None)

class UClass* UReplicationBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationBridge");

	return Clss;
}


// ReplicationBridge IrisStub.Default__ReplicationBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationBridge* UReplicationBridge::GetDefaultObj()
{
	static class UReplicationBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationBridge*>(UReplicationBridge::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.ObjectReplicationBridge
// (None)

class UClass* UObjectReplicationBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectReplicationBridge");

	return Clss;
}


// ObjectReplicationBridge IrisStub.Default__ObjectReplicationBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectReplicationBridge* UObjectReplicationBridge::GetDefaultObj()
{
	static class UObjectReplicationBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectReplicationBridge*>(UObjectReplicationBridge::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.SequentialPartialNetBlobHandlerConfig
// (None)

class UClass* USequentialPartialNetBlobHandlerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequentialPartialNetBlobHandlerConfig");

	return Clss;
}


// SequentialPartialNetBlobHandlerConfig IrisStub.Default__SequentialPartialNetBlobHandlerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USequentialPartialNetBlobHandlerConfig* USequentialPartialNetBlobHandlerConfig::GetDefaultObj()
{
	static class USequentialPartialNetBlobHandlerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USequentialPartialNetBlobHandlerConfig*>(USequentialPartialNetBlobHandlerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.SequentialPartialNetBlobHandler
// (None)

class UClass* USequentialPartialNetBlobHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequentialPartialNetBlobHandler");

	return Clss;
}


// SequentialPartialNetBlobHandler IrisStub.Default__SequentialPartialNetBlobHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class USequentialPartialNetBlobHandler* USequentialPartialNetBlobHandler::GetDefaultObj()
{
	static class USequentialPartialNetBlobHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<USequentialPartialNetBlobHandler*>(USequentialPartialNetBlobHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisStub.SphereWithOwnerBoostNetObjectPrioritizerConfig
// (None)

class UClass* USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphereWithOwnerBoostNetObjectPrioritizerConfig");

	return Clss;
}


// SphereWithOwnerBoostNetObjectPrioritizerConfig IrisStub.Default__SphereWithOwnerBoostNetObjectPrioritizerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USphereWithOwnerBoostNetObjectPrioritizerConfig* USphereWithOwnerBoostNetObjectPrioritizerConfig::GetDefaultObj()
{
	static class USphereWithOwnerBoostNetObjectPrioritizerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USphereWithOwnerBoostNetObjectPrioritizerConfig*>(USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass()->DefaultObject);

	return Default;
}

}


