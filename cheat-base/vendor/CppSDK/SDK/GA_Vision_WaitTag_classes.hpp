#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Vision_WaitTag

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GA_Passive_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Vision_WaitTag.GA_Vision_WaitTag_C
// 0x00D0 (0x0630 - 0x0560)
class UGA_Vision_WaitTag_C final : public UGa_Passive_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Vision_WaitTag_C;                // 0x0560(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     ___r;                                              // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UAbilityTask_WaitGameplayTagAdded*, struct FGameplayTag> __Tag__;                                           // 0x0570(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UAbilityTask_WaitGameplayTagRemoved*, struct FGameplayTag> __Tag_d;                                           // 0x05C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAbilityTask_WaitGameplayTagAdded*> Tag____;                                           // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAbilityTask_WaitGameplayTagRemoved*> Tag_d__;                                           // 0x0620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Vision_WaitTag(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Added_21071CB943CD992BF8EFD6A338ACB336(const struct FGameplayTag& Tag);
	void Removed_DB9F64004F8908FEAD99D3815F1E8945(const struct FGameplayTag& Tag);
	void A___();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Vision_WaitTag_C">();
	}
	static class UGA_Vision_WaitTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Vision_WaitTag_C>();
	}
};
static_assert(alignof(UGA_Vision_WaitTag_C) == 0x000008, "Wrong alignment on UGA_Vision_WaitTag_C");
static_assert(sizeof(UGA_Vision_WaitTag_C) == 0x000630, "Wrong size on UGA_Vision_WaitTag_C");
static_assert(offsetof(UGA_Vision_WaitTag_C, UberGraphFrame_GA_Vision_WaitTag_C) == 0x000560, "Member 'UGA_Vision_WaitTag_C::UberGraphFrame_GA_Vision_WaitTag_C' has a wrong offset!");
static_assert(offsetof(UGA_Vision_WaitTag_C, ___r) == 0x000568, "Member 'UGA_Vision_WaitTag_C::___r' has a wrong offset!");
static_assert(offsetof(UGA_Vision_WaitTag_C, __Tag__) == 0x000570, "Member 'UGA_Vision_WaitTag_C::__Tag__' has a wrong offset!");
static_assert(offsetof(UGA_Vision_WaitTag_C, __Tag_d) == 0x0005C0, "Member 'UGA_Vision_WaitTag_C::__Tag_d' has a wrong offset!");
static_assert(offsetof(UGA_Vision_WaitTag_C, Tag____) == 0x000610, "Member 'UGA_Vision_WaitTag_C::Tag____' has a wrong offset!");
static_assert(offsetof(UGA_Vision_WaitTag_C, Tag_d__) == 0x000620, "Member 'UGA_Vision_WaitTag_C::Tag_d__' has a wrong offset!");

}

