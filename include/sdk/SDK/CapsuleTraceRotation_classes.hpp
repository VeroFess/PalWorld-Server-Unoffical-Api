#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CapsuleTraceRotation.TraceUtils
class UTraceUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTraceUtils* GetDefaultObj();

	bool CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FRotator& Orientation, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	bool CapsuleTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	bool CapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	bool CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FRotator& Orientation, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	bool CapsuleTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	bool CapsuleTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
};

}


