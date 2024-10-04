#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterCommon_HitWeakness

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C
// 0x0008 (0x0570 - 0x0568)
class UGA_MonsterCommon_HitWeakness_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MonsterCommon_HitWeakness_C;     // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_MonsterCommon_HitWeakness(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_5D118C384AE61F1C80292E818D57686C();
	void OnBlendOut_5D118C384AE61F1C80292E818D57686C();
	void OnInterrupted_5D118C384AE61F1C80292E818D57686C();
	void OnCancelled_5D118C384AE61F1C80292E818D57686C();
	void OnTick_5D118C384AE61F1C80292E818D57686C();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MonsterCommon_HitWeakness_C">();
	}
	static class UGA_MonsterCommon_HitWeakness_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MonsterCommon_HitWeakness_C>();
	}
};
static_assert(alignof(UGA_MonsterCommon_HitWeakness_C) == 0x000008, "Wrong alignment on UGA_MonsterCommon_HitWeakness_C");
static_assert(sizeof(UGA_MonsterCommon_HitWeakness_C) == 0x000570, "Wrong size on UGA_MonsterCommon_HitWeakness_C");
static_assert(offsetof(UGA_MonsterCommon_HitWeakness_C, UberGraphFrame_GA_MonsterCommon_HitWeakness_C) == 0x000568, "Member 'UGA_MonsterCommon_HitWeakness_C::UberGraphFrame_GA_MonsterCommon_HitWeakness_C' has a wrong offset!");

}

