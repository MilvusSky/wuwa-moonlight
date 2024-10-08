#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateBulletDuration

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateBulletDuration.TsAnimNotifyStateBulletDuration_C
// 0x0048 (0x0090 - 0x0048)
class UTsAnimNotifyStateBulletDuration_C final : public UKuroAnimNotifyState
{
public:
	TArray<class FString>                         BulletIds;                                         // 0x0048(0x0010)(Edit, BlueprintVisible)
	uint8                                         Pad_396B[0x8];                                     // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             UeTransform;                                       // 0x0060(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	void Initialize();

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateBulletDuration_C">();
	}
	static class UTsAnimNotifyStateBulletDuration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateBulletDuration_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateBulletDuration_C) == 0x000010, "Wrong alignment on UTsAnimNotifyStateBulletDuration_C");
static_assert(sizeof(UTsAnimNotifyStateBulletDuration_C) == 0x000090, "Wrong size on UTsAnimNotifyStateBulletDuration_C");
static_assert(offsetof(UTsAnimNotifyStateBulletDuration_C, BulletIds) == 0x000048, "Member 'UTsAnimNotifyStateBulletDuration_C::BulletIds' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateBulletDuration_C, UeTransform) == 0x000060, "Member 'UTsAnimNotifyStateBulletDuration_C::UeTransform' has a wrong offset!");

}

