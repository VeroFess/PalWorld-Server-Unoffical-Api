#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HttpBlueprint.HttpBlueprintFunctionLibrary
class UHttpBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHttpBlueprintFunctionLibrary* GetDefaultObj();

	bool RemoveHeader(struct FHttpHeader& HeaderObject, const class FString& HeaderToRemove);
	void MakeRequestHeader(TMap<class FString, class FString>& Headers, struct FHttpHeader* OutHeader);
	bool GetHeaderValue(struct FHttpHeader& HeaderObject, const class FString& HeaderName, class FString* OutHeaderValue);
	TMap<class FString, class FString> GetAllHeaders_Map(struct FHttpHeader& HeaderObject);
	TArray<class FString> GetAllHeaders(struct FHttpHeader& HeaderObject);
	void AddHeader(struct FHttpHeader& HeaderObject, const class FString& NewHeader, const class FString& NewHeaderValue);
};

}


