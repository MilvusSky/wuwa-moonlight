#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroRainGenerator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KuroRainGenerator.BP_KuroRainGenerator_C
// 0x00A8 (0x0368 - 0x02C0)
class ABP_KuroRainGenerator_C final : public AKuroRainActorV2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_WorldRainComponent_Common_C*        BP_WorldRainComponent_RainCommonDrop;              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WorldRainComponent_Common_C*        BP_WorldRainComponent_Snow_CommonDrop;             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara_CommonReverse_UrgentTurn;                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RainComponent_CommonReverse_C*      BP_RainComponent_CommonReverse_UrgentTurn;         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara_CommonReverse_Fast;                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RainComponent_CommonReverse_C*      BP_RainComponent_CommonReverse_Fast;               // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara_CommonReverse_Stable;                      // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara_CommonReverse_Lively;                      // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RainComponent_CommonReverse_C*      BP_RainComponent_CommonReverse_Stable;             // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RainComponent_CommonReverse_C*      BP_RainComponent_CommonReverse_Lively;             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Handle;                                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_RainConfigs_C*                     Configs;                                           // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TeleportDistanceToRestart;                         // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroRainType                                 CachedRainType;                                    // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroRainType                                 CurrentRainType;                                   // 0x0335(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_336[0x2];                                      // 0x0336(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RainDensity;                                       // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Wind;                                              // 0x033C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainFogDensity;                                    // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraPosition;                                    // 0x034C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Distance;                                          // 0x0358(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnabled;                                         // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void StartWorldRain(struct FSWorldRainComb& Config, class UBP_WorldRainComponent_Common_C* Comp);
	void UpdateMPC();
	void StopAll();
	void StartSnow_CommonDrop();
	void StartRain_CommonReverse_UrgentTurn();
	void StartRain_CommonReverse_Fast();
	void UpdateRainGlobalParams();
	void StartRain_CommonReverse_Stable();
	void UpdateCameraInfos();
	void StartRain_CommonReverse_Lively();
	void StartRain_CommonDrop();
	void DeactivateAll();
	void RefreshDeactivateStat();
	void PrintSpeed();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void EditorTick(float DeltaSeconds);
	void EnableRain();
	void DisableRain();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_KuroRainGenerator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KuroRainGenerator_C">();
	}
	static class ABP_KuroRainGenerator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KuroRainGenerator_C>();
	}
};
static_assert(alignof(ABP_KuroRainGenerator_C) == 0x000008, "Wrong alignment on ABP_KuroRainGenerator_C");
static_assert(sizeof(ABP_KuroRainGenerator_C) == 0x000368, "Wrong size on ABP_KuroRainGenerator_C");
static_assert(offsetof(ABP_KuroRainGenerator_C, UberGraphFrame) == 0x0002C0, "Member 'ABP_KuroRainGenerator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, BP_WorldRainComponent_RainCommonDrop) == 0x0002C8, "Member 'ABP_KuroRainGenerator_C::BP_WorldRainComponent_RainCommonDrop' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, BP_WorldRainComponent_Snow_CommonDrop) == 0x0002D0, "Member 'ABP_KuroRainGenerator_C::BP_WorldRainComponent_Snow_CommonDrop' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Niagara_CommonReverse_UrgentTurn) == 0x0002D8, "Member 'ABP_KuroRainGenerator_C::Niagara_CommonReverse_UrgentTurn' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, BP_RainComponent_CommonReverse_UrgentTurn) == 0x0002E0, "Member 'ABP_KuroRainGenerator_C::BP_RainComponent_CommonReverse_UrgentTurn' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Niagara_CommonReverse_Fast) == 0x0002E8, "Member 'ABP_KuroRainGenerator_C::Niagara_CommonReverse_Fast' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, BP_RainComponent_CommonReverse_Fast) == 0x0002F0, "Member 'ABP_KuroRainGenerator_C::BP_RainComponent_CommonReverse_Fast' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Niagara_CommonReverse_Stable) == 0x0002F8, "Member 'ABP_KuroRainGenerator_C::Niagara_CommonReverse_Stable' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Niagara_CommonReverse_Lively) == 0x000300, "Member 'ABP_KuroRainGenerator_C::Niagara_CommonReverse_Lively' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, BP_RainComponent_CommonReverse_Stable) == 0x000308, "Member 'ABP_KuroRainGenerator_C::BP_RainComponent_CommonReverse_Stable' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, BP_RainComponent_CommonReverse_Lively) == 0x000310, "Member 'ABP_KuroRainGenerator_C::BP_RainComponent_CommonReverse_Lively' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Scene) == 0x000318, "Member 'ABP_KuroRainGenerator_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Handle) == 0x000320, "Member 'ABP_KuroRainGenerator_C::Handle' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Configs) == 0x000328, "Member 'ABP_KuroRainGenerator_C::Configs' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, TeleportDistanceToRestart) == 0x000330, "Member 'ABP_KuroRainGenerator_C::TeleportDistanceToRestart' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, CachedRainType) == 0x000334, "Member 'ABP_KuroRainGenerator_C::CachedRainType' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, CurrentRainType) == 0x000335, "Member 'ABP_KuroRainGenerator_C::CurrentRainType' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, RainDensity) == 0x000338, "Member 'ABP_KuroRainGenerator_C::RainDensity' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Wind) == 0x00033C, "Member 'ABP_KuroRainGenerator_C::Wind' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, RainFogDensity) == 0x000348, "Member 'ABP_KuroRainGenerator_C::RainFogDensity' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, CameraPosition) == 0x00034C, "Member 'ABP_KuroRainGenerator_C::CameraPosition' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, Distance) == 0x000358, "Member 'ABP_KuroRainGenerator_C::Distance' has a wrong offset!");
static_assert(offsetof(ABP_KuroRainGenerator_C, IsEnabled) == 0x000364, "Member 'ABP_KuroRainGenerator_C::IsEnabled' has a wrong offset!");

}

