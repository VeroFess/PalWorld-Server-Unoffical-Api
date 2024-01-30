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

// 0x0 (0x0 - 0x0)
// ScriptStruct IrisStub.NetSerializerConfig
struct FNetSerializerConfig
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IrisStub.PolymorphicStructNetSerializerConfig
struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_21E0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IrisStub.PolymorphicArrayStructNetSerializerConfig
struct FPolymorphicArrayStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_21E1[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


