#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_R2T1BaerMd10011_PC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KawaiiPhysics_structs.hpp"
#include "KuroAnim_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_R2T1BaerMd10011_PC.ABP_R2T1BaerMd10011_PC_C
// 0x1820 (0x1BD0 - 0x03B0)
class UABP_R2T1BaerMd10011_PC_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3A8[0x8];                                      // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x03B8(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03F0(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0528(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0548(0x0020)()
	uint8                                         Pad_568[0x8];                                      // 0x0568(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_6;                // 0x0570(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_5;                // 0x07E0(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_4;                // 0x0A50(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_3;                // 0x0CC0(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_2;                // 0x0F30(0x0270)()
	struct FAnimNode_MountBuffer                  AnimGraphNode_MountBuffer_1;                       // 0x11A0(0x01D0)()
	struct FAnimNode_MountBuffer                  AnimGraphNode_MountBuffer;                         // 0x1370(0x01D0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_1;                // 0x1540(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup;                  // 0x17B0(0x0270)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1A20(0x0038)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x1A58(0x00A8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1B00(0x00C0)()
	bool                                          PhysicsClothSimulateEnable;                        // 0x1BC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BC1[0x3];                                     // 0x1BC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PhysicsClothSimulateScale;                         // 0x1BC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_R2T1BaerMd10011_PC(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void UpdatePhysicsClothSimulateEnable(float DeltaTIme);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void PhyCloth(const struct FPoseLink& InPose, struct FPoseLink* PhyCloth_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_R2T1BaerMd10011_PC_C">();
	}
	static class UABP_R2T1BaerMd10011_PC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_R2T1BaerMd10011_PC_C>();
	}
};
static_assert(alignof(UABP_R2T1BaerMd10011_PC_C) == 0x000010, "Wrong alignment on UABP_R2T1BaerMd10011_PC_C");
static_assert(sizeof(UABP_R2T1BaerMd10011_PC_C) == 0x001BD0, "Wrong size on UABP_R2T1BaerMd10011_PC_C");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, UberGraphFrame) == 0x0003B0, "Member 'UABP_R2T1BaerMd10011_PC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_Root_1) == 0x0003B8, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_LinkedInputPose) == 0x0003F0, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_LocalToComponentSpace) == 0x000528, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_ComponentToLocalSpace) == 0x000548, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_6) == 0x000570, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_6' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_5) == 0x0007E0, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_5' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_4) == 0x000A50, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_4' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_3) == 0x000CC0, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_3' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_2) == 0x000F30, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_2' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_MountBuffer_1) == 0x0011A0, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_MountBuffer_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_MountBuffer) == 0x001370, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_MountBuffer' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_1) == 0x001540, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup) == 0x0017B0, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_Root) == 0x001A20, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_LinkedAnimGraph) == 0x001A58, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, AnimGraphNode_LinkedAnimLayer) == 0x001B00, "Member 'UABP_R2T1BaerMd10011_PC_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, PhysicsClothSimulateEnable) == 0x001BC0, "Member 'UABP_R2T1BaerMd10011_PC_C::PhysicsClothSimulateEnable' has a wrong offset!");
static_assert(offsetof(UABP_R2T1BaerMd10011_PC_C, PhysicsClothSimulateScale) == 0x001BC4, "Member 'UABP_R2T1BaerMd10011_PC_C::PhysicsClothSimulateScale' has a wrong offset!");

}

