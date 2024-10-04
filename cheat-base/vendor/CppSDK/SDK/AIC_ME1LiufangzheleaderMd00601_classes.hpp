#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_ME1LiufangzheleaderMd00601

#include "Basic.hpp"

#include "AIC_AICommon_classes.hpp"
#include "SAiConditions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_ME1LiufangzheleaderMd00601.AIC_ME1LiufangzheleaderMd00601_C
// 0x0238 (0x09B8 - 0x0780)
class AAIC_ME1LiufangzheleaderMd00601_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_ME1LiufangzheleaderMd00601_C;   // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         Seven0_____;                                       // 0x0788(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         _____p__;                                          // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_844[0x4];                                      // 0x0844(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSAiConditions                         ___K;                                              // 0x0848(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         Z__K;                                              // 0x0900(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_ME1LiufangzheleaderMd00601(int32 EntryPoint);
	void ___z(bool bContent);
	void __b__(bool bContent);
	void ___p(class ATsBaseCharacter_C* _r, const struct FSHitInformation& __pn);
	void _6___(bool bContent);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_ME1LiufangzheleaderMd00601_C">();
	}
	static class AAIC_ME1LiufangzheleaderMd00601_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_ME1LiufangzheleaderMd00601_C>();
	}
};
static_assert(alignof(AAIC_ME1LiufangzheleaderMd00601_C) == 0x000008, "Wrong alignment on AAIC_ME1LiufangzheleaderMd00601_C");
static_assert(sizeof(AAIC_ME1LiufangzheleaderMd00601_C) == 0x0009B8, "Wrong size on AAIC_ME1LiufangzheleaderMd00601_C");
static_assert(offsetof(AAIC_ME1LiufangzheleaderMd00601_C, UberGraphFrame_AIC_ME1LiufangzheleaderMd00601_C) == 0x000780, "Member 'AAIC_ME1LiufangzheleaderMd00601_C::UberGraphFrame_AIC_ME1LiufangzheleaderMd00601_C' has a wrong offset!");
static_assert(offsetof(AAIC_ME1LiufangzheleaderMd00601_C, Seven0_____) == 0x000788, "Member 'AAIC_ME1LiufangzheleaderMd00601_C::Seven0_____' has a wrong offset!");
static_assert(offsetof(AAIC_ME1LiufangzheleaderMd00601_C, _____p__) == 0x000840, "Member 'AAIC_ME1LiufangzheleaderMd00601_C::_____p__' has a wrong offset!");
static_assert(offsetof(AAIC_ME1LiufangzheleaderMd00601_C, ___K) == 0x000848, "Member 'AAIC_ME1LiufangzheleaderMd00601_C::___K' has a wrong offset!");
static_assert(offsetof(AAIC_ME1LiufangzheleaderMd00601_C, Z__K) == 0x000900, "Member 'AAIC_ME1LiufangzheleaderMd00601_C::Z__K' has a wrong offset!");

}

