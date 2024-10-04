#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TpSafe

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class TpSafe.TpSafeProxy
// 0x0000 (0x0030 - 0x0030)
class UTpSafeProxy final : public UBlueprintFunctionLibrary
{
public:
	static void DelAntiData();
	static struct FArrayBuffer GetAntiData();
	static struct FArrayBuffer GetAntiData2();
	static void Logout();
	static void RecvAntiData(const struct FArrayBuffer& Data);
	static void SetUserInfo(int32 AccountType, int32 WorldId, const class FString& OpenId, int32 PlayerId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TpSafeProxy">();
	}
	static class UTpSafeProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTpSafeProxy>();
	}
};
static_assert(alignof(UTpSafeProxy) == 0x000008, "Wrong alignment on UTpSafeProxy");
static_assert(sizeof(UTpSafeProxy) == 0x000030, "Wrong size on UTpSafeProxy");

// Class TpSafe.TpSafeSetting
// 0x0008 (0x0038 - 0x0030)
class UTpSafeSetting final : public UObject
{
public:
	bool                                          Enable;                                            // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TpSafeSetting">();
	}
	static class UTpSafeSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTpSafeSetting>();
	}
};
static_assert(alignof(UTpSafeSetting) == 0x000008, "Wrong alignment on UTpSafeSetting");
static_assert(sizeof(UTpSafeSetting) == 0x000038, "Wrong size on UTpSafeSetting");
static_assert(offsetof(UTpSafeSetting, Enable) == 0x000030, "Member 'UTpSafeSetting::Enable' has a wrong offset!");

}

