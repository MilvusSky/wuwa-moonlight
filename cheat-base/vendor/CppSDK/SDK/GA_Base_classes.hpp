#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Base

#include "Basic.hpp"

#include "KuroGAS_classes.hpp"
#include "Engine_structs.hpp"
#include "EAimViewState_structs.hpp"
#include "SSkillInfo_structs.hpp"
#include "EPawnChannel_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Base.GA_Base_C
// 0x0190 (0x0558 - 0x03C8)
class UGA_Base_C : public UBaseGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSSkillInfo                            SM__pn;                                            // 0x03D0(0x0170)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 SM__pn_;                                           // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Base(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void _____(class ATsBaseCharacter_C** ___);
	void __SM__MnId(class FString* SM__pn__0);
	void __SM__Mn(struct FSSkillInfo* SM__pn_0);
	void _______3(int32 ___0, class UAnimMontage** ___1);
	void _________0(TArray<class UAnimMontage*>* ____p_);
	void _______2(TArray<struct FGameplayTag>* Param______0);
	void __AbilitySystemComponent(class UBaseAbilitySystemComponent** AbilitySystemComponent);
	void _______1(class ATsBaseCharacter_C* ___0, class AActor** Param______0);
	void ________(bool Sb2D, float* ___0);
	void ________0(class ATsBaseCharacter_C* ___0, const struct FGameplayTagContainer& ___1, bool* _X_);
	void _n_6__(const struct FVector& ___0);
	void _n_S_____(class UPrimitiveComponent* ___0, ECollisionChannel Channel, ECollisionResponse NewResponse);
	void __Tag_d__Buff(const struct FGameplayTag& Tag);
	void ___ID__a__Buff(class ATsBaseCharacter_C* Buff_a, int64 BuffId, int32 BuffBp);
	void __Base___(class ATsBaseCharacter_C* ___0, int32 __id, float* ___);
	void __Current___(class ATsBaseCharacter_C* ___0, int32 __id, float* ___);
	void ___ID_d__Buff(int64 BuffId, int32 _dBp, class ATsBaseCharacter_C* ___0);
	void _nP_H_(class ATsBaseCharacter_C* _n_a, class UPD_CharacterControllerData_C* P_Mn, int32* Handle);
	void __P9(class ATsBaseCharacter_C* ___, const class FString& P9ID, const struct FTransform& ___b, const struct FVector& ____0, int32* P9);
	void _____0(class ATsBaseCharacter_C* ___, class FName __ID, class AActor* Param______0, class FName Socket, bool* _____);
	void __(int32 MnhID, const struct FTransform& __Mn, bool* ___, class ATsBaseCharacter_C** __i, int32* _SID);
	void _TQ(bool* TQ);
	void _____Int(class ATsBaseCharacter_C* _r, const class FString& Key, int32* _);
	void _n__Int(class ATsBaseCharacter_C* _r, const class FString& Key, int32 _);
	void ____Long(class ATsBaseCharacter_C* _r, const class FString& Key, int64* _);
	void _n__Long(class ATsBaseCharacter_C* _r, const class FString& Key, int64 _);
	void ___SID(class ATsBaseCharacter_C* _a, int32* _SID);
	void Ninen_SID___a(int32 _SID, class ATsBaseCharacter_C** _a, bool* __0_a);
	void ______Key_sT_a(class ATsBaseCharacter_C* _r, const class FString& Key, class ATsBaseCharacter_C** _a, bool* __0_a);
	void _n____(class AActor* SkillTarget);
	void b___(class ATsBaseCharacter_C* __, class AActor* b____0);
	void __y_P9(class FName P9_W, bool ___PP9);
	void ____TagBp(class ATsBaseCharacter_C* __, const struct FGameplayTag& Tag, int32* Bp);
	void __0bP__(const struct FVector& ___, float __, struct FVector* ZerobP_, bool* _X_);
	void _nSM__S_I_(int32 S_I_);
	void ___e__(class UGameplayTask* __, bool* _H);
	void ____(class AActor* _____0, const struct FGameplayTag& __Tag);
	float _______0(class AActor* __A, class AActor* __B);
	int32 __v__yH(const class UObject* DA___, const struct FTransform& Transform, bool AttachToCharacter);
	void _______(const struct FGameplayTag& Tag);
	void ____d__(const struct FGameplayTag& Tag);
	void __ID___aBuffBp(int64 buffId, bool EnforceOnGoingCheck, int32* Bp);
	void __SM____(float* SpeedRatio);
	void __y_P9p_(class FName P9_W, int32* P9p_);
	void ____EntityId(class ATsBaseCharacter_C* _r, const class FString& Key, int32* _);
	void _n__EntityId(class ATsBaseCharacter_C* _r, const class FString& Key, int32 _);
	void ____Vector(class ATsBaseCharacter_C* _r, const class FString& Key, struct FVector* _);
	void _n__Vector(class ATsBaseCharacter_C* _r, const class FString& Key, const struct FVector& _);
	void __SM___rActor(class ATsBaseCharacter_C** SM_r);
	void __SMGA___pn_(class FString* SM__pn__0);
	void P9__(const class FString& P9Id, float ____);
	void _n__String(class ATsBaseCharacter_C* _r, const class FString& Key, const class FString& _);
	void ____String(class ATsBaseCharacter_C* _r, const class FString& Key, class FString* String);
	void __8_____h(class UBP_EventManager_C** ____h);
	void ___rID(class ATsBaseCharacter_C* __, float* RoleID);
	void NinenP9_SID__P9(int32 P9ID, bool IsSummonChildBullet);
	void _d__i(int32 ___ID, int32 _d__iID);
	void _9SM__S_I_(float Priority);
	void _n_6_S_I_S_(bool SkillAcceptInput);
	void ________D_____(class AActor* __Actor, float _l, float __, float ___0, struct FVector* ___, bool* ____);
	void ____0______(class ATsBaseCharacter_C* __Actor, const struct FVector& __, struct FVector* ___, bool* ____);
	void ____c______(class AActor* __Actor, float ____, struct FVector* ___, bool* _____0);
	void ___S_______K(float ___J_, float ___J__0, float __J_, float __J__0, const struct FVector& W_, const struct FVector& __, struct FVector* ___);
	void _e____(bool ____e, EAimViewState ___4__, bool IsWalk);
	void ______();
	void _n__Rotator(class ATsBaseCharacter_C* _r, const class FString& Key, const struct FRotator& _);
	void _9P_H_(TScriptInterface<class IBPI_CreatureInterface_C> Entity, bool IsGroup, class UObject* P_H_);
	void __yH();
	void _nP9__(class ATsBaseCharacter_C* Attacker, const class FString& Key, int32 TargetId);
	void __a____(class ATsBaseCharacter_C* Target, const struct FGameplayTag& Tag);
	void __a_d__(class ATsBaseCharacter_C* Target, const struct FGameplayTag& Tag);
	void _n_rPawn_S____(class ATsBaseCharacter_C* _r, EPawnChannel PawnChannel, ECollisionResponse NewResponse);
	bool _n_rMn(class ATsBaseCharacter_C* _r, const struct FVector& Location, bool Sweep, bool Teleport, const class FString& Context);
	bool _n_r_l(class ATsBaseCharacter_C* _r, const struct FRotator& Rotation, bool Sweep, const class FString& Context);
	void _n_r_b(class ATsBaseCharacter_C* _r, const struct FTransform& Transform, bool Sweep, const class FString& Context);
	void _n_rMn__l(class ATsBaseCharacter_C* _r, const struct FVector& Location, const struct FRotator& Rotation, bool Sweep, const class FString& Context);
	void ___r_L_l(class ATsBaseCharacter_C* _r, const struct FRotator& Rotation, bool Sweep, bool Teleport, const class FString& Context);
	void ___r_LMn(class ATsBaseCharacter_C* _r, const struct FVector& Location, bool Sweep, bool Teleport, const class FString& Context);
	void _n_r__(class ATsBaseCharacter_C* _r, const struct FVector& Location, const struct FRotator& Rotator, const class FString& Context);
	void _n_r0b__(class ATsBaseCharacter_C* _r, const struct FVector& Velocity, float DeltaSeconds, const class FString& Context);
	void Four_i______a(class ATsBaseCharacter_C** _a, bool* __0_a);
	void RemoveBuff(int64 buffId);
	void RemoveTag(const struct FGameplayTag& Tag);
	void AddTag(const struct FGameplayTag& Tag);
	void Apply_Buff_with_Level(int64 buffId);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Base_C">();
	}
	static class UGA_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Base_C>();
	}
};
static_assert(alignof(UGA_Base_C) == 0x000008, "Wrong alignment on UGA_Base_C");
static_assert(sizeof(UGA_Base_C) == 0x000558, "Wrong size on UGA_Base_C");
static_assert(offsetof(UGA_Base_C, UberGraphFrame) == 0x0003C8, "Member 'UGA_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Base_C, SM__pn) == 0x0003D0, "Member 'UGA_Base_C::SM__pn' has a wrong offset!");
static_assert(offsetof(UGA_Base_C, SM__pn_) == 0x000540, "Member 'UGA_Base_C::SM__pn_' has a wrong offset!");
static_assert(offsetof(UGA_Base_C, SkillId) == 0x000550, "Member 'UGA_Base_C::SkillId' has a wrong offset!");

}

