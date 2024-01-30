#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EQosResponseType : uint8
{
	NoResponse                     = 0,
	Success                        = 1,
	Failure                        = 2,
	EQosResponseType_MAX           = 3,
};

enum class EQosDatacenterResult : uint8
{
	Invalid                        = 0,
	Success                        = 1,
	Incomplete                     = 2,
	EQosDatacenterResult_MAX       = 3,
};

enum class EQosCompletionResult : uint8
{
	Invalid                        = 0,
	Success                        = 1,
	Failure                        = 2,
	Canceled                       = 3,
	EQosCompletionResult_MAX       = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Qos.QosSubspaceComparisonParams
struct FQosSubspaceComparisonParams
{
public:
	int32                                        MaxNonSubspacePingMs;                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinSubspacePingMs;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConstantMaxToleranceMs;                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaledMaxTolerancePct;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Qos.QosPingServerInfo
struct FQosPingServerInfo
{
public:
	class FString                                Address;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E35[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Qos.QosDatacenterInfo
struct FQosDatacenterInfo
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RegionId;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E36[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQosPingServerInfo>            Servers;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Qos.QosRegionInfo
struct FQosRegionInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FString                                RegionId;                                          // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAssignable;                                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSubspaceBias;                                // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQosSubspaceComparisonParams          SubspaceBiasParams;                                // 0x2C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Qos.DatacenterQosInstance
struct FDatacenterQosInstance
{
public:
	struct FQosDatacenterInfo                    Definition;                                        // 0x0(0x38)(Transient, NativeAccessSpecifierPublic)
	enum class EQosDatacenterResult              Result;                                            // 0x38(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AvgPingMs;                                         // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PingResults;                                       // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastCheckTimestamp;                                // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsable;                                           // 0x60(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Qos.RegionQosInstance
struct FRegionQosInstance
{
public:
	struct FQosRegionInfo                        Definition;                                        // 0x0(0x40)(Transient, NativeAccessSpecifierPublic)
	TArray<struct FDatacenterQosInstance>        DatacenterOptions;                                 // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


