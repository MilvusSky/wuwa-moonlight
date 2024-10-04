#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogicDataSuiGuang

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "LogicDataBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass LogicDataSuiGuang.LogicDataSuiGuang_C
// 0x0018 (0x0058 - 0x0040)
class ULogicDataSuiGuang_C final : public ULogicDataBase_C
{
public:
	bool                                          IncludeBullet;                                     // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           NeedTag;                                           // 0x003C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                 NewBulletId;                                       // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LogicDataSuiGuang_C">();
	}
	static class ULogicDataSuiGuang_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogicDataSuiGuang_C>();
	}
};
static_assert(alignof(ULogicDataSuiGuang_C) == 0x000008, "Wrong alignment on ULogicDataSuiGuang_C");
static_assert(sizeof(ULogicDataSuiGuang_C) == 0x000058, "Wrong size on ULogicDataSuiGuang_C");
static_assert(offsetof(ULogicDataSuiGuang_C, IncludeBullet) == 0x000039, "Member 'ULogicDataSuiGuang_C::IncludeBullet' has a wrong offset!");
static_assert(offsetof(ULogicDataSuiGuang_C, NeedTag) == 0x00003C, "Member 'ULogicDataSuiGuang_C::NeedTag' has a wrong offset!");
static_assert(offsetof(ULogicDataSuiGuang_C, NewBulletId) == 0x000048, "Member 'ULogicDataSuiGuang_C::NewBulletId' has a wrong offset!");

}

