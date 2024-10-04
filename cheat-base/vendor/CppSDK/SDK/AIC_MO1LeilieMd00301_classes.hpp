#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1LeilieMd00301

#include "Basic.hpp"

#include "AIC_AICommon_classes.hpp"
#include "SAiConditions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_MO1LeilieMd00301.AIC_MO1LeilieMd00301_C
// 0x0190 (0x0910 - 0x0780)
class AAIC_MO1LeilieMd00301_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_MO1LeilieMd00301_C;             // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     ___K;                                              // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSAiConditions                         ___p__;                                            // 0x0790(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         _____AIC_MO1LeilieMd00301_C;                       // 0x0848(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 SM_____ID;                                         // 0x0900(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_MO1LeilieMd00301(int32 EntryPoint);
	void __C___(bool bContent);
	void OnStart();
	void _______1(bool bContent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_MO1LeilieMd00301_C">();
	}
	static class AAIC_MO1LeilieMd00301_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_MO1LeilieMd00301_C>();
	}
};
static_assert(alignof(AAIC_MO1LeilieMd00301_C) == 0x000008, "Wrong alignment on AAIC_MO1LeilieMd00301_C");
static_assert(sizeof(AAIC_MO1LeilieMd00301_C) == 0x000910, "Wrong size on AAIC_MO1LeilieMd00301_C");
static_assert(offsetof(AAIC_MO1LeilieMd00301_C, UberGraphFrame_AIC_MO1LeilieMd00301_C) == 0x000780, "Member 'AAIC_MO1LeilieMd00301_C::UberGraphFrame_AIC_MO1LeilieMd00301_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LeilieMd00301_C, ___K) == 0x000788, "Member 'AAIC_MO1LeilieMd00301_C::___K' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LeilieMd00301_C, ___p__) == 0x000790, "Member 'AAIC_MO1LeilieMd00301_C::___p__' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LeilieMd00301_C, _____AIC_MO1LeilieMd00301_C) == 0x000848, "Member 'AAIC_MO1LeilieMd00301_C::_____AIC_MO1LeilieMd00301_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LeilieMd00301_C, SM_____ID) == 0x000900, "Member 'AAIC_MO1LeilieMd00301_C::SM_____ID' has a wrong offset!");

}

