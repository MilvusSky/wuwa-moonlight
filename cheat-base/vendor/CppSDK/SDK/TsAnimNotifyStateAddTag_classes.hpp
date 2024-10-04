#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateAddTag

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateAddTag.TsAnimNotifyStateAddTag_C
// 0x0010 (0x0058 - 0x0048)
class UTsAnimNotifyStateAddTag_C final : public UKuroAnimNotifyState
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0048(0x000C)(Edit, BlueprintVisible, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateAddTag_C">();
	}
	static class UTsAnimNotifyStateAddTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateAddTag_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateAddTag_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateAddTag_C");
static_assert(sizeof(UTsAnimNotifyStateAddTag_C) == 0x000058, "Wrong size on UTsAnimNotifyStateAddTag_C");
static_assert(offsetof(UTsAnimNotifyStateAddTag_C, Tag) == 0x000048, "Member 'UTsAnimNotifyStateAddTag_C::Tag' has a wrong offset!");

}

