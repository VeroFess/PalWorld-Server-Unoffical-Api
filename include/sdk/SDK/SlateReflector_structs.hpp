#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateReflector.WidgetSnapshotRequest
struct FWidgetSnapshotRequest
{
public:
	struct FGuid                                 TargetInstanceId;                                  // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SnapshotRequestId;                                 // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateReflector.WidgetSnapshotResponse
struct FWidgetSnapshotResponse
{
public:
	struct FGuid                                 SnapshotRequestId;                                 // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                SnapshotData;                                      // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


