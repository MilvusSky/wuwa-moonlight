#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStatePosition

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStatePosition.TsAnimNotifyStatePosition_C
// 0x0020 (0x0068 - 0x0048)
class UTsAnimNotifyStatePosition_C final : public UKuroAnimNotifyState
{
public:
	struct FVector                                ____;                                              // 0x0048(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            _____0;                                            // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _______;                                           // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool K2_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStatePosition_C">();
	}
	static class UTsAnimNotifyStatePosition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStatePosition_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStatePosition_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStatePosition_C");
static_assert(sizeof(UTsAnimNotifyStatePosition_C) == 0x000068, "Wrong size on UTsAnimNotifyStatePosition_C");
static_assert(offsetof(UTsAnimNotifyStatePosition_C, ____) == 0x000048, "Member 'UTsAnimNotifyStatePosition_C::____' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStatePosition_C, _____0) == 0x000058, "Member 'UTsAnimNotifyStatePosition_C::_____0' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStatePosition_C, _______) == 0x000060, "Member 'UTsAnimNotifyStatePosition_C::_______' has a wrong offset!");

}

