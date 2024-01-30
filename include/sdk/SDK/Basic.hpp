#pragma once

#include <platform_sdk.h>

// Dumped with Dumper-7!

namespace SDK {

    void InitGObjects();

    template<typename Fn>
    inline Fn GetVFunction(const void *Instance, std::size_t Index) {
        auto Vtable = *reinterpret_cast<const void ***>(const_cast<void *>(Instance));
        return reinterpret_cast<Fn>(Vtable[Index]);
    }

    struct FUObjectItem {
            class UObject *Object;
            uint8          Pad_0[0x10];
    };

    class TUObjectArray {
        public:
            enum {
                ElementsPerChunk = 0x10000,
            };

        public:
            static inline auto DecryptPtr = [](void *ObjPtr) -> uint8 * {
                return reinterpret_cast<uint8 *>(ObjPtr);
            };

            FUObjectItem **Objects;
            uint8          Pad_0[0x08];
            int32          MaxElements;
            int32          NumElements;
            int32          MaxChunks;
            int32          NumChunks;

        public:
            // Call InitGObjects() before using these functions
            inline int32 Num() const {
                return NumElements;
            }

            inline FUObjectItem **GetDecrytedObjPtr() const {
                return reinterpret_cast<FUObjectItem **>(DecryptPtr(Objects));
            }

            inline class UObject *GetByIndex(const int32 Index) const {
                if (Index < 0 || Index > NumElements)
                    return nullptr;

                const int32 ChunkIndex = Index / ElementsPerChunk;
                const int32 InChunkIdx = Index % ElementsPerChunk;

                return GetDecrytedObjPtr()[ChunkIndex][InChunkIdx].Object;
            }
    };

    template<class T>
    class TArray {
        protected:
            T    *Data;
            int32 NumElements;
            int32 MaxElements;

        public:
            inline TArray()
                : NumElements(0), MaxElements(0), Data(nullptr) {
            }

            inline TArray(int32 Size)
                : NumElements(0), MaxElements(Size), Data(reinterpret_cast<T *>(malloc(sizeof(T) * Size))) {
            }

            inline T &operator[](uint32 Index) {
                return Data[Index];
            }
            inline const T &operator[](uint32 Index) const {
                return Data[Index];
            }

            inline int32 Num() {
                return NumElements;
            }

            inline int32 Max() {
                return MaxElements;
            }

            inline int32 GetSlack() {
                return MaxElements - NumElements;
            }

            inline bool IsValid() {
                return Data != nullptr;
            }

            inline bool IsValidIndex(int32 Index) {
                return Index >= 0 && Index < NumElements;
            }

            inline void ResetNum() {
                NumElements = 0;
            }
    };

    class FString : public TArray<wchar_t> {
        public:
            inline FString() = default;

            using TArray::TArray;

            inline FString(const wchar_t *WChar) {
                MaxElements = NumElements = *WChar ? std::wcslen(WChar) + 1 : 0;

                if (NumElements) {
                    Data = const_cast<wchar_t *>(WChar);
                }
            }

            inline FString operator=(const wchar_t *&&Other) {
                return FString(Other);
            }

            inline std::wstring ToWString() {
                if (IsValid()) {
                    return Data;
                }

                return L"";
            }

            inline std::string ToString() {
                if (IsValid()) {
                    std::wstring WData(Data);
                    return std::string(WData.begin(), WData.end());
                }

                return "";
            }
    };

    class FName {
        public:
            // GNames - either of type TNameEntryArray [<4.23] or FNamePool [>=4.23]
            static inline void *GNames = nullptr;

            // Members of FName - depending on configuration [WITH_CASE_PRESERVING_NAME | FNAME_OUTLINE_NUMBER]
            int32 ComparisonIndex;
            int32 Number;

            // GetDisplayIndex - returns the Id of the string depending on the configuration [default: ComparisonIndex, WITH_CASE_PRESERVING_NAME: DisplayIndex]
            inline int32 GetDisplayIndex() const {
                return ComparisonIndex;
            }

