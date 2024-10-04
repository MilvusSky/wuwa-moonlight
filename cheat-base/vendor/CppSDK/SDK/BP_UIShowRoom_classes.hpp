#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIShowRoom

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIShowRoom.BP_UIShowRoom_C
// 0x0078 (0x0330 - 0x02B8)
class ABP_UIShowRoom_C final : public AKuroEditorTickActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_MilkyWay;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SkyMesh;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlanarReflectionComponent*             PlanarReflection;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FloorMesh;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MilkyWayMaterial;                                  // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               MilkyWayRotation;                                  // 0x02F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     SkyMaterial;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     FloorMaterial;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SkyMID;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowMilkyWay;                                     // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bShowSky;                                          // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bShowFloor;                                        // 0x031A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31B[0x5];                                      // 0x031B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ShowActors;                                        // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void ExecuteUbergraph_BP_UIShowRoom(int32 EntryPoint);
	void EditorTick(float DeltaSeconds);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void AddShowActor(class AActor*& Actor, bool IncludefromChildActors);
	void RemoveShowActor(class AActor*& Actor, bool IncludefromChildActors);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIShowRoom_C">();
	}
	static class ABP_UIShowRoom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UIShowRoom_C>();
	}
};
static_assert(alignof(ABP_UIShowRoom_C) == 0x000008, "Wrong alignment on ABP_UIShowRoom_C");
static_assert(sizeof(ABP_UIShowRoom_C) == 0x000330, "Wrong size on ABP_UIShowRoom_C");
static_assert(offsetof(ABP_UIShowRoom_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_UIShowRoom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, SM_MilkyWay) == 0x0002C0, "Member 'ABP_UIShowRoom_C::SM_MilkyWay' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, SkyMesh) == 0x0002C8, "Member 'ABP_UIShowRoom_C::SkyMesh' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, PlanarReflection) == 0x0002D0, "Member 'ABP_UIShowRoom_C::PlanarReflection' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, FloorMesh) == 0x0002D8, "Member 'ABP_UIShowRoom_C::FloorMesh' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_UIShowRoom_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, MilkyWayMaterial) == 0x0002E8, "Member 'ABP_UIShowRoom_C::MilkyWayMaterial' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, MilkyWayRotation) == 0x0002F0, "Member 'ABP_UIShowRoom_C::MilkyWayRotation' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, SkyMaterial) == 0x000300, "Member 'ABP_UIShowRoom_C::SkyMaterial' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, FloorMaterial) == 0x000308, "Member 'ABP_UIShowRoom_C::FloorMaterial' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, SkyMID) == 0x000310, "Member 'ABP_UIShowRoom_C::SkyMID' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, bShowMilkyWay) == 0x000318, "Member 'ABP_UIShowRoom_C::bShowMilkyWay' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, bShowSky) == 0x000319, "Member 'ABP_UIShowRoom_C::bShowSky' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, bShowFloor) == 0x00031A, "Member 'ABP_UIShowRoom_C::bShowFloor' has a wrong offset!");
static_assert(offsetof(ABP_UIShowRoom_C, ShowActors) == 0x000320, "Member 'ABP_UIShowRoom_C::ShowActors' has a wrong offset!");

}

