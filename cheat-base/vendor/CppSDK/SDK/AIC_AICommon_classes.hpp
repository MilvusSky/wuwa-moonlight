#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_AICommon

#include "Basic.hpp"

#include "SAiConditions_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TsAiController_classes.hpp"
#include "ECharacterState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_AICommon.AIC_AICommon_C
// 0x03A8 (0x0780 - 0x03D8)
class AAIC_AICommon_C : public ATsAiController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_AICommon_C;                     // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     Stari___a;                                         // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                __Mn;                                              // 0x03E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSAiConditions                         L___LMna_;                                         // 0x03F8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         ______;                                            // 0x04B0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         __L__Mn;                                           // 0x0568(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                         _h___ap_;                                          // 0x0620(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         _h_d_ap_;                                          // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         SM_h_hp_;                                          // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_644[0x4];                                      // 0x0644(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         _____ap_;                                          // 0x0648(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         ___d_ap_;                                          // 0x0658(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         SM___hp_;                                          // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66C[0x4];                                      // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         _h_____;                                           // 0x0670(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         _h____d;                                           // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         _h__ap_;                                           // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stari__;                                           // 0x0694(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSAiConditions                         E___1;                                             // 0x0698(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                         _____ap__0;                                        // 0x0750(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                 SM_h_a;                                            // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroRegionDetectComponent*             _____AIC_AICommon_C;                               // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ___S_;                                             // 0x0770(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_AICommon(int32 EntryPoint);
	void _______1(bool bContent);
	void _______0();
	void E___(bool bContent);
	void AicTriggerEvent(class FName Name_0);
	void _h___(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num);
	void Func______1(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num);
	void _h__(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num);
	void ____AI(bool bContent);
	void ________(bool bContent);
	void __L__a_(bool bContent);
	void ReceiveTick(float DeltaSeconds);
	void ___b_p(class UObject* _r, ECharacterState ___, ECharacterState ____0, bool ___0, class UObject** _r__, ECharacterState* _____, ECharacterState* ______0, bool* Param______0);
	void __0_h__();
	void _n_____a();
	void __(const TDelegate<void()>& b___);
	void _______p(const class FString& Param______0, const TDelegate<void(bool IsInRegion, class AActor* Target)>& __);
	void OnStart();
	void ___b_(ECharacterState OldState, ECharacterState NewState, bool IsAutonomousProxy_0);
	void ___6C_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_AICommon_C">();
	}
	static class AAIC_AICommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_AICommon_C>();
	}
};
static_assert(alignof(AAIC_AICommon_C) == 0x000008, "Wrong alignment on AAIC_AICommon_C");
static_assert(sizeof(AAIC_AICommon_C) == 0x000780, "Wrong size on AAIC_AICommon_C");
static_assert(offsetof(AAIC_AICommon_C, UberGraphFrame_AIC_AICommon_C) == 0x0003D8, "Member 'AAIC_AICommon_C::UberGraphFrame_AIC_AICommon_C' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, Stari___a) == 0x0003E0, "Member 'AAIC_AICommon_C::Stari___a' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, __Mn) == 0x0003E8, "Member 'AAIC_AICommon_C::__Mn' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, L___LMna_) == 0x0003F8, "Member 'AAIC_AICommon_C::L___LMna_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, ______) == 0x0004B0, "Member 'AAIC_AICommon_C::______' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, __L__Mn) == 0x000568, "Member 'AAIC_AICommon_C::__L__Mn' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _h___ap_) == 0x000620, "Member 'AAIC_AICommon_C::_h___ap_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _h_d_ap_) == 0x000630, "Member 'AAIC_AICommon_C::_h_d_ap_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, SM_h_hp_) == 0x000640, "Member 'AAIC_AICommon_C::SM_h_hp_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _____ap_) == 0x000648, "Member 'AAIC_AICommon_C::_____ap_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, ___d_ap_) == 0x000658, "Member 'AAIC_AICommon_C::___d_ap_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, SM___hp_) == 0x000668, "Member 'AAIC_AICommon_C::SM___hp_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _h_____) == 0x000670, "Member 'AAIC_AICommon_C::_h_____' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _h____d) == 0x000680, "Member 'AAIC_AICommon_C::_h____d' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _h__ap_) == 0x000690, "Member 'AAIC_AICommon_C::_h__ap_' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, Stari__) == 0x000694, "Member 'AAIC_AICommon_C::Stari__' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, E___1) == 0x000698, "Member 'AAIC_AICommon_C::E___1' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _____ap__0) == 0x000750, "Member 'AAIC_AICommon_C::_____ap__0' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, SM_h_a) == 0x000760, "Member 'AAIC_AICommon_C::SM_h_a' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, _____AIC_AICommon_C) == 0x000768, "Member 'AAIC_AICommon_C::_____AIC_AICommon_C' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, ___S_) == 0x000770, "Member 'AAIC_AICommon_C::___S_' has a wrong offset!");

}