            // GetRawString - returns an unedited string as the engine uses it
            inline std::string GetRawString() const {
                thread_local FString TempString(1024);
                static void (*AppendString)(const FName *, FString &) = nullptr;

                if (!AppendString)
                    AppendString = reinterpret_cast<void (*)(const FName *, FString &)>(uintptr_t(GetImageBaseOffset()) + Offsets::AppendString);

                AppendString(this, TempString);

                std::string OutputString = TempString.ToString();
                TempString.ResetNum();

                return OutputString;
            }

            static inline void InitGNames() {
                GNames = reinterpret_cast<void *>(uint64(GetImageBaseOffset()) + Offsets::GNames);
            }

            // ToString - returns an edited string as it's used by most SDKs ["/Script/CoreUObject" -> "CoreUObject"]
            inline std::string ToString() const {
                std::string OutputString = GetRawString();

                size_t pos = OutputString.rfind('/');

                if (pos == std::string::npos)
                    return OutputString;

                return OutputString.substr(pos + 1);
            }

            inline bool operator==(const FName &Other) const {
                return ComparisonIndex == Other.ComparisonIndex && Number == Other.Number;
            }

            inline bool operator!=(const FName &Other) const {
                return ComparisonIndex != Other.ComparisonIndex || Number != Other.Number;
            }
    };

    template<typename ClassType>
    class TSubclassOf {
            class UClass *ClassPtr;

        public:
            TSubclassOf() = default;

            inline TSubclassOf(UClass *Class)
                : ClassPtr(Class) {
            }

            inline UClass *Get() {
                return ClassPtr;
            }

            inline operator UClass *() const {
                return ClassPtr;
            }

            template<typename Target, typename = std::enable_if<std::is_base_of_v<Target, ClassType>, bool>::type>
            inline operator TSubclassOf<Target>() const {
                return ClassPtr;
            }

            inline UClass *operator->() {
                return ClassPtr;
            }

            inline TSubclassOf &operator=(UClass *Class) {
                ClassPtr = Class;

                return *this;
            }

            inline bool operator==(const TSubclassOf &Other) const {
                return ClassPtr == Other.ClassPtr;
            }

            inline bool operator!=(const TSubclassOf &Other) const {
                return ClassPtr != Other.ClassPtr;
            }

            inline bool operator==(UClass *Other) const {
                return ClassPtr == Other;
            }

            inline bool operator!=(UClass *Other) const {
                return ClassPtr != Other;
            }
    };

    template<typename ValueType, typename KeyType>
    class TPair {
        public:
            ValueType First;
            KeyType   Second;
    };

    class FTextData {
        public:
            uint8    Pad[0x28];
            wchar_t *Name;
            int32    Length;
    };

    class FText {
        public:
            FTextData *Data;
            uint8      Pad[0x10];

            wchar_t *Get() const {
                if (Data)
                    return Data->Name;

                return nullptr;
            }

            std::string ToString() {
                if (Data) {
                    std::wstring Temp(Data->Name);
                    return std::string(Temp.begin(), Temp.end());
                }

                return "";
            }
    };

    template<typename ElementType>
    class TSet {
            uint8 WaitTillIImplementIt[0x50];
    };

    template<typename KeyType, typename ValueType>
    class TMap {
            uint8 WaitTillIImplementIt[0x50];
    };

    class FWeakObjectPtr {
        protected:
            int32 ObjectIndex;
            int32 ObjectSerialNumber;

        public:
            class UObject *Get() const;

            class UObject *operator->() const;

            bool operator==(const FWeakObjectPtr &Other) const;
            bool operator!=(const FWeakObjectPtr &Other) const;

            bool operator==(const class UObject *Other) const;
            bool operator!=(const class UObject *Other) const;
    };

    template<typename UEType>
    class TWeakObjectPtr : FWeakObjectPtr {
        public:
            UEType *Get() const {
                return static_cast<UEType *>(FWeakObjectPtr::Get());
            }

            UEType *operator->() const {
                return static_cast<UEType *>(FWeakObjectPtr::Get());
            }
    };

