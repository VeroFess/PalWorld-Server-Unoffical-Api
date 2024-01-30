#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class SequencerScripting.MovieSceneScriptingKey
class UMovieSceneScriptingKey : public UObject
{
public:
	uint8                                        Pad_877[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_891[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceKey* GetDefaultObj();

	void SetValue(struct FMovieSceneObjectBindingID& InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	struct FMovieSceneObjectBindingID GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
};

// 0x8 (0x30 - 0x28)
// Class SequencerScripting.MovieSceneScriptingChannel
class UMovieSceneScriptingChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneScriptingChannel* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_8B7[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceChannel* GetDefaultObj();

	void SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	struct FMovieSceneObjectBindingID GetDefault();
	class UMovieSceneScriptingActorReferenceKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingBoolKey
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_8C5[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolKey* GetDefaultObj();

	void SetValue(bool InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	bool GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingBoolChannel
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_8E4[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolChannel* GetDefaultObj();

	void SetDefault(bool InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	bool GetDefault();
	TArray<bool> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingByteKey
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_900[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteKey* GetDefaultObj();

	void SetValue(uint8 InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	uint8 GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingByteChannel
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_936[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteChannel* GetDefaultObj();

	void SetDefault(uint8 InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	uint8 GetDefault();
	class UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InTime, uint8 NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleKey
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_970[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleKey* GetDefaultObj();

	void SetValue(double InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue);
	void SetLeaveTangentWeight(float InNewValue);
	void SetLeaveTangent(float InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue);
	void SetArriveTangentWeight(float InNewValue);
	void SetArriveTangent(float InNewValue);
	double GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
	enum class ERichCurveTangentWeightMode GetTangentWeightMode();
	enum class ERichCurveTangentMode GetTangentMode();
	float GetLeaveTangentWeight();
	float GetLeaveTangent();
	enum class ERichCurveInterpMode GetInterpolationMode();
	float GetArriveTangentWeight();
	float GetArriveTangent();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingDoubleChannel
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_9F7[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetDefault(double InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	double GetDefault();
	TArray<double> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingDoubleKey* AddKey(struct FFrameNumber& InTime, double NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingEventKey
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_A12[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventKey* GetDefaultObj();

	void SetValue(struct FMovieSceneEvent& InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	struct FMovieSceneEvent GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingEventChannel
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_A27[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventChannel* GetDefaultObj();

	void RemoveKey(class UMovieSceneScriptingKey* Key);
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
};

// 0x0 (0x40 - 0x40)
// Class SequencerScripting.MovieSceneScriptingFloatKey
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatKey* GetDefaultObj();

	void SetValue(float InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue);
	void SetLeaveTangentWeight(float InNewValue);
	void SetLeaveTangent(float InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue);
	void SetArriveTangentWeight(float InNewValue);
	void SetArriveTangent(float InNewValue);
	float GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
	enum class ERichCurveTangentWeightMode GetTangentWeightMode();
	enum class ERichCurveTangentMode GetTangentMode();
	float GetLeaveTangentWeight();
	float GetLeaveTangent();
	enum class ERichCurveInterpMode GetInterpolationMode();
	float GetArriveTangentWeight();
	float GetArriveTangent();
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActualFloatKey
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_A91[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActualFloatKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_A99[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleAsFloatKey* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SequencerScripting.MovieSceneScriptingFloatChannel
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_AE4[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetDefault(float InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	float GetDefault();
	TArray<float> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingIntegerKey
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_B04[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerKey* GetDefaultObj();

	void SetValue(int32 InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	int32 GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingIntegerChannel
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_B1F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerChannel* GetDefaultObj();

	void SetDefault(int32 InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	int32 GetDefault();
	class UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InTime, int32 NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingObjectPathKey
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_B2F[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathKey* GetDefaultObj();

	void SetValue(class UObject* InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	class UObject* GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_B52[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathChannel* GetDefaultObj();

	void SetDefault(class UObject* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UObject* GetDefault();
	class UMovieSceneScriptingObjectPathKey* AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingStringKey
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_B61[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringKey* GetDefaultObj();

	void SetValue(const class FString& InNewValue);
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	class FString GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingStringChannel
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_B78[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringChannel* GetDefaultObj();

	void SetDefault(const class FString& InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class FString GetDefault();
	class UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InTime, const class FString& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneBindingExtensions
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBindingExtensions* GetDefaultObj();

	void SetParent(struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy& InParentBinding);
	void SetName(struct FMovieSceneBindingProxy& InBinding, const class FString& InName);
	void SetDisplayName(struct FMovieSceneBindingProxy& InBinding, class FText& InDisplayName);
	void RemoveTrack(struct FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);
	void Remove(struct FMovieSceneBindingProxy& InBinding);
	void MoveBindingContents(struct FMovieSceneBindingProxy& SourceBindingId, struct FMovieSceneBindingProxy& DestinationBindingId);
	bool IsValid(struct FMovieSceneBindingProxy& InBinding);
	TArray<class UMovieSceneTrack*> GetTracks(struct FMovieSceneBindingProxy& InBinding);
	class UClass* GetPossessedObjectClass(struct FMovieSceneBindingProxy& InBinding);
	struct FMovieSceneBindingProxy GetParent(struct FMovieSceneBindingProxy& InBinding);
	class UObject* GetObjectTemplate(struct FMovieSceneBindingProxy& InBinding);
	class FString GetName(struct FMovieSceneBindingProxy& InBinding);
	struct FGuid GetId(struct FMovieSceneBindingProxy& InBinding);
	class FText GetDisplayName(struct FMovieSceneBindingProxy& InBinding);
	TArray<struct FMovieSceneBindingProxy> GetChildPossessables(struct FMovieSceneBindingProxy& InBinding);
	TArray<class UMovieSceneTrack*> FindTracksByType(struct FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType);
	TArray<class UMovieSceneTrack*> FindTracksByExactType(struct FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType);
	class UMovieSceneTrack* AddTrack(struct FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneEventTrackExtensions
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventTrackExtensions* GetDefaultObj();

	class UClass* GetBoundObjectPropertyClass(struct FMovieSceneEvent& EventKey);
	class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);
	class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFolderExtensions
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFolderExtensions* GetDefaultObj();

	bool SetFolderName(class UMovieSceneFolder* Folder, class FName InFolderName);
	bool SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor);
	bool RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FMovieSceneBindingProxy& InObjectBinding);
	bool RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);
	bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);
	class FName GetFolderName(class UMovieSceneFolder* Folder);
	struct FColor GetFolderColor(class UMovieSceneFolder* Folder);
	TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* Folder);
	TArray<class UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* Folder);
	TArray<class UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* Folder);
	bool AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FMovieSceneBindingProxy& InObjectBinding);
	bool AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);
	bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneMaterialTrackExtensions
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrackExtensions* GetDefaultObj();

	void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, int32 MaterialIndex);
	int32 GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrackExtensions* GetDefaultObj();

	void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, int32 MaterialIndex);
	int32 GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePropertyTrackExtensions
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrackExtensions* GetDefaultObj();

	void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, class FName& InPropertyName, const class FString& InPropertyPath);
	void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);
	void SetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* InEnum);
	class FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);
	class FString GetPropertyPath(class UMovieScenePropertyTrack* Track);
	class FName GetPropertyName(class UMovieScenePropertyTrack* Track);
	class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);
	class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSectionExtensions
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSectionExtensions* GetDefaultObj();

	void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);
	void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
	void SetStartFrame(class UMovieSceneSection* Section, int32 StartFrame);
	void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);
	void SetRange(class UMovieSceneSection* Section, int32 StartFrame, int32 EndFrame);
	void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);
	void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
	void SetEndFrame(class UMovieSceneSection* Section, int32 EndFrame);
	bool HasStartFrame(class UMovieSceneSection* Section);
	bool HasEndFrame(class UMovieSceneSection* Section);
	float GetStartFrameSeconds(class UMovieSceneSection* Section);
	int32 GetStartFrame(class UMovieSceneSection* Section);
	int32 GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32 InFrame, class UMovieSceneSequence* ParentSequence);
	float GetEndFrameSeconds(class UMovieSceneSection* Section);
	int32 GetEndFrame(class UMovieSceneSection* Section);
	TArray<class UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection* Section, TSubclassOf<class UMovieSceneScriptingChannel> ChannelType);
	TArray<class UMovieSceneScriptingChannel*> GetChannels(class UMovieSceneSection* Section);
	float GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section);
	int32 GetAutoSizeStartFrame(class UMovieSceneSection* Section);
	bool GetAutoSizeHasStartFrame(class UMovieSceneSection* Section);
	bool GetAutoSizeHasEndFrame(class UMovieSceneSection* Section);
	float GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section);
	int32 GetAutoSizeEndFrame(class UMovieSceneSection* Section);
	TArray<class UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection* Section);
	TArray<class UMovieSceneScriptingChannel*> FindChannelsByType(class UMovieSceneSection* Section, TSubclassOf<class UMovieSceneScriptingChannel> ChannelType);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSequenceExtensions
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSequenceExtensions* GetDefaultObj();

	void SortMarkedFrames(class UMovieSceneSequence* Sequence);
	void SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
	void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
	void SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
	void SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
	void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
	void SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
	void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);
	void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);
	void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32 StartFrame);
	void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);
	void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32 EndFrame);
	void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32 InMarkIndex, const struct FFrameNumber& InFrameNumber);
	void SetEvaluationType(class UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType);
	void SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate);
	void SetClockSource(class UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource);
	struct FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* MasterSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID);
	void RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder);
	bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack);
	struct FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);
	struct FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32 StartFrame, int32 Duration);
	struct FMovieSceneObjectBindingID MakeBindingID(class UMovieSceneSequence* MasterSequence, struct FMovieSceneBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space);
	TArray<class UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, struct FMovieSceneBindingProxy& InBinding, class UObject* Context);
	bool IsReadOnly(class UMovieSceneSequence* Sequence);
	float GetWorkRangeStart(class UMovieSceneSequence* InSequence);
	float GetWorkRangeEnd(class UMovieSceneSequence* InSequence);
	float GetViewRangeStart(class UMovieSceneSequence* InSequence);
	float GetViewRangeEnd(class UMovieSceneSequence* InSequence);
	struct FTimecode GetTimecodeSource(class UMovieSceneSequence* Sequence);
	struct FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);
	TArray<struct FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);
	TArray<class UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);
	TArray<struct FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);
	struct FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, struct FMovieSceneBindingProxy& InBinding);
	float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);
	int32 GetPlaybackStart(class UMovieSceneSequence* Sequence);
	struct FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);
	float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);
	int32 GetPlaybackEnd(class UMovieSceneSequence* Sequence);
	class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);
	TArray<class UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);
	TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);
	enum class EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);
	struct FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);
	enum class EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);
	TArray<struct FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);
	struct FMovieSceneObjectBindingID GetBindingID(struct FMovieSceneBindingProxy& InBinding);
	int32 FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward);
	TArray<class UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
	TArray<class UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
	int32 FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const class FString& InLabel);
	int32 FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber);
	struct FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, const class FString& Name);
	struct FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingId);
	void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);
	void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32 DeleteIndex);
	struct FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);
	struct FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);
	class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const class FString& NewFolderName);
	struct FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);
	class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
	int32 AddMarkedFrame(class UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneTrackExtensions
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTrackExtensions* GetDefaultObj();

	void SetTrackRowDisplayName(class UMovieSceneTrack* Track, class FText& InName, int32 RowIndex);
	void SetSortingOrder(class UMovieSceneTrack* Track, int32 SortingOrder);
	void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
	void SetDisplayName(class UMovieSceneTrack* Track, class FText& InName);
	void SetColorTint(class UMovieSceneTrack* Track, struct FColor& ColorTint);
	void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
	class FText GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32 RowIndex);
	int32 GetSortingOrder(class UMovieSceneTrack* Track);
	class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);
	TArray<class UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);
	class FText GetDisplayName(class UMovieSceneTrack* Track);
	struct FColor GetColorTint(class UMovieSceneTrack* Track);
	class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32 InNumChannelsUsed);
	int32 GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32 InNumChannelsUsed);
	int32 GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.SequencerScriptingRangeExtensions
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencerScriptingRangeExtensions* GetDefaultObj();

	void SetStartSeconds(struct FSequencerScriptingRange& Range, float Start);
	void SetStartFrame(struct FSequencerScriptingRange& Range, int32 Start);
	void SetEndSeconds(struct FSequencerScriptingRange& Range, float End);
	void SetEndFrame(struct FSequencerScriptingRange& Range, int32 End);
	void RemoveStart(struct FSequencerScriptingRange& Range);
	void RemoveEnd(struct FSequencerScriptingRange& Range);
	bool HasStart(struct FSequencerScriptingRange& Range);
	bool HasEnd(struct FSequencerScriptingRange& Range);
	float GetStartSeconds(struct FSequencerScriptingRange& Range);
	int32 GetStartFrame(struct FSequencerScriptingRange& Range);
	float GetEndSeconds(struct FSequencerScriptingRange& Range);
	int32 GetEndFrame(struct FSequencerScriptingRange& Range);
};

}


