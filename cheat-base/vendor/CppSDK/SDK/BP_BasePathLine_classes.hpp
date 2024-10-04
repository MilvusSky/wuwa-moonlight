#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BasePathLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BasePathLine.BP_BasePathLine_C
// 0x0030 (0x02D8 - 0x02A8)
class ABP_BasePathLine_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       Spline;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginalLocation;                                  // 0x02B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DebugTarget;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAttachedToEntity;                                // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BasePathLine(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Four0__();
	void Save();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BasePathLine_C">();
	}
	static class ABP_BasePathLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BasePathLine_C>();
	}
};
static_assert(alignof(ABP_BasePathLine_C) == 0x000008, "Wrong alignment on ABP_BasePathLine_C");
static_assert(sizeof(ABP_BasePathLine_C) == 0x0002D8, "Wrong size on ABP_BasePathLine_C");
static_assert(offsetof(ABP_BasePathLine_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_BasePathLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BasePathLine_C, Spline) == 0x0002B0, "Member 'ABP_BasePathLine_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_BasePathLine_C, OriginalLocation) == 0x0002B8, "Member 'ABP_BasePathLine_C::OriginalLocation' has a wrong offset!");
static_assert(offsetof(ABP_BasePathLine_C, DebugTarget) == 0x0002C8, "Member 'ABP_BasePathLine_C::DebugTarget' has a wrong offset!");
static_assert(offsetof(ABP_BasePathLine_C, IsAttachedToEntity) == 0x0002D0, "Member 'ABP_BasePathLine_C::IsAttachedToEntity' has a wrong offset!");

}

