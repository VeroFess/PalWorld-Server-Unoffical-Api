#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHttpVerbs : uint8
{
	Post                           = 0,
	Put                            = 1,
	Delete                         = 2,
	Patch                          = 3,
	Get                            = 4,
	MAX                            = 255,
};

enum class ERequestPresets : uint8
{
	Json                           = 0,
	Http                           = 1,
	Url                            = 2,
	Custom                         = 3,
	ERequestPresets_MAX            = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct HttpBlueprint.HttpHeader
struct FHttpHeader
{
public:
	TMap<class FString, class FString>           Headers;                                           // 0x0(0x50)(NativeAccessSpecifierPrivate)
};

}


