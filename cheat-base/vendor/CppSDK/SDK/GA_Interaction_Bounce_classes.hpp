#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Interaction_Bounce

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Interaction_Bounce.GA_Interaction_Bounce_C
// 0x0010 (0x0568 - 0x0558)
class UGA_Interaction_Bounce_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Interaction_Bounce_C;            // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 __i;                                               // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Interaction_Bounce(int32 EntryPoint);
	void MovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E818F2F100F();
	void OnBlendOut_5D118C384AE61F1C80292E818F2F100F();
	void OnInterrupted_5D118C384AE61F1C80292E818F2F100F();
	void OnCancelled_5D118C384AE61F1C80292E818F2F100F();
	void OnTick_5D118C384AE61F1C80292E818F2F100F();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Interaction_Bounce_C">();
	}
	static class UGA_Interaction_Bounce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Interaction_Bounce_C>();
	}
};
static_assert(alignof(UGA_Interaction_Bounce_C) == 0x000008, "Wrong alignment on UGA_Interaction_Bounce_C");
static_assert(sizeof(UGA_Interaction_Bounce_C) == 0x000568, "Wrong size on UGA_Interaction_Bounce_C");
static_assert(offsetof(UGA_Interaction_Bounce_C, UberGraphFrame_GA_Interaction_Bounce_C) == 0x000558, "Member 'UGA_Interaction_Bounce_C::UberGraphFrame_GA_Interaction_Bounce_C' has a wrong offset!");
static_assert(offsetof(UGA_Interaction_Bounce_C, __i) == 0x000560, "Member 'UGA_Interaction_Bounce_C::__i' has a wrong offset!");

}

