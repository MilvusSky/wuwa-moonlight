#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_AirShot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Common_AirShot.GA_Common_AirShot_C
// 0x0010 (0x0568 - 0x0558)
class UGA_Common_AirShot_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Common_AirShot_C;                // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Bp;                                                // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Common_AirShot(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void Added_FFBD6C384BB1FB51A97536A87C7A0267(const struct FGameplayTag& Tag);
	void Added_8BFB30E14403CD30B6735ABFFDD5C4B2(const struct FGameplayTag& Tag);
	void Removed_672DF730488FF3847426B2B0B4DDBA8C(const struct FGameplayTag& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Common_AirShot_C">();
	}
	static class UGA_Common_AirShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Common_AirShot_C>();
	}
};
static_assert(alignof(UGA_Common_AirShot_C) == 0x000008, "Wrong alignment on UGA_Common_AirShot_C");
static_assert(sizeof(UGA_Common_AirShot_C) == 0x000568, "Wrong size on UGA_Common_AirShot_C");
static_assert(offsetof(UGA_Common_AirShot_C, UberGraphFrame_GA_Common_AirShot_C) == 0x000558, "Member 'UGA_Common_AirShot_C::UberGraphFrame_GA_Common_AirShot_C' has a wrong offset!");
static_assert(offsetof(UGA_Common_AirShot_C, Bp) == 0x000560, "Member 'UGA_Common_AirShot_C::Bp' has a wrong offset!");

}

