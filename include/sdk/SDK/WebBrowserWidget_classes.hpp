#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1B0 - 0x158)
// Class WebBrowserWidget.WebBrowser
class UWebBrowser : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnUrlChanged;                                      // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforePopup;                                     // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConsoleMessage;                                  // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                InitialURL;                                        // 0x188(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTransparency;                             // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_989[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowser* GetDefaultObj();

	void OnUrlChanged__DelegateSignature(class FText& Text);
	void OnConsoleMessage__DelegateSignature(const class FString& Message, const class FString& Source, int32 Line);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void LoadURL(const class FString& NewURL);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	class FString GetUrl();
	class FText GetTitleText();
	void ExecuteJavascript(const class FString& ScriptText);
};

// 0x60 (0x88 - 0x28)
// Class WebBrowserWidget.WebBrowserAssetManager
class UWebBrowserAssetManager : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x28(0x30)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_995[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowserAssetManager* GetDefaultObj();

};

}