    struct FUniqueObjectGuid {
            uint32 A;
            uint32 B;
            uint32 C;
            uint32 D;
    };

    template<typename TObjectID>
    class TPersistentObjectPtr {
        public:
            FWeakObjectPtr WeakPtr;
            int32          TagAtLastTest;
            TObjectID      ObjectID;

            class UObject *Get() const {
                return WeakPtr.Get();
            }
            class UObject *operator->() const {
                return WeakPtr.Get();
            }
    };

    template<typename UEType>
    class TLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid> {
        public:
            UEType *Get() const {
                return static_cast<UEType *>(TPersistentObjectPtr::Get());
            }

            UEType *operator->() const {
                return static_cast<UEType *>(TPersistentObjectPtr::Get());
            }
    };
    namespace SoftObjPathWrapper {
        // 0x10 (0x10 - 0x0)
        // ScriptStruct CoreUObject.TopLevelAssetPath
        struct FTopLevelAssetPath {
            public:
                class FName PackageName; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
                class FName AssetName;   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
        };

        // 0x20 (0x20 - 0x0)
        // ScriptStruct CoreUObject.SoftObjectPath
        struct FSoftObjectPath {
            public:
                struct FTopLevelAssetPath AssetPath;     // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
                class FString             SubPathString; // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        };

    } // namespace SoftObjPathWrapper

    class FSoftObjectPtr : public TPersistentObjectPtr<SoftObjPathWrapper::FSoftObjectPath> {
        public:
            FString     GetSubPathString();
            std::string GetSubPathStringStr();

            template<class SoftObjectPath = FSoftObjectPath>
            SoftObjectPath &GetObjectPath();
    };

    template<typename UEType>
    class TSoftObjectPtr : public FSoftObjectPtr {
        public:
            UEType *Get() const {
                return static_cast<UEType *>(TPersistentObjectPtr::Get());
            }

            UEType *operator->() const {
                return static_cast<UEType *>(TPersistentObjectPtr::Get());
            }
    };

    template<typename UEType>
    class TSoftClassPtr : public FSoftObjectPtr {
        public:
            UEType *Get() const {
                return static_cast<UEType *>(TPersistentObjectPtr::Get());
            }

            UEType *operator->() const {
                return static_cast<UEType *>(TPersistentObjectPtr::Get());
            }
    };

    enum class EClassCastFlags : uint64_t {
        None = 0x0000000000000000,

        Field                     = 0x0000000000000001,
        Int8Property              = 0x0000000000000002,
        Enum                      = 0x0000000000000004,
        Struct                    = 0x0000000000000008,
        ScriptStruct              = 0x0000000000000010,
        Class                     = 0x0000000000000020,
        ByteProperty              = 0x0000000000000040,
        IntProperty               = 0x0000000000000080,
        FloatProperty             = 0x0000000000000100,
        UInt64Property            = 0x0000000000000200,
        ClassProperty             = 0x0000000000000400,
        UInt32Property            = 0x0000000000000800,
        InterfaceProperty         = 0x0000000000001000,
        NameProperty              = 0x0000000000002000,
        StrProperty               = 0x0000000000004000,
        Property                  = 0x0000000000008000,
        ObjectProperty            = 0x0000000000010000,
        BoolProperty              = 0x0000000000020000,
        UInt16Property            = 0x0000000000040000,
        Function                  = 0x0000000000080000,
        StructProperty            = 0x0000000000100000,
        ArrayProperty             = 0x0000000000200000,
        Int64Property             = 0x0000000000400000,
        DelegateProperty          = 0x0000000000800000,
        NumericProperty           = 0x0000000001000000,
        MulticastDelegateProperty = 0x0000000002000000,
        ObjectPropertyBase        = 0x0000000004000000,
        WeakObjectProperty        = 0x0000000008000000,
        LazyObjectProperty        = 0x0000000010000000,
        SoftObjectProperty        = 0x0000000020000000,
        TextProperty              = 0x0000000040000000,
        Int16Property             = 0x0000000080000000,
        DoubleProperty            = 0x0000000100000000,
        SoftClassProperty         = 0x0000000200000000,
        Package                   = 0x0000000400000000,
        Level                     = 0x0000000800000000,
        Actor                     = 0x0000001000000000,
        PlayerController          = 0x0000002000000000,
        Pawn                      = 0x0000004000000000,
        SceneComponent            = 0x0000008000000000,
        PrimitiveComponent        = 0x0000010000000000,
        SkinnedMeshComponent      = 0x0000020000000000,
        SkeletalMeshComponent     = 0x0000040000000000,
        Blueprint                 = 0x0000080000000000,
        DelegateFunction          = 0x0000100000000000,
        StaticMeshComponent       = 0x0000200000000000,
        MapProperty               = 0x0000400000000000,
        SetProperty               = 0x0000800000000000,
        EnumProperty              = 0x0001000000000000,
    };

