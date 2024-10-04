#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Hook_Swinging

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SCameraModifier_Settings_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Hook_Swinging.GA_Hook_Swinging_C
// 0x0148 (0x06A0 - 0x0558)
class UGA_Hook_Swinging_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Hook_Swinging_C;                 // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                Rope;                                              // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C[0x4];                                      // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SwingingTimer;                                     // 0x0570(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ___e;                                              // 0x0578(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_584[0x4];                                      // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSCameraModifier_Settings              CameraModifySettings;                              // 0x0588(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Hook_Swinging(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnTick_8D96293640861CE3D30811B2BF5219AD();
	void OnFinish_8D96293640861CE3D30811B2BF5219AD();
	void EventReceived_5442B24C45E0D351ADA243874004C8BC(const struct FGameplayEventData& Payload);
	void SwingingRotaion();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Hook_Swinging_C">();
	}
	static class UGA_Hook_Swinging_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Hook_Swinging_C>();
	}
};
static_assert(alignof(UGA_Hook_Swinging_C) == 0x000008, "Wrong alignment on UGA_Hook_Swinging_C");
static_assert(sizeof(UGA_Hook_Swinging_C) == 0x0006A0, "Wrong size on UGA_Hook_Swinging_C");
static_assert(offsetof(UGA_Hook_Swinging_C, UberGraphFrame_GA_Hook_Swinging_C) == 0x000558, "Member 'UGA_Hook_Swinging_C::UberGraphFrame_GA_Hook_Swinging_C' has a wrong offset!");
static_assert(offsetof(UGA_Hook_Swinging_C, Rope) == 0x000560, "Member 'UGA_Hook_Swinging_C::Rope' has a wrong offset!");
static_assert(offsetof(UGA_Hook_Swinging_C, Distance) == 0x000568, "Member 'UGA_Hook_Swinging_C::Distance' has a wrong offset!");
static_assert(offsetof(UGA_Hook_Swinging_C, SwingingTimer) == 0x000570, "Member 'UGA_Hook_Swinging_C::SwingingTimer' has a wrong offset!");
static_assert(offsetof(UGA_Hook_Swinging_C, ___e) == 0x000578, "Member 'UGA_Hook_Swinging_C::___e' has a wrong offset!");
static_assert(offsetof(UGA_Hook_Swinging_C, CameraModifySettings) == 0x000588, "Member 'UGA_Hook_Swinging_C::CameraModifySettings' has a wrong offset!");

}

