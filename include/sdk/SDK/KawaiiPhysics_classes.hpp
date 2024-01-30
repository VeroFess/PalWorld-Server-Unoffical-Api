#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{
public:
	TArray<struct FSphericalLimit>               SphericalLimits;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                 CapsuleLimits;                                     // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                  PlanarLimits;                                      // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKawaiiPhysicsLimitsDataAsset* GetDefaultObj();

};

}


