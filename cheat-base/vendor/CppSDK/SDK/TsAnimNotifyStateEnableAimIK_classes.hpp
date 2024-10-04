#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateEnableAimIK

#include "Basic.hpp"

#include "KuroAnim_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateEnableAimIK.TsAnimNotifyStateEnableAimIK_C
// 0x0058 (0x00A0 - 0x0048)
class UTsAnimNotifyStateEnableAimIK_C final : public UKuroAnimNotifyState
{
public:
	bool                                          SkeletonChange;                                    // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SightBoneName;                                     // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BeginBoneName;                                     // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EndBoneName;                                       // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AssistLimit;                                       // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OldSightBoneName;                                  // 0x0074(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OldBeginBoneName;                                  // 0x0080(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OldEndBoneName;                                    // 0x008C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESightLockMode                                OldCameraMode;                                     // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OldAssistLimit;                                    // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateEnableAimIK_C">();
	}
	static class UTsAnimNotifyStateEnableAimIK_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateEnableAimIK_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateEnableAimIK_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateEnableAimIK_C");
static_assert(sizeof(UTsAnimNotifyStateEnableAimIK_C) == 0x0000A0, "Wrong size on UTsAnimNotifyStateEnableAimIK_C");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, SkeletonChange) == 0x000048, "Member 'UTsAnimNotifyStateEnableAimIK_C::SkeletonChange' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, SightBoneName) == 0x00004C, "Member 'UTsAnimNotifyStateEnableAimIK_C::SightBoneName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, BeginBoneName) == 0x000058, "Member 'UTsAnimNotifyStateEnableAimIK_C::BeginBoneName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, EndBoneName) == 0x000064, "Member 'UTsAnimNotifyStateEnableAimIK_C::EndBoneName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, AssistLimit) == 0x000070, "Member 'UTsAnimNotifyStateEnableAimIK_C::AssistLimit' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, OldSightBoneName) == 0x000074, "Member 'UTsAnimNotifyStateEnableAimIK_C::OldSightBoneName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, OldBeginBoneName) == 0x000080, "Member 'UTsAnimNotifyStateEnableAimIK_C::OldBeginBoneName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, OldEndBoneName) == 0x00008C, "Member 'UTsAnimNotifyStateEnableAimIK_C::OldEndBoneName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, OldCameraMode) == 0x000098, "Member 'UTsAnimNotifyStateEnableAimIK_C::OldCameraMode' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateEnableAimIK_C, OldAssistLimit) == 0x00009C, "Member 'UTsAnimNotifyStateEnableAimIK_C::OldAssistLimit' has a wrong offset!");

}

