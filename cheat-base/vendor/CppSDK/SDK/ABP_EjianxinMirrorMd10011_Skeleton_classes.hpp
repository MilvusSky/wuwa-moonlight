#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EjianxinMirrorMd10011_Skeleton

#include "Basic.hpp"

#include "KuroAnim_structs.hpp"
#include "KuroAnim_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_EjianxinMirrorMd10011_Skeleton.ABP_EjianxinMirrorMd10011_Skeleton_C
// 0x0AA0 (0x0F30 - 0x0490)
class UABP_EjianxinMirrorMd10011_Skeleton_C final : public UKuroAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0498(0x0038)()
	struct FAnimNode_ExtraFollowAnims             AnimGraphNode_ExtraFollowAnims;                    // 0x04D0(0x0A50)()
	class ATsBaseCharacter_C*                     SM_r;                                              // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_EjianxinMirrorMd10011_Skeleton(int32 EntryPoint);
	void OnComponentStart();
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_EjianxinMirrorMd10011_Skeleton_C">();
	}
	static class UABP_EjianxinMirrorMd10011_Skeleton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_EjianxinMirrorMd10011_Skeleton_C>();
	}
};
static_assert(alignof(UABP_EjianxinMirrorMd10011_Skeleton_C) == 0x000010, "Wrong alignment on UABP_EjianxinMirrorMd10011_Skeleton_C");
static_assert(sizeof(UABP_EjianxinMirrorMd10011_Skeleton_C) == 0x000F30, "Wrong size on UABP_EjianxinMirrorMd10011_Skeleton_C");
static_assert(offsetof(UABP_EjianxinMirrorMd10011_Skeleton_C, UberGraphFrame) == 0x000490, "Member 'UABP_EjianxinMirrorMd10011_Skeleton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_EjianxinMirrorMd10011_Skeleton_C, AnimGraphNode_Root) == 0x000498, "Member 'UABP_EjianxinMirrorMd10011_Skeleton_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_EjianxinMirrorMd10011_Skeleton_C, AnimGraphNode_ExtraFollowAnims) == 0x0004D0, "Member 'UABP_EjianxinMirrorMd10011_Skeleton_C::AnimGraphNode_ExtraFollowAnims' has a wrong offset!");
static_assert(offsetof(UABP_EjianxinMirrorMd10011_Skeleton_C, SM_r) == 0x000F20, "Member 'UABP_EjianxinMirrorMd10011_Skeleton_C::SM_r' has a wrong offset!");

}

