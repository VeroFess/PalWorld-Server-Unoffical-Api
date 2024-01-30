#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// Function HttpBlueprint.HttpBlueprintFunctionLibrary.RemoveHeader
struct UHttpBlueprintFunctionLibrary_RemoveHeader_Params
{
public:
	struct FHttpHeader                           HeaderObject;                                      // 0x0(0x50)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                HeaderToRemove;                                    // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function HttpBlueprint.HttpBlueprintFunctionLibrary.MakeRequestHeader
struct UHttpBlueprintFunctionLibrary_MakeRequestHeader_Params
{
public:
	TMap<class FString, class FString>           Headers;                                           // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FHttpHeader                           OutHeader;                                         // 0x50(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetHeaderValue
struct UHttpBlueprintFunctionLibrary_GetHeaderValue_Params
{
public:
	struct FHttpHeader                           HeaderObject;                                      // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                HeaderName;                                        // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutHeaderValue;                                    // 0x60(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders_Map
struct UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Params
{
public:
	struct FHttpHeader                           HeaderObject;                                      // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ReturnValue;                                       // 0x50(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders
struct UHttpBlueprintFunctionLibrary_GetAllHeaders_Params
{
public:
	struct FHttpHeader                           HeaderObject;                                      // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function HttpBlueprint.HttpBlueprintFunctionLibrary.AddHeader
struct UHttpBlueprintFunctionLibrary_AddHeader_Params
{
public:
	struct FHttpHeader                           HeaderObject;                                      // 0x0(0x50)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                NewHeader;                                         // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewHeaderValue;                                    // 0x60(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


