#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroGameScreenshot

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroGameScreenshot.GameScreenshotTask
// 0x0048 (0x0078 - 0x0030)
class UGameScreenshotTask final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnTakeScreenshotCapturedDelegate;                  // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnIOSPhotoLibraryAuthorizationCompletedDelegate;   // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x28];                                      // 0x0050(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnIOSPhotoLibraryAuthorizationCompleted(bool IsGranted);
	void OnScreenshotCaptured(int32 Width, int32 Height, const TArray<struct FColor>& Colors);
	void RequestIOSPhotoLibraryAuthorization();
	void Reset();
	bool TakeScreenshot();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameScreenshotTask">();
	}
	static class UGameScreenshotTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameScreenshotTask>();
	}
};
static_assert(alignof(UGameScreenshotTask) == 0x000008, "Wrong alignment on UGameScreenshotTask");
static_assert(sizeof(UGameScreenshotTask) == 0x000078, "Wrong size on UGameScreenshotTask");
static_assert(offsetof(UGameScreenshotTask, OnTakeScreenshotCapturedDelegate) == 0x000030, "Member 'UGameScreenshotTask::OnTakeScreenshotCapturedDelegate' has a wrong offset!");
static_assert(offsetof(UGameScreenshotTask, OnIOSPhotoLibraryAuthorizationCompletedDelegate) == 0x000040, "Member 'UGameScreenshotTask::OnIOSPhotoLibraryAuthorizationCompletedDelegate' has a wrong offset!");

// Class KuroGameScreenshot.KuroGameScreenshotBPLibrary
// 0x0000 (0x0030 - 0x0030)
class UKuroGameScreenshotBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void CompressConvertColorsToBitmap(int32 Width, int32 Height, const TArray<struct FColor>& Colors, TArray<uint8>* BitMap);
	static void ConvertColorsToBitmap(int32 Width, int32 Height, const TArray<struct FColor>& Colors, TArray<uint8>* BitMap);
	static bool IsPhotoLibraryAuthorized();
	static class UGameScreenshotTask* PrepareTakeScreenshot(class UObject* Outer_0, const class FString& InFilename, const struct FVector2D& MinCaptureRegion, const struct FVector2D& MaxCaptureRegion, float ScreenshotResolutionX, float ScreenshotResolutionY, bool SaveFile);
	static void SaveColorArrayToAndroidAlbum(int32 Width, int32 Height, const TArray<uint8>& BitMap);
	static void SaveColorArrayToIosAlbum(int32 Width, int32 Height, const TArray<struct FColor>& Colors);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroGameScreenshotBPLibrary">();
	}
	static class UKuroGameScreenshotBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroGameScreenshotBPLibrary>();
	}
};
static_assert(alignof(UKuroGameScreenshotBPLibrary) == 0x000008, "Wrong alignment on UKuroGameScreenshotBPLibrary");
static_assert(sizeof(UKuroGameScreenshotBPLibrary) == 0x000030, "Wrong size on UKuroGameScreenshotBPLibrary");

}

