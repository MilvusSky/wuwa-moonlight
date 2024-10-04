#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ME1QunJingMd00001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ME1QunJingMd00001.BP_ME1QunJingMd00001_C
// 0x0060 (0x07E0 - 0x0780)
class ABP_ME1QunJingMd00001_C final : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_771[0x7];                                      // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ME1QunJingMd00001_C;             // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UKuroAdjustableBoxComponent*            Root;                                              // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001RThigh_Bone;                                 // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LThigh_Bone;                                 // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001RCalf_Bone;                                  // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LCalf_Bone;                                  // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001RForearm_Bone;                               // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001RUpperArm_Bone;                              // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LForearm_Bone;                               // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LUpperArm_Bone;                              // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001Spine1_Bone;                                 // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001Head_Bone;                                   // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ME1QunJingMd00001(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ME1QunJingMd00001_C">();
	}
	static class ABP_ME1QunJingMd00001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ME1QunJingMd00001_C>();
	}
};
static_assert(alignof(ABP_ME1QunJingMd00001_C) == 0x000010, "Wrong alignment on ABP_ME1QunJingMd00001_C");
static_assert(sizeof(ABP_ME1QunJingMd00001_C) == 0x0007E0, "Wrong size on ABP_ME1QunJingMd00001_C");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, UberGraphFrame_BP_ME1QunJingMd00001_C) == 0x000778, "Member 'ABP_ME1QunJingMd00001_C::UberGraphFrame_BP_ME1QunJingMd00001_C' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Root) == 0x000780, "Member 'ABP_ME1QunJingMd00001_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001RThigh_Bone) == 0x000788, "Member 'ABP_ME1QunJingMd00001_C::Bip001RThigh_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001LThigh_Bone) == 0x000790, "Member 'ABP_ME1QunJingMd00001_C::Bip001LThigh_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001RCalf_Bone) == 0x000798, "Member 'ABP_ME1QunJingMd00001_C::Bip001RCalf_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001LCalf_Bone) == 0x0007A0, "Member 'ABP_ME1QunJingMd00001_C::Bip001LCalf_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001RForearm_Bone) == 0x0007A8, "Member 'ABP_ME1QunJingMd00001_C::Bip001RForearm_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001RUpperArm_Bone) == 0x0007B0, "Member 'ABP_ME1QunJingMd00001_C::Bip001RUpperArm_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001LForearm_Bone) == 0x0007B8, "Member 'ABP_ME1QunJingMd00001_C::Bip001LForearm_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001LUpperArm_Bone) == 0x0007C0, "Member 'ABP_ME1QunJingMd00001_C::Bip001LUpperArm_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001Spine1_Bone) == 0x0007C8, "Member 'ABP_ME1QunJingMd00001_C::Bip001Spine1_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1QunJingMd00001_C, Bip001Head_Bone) == 0x0007D0, "Member 'ABP_ME1QunJingMd00001_C::Bip001Head_Bone' has a wrong offset!");

}

