#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x1F8 - 0x158)
// Class NiagaraUIRenderer.NiagaraSystemWidget
class UNiagaraSystemWidget : public UWidget
{
public:
	class UNiagaraSystem*                        NiagaraSystemReference;                            // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                 // 0x160(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         AutoActivate;                                      // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TickWhenPaused;                                    // 0x1B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DesiredWidgetSize;                                 // 0x1B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FakeDepthScale;                                    // 0x1C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FakeDepthScaleDistance;                            // 0x1CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowDebugSystemInWorld;                            // 0x1D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisableWarnings;                                   // 0x1D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7E[0x16];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANiagaraUIActor*                       NiagaraActor;                                      // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraUIComponent*                   NiagaraComponent;                                  // 0x1F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraSystemWidget* GetDefaultObj();

	void UpdateTickWhenPaused(bool NewTickWhenPaused);
	void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
	void SetRemapMaterial(class UMaterialInterface* OriginalMaterial, class UMaterialInterface* RemapMaterial);
	void SetDesiredWidgetSize(const struct FVector2D& NewDesiredSize);
	class UMaterialInterface* GetRemapMaterial(class UMaterialInterface* OriginalMaterial);
	class UNiagaraUIComponent* GetNiagaraComponent();
	void DeactivateSystem();
	void ActivateSystem(bool Reset);
};

// 0x0 (0x290 - 0x290)
// Class NiagaraUIRenderer.NiagaraUIActor
class ANiagaraUIActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class ANiagaraUIActor* GetDefaultObj();

};

// 0x8 (0x7F0 - 0x7E8)
// Class NiagaraUIRenderer.NiagaraUIComponent
class UNiagaraUIComponent : public UNiagaraComponent
{
public:
	uint8                                        Pad_E96[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraUIComponent* GetDefaultObj();

};

}


