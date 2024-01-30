#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ReplicationGraph.ReplicationGraph
// (None)

class UClass* UReplicationGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraph");

	return Clss;
}


// ReplicationGraph ReplicationGraph.Default__ReplicationGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraph* UReplicationGraph::GetDefaultObj()
{
	static class UReplicationGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraph*>(UReplicationGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.BasicReplicationGraph
// (None)

class UClass* UBasicReplicationGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicReplicationGraph");

	return Clss;
}


// BasicReplicationGraph ReplicationGraph.Default__BasicReplicationGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UBasicReplicationGraph* UBasicReplicationGraph::GetDefaultObj()
{
	static class UBasicReplicationGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasicReplicationGraph*>(UBasicReplicationGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode
// (None)

class UClass* UReplicationGraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode");

	return Clss;
}


// ReplicationGraphNode ReplicationGraph.Default__ReplicationGraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode* UReplicationGraphNode::GetDefaultObj()
{
	static class UReplicationGraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode*>(UReplicationGraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_ActorList
// (None)

class UClass* UReplicationGraphNode_ActorList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_ActorList");

	return Clss;
}


// ReplicationGraphNode_ActorList ReplicationGraph.Default__ReplicationGraphNode_ActorList
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_ActorList* UReplicationGraphNode_ActorList::GetDefaultObj()
{
	static class UReplicationGraphNode_ActorList* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_ActorList*>(UReplicationGraphNode_ActorList::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// (None)

class UClass* UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_ActorListFrequencyBuckets");

	return Clss;
}


// ReplicationGraphNode_ActorListFrequencyBuckets ReplicationGraph.Default__ReplicationGraphNode_ActorListFrequencyBuckets
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_ActorListFrequencyBuckets* UReplicationGraphNode_ActorListFrequencyBuckets::GetDefaultObj()
{
	static class UReplicationGraphNode_ActorListFrequencyBuckets* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_ActorListFrequencyBuckets*>(UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// (None)

class UClass* UReplicationGraphNode_DynamicSpatialFrequency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_DynamicSpatialFrequency");

	return Clss;
}


// ReplicationGraphNode_DynamicSpatialFrequency ReplicationGraph.Default__ReplicationGraphNode_DynamicSpatialFrequency
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_DynamicSpatialFrequency* UReplicationGraphNode_DynamicSpatialFrequency::GetDefaultObj()
{
	static class UReplicationGraphNode_DynamicSpatialFrequency* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_DynamicSpatialFrequency*>(UReplicationGraphNode_DynamicSpatialFrequency::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// (None)

class UClass* UReplicationGraphNode_ConnectionDormancyNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_ConnectionDormancyNode");

	return Clss;
}


// ReplicationGraphNode_ConnectionDormancyNode ReplicationGraph.Default__ReplicationGraphNode_ConnectionDormancyNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_ConnectionDormancyNode* UReplicationGraphNode_ConnectionDormancyNode::GetDefaultObj()
{
	static class UReplicationGraphNode_ConnectionDormancyNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_ConnectionDormancyNode*>(UReplicationGraphNode_ConnectionDormancyNode::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// (None)

class UClass* UReplicationGraphNode_DormancyNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_DormancyNode");

	return Clss;
}


// ReplicationGraphNode_DormancyNode ReplicationGraph.Default__ReplicationGraphNode_DormancyNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_DormancyNode* UReplicationGraphNode_DormancyNode::GetDefaultObj()
{
	static class UReplicationGraphNode_DormancyNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_DormancyNode*>(UReplicationGraphNode_DormancyNode::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_GridCell
// (None)

class UClass* UReplicationGraphNode_GridCell::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_GridCell");

	return Clss;
}


// ReplicationGraphNode_GridCell ReplicationGraph.Default__ReplicationGraphNode_GridCell
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_GridCell* UReplicationGraphNode_GridCell::GetDefaultObj()
{
	static class UReplicationGraphNode_GridCell* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_GridCell*>(UReplicationGraphNode_GridCell::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// (None)

class UClass* UReplicationGraphNode_GridSpatialization2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_GridSpatialization2D");

	return Clss;
}


// ReplicationGraphNode_GridSpatialization2D ReplicationGraph.Default__ReplicationGraphNode_GridSpatialization2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_GridSpatialization2D* UReplicationGraphNode_GridSpatialization2D::GetDefaultObj()
{
	static class UReplicationGraphNode_GridSpatialization2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_GridSpatialization2D*>(UReplicationGraphNode_GridSpatialization2D::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// (None)

class UClass* UReplicationGraphNode_AlwaysRelevant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_AlwaysRelevant");

	return Clss;
}


// ReplicationGraphNode_AlwaysRelevant ReplicationGraph.Default__ReplicationGraphNode_AlwaysRelevant
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_AlwaysRelevant* UReplicationGraphNode_AlwaysRelevant::GetDefaultObj()
{
	static class UReplicationGraphNode_AlwaysRelevant* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_AlwaysRelevant*>(UReplicationGraphNode_AlwaysRelevant::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// (None)

class UClass* UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_AlwaysRelevant_ForConnection");

	return Clss;
}


// ReplicationGraphNode_AlwaysRelevant_ForConnection ReplicationGraph.Default__ReplicationGraphNode_AlwaysRelevant_ForConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_AlwaysRelevant_ForConnection* UReplicationGraphNode_AlwaysRelevant_ForConnection::GetDefaultObj()
{
	static class UReplicationGraphNode_AlwaysRelevant_ForConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_AlwaysRelevant_ForConnection*>(UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// (None)

class UClass* UReplicationGraphNode_TearOff_ForConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphNode_TearOff_ForConnection");

	return Clss;
}


// ReplicationGraphNode_TearOff_ForConnection ReplicationGraph.Default__ReplicationGraphNode_TearOff_ForConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationGraphNode_TearOff_ForConnection* UReplicationGraphNode_TearOff_ForConnection::GetDefaultObj()
{
	static class UReplicationGraphNode_TearOff_ForConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationGraphNode_TearOff_ForConnection*>(UReplicationGraphNode_TearOff_ForConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.NetReplicationGraphConnection
// (None)

class UClass* UNetReplicationGraphConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetReplicationGraphConnection");

	return Clss;
}


// NetReplicationGraphConnection ReplicationGraph.Default__NetReplicationGraphConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetReplicationGraphConnection* UNetReplicationGraphConnection::GetDefaultObj()
{
	static class UNetReplicationGraphConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetReplicationGraphConnection*>(UNetReplicationGraphConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class ReplicationGraph.ReplicationGraphDebugActor
// (Actor)

class UClass* AReplicationGraphDebugActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationGraphDebugActor");

	return Clss;
}


// ReplicationGraphDebugActor ReplicationGraph.Default__ReplicationGraphDebugActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AReplicationGraphDebugActor* AReplicationGraphDebugActor::GetDefaultObj()
{
	static class AReplicationGraphDebugActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AReplicationGraphDebugActor*>(AReplicationGraphDebugActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStopDebugging");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStartDebugging");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PeriodFrame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class, int32 PeriodFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetPeriodFrameForClass");

	Params::AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params Parms{};

	Parms.Class = Class;
	Parms.PeriodFrame = PeriodFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CullDistance                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetCullDistanceForClass");

	Params::AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params Parms{};

	Parms.Class = Class;
	Parms.CullDistance = CullDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetConditionalActorBreakpoint");

	Params::AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintCullDistances");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintAllActorInfo");

	Params::AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params Parms{};

	Parms.Str = Str;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerCellInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                     CellLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CellExtent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*>& Actors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ClientCellInfo");

	Params::AReplicationGraphDebugActor_ClientCellInfo_Params Parms{};

	Parms.CellLocation = CellLocation;
	Parms.CellExtent = CellExtent;
	Parms.Actors = Actors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


