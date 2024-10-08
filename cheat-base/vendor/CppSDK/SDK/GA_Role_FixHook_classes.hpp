#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_FixHook

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_FixHook.GA_Role_FixHook_C
// 0x0040 (0x0598 - 0x0558)
class UGA_Role_FixHook_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_FixHook_C;                  // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     ____0;                                             // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FixHookLocation;                                   // 0x0568(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                U___;                                              // 0x0574(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlockTime;                                         // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _r__SJ_;                                           // 0x0584(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastDirect;                                        // 0x0588(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Role_FixHook(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void MovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnTick_1AD12E0F4865557B76E6619F9D0D670F();
	void OnFinish_1AD12E0F4865557B76E6619F9D0D670F();
	class AActor* FindBestHookPoint();
	void FixHookStart();
	void FixHookTick();
	void _____();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_FixHook_C">();
	}
	static class UGA_Role_FixHook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_FixHook_C>();
	}
};
static_assert(alignof(UGA_Role_FixHook_C) == 0x000008, "Wrong alignment on UGA_Role_FixHook_C");
static_assert(sizeof(UGA_Role_FixHook_C) == 0x000598, "Wrong size on UGA_Role_FixHook_C");
static_assert(offsetof(UGA_Role_FixHook_C, UberGraphFrame_GA_Role_FixHook_C) == 0x000558, "Member 'UGA_Role_FixHook_C::UberGraphFrame_GA_Role_FixHook_C' has a wrong offset!");
static_assert(offsetof(UGA_Role_FixHook_C, ____0) == 0x000560, "Member 'UGA_Role_FixHook_C::____0' has a wrong offset!");
static_assert(offsetof(UGA_Role_FixHook_C, FixHookLocation) == 0x000568, "Member 'UGA_Role_FixHook_C::FixHookLocation' has a wrong offset!");
static_assert(offsetof(UGA_Role_FixHook_C, U___) == 0x000574, "Member 'UGA_Role_FixHook_C::U___' has a wrong offset!");
static_assert(offsetof(UGA_Role_FixHook_C, BlockTime) == 0x000580, "Member 'UGA_Role_FixHook_C::BlockTime' has a wrong offset!");
static_assert(offsetof(UGA_Role_FixHook_C, _r__SJ_) == 0x000584, "Member 'UGA_Role_FixHook_C::_r__SJ_' has a wrong offset!");
static_assert(offsetof(UGA_Role_FixHook_C, LastDirect) == 0x000588, "Member 'UGA_Role_FixHook_C::LastDirect' has a wrong offset!");

}

