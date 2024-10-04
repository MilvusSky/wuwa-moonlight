#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseAnimal

#include "Basic.hpp"

#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BaseAnimal.BP_BaseAnimal_C
// 0x0000 (0x0780 - 0x0780)
class ABP_BaseAnimal_C : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_771[0x7];                                      // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            TurnSpeedCurve;                                    // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaseAnimal_C">();
	}
	static class ABP_BaseAnimal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BaseAnimal_C>();
	}
};
static_assert(alignof(ABP_BaseAnimal_C) == 0x000010, "Wrong alignment on ABP_BaseAnimal_C");
static_assert(sizeof(ABP_BaseAnimal_C) == 0x000780, "Wrong size on ABP_BaseAnimal_C");
static_assert(offsetof(ABP_BaseAnimal_C, TurnSpeedCurve) == 0x000778, "Member 'ABP_BaseAnimal_C::TurnSpeedCurve' has a wrong offset!");

}

