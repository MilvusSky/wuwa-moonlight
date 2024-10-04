#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1QunJing2Md00001_New

#include "Basic.hpp"

#include "AIC_AICommon_classes.hpp"
#include "SAiConditions_structs.hpp"
#include "Engine_structs.hpp"
#include "ECharacterState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C
// 0x03A0 (0x0B20 - 0x0780)
class AAIC_MO1QunJing2Md00001_New_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_MO1QunJing2Md00001_New_C;       // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         Conditions;                                        // 0x0788(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         Conditions_0;                                      // 0x0840(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         ___AIC_MO1QunJing2Md00001_New_C;                   // 0x08F8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         A___;                                              // 0x09B0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         _____AIC_MO1QunJing2Md00001_New_C;                 // 0x0A68(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_MO1QunJing2Md00001_New(int32 EntryPoint);
	void Func____0(bool bContent);
	void OnStart();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ___b_p(class UObject* _r, ECharacterState ___, ECharacterState ____0, bool Param____0, class UObject** _r__, ECharacterState* _____, ECharacterState* ______0, bool* Param______0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_MO1QunJing2Md00001_New_C">();
	}
	static class AAIC_MO1QunJing2Md00001_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_MO1QunJing2Md00001_New_C>();
	}
};
static_assert(alignof(AAIC_MO1QunJing2Md00001_New_C) == 0x000008, "Wrong alignment on AAIC_MO1QunJing2Md00001_New_C");
static_assert(sizeof(AAIC_MO1QunJing2Md00001_New_C) == 0x000B20, "Wrong size on AAIC_MO1QunJing2Md00001_New_C");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, UberGraphFrame_AIC_MO1QunJing2Md00001_New_C) == 0x000780, "Member 'AAIC_MO1QunJing2Md00001_New_C::UberGraphFrame_AIC_MO1QunJing2Md00001_New_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, Conditions) == 0x000788, "Member 'AAIC_MO1QunJing2Md00001_New_C::Conditions' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, Conditions_0) == 0x000840, "Member 'AAIC_MO1QunJing2Md00001_New_C::Conditions_0' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, ___AIC_MO1QunJing2Md00001_New_C) == 0x0008F8, "Member 'AAIC_MO1QunJing2Md00001_New_C::___AIC_MO1QunJing2Md00001_New_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, A___) == 0x0009B0, "Member 'AAIC_MO1QunJing2Md00001_New_C::A___' has a wrong offset!");
static_assert(offsetof(AAIC_MO1QunJing2Md00001_New_C, _____AIC_MO1QunJing2Md00001_New_C) == 0x000A68, "Member 'AAIC_MO1QunJing2Md00001_New_C::_____AIC_MO1QunJing2Md00001_New_C' has a wrong offset!");

}

