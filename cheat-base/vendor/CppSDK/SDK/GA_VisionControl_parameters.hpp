#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_VisionControl

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_VisionControl.GA_VisionControl_C.ExecuteUbergraph_GA_VisionControl
// 0x0018 (0x0018 - 0x0000)
struct GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ActivateAbilityVision_ReturnValue;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl) == 0x000008, "Wrong alignment on GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl");
static_assert(sizeof(GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl) == 0x000018, "Wrong size on GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl");
static_assert(offsetof(GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl, EntryPoint) == 0x000000, "Member 'GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl, CallFunc__________) == 0x000008, "Member 'GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl, K2Node_Event_bWasCancelled) == 0x000010, "Member 'GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl, CallFunc_ActivateAbilityVision_ReturnValue) == 0x000011, "Member 'GA_VisionControl_C_ExecuteUbergraph_GA_VisionControl::CallFunc_ActivateAbilityVision_ReturnValue' has a wrong offset!");

// Function GA_VisionControl.GA_VisionControl_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_VisionControl_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_VisionControl_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_VisionControl_C_K2_OnEndAbility");
static_assert(sizeof(GA_VisionControl_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_VisionControl_C_K2_OnEndAbility");
static_assert(offsetof(GA_VisionControl_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_VisionControl_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

