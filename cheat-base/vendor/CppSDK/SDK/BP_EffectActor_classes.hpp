#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EEffectPlay_structs.hpp"
#include "SEffectFloatParameter_structs.hpp"
#include "Engine_structs.hpp"
#include "EEffectType_structs.hpp"
#include "SEffectColorParameter_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "SEffectVectorParameter_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EffectActor.BP_EffectActor_C
// 0x00F8 (0x03E0 - 0x02E8)
class ABP_EffectActor_C final : public AKuroSceneEffectActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        EffectData;                                        // 0x02F8(0x0020)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugPrintOnConstruction;                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EditorTickWithoutSelected;                         // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31A[0x2];                                      // 0x031A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EffectComponent;                                   // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEffectPlay                                   PlayType;                                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEffectType                                   EffectType;                                        // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstTick;                                         // 0x0322(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          __yH_p;                                            // 0x0323(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         __Iq_____;                                         // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSEffectFloatParameter>         _7_pFloat;                                         // 0x0328(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSEffectColorParameter>         _7_pColor;                                         // 0x0338(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSEffectVectorParameter>        _7_pVector;                                        // 0x0348(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSEffectFloatParameter>         P__pFloat;                                         // 0x0358(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSEffectColorParameter>         P__pColor;                                         // 0x0368(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSEffectFloatParameter>         P__pFloat_Temp;                                    // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UsedInBossFight;                                   // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShouldBePlaying;                                   // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OpenVisibilityOptimize;                            // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ForceStoppingTime;                                 // 0x038B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IgnoreStoppingTime;                                // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          MobileOnly;                                        // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E[0x2];                                      // 0x038E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloatParameter0;                                   // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         FloatParameter1;                                   // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         FloatParameter2;                                   // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPublicToSequence;                                // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39D[0x3];                                      // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FloatParameterName0;                               // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 FloatParameterName1;                               // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 FloatParameterName2;                               // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsSimulateFromSequence;                            // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D1[0x3];                                      // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CustomProcess;                                     // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	EEffectPlay                                   EditorPlayType;                                    // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EffectActor(int32 EntryPoint);
	void OnReceiveShowSceneEffectActor();
	void OnReceiveHideSceneEffectActor();
	void DoHiddenInGame(bool bValue);
	void EditorTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void RemoveHandle();
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
		return StaticBPGeneratedClassImpl<"BP_EffectActor_C">();
	}
	static class ABP_EffectActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EffectActor_C>();
	}
};
static_assert(alignof(ABP_EffectActor_C) == 0x000008, "Wrong alignment on ABP_EffectActor_C");
static_assert(sizeof(ABP_EffectActor_C) == 0x0003E0, "Wrong size on ABP_EffectActor_C");
static_assert(offsetof(ABP_EffectActor_C, UberGraphFrame) == 0x0002E8, "Member 'ABP_EffectActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_EffectActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, EffectData) == 0x0002F8, "Member 'ABP_EffectActor_C::EffectData' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, DebugPrintOnConstruction) == 0x000318, "Member 'ABP_EffectActor_C::DebugPrintOnConstruction' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, EditorTickWithoutSelected) == 0x000319, "Member 'ABP_EffectActor_C::EditorTickWithoutSelected' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, EffectComponent) == 0x00031C, "Member 'ABP_EffectActor_C::EffectComponent' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, PlayType) == 0x000320, "Member 'ABP_EffectActor_C::PlayType' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, EffectType) == 0x000321, "Member 'ABP_EffectActor_C::EffectType' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, FirstTick) == 0x000322, "Member 'ABP_EffectActor_C::FirstTick' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, __yH_p) == 0x000323, "Member 'ABP_EffectActor_C::__yH_p' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, __Iq_____) == 0x000324, "Member 'ABP_EffectActor_C::__Iq_____' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, _7_pFloat) == 0x000328, "Member 'ABP_EffectActor_C::_7_pFloat' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, _7_pColor) == 0x000338, "Member 'ABP_EffectActor_C::_7_pColor' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, _7_pVector) == 0x000348, "Member 'ABP_EffectActor_C::_7_pVector' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, P__pFloat) == 0x000358, "Member 'ABP_EffectActor_C::P__pFloat' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, P__pColor) == 0x000368, "Member 'ABP_EffectActor_C::P__pColor' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, P__pFloat_Temp) == 0x000378, "Member 'ABP_EffectActor_C::P__pFloat_Temp' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, UsedInBossFight) == 0x000388, "Member 'ABP_EffectActor_C::UsedInBossFight' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, ShouldBePlaying) == 0x000389, "Member 'ABP_EffectActor_C::ShouldBePlaying' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, OpenVisibilityOptimize) == 0x00038A, "Member 'ABP_EffectActor_C::OpenVisibilityOptimize' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, ForceStoppingTime) == 0x00038B, "Member 'ABP_EffectActor_C::ForceStoppingTime' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, IgnoreStoppingTime) == 0x00038C, "Member 'ABP_EffectActor_C::IgnoreStoppingTime' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, MobileOnly) == 0x00038D, "Member 'ABP_EffectActor_C::MobileOnly' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, FloatParameter0) == 0x000390, "Member 'ABP_EffectActor_C::FloatParameter0' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, FloatParameter1) == 0x000394, "Member 'ABP_EffectActor_C::FloatParameter1' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, FloatParameter2) == 0x000398, "Member 'ABP_EffectActor_C::FloatParameter2' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, IsPublicToSequence) == 0x00039C, "Member 'ABP_EffectActor_C::IsPublicToSequence' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, FloatParameterName0) == 0x0003A0, "Member 'ABP_EffectActor_C::FloatParameterName0' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, FloatParameterName1) == 0x0003B0, "Member 'ABP_EffectActor_C::FloatParameterName1' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, FloatParameterName2) == 0x0003C0, "Member 'ABP_EffectActor_C::FloatParameterName2' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, IsSimulateFromSequence) == 0x0003D0, "Member 'ABP_EffectActor_C::IsSimulateFromSequence' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, CustomProcess) == 0x0003D4, "Member 'ABP_EffectActor_C::CustomProcess' has a wrong offset!");
static_assert(offsetof(ABP_EffectActor_C, EditorPlayType) == 0x0003D8, "Member 'ABP_EffectActor_C::EditorPlayType' has a wrong offset!");

}