    inline constexpr EClassCastFlags operator|(EClassCastFlags Left, EClassCastFlags Right) {
        using CastFlagsType = std::underlying_type<EClassCastFlags>::type;
        return static_cast<EClassCastFlags>(static_cast<CastFlagsType>(Left) | static_cast<CastFlagsType>(Right));
    }

    inline bool operator&(EClassCastFlags Left, EClassCastFlags Right) {
        using CastFlagsType = std::underlying_type<EClassCastFlags>::type;
        return (static_cast<CastFlagsType>(Left) & static_cast<CastFlagsType>(Right)) == static_cast<CastFlagsType>(Right);
    }

    enum class EClassFlags : int32 {
        CLASS_None               = 0x00000000u,
        Abstract                 = 0x00000001u,
        DefaultConfig            = 0x00000002u,
        Config                   = 0x00000004u,
        Transient                = 0x00000008u,
        Parsed                   = 0x00000010u,
        MatchedSerializers       = 0x00000020u,
        ProjectUserConfig        = 0x00000040u,
        Native                   = 0x00000080u,
        NoExport                 = 0x00000100u,
        NotPlaceable             = 0x00000200u,
        PerObjectConfig          = 0x00000400u,
        ReplicationDataIsSetUp   = 0x00000800u,
        EditInlineNew            = 0x00001000u,
        CollapseCategories       = 0x00002000u,
        Interface                = 0x00004000u,
        CustomConstructor        = 0x00008000u,
        Const                    = 0x00010000u,
        LayoutChanging           = 0x00020000u,
        CompiledFromBlueprint    = 0x00040000u,
        MinimalAPI               = 0x00080000u,
        RequiredAPI              = 0x00100000u,
        DefaultToInstanced       = 0x00200000u,
        TokenStreamAssembled     = 0x00400000u,
        HasInstancedReference    = 0x00800000u,
        Hidden                   = 0x01000000u,
        Deprecated               = 0x02000000u,
        HideDropDown             = 0x04000000u,
        GlobalUserConfig         = 0x08000000u,
        Intrinsic                = 0x10000000u,
        Constructed              = 0x20000000u,
        ConfigDoNotCheckDefaults = 0x40000000u,
        NewerVersionExists       = 0x80000000u,
    };

    inline constexpr EClassFlags operator|(EClassFlags Left, EClassFlags Right) {
        using ClassFlagsType = std::underlying_type<EClassFlags>::type;
        return static_cast<EClassFlags>(static_cast<ClassFlagsType>(Left) | static_cast<ClassFlagsType>(Right));
    }

    inline bool operator&(EClassFlags Left, EClassFlags Right) {
        using ClassFlagsType = std::underlying_type<EClassFlags>::type;
        return ((static_cast<ClassFlagsType>(Left) & static_cast<ClassFlagsType>(Right)) == static_cast<ClassFlagsType>(Right));
    }

    class FScriptInterface {
        public:
            UObject *ObjectPointer    = nullptr;
            void    *InterfacePointer = nullptr;

            inline UObject *GetObjectRef() {
                return ObjectPointer;
            }
    };

