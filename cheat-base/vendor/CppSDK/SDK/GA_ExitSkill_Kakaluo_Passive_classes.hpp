#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ExitSkill_Kakaluo_Passive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Passive_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ExitSkill_Kakaluo_Passive.GA_ExitSkill_Kakaluo_Passive_C
// 0x0028 (0x0588 - 0x0560)
class UGA_ExitSkill_Kakaluo_Passive_C final : public UGa_Passive_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ExitSkill_Kakaluo_Passive_C;     // 0x0560(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int64                                         Buff_Id;                                           // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_QTE_Camera_C*                       QTECamera;                                         // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ___ID;                                             // 0x0578(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_ExitSkill_Kakaluo_Passive(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ExitSkill_Kakaluo_Passive_C">();
	}
	static class UGA_ExitSkill_Kakaluo_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ExitSkill_Kakaluo_Passive_C>();
	}
};
static_assert(alignof(UGA_ExitSkill_Kakaluo_Passive_C) == 0x000008, "Wrong alignment on UGA_ExitSkill_Kakaluo_Passive_C");
static_assert(sizeof(UGA_ExitSkill_Kakaluo_Passive_C) == 0x000588, "Wrong size on UGA_ExitSkill_Kakaluo_Passive_C");
static_assert(offsetof(UGA_ExitSkill_Kakaluo_Passive_C, UberGraphFrame_GA_ExitSkill_Kakaluo_Passive_C) == 0x000560, "Member 'UGA_ExitSkill_Kakaluo_Passive_C::UberGraphFrame_GA_ExitSkill_Kakaluo_Passive_C' has a wrong offset!");
static_assert(offsetof(UGA_ExitSkill_Kakaluo_Passive_C, Buff_Id) == 0x000568, "Member 'UGA_ExitSkill_Kakaluo_Passive_C::Buff_Id' has a wrong offset!");
static_assert(offsetof(UGA_ExitSkill_Kakaluo_Passive_C, QTECamera) == 0x000570, "Member 'UGA_ExitSkill_Kakaluo_Passive_C::QTECamera' has a wrong offset!");
static_assert(offsetof(UGA_ExitSkill_Kakaluo_Passive_C, ___ID) == 0x000578, "Member 'UGA_ExitSkill_Kakaluo_Passive_C::___ID' has a wrong offset!");

}

