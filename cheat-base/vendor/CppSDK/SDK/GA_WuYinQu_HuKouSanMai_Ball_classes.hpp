#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_HuKouSanMai_Ball

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_WuYinQu_HuKouSanMai_Ball.GA_WuYinQu_HuKouSanMai_Ball_C
// 0x0020 (0x0578 - 0x0558)
class UGA_WuYinQu_HuKouSanMai_Ball_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_WuYinQu_HuKouSanMai_Ball_C;      // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         _____GA_WuYinQu_HuKouSanMai_Ball_C;                // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _____GA_WuYinQu_HuKouSanMai_Ball_C_0;              // 0x0564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 P9_ID;                                             // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_WuYinQu_HuKouSanMai_Ball(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WuYinQu_HuKouSanMai_Ball_C">();
	}
	static class UGA_WuYinQu_HuKouSanMai_Ball_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WuYinQu_HuKouSanMai_Ball_C>();
	}
};
static_assert(alignof(UGA_WuYinQu_HuKouSanMai_Ball_C) == 0x000008, "Wrong alignment on UGA_WuYinQu_HuKouSanMai_Ball_C");
static_assert(sizeof(UGA_WuYinQu_HuKouSanMai_Ball_C) == 0x000578, "Wrong size on UGA_WuYinQu_HuKouSanMai_Ball_C");
static_assert(offsetof(UGA_WuYinQu_HuKouSanMai_Ball_C, UberGraphFrame_GA_WuYinQu_HuKouSanMai_Ball_C) == 0x000558, "Member 'UGA_WuYinQu_HuKouSanMai_Ball_C::UberGraphFrame_GA_WuYinQu_HuKouSanMai_Ball_C' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_HuKouSanMai_Ball_C, _____GA_WuYinQu_HuKouSanMai_Ball_C) == 0x000560, "Member 'UGA_WuYinQu_HuKouSanMai_Ball_C::_____GA_WuYinQu_HuKouSanMai_Ball_C' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_HuKouSanMai_Ball_C, _____GA_WuYinQu_HuKouSanMai_Ball_C_0) == 0x000564, "Member 'UGA_WuYinQu_HuKouSanMai_Ball_C::_____GA_WuYinQu_HuKouSanMai_Ball_C_0' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_HuKouSanMai_Ball_C, P9_ID) == 0x000568, "Member 'UGA_WuYinQu_HuKouSanMai_Ball_C::P9_ID' has a wrong offset!");

}

