#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class UObjectPlugin.MyPluginObject
class UMyPluginObject : public UObject
{
public:
	struct FMyPluginStruct                       MyStruct;                                          // 0x28(0x10)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMyPluginObject* GetDefaultObj();

};

}


