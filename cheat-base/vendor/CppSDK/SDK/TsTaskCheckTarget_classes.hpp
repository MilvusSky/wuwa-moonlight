#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskCheckTarget

#include "Basic.hpp"

#include "TsTaskAbortImmediatelyBase_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "ECamp_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskCheckTarget.TsTaskCheckTarget_C
// 0x0078 (0x0130 - 0x00B8)
class UTsTaskCheckTarget_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskCheckTarget_C;                // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          CheckSight;                                        // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CheckDistance;                                     // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CheckAngle;                                        // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckCampRelevance;                                // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECamp                                         CheckCamp;                                         // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CheckHeight;                                       // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, bool>               CheckTags;                                         // 0x00D8(0x0050)(Edit, BlueprintVisible)
	bool                                          NeedCheckAutonomous;                               // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TsTaskCheckTarget(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void Tags();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskCheckTarget_C">();
	}
	static class UTsTaskCheckTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskCheckTarget_C>();
	}
};
static_assert(alignof(UTsTaskCheckTarget_C) == 0x000008, "Wrong alignment on UTsTaskCheckTarget_C");
static_assert(sizeof(UTsTaskCheckTarget_C) == 0x000130, "Wrong size on UTsTaskCheckTarget_C");
static_assert(offsetof(UTsTaskCheckTarget_C, UberGraphFrame_TsTaskCheckTarget_C) == 0x0000B8, "Member 'UTsTaskCheckTarget_C::UberGraphFrame_TsTaskCheckTarget_C' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, CheckSight) == 0x0000C0, "Member 'UTsTaskCheckTarget_C::CheckSight' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, CheckDistance) == 0x0000C4, "Member 'UTsTaskCheckTarget_C::CheckDistance' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, CheckAngle) == 0x0000C8, "Member 'UTsTaskCheckTarget_C::CheckAngle' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, CheckCampRelevance) == 0x0000CC, "Member 'UTsTaskCheckTarget_C::CheckCampRelevance' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, CheckCamp) == 0x0000D0, "Member 'UTsTaskCheckTarget_C::CheckCamp' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, CheckHeight) == 0x0000D4, "Member 'UTsTaskCheckTarget_C::CheckHeight' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, CheckTags) == 0x0000D8, "Member 'UTsTaskCheckTarget_C::CheckTags' has a wrong offset!");
static_assert(offsetof(UTsTaskCheckTarget_C, NeedCheckAutonomous) == 0x000128, "Member 'UTsTaskCheckTarget_C::NeedCheckAutonomous' has a wrong offset!");

}

