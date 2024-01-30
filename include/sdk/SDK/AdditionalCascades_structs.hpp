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

// 0x90 (0x90 - 0x0)
// UserDefinedStruct AdditionalCascades.AdditionalCascades
struct FAdditionalCascades
{
public:
	bool                                         GroundCheck_28_A6A012C24B35997C7699838357EE6D33;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_627[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EasyScale_11_67CA65DB47FC16694A0C129F80BAA58A;     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_629[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform_25_E9077CB7454CBBFB01F9FAB68A3A1959;     // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSplinePoint>                  SplinePoints_3_9FEC5B1E442397E1BCAE7EA746E41A17;   // 0x70(0x10)(Edit, BlueprintVisible)
	TArray<class AActor*>                        ActorstoIgnore_15_677CA1B446ED3E57BACA079B76EE1C71; // 0x80(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
};

}


