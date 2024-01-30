#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class JsonBlueprintUtilities.JsonBlueprintFunctionLibrary
class UJsonBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UJsonBlueprintFunctionLibrary* GetDefaultObj();

	bool ToString(struct FJsonObjectWrapper& JsonObject, class FString* OutJsonString);
	bool ToFile(struct FJsonObjectWrapper& JsonObject, struct FFilePath& File);
	bool StructToJsonString(int32& Struct, class FString* OutJsonString);
	bool SetField(struct FJsonObjectWrapper& JsonObject, const class FString& FieldName, int32& Value);
	bool HasField(struct FJsonObjectWrapper& JsonObject, const class FString& FieldName);
	bool GetFieldNames(struct FJsonObjectWrapper& JsonObject, TArray<class FString>* FieldNames);
	bool GetField(struct FJsonObjectWrapper& JsonObject, const class FString& FieldName, int32* OutValue);
	bool FromString(class UObject* WorldContextObject, const class FString& JsonString, struct FJsonObjectWrapper* OutJsonObject);
	bool FromFile(class UObject* WorldContextObject, struct FFilePath& File, struct FJsonObjectWrapper* OutJsonObject);
};

}


