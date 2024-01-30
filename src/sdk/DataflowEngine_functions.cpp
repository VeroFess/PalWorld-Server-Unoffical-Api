#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataflowEngine.DataflowEdNode
// (None)

class UClass* UDataflowEdNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowEdNode");

	return Clss;
}


// DataflowEdNode DataflowEngine.Default__DataflowEdNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflowEdNode* UDataflowEdNode::GetDefaultObj()
{
	static class UDataflowEdNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflowEdNode*>(UDataflowEdNode::StaticClass()->DefaultObject);

	return Default;
}


// Class DataflowEngine.Dataflow
// (None)

class UClass* UDataflow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dataflow");

	return Clss;
}


// Dataflow DataflowEngine.Default__Dataflow
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflow* UDataflow::GetDefaultObj()
{
	static class UDataflow* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflow*>(UDataflow::StaticClass()->DefaultObject);

	return Default;
}

}


