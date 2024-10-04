#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectActorWaterFall_Low

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EEffectPlay_structs.hpp"
#include "KuroCurve_structs.hpp"
#include "Engine_structs.hpp"
#include "EEffectType_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C
// 0x0090 (0x0340 - 0x02B0)
class ABP_EffectActorWaterFall_Low_C final : public AKuroEffectActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        EffectData;                                        // 0x02C0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugPrintOnConstruction;                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EditorTickWithoutSelected;                         // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E2[0x2];                                      // 0x02E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EffectComponent;                                   // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEffectPlay                                   PlayType;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEffectType                                   EffectType;                                        // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EA[0x6];                                      // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FKuroCurveFloat>     Float_Parameters;                                  // 0x02F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_EffectActorWaterFall_Low(int32 EntryPoint);
	void RemoveHandle();
	void EditorTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void EditorInit();
	void SetHandle(int32 Handle);
	void UserConstructionScript();
	void Refresh();
	void CalculateLifeTime();
	void IsEditor(bool* IsEditor_0);
	bool Stop(const class FString& Reason, bool Immediately);
	void Play(const class FString& Reason);
	void PlayEffect();
	void StopEffect();
	void GetHandle(int32* Handle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EffectActorWaterFall_Low_C">();
	}
	static class ABP_EffectActorWaterFall_Low_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EffectActorWaterFall_Low_C>();
	}
};
static_assert(alignof(ABP_EffectActorWaterFall_Low_C) == 0x000008, "Wrong alignment on ABP_EffectActorWaterFall_Low_C");
static_assert(sizeof(ABP_EffectActorWaterFall_Low_C) == 0x000340, "Wrong size on ABP_EffectActorWaterFall_Low_C");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_EffectActorWaterFall_Low_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_EffectActorWaterFall_Low_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, EffectData) == 0x0002C0, "Member 'ABP_EffectActorWaterFall_Low_C::EffectData' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, DebugPrintOnConstruction) == 0x0002E0, "Member 'ABP_EffectActorWaterFall_Low_C::DebugPrintOnConstruction' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, EditorTickWithoutSelected) == 0x0002E1, "Member 'ABP_EffectActorWaterFall_Low_C::EditorTickWithoutSelected' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, EffectComponent) == 0x0002E4, "Member 'ABP_EffectActorWaterFall_Low_C::EffectComponent' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, PlayType) == 0x0002E8, "Member 'ABP_EffectActorWaterFall_Low_C::PlayType' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, EffectType) == 0x0002E9, "Member 'ABP_EffectActorWaterFall_Low_C::EffectType' has a wrong offset!");
static_assert(offsetof(ABP_EffectActorWaterFall_Low_C, Float_Parameters) == 0x0002F0, "Member 'ABP_EffectActorWaterFall_Low_C::Float_Parameters' has a wrong offset!");

}

