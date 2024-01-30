#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AndroidFileServer.AndroidFileServerBPLibrary
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAndroidFileServerBPLibrary* GetDefaultObj();

	bool StopFileServer(bool bUSB, bool bNetwork);
	bool StartFileServer(bool bUSB, bool bNetwork, int32 Port);
	enum class EAFSActiveType IsFileServerRunning();
};

}