    template<class InterfaceType>
    class TScriptInterface : public FScriptInterface {
        public:
    };

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FFieldClass {
        public:
            FName        Name;          // (0x00[0x08]) NOT AUTO-GENERATED PROPERTY
            uint64       Id;            // (0x08[0x08]) NOT AUTO-GENERATED PROPERTY
            uint64       CastFlags;     // (0x10[0x08]) NOT AUTO-GENERATED PROPERTY
            EClassFlags  ClassFlags;    // (0x18[0x04]) NOT AUTO-GENERATED PROPERTY
            uint8        Pad_509B[0x4]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            FFieldClass *SuperClass;    // (0x20[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FFieldVariant {
        public:
            union {
                    class FField  *Field;
                    class UObject *Object;
            } Container;      // (0x00[0x08]) NOT AUTO-GENERATED PROPERTY
            bool  bIsUObject; // (0x08[0x01]) NOT AUTO-GENERATED PROPERTY
            uint8 Pad[0x7];   // (0x09[0x07]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FField {
        public:
            void         *Vft;   // (0x00[0x08]) NOT AUTO-GENERATED PROPERTY
            FFieldClass  *Class; // (0x08[0x08]) NOT AUTO-GENERATED PROPERTY
            FFieldVariant Owner; // (0x10[0x10]) NOT AUTO-GENERATED PROPERTY
            FField       *Next;  // (0x20[0x08]) NOT AUTO-GENERATED PROPERTY
            FName         Name;  // (0x28[0x08]) NOT AUTO-GENERATED PROPERTY
            int32         Flags; // (0x30[0x04]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FProperty : public FField {
        public:
            uint8  Pad_509C[0x8]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            int32  ElementSize;   // (0x3C[0x04]) NOT AUTO-GENERATED PROPERTY
            uint64 PropertyFlags; // (0x40[0x08]) NOT AUTO-GENERATED PROPERTY
            uint8  Pad_509D[0x4]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            int32  Offset;        // (0x4C[0x04]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FByteProperty : public FProperty {
        public:
            uint8        Pad_509E[0x28]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            class UEnum *Enum;           // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FBoolProperty : public FProperty {
        public:
            uint8 Pad_509F[0x28]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            uint8 FieldSize;      // (0x78[0x01]) NOT AUTO-GENERATED PROPERTY
            uint8 ByteOffset;     // (0x79[0x01]) NOT AUTO-GENERATED PROPERTY
            uint8 ByteMask;       // (0x7A[0x01]) NOT AUTO-GENERATED PROPERTY
            uint8 FieldMask;      // (0x7B[0x01]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FObjectPropertyBase : public FProperty {
        public:
            uint8         Pad_50A0[0x28]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            class UClass *PropertyClass;  // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FClassProperty : public FObjectPropertyBase {
        public:
            class UClass *MetaClass; // (0x80[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FStructProperty : public FProperty {
        public:
            uint8          Pad_50A1[0x28]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            class UStruct *Struct;         // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FArrayProperty : public FProperty {
        public:
            uint8            Pad_50A2[0x28]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            class FProperty *InnerProperty;  // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FMapProperty : public FProperty {
        public:
            uint8            Pad_50A3[0x28]; // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            class FProperty *KeyProperty;    // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
            class FProperty *ValueProperty;  // (0x80[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FSetProperty : public FProperty {
        public:
            uint8            Pad_50A4[0x28];  // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            class FProperty *ElementProperty; // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

#ifdef _MSC_VER
    #pragma pack(push, 0x1)
#endif
    class FEnumProperty : public FProperty {
        public:
            uint8            Pad_50A5[0x28];      // Fixing Size After Last (Predefined) Property  [ Dumper-7 ]
            class FProperty *UnderlayingProperty; // (0x78[0x08]) NOT AUTO-GENERATED PROPERTY
            class UEnum     *Enum;                // (0x80[0x08]) NOT AUTO-GENERATED PROPERTY
    };
#ifdef _MSC_VER
    #pragma pack(pop)
#endif

} // namespace SDK
