#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TraceUtilities.TraceUtilLibrary
class UTraceUtilLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTraceUtilLibrary* GetDefaultObj();

	void TraceMarkRegionStart(const class FString& Name);
	void TraceMarkRegionEnd(const class FString& Name);
	void TraceBookmark(const class FString& Name);
	bool ToggleChannel(const class FString& ChannelName, bool Enabled);
	bool StopTracing();
	bool StartTraceToFile(const class FString& Filename, TArray<class FString>& Channels);
	bool StartTraceSendTo(const class FString& Target, TArray<class FString>& Channels);
	bool ResumeTracing();
	bool PauseTracing();
	bool IsTracing();
	bool IsChannelEnabled(const class FString& ChannelName);
	TArray<class FString> GetEnabledChannels();
	TArray<class FString> GetAllChannels();
};

}


