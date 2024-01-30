#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LocationServicesBPLibrary.LocationServices
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULocationServices* GetDefaultObj();

	bool StopLocationServices();
	bool StartLocationServices();
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy);
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	class ULocationServicesImpl* GetLocationServicesImpl();
	struct FLocationServicesData GetLastKnownLocation();
	bool AreLocationServicesEnabled();
};

// 0x10 (0x38 - 0x28)
// Class LocationServicesBPLibrary.LocationServicesImpl
class ULocationServicesImpl : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnLocationChanged;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULocationServicesImpl* GetDefaultObj();

};

}


