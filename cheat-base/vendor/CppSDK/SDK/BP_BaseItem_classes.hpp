#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsBaseItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BaseItem.BP_BaseItem_C
// 0x0028 (0x02E0 - 0x02B8)
class ABP_BaseItem_C : public ATsBaseItem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BaseItem_C;                      // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       DetectSphere;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         EntityId;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BaseItem(int32 EntryPoint);
	void ApplyEntityId(int32 EntityId_0);
	int32 GetEntityId();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaseItem_C">();
	}
	static class ABP_BaseItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BaseItem_C>();
	}
};
static_assert(alignof(ABP_BaseItem_C) == 0x000008, "Wrong alignment on ABP_BaseItem_C");
static_assert(sizeof(ABP_BaseItem_C) == 0x0002E0, "Wrong size on ABP_BaseItem_C");
static_assert(offsetof(ABP_BaseItem_C, UberGraphFrame_BP_BaseItem_C) == 0x0002B8, "Member 'ABP_BaseItem_C::UberGraphFrame_BP_BaseItem_C' has a wrong offset!");
static_assert(offsetof(ABP_BaseItem_C, DetectSphere) == 0x0002C0, "Member 'ABP_BaseItem_C::DetectSphere' has a wrong offset!");
static_assert(offsetof(ABP_BaseItem_C, StaticMesh) == 0x0002C8, "Member 'ABP_BaseItem_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BaseItem_C, Scene) == 0x0002D0, "Member 'ABP_BaseItem_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_BaseItem_C, EntityId) == 0x0002D8, "Member 'ABP_BaseItem_C::EntityId' has a wrong offset!");

}

