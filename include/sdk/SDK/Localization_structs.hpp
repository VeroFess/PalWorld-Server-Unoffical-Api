#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELocalizationTargetConflictStatus : uint8
{
	Unknown                        = 0,
	ConflictsPresent               = 1,
	Clear                          = 2,
	ELocalizationTargetConflictStatus_MAX = 3,
};

enum class ELocalizationGatherPathRoot : uint8
{
	Auto                           = 0,
	Engine                         = 1,
	Project                        = 2,
	ELocalizationGatherPathRoot_MAX = 3,
};

enum class ELocalizationTargetLoadingPolicy : uint8
{
	Never                          = 0,
	Always                         = 1,
	Editor                         = 2,
	Game                           = 3,
	PropertyNames                  = 4,
	ToolTips                       = 5,
	ELocalizationTargetLoadingPolicy_MAX = 6,
};

enum class ELocTextPlatformSplitMode : uint8
{
	None                           = 0,
	Confidential                   = 1,
	All                            = 2,
	ELocTextPlatformSplitMode_MAX  = 3,
};

enum class ELocalizedTextCollapseMode : uint8
{
	IdenticalTextIdAndSource       = 0,
	IdenticalPackageIdTextIdAndSource = 1,
	IdenticalNamespaceAndSource    = 2,
	ELocalizedTextCollapseMode_MAX = 3,
};

enum class EPortableObjectFormat : uint8
{
	Unreal                         = 0,
	Crowdin                        = 1,
	EPortableObjectFormat_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct Localization.GatherTextSearchDirectory
struct FGatherTextSearchDirectory
{
public:
	enum class ELocalizationGatherPathRoot       PathRoot;                                          // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A18[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Path;                                              // 0x8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Localization.GatherTextIncludePath
struct FGatherTextIncludePath
{
public:
	enum class ELocalizationGatherPathRoot       PathRoot;                                          // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Pattern;                                           // 0x8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Localization.GatherTextExcludePath
struct FGatherTextExcludePath
{
public:
	enum class ELocalizationGatherPathRoot       PathRoot;                                          // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Pattern;                                           // 0x8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Localization.GatherTextFileExtension
struct FGatherTextFileExtension
{
public:
	class FString                                Pattern;                                           // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Localization.GatherTextFromTextFilesConfiguration
struct FGatherTextFromTextFilesConfiguration
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGatherTextSearchDirectory>    SearchDirectories;                                 // 0x8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextExcludePath>        ExcludePathWildcards;                              // 0x18(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextFileExtension>      FileExtensions;                                    // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         ShouldGatherFromEditorOnlyData;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Localization.GatherTextFromPackagesConfiguration
struct FGatherTextFromPackagesConfiguration
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGatherTextIncludePath>        IncludePathWildcards;                              // 0x8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextExcludePath>        ExcludePathWildcards;                              // 0x18(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextFileExtension>      FileExtensions;                                    // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          Collections;                                       // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftClassPath>                ExcludeClasses;                                    // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         ShouldExcludeDerivedClasses;                       // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldGatherFromEditorOnlyData;                    // 0x59(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipGatherCache;                                   // 0x5A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A23[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Localization.MetaDataTextKeyPattern
struct FMetaDataTextKeyPattern
{
public:
	class FString                                Pattern;                                           // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Localization.MetaDataKeyName
struct FMetaDataKeyName
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Localization.MetaDataKeyGatherSpecification
struct FMetaDataKeyGatherSpecification
{
public:
	struct FMetaDataKeyName                      MetaDataKey;                                       // 0x0(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                TextNamespace;                                     // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetaDataTextKeyPattern               TextKeyPattern;                                    // 0x20(0x10)(Edit, Config, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Localization.GatherTextFromMetaDataConfiguration
struct FGatherTextFromMetaDataConfiguration
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGatherTextIncludePath>        IncludePathWildcards;                              // 0x8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextExcludePath>        ExcludePathWildcards;                              // 0x18(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FMetaDataKeyGatherSpecification> KeySpecifications;                                 // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         ShouldGatherFromEditorOnlyData;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A27[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Localization.LocalizationExportingSettings
struct FLocalizationExportingSettings
{
public:
	enum class ELocalizedTextCollapseMode        CollapseMode;                                      // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPortableObjectFormat             POFormat;                                          // 0x1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldPersistCommentsOnExport;                     // 0x2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAddSourceLocationsAsComments;                // 0x3(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Localization.LocalizationCompilationSettings
struct FLocalizationCompilationSettings
{
public:
	bool                                         SkipSourceCheck;                                   // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ValidateFormatPatterns;                            // 0x1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ValidateSafeWhitespace;                            // 0x2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Localization.LocalizationImportDialogueSettings
struct FLocalizationImportDialogueSettings
{
public:
	struct FDirectoryPath                        RawAudioPath;                                      // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImportedDialogueFolder;                            // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportNativeAsSource;                             // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A29[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Localization.CultureStatistics
struct FCultureStatistics
{
public:
	class FString                                CultureName;                                       // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WordCount;                                         // 0x10(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Localization.LocalizationTargetSettings
struct FLocalizationTargetSettings
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x10(0x10)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocalizationTargetConflictStatus ConflictStatus;                                    // 0x20(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         TargetDependencies;                                // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FFilePath>                     AdditionalManifestDependencies;                    // 0x38(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FString>                        RequiredModuleNames;                               // 0x48(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGatherTextFromTextFilesConfiguration GatherFromTextFiles;                               // 0x58(0x40)(Edit, Config, NativeAccessSpecifierPublic)
	struct FGatherTextFromPackagesConfiguration  GatherFromPackages;                                // 0x98(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FGatherTextFromMetaDataConfiguration  GatherFromMetaData;                                // 0xF8(0x40)(Edit, Config, NativeAccessSpecifierPublic)
	struct FLocalizationExportingSettings        ExportSettings;                                    // 0x138(0x4)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FLocalizationCompilationSettings      CompileSettings;                                   // 0x13C(0x3)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLocalizationImportDialogueSettings   ImportDialogueSettings;                            // 0x140(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	int32                                        NativeCultureIndex;                                // 0x168(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCultureStatistics>            SupportedCulturesStatistics;                       // 0x170(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

}


