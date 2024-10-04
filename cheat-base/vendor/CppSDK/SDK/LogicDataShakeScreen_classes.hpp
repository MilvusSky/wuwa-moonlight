#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogicDataShakeScreen

#include "Basic.hpp"

#include "LogicDataBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass LogicDataShakeScreen.LogicDataShakeScreen_C
// 0x0058 (0x0098 - 0x0040)
class ULogicDataShakeScreen_C final : public ULogicDataBase_C
{
public:
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Count;                                             // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Epicenter;                                         // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Falloff;                                           // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InnerRadius;                                       // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Interval;                                          // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OrientShakeTowardsEpicenter;                       // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OuterRadius;                                       // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Shake;                                             // 0x0068(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LogicDataShakeScreen_C">();
	}
	static class ULogicDataShakeScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogicDataShakeScreen_C>();
	}
};
static_assert(alignof(ULogicDataShakeScreen_C) == 0x000008, "Wrong alignment on ULogicDataShakeScreen_C");
static_assert(sizeof(ULogicDataShakeScreen_C) == 0x000098, "Wrong size on ULogicDataShakeScreen_C");
static_assert(offsetof(ULogicDataShakeScreen_C, Count) == 0x00003C, "Member 'ULogicDataShakeScreen_C::Count' has a wrong offset!");
static_assert(offsetof(ULogicDataShakeScreen_C, Epicenter) == 0x000040, "Member 'ULogicDataShakeScreen_C::Epicenter' has a wrong offset!");
static_assert(offsetof(ULogicDataShakeScreen_C, Falloff) == 0x000050, "Member 'ULogicDataShakeScreen_C::Falloff' has a wrong offset!");
static_assert(offsetof(ULogicDataShakeScreen_C, InnerRadius) == 0x000054, "Member 'ULogicDataShakeScreen_C::InnerRadius' has a wrong offset!");
static_assert(offsetof(ULogicDataShakeScreen_C, Interval) == 0x000058, "Member 'ULogicDataShakeScreen_C::Interval' has a wrong offset!");
static_assert(offsetof(ULogicDataShakeScreen_C, OrientShakeTowardsEpicenter) == 0x00005C, "Member 'ULogicDataShakeScreen_C::OrientShakeTowardsEpicenter' has a wrong offset!");
static_assert(offsetof(ULogicDataShakeScreen_C, OuterRadius) == 0x000060, "Member 'ULogicDataShakeScreen_C::OuterRadius' has a wrong offset!");
static_assert(offsetof(ULogicDataShakeScreen_C, Shake) == 0x000068, "Member 'ULogicDataShakeScreen_C::Shake' has a wrong offset!");

}

