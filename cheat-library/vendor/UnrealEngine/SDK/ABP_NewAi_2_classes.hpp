#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NewAi_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ECharParentMoveState_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "EMovementDirection_structs.hpp"
#include "EHitAnim_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EWalkingPosture_structs.hpp"
#include "ECharState_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_NewAi_2.ABP_NewAi_2_C
// 0x1840 (0x1BC0 - 0x0380)
class UABP_NewAi_2_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B73[0x8];                                     // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x03C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x03E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0410(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0438(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0460(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0488(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x04B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x04D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0500(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0528(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x0550(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x05E0(0x0038)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0618(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0648(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x0680(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0710(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x0748(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x07D8(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0810(0x0138)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0948(0x0060)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x09A8(0x00F8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0AA0(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0AD8(0x0138)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0C10(0x01B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0DC0(0x01B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0F70(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0F98(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0FC0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0FE8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1010(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1038(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1060(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1088(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x10C0(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x1150(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x11E0(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1270(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x1300(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1390(0x0090)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1420(0x00C0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x14E0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1518(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x15A8(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1638(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x16C8(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1758(0x0090)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x17E8(0x0090)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1878(0x00C0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1938(0x0038)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1970(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x19A0(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x19D8(0x0138)()
	class ATsBaseCharacter_C*                     As_Base_Character;                                 // 0x1B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          _c___;                                             // 0x1B18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EMovementDirection                            ____;                                              // 0x1B19(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B74[0x2];                                     // 0x1B1A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ______;                                            // 0x1B1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _60___;                                            // 0x1B20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          _____e;                                            // 0x1B21(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B75[0x2];                                     // 0x1B22(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delta_Time_X;                                      // 0x1B24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____;                                             // 0x1B28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          __;                                                // 0x1B29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          _______;                                           // 0x1B2A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EWalkingPosture                               Lp__;                                              // 0x1B2B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _______0;                                          // 0x1B2C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          __FK;                                              // 0x1B2D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B76[0x2];                                     // 0x1B2E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                _____0;                                            // 0x1B30(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                __Mn;                                              // 0x1B3C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharState                                    CharMove;                                          // 0x1B48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharParentMoveState                          CharPosition;                                      // 0x1B49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B77[0x2];                                     // 0x1B4A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ______0;                                           // 0x1B4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _____1;                                            // 0x1B50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ________0;                                         // 0x1B54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CachedTagContainer;                                // 0x1B58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         BeHitTime;                                         // 0x1B78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ToughDecreaseValue;                                // 0x1B7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BeHitRotation;                                     // 0x1B80(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                BeHitLocation;                                     // 0x1B8C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BeHitBones;                                        // 0x1B98(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EHitAnim                                      BeHitAnim;                                         // 0x1BA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B78[0x7];                                     // 0x1BA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ABPLogicParams_C*                   Ts_____;                                           // 0x1BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_NewAi_2(int32 EntryPoint);
	void AnimNotify______2();
	void AnimNotify_born();
	void AnimNotify______();
	void AnimNotify______1();
	void AnimNotify______0();
	void AnimNotify_____();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_2181C65A4452E26DE71F7E870FA9E1BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_C9B74CC245ED9D008365A8A7B24B4992();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_B52591554E22607A9D4988BF036DE8C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_EF06E10E47AD4505822B499B5DF19C50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_6029CBE2494E5C2D118E05A0FEB8C1B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_BlendSpacePlayer_07C754464E773916591641823F847E83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_85DA929B4EAE46928A1AEC8ED0062F56();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_62FA2C6A4465F4E2DB6D97BE8276F9D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_B8286E2E465A3DF30259D988F64AF49A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_C888919A452AD6A98B14A984D38E9F46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_315277D04E31FC3413C943BAEC150DE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_59E21BAB46258AF68F61C7B2B714A299();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_5109C5374ACBF4850EB9EC9392CEE44C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_D75B751847C7F838A764C9BB7ED8987A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NewAi_2_AnimGraphNode_TransitionResult_AAE2502747E2B1A137000BBFA2632FD2();
	void __FK_o();
	void _n____();
	void Func_____(const struct FGameplayTag& Tag, bool* NewParam);
	void _X__(struct FGameplayTagContainer* TargetContainer);
	void Func________();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_NewAi_2_C">();
	}
	static class UABP_NewAi_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_NewAi_2_C>();
	}
};
static_assert(alignof(UABP_NewAi_2_C) == 0x000010, "Wrong alignment on UABP_NewAi_2_C");
static_assert(sizeof(UABP_NewAi_2_C) == 0x001BC0, "Wrong size on UABP_NewAi_2_C");
static_assert(offsetof(UABP_NewAi_2_C, UberGraphFrame) == 0x000380, "Member 'UABP_NewAi_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_Root) == 0x000388, "Member 'UABP_NewAi_2_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_16) == 0x0003C0, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_15) == 0x0003E8, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_14) == 0x000410, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_13) == 0x000438, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_12) == 0x000460, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_11) == 0x000488, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_10) == 0x0004B0, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_9) == 0x0004D8, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_8) == 0x000500, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_7) == 0x000528, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_14) == 0x000550, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_8) == 0x0005E0, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_UseCachedPose_1) == 0x000618, "Member 'UABP_NewAi_2_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_7) == 0x000648, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_13) == 0x000680, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_6) == 0x000710, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_12) == 0x000748, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_5) == 0x0007D8, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateMachine_2) == 0x000810, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_Slot) == 0x000948, "Member 'UABP_NewAi_2_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_BlendSpacePlayer) == 0x0009A8, "Member 'UABP_NewAi_2_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_4) == 0x000AA0, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateMachine_1) == 0x000AD8, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SaveCachedPose_1) == 0x000C10, "Member 'UABP_NewAi_2_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SaveCachedPose) == 0x000DC0, "Member 'UABP_NewAi_2_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_6) == 0x000F70, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_5) == 0x000F98, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_4) == 0x000FC0, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_3) == 0x000FE8, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_2) == 0x001010, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult_1) == 0x001038, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_TransitionResult) == 0x001060, "Member 'UABP_NewAi_2_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_3) == 0x001088, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_11) == 0x0010C0, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_10) == 0x001150, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_9) == 0x0011E0, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_8) == 0x001270, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_7) == 0x001300, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_6) == 0x001390, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_BlendListByEnum_1) == 0x001420, "Member 'UABP_NewAi_2_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_2) == 0x0014E0, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_5) == 0x001518, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_4) == 0x0015A8, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_3) == 0x001638, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_2) == 0x0016C8, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer_1) == 0x001758, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_SequencePlayer) == 0x0017E8, "Member 'UABP_NewAi_2_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_BlendListByEnum) == 0x001878, "Member 'UABP_NewAi_2_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult_1) == 0x001938, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_UseCachedPose) == 0x001970, "Member 'UABP_NewAi_2_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateResult) == 0x0019A0, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, AnimGraphNode_StateMachine) == 0x0019D8, "Member 'UABP_NewAi_2_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, As_Base_Character) == 0x001B10, "Member 'UABP_NewAi_2_C::As_Base_Character' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _c___) == 0x001B18, "Member 'UABP_NewAi_2_C::_c___' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, ____) == 0x001B19, "Member 'UABP_NewAi_2_C::____' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, ______) == 0x001B1C, "Member 'UABP_NewAi_2_C::______' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _60___) == 0x001B20, "Member 'UABP_NewAi_2_C::_60___' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _____e) == 0x001B21, "Member 'UABP_NewAi_2_C::_____e' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, Delta_Time_X) == 0x001B24, "Member 'UABP_NewAi_2_C::Delta_Time_X' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _____) == 0x001B28, "Member 'UABP_NewAi_2_C::_____' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, __) == 0x001B29, "Member 'UABP_NewAi_2_C::__' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _______) == 0x001B2A, "Member 'UABP_NewAi_2_C::_______' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, Lp__) == 0x001B2B, "Member 'UABP_NewAi_2_C::Lp__' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _______0) == 0x001B2C, "Member 'UABP_NewAi_2_C::_______0' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, __FK) == 0x001B2D, "Member 'UABP_NewAi_2_C::__FK' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _____0) == 0x001B30, "Member 'UABP_NewAi_2_C::_____0' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, __Mn) == 0x001B3C, "Member 'UABP_NewAi_2_C::__Mn' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, CharMove) == 0x001B48, "Member 'UABP_NewAi_2_C::CharMove' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, CharPosition) == 0x001B49, "Member 'UABP_NewAi_2_C::CharPosition' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, ______0) == 0x001B4C, "Member 'UABP_NewAi_2_C::______0' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, _____1) == 0x001B50, "Member 'UABP_NewAi_2_C::_____1' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, ________0) == 0x001B54, "Member 'UABP_NewAi_2_C::________0' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, CachedTagContainer) == 0x001B58, "Member 'UABP_NewAi_2_C::CachedTagContainer' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, BeHitTime) == 0x001B78, "Member 'UABP_NewAi_2_C::BeHitTime' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, ToughDecreaseValue) == 0x001B7C, "Member 'UABP_NewAi_2_C::ToughDecreaseValue' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, BeHitRotation) == 0x001B80, "Member 'UABP_NewAi_2_C::BeHitRotation' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, BeHitLocation) == 0x001B8C, "Member 'UABP_NewAi_2_C::BeHitLocation' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, BeHitBones) == 0x001B98, "Member 'UABP_NewAi_2_C::BeHitBones' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, BeHitAnim) == 0x001BA8, "Member 'UABP_NewAi_2_C::BeHitAnim' has a wrong offset!");
static_assert(offsetof(UABP_NewAi_2_C, Ts_____) == 0x001BB0, "Member 'UABP_NewAi_2_C::Ts_____' has a wrong offset!");

}
