#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MO1DujiaoshouMd00001_Attack01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MO1DujiaoshouMd00001_Attack01.GA_MO1DujiaoshouMd00001_Attack01_C
// 0x0010 (0x0578 - 0x0568)
class UGA_MO1DujiaoshouMd00001_Attack01_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MO1DujiaoshouMd00001_Attack01_C; // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           Montage_to_Play;                                   // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_MO1DujiaoshouMd00001_Attack01(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81AE812AE3();
	void OnBlendOut_5D118C384AE61F1C80292E81AE812AE3();
	void OnInterrupted_5D118C384AE61F1C80292E81AE812AE3();
	void OnCancelled_5D118C384AE61F1C80292E81AE812AE3();
	void OnTick_5D118C384AE61F1C80292E81AE812AE3();
	void EventReceived_18B59F5945020DB23C42FD88CF0D2909(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MO1DujiaoshouMd00001_Attack01_C">();
	}
	static class UGA_MO1DujiaoshouMd00001_Attack01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MO1DujiaoshouMd00001_Attack01_C>();
	}
};
static_assert(alignof(UGA_MO1DujiaoshouMd00001_Attack01_C) == 0x000008, "Wrong alignment on UGA_MO1DujiaoshouMd00001_Attack01_C");
static_assert(sizeof(UGA_MO1DujiaoshouMd00001_Attack01_C) == 0x000578, "Wrong size on UGA_MO1DujiaoshouMd00001_Attack01_C");
static_assert(offsetof(UGA_MO1DujiaoshouMd00001_Attack01_C, UberGraphFrame_GA_MO1DujiaoshouMd00001_Attack01_C) == 0x000568, "Member 'UGA_MO1DujiaoshouMd00001_Attack01_C::UberGraphFrame_GA_MO1DujiaoshouMd00001_Attack01_C' has a wrong offset!");
static_assert(offsetof(UGA_MO1DujiaoshouMd00001_Attack01_C, Montage_to_Play) == 0x000570, "Member 'UGA_MO1DujiaoshouMd00001_Attack01_C::Montage_to_Play' has a wrong offset!");

}

