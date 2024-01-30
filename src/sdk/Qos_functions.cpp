#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Qos.QosBeaconClient
// (Actor)

class UClass* AQosBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QosBeaconClient");

	return Clss;
}


// QosBeaconClient Qos.Default__QosBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class AQosBeaconClient* AQosBeaconClient::GetDefaultObj()
{
	static class AQosBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<AQosBeaconClient*>(AQosBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function Qos.QosBeaconClient.ServerQosRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      InSessionId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AQosBeaconClient::ServerQosRequest(const class FString& InSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QosBeaconClient", "ServerQosRequest");

	Params::AQosBeaconClient_ServerQosRequest_Params Parms{};

	Parms.InSessionId = InSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Qos.QosBeaconClient.ClientQosResponse
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// enum class EQosResponseType        Response                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AQosBeaconClient::ClientQosResponse(enum class EQosResponseType Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QosBeaconClient", "ClientQosResponse");

	Params::AQosBeaconClient_ClientQosResponse_Params Parms{};

	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Qos.QosBeaconHost
// (Actor)

class UClass* AQosBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QosBeaconHost");

	return Clss;
}


// QosBeaconHost Qos.Default__QosBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class AQosBeaconHost* AQosBeaconHost::GetDefaultObj()
{
	static class AQosBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<AQosBeaconHost*>(AQosBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class Qos.QosEvaluator
// (None)

class UClass* UQosEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QosEvaluator");

	return Clss;
}


// QosEvaluator Qos.Default__QosEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UQosEvaluator* UQosEvaluator::GetDefaultObj()
{
	static class UQosEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UQosEvaluator*>(UQosEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class Qos.QosRegionManager
// (None)

class UClass* UQosRegionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QosRegionManager");

	return Clss;
}


// QosRegionManager Qos.Default__QosRegionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UQosRegionManager* UQosRegionManager::GetDefaultObj()
{
	static class UQosRegionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UQosRegionManager*>(UQosRegionManager::StaticClass()->DefaultObject);

	return Default;
}

}


