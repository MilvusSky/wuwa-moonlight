#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1JiancuxiongMd00001_Attack04

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ME1JiancuxiongMd00001_Attack04.GA_ME1JiancuxiongMd00001_Attack04_C
// 0x0008 (0x0570 - 0x0568)
class UGA_ME1JiancuxiongMd00001_Attack04_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack04_C; // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_ME1JiancuxiongMd00001_Attack04(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81627CAB5C();
	void OnBlendOut_5D118C384AE61F1C80292E81627CAB5C();
	void OnInterrupted_5D118C384AE61F1C80292E81627CAB5C();
	void OnCancelled_5D118C384AE61F1C80292E81627CAB5C();
	void OnTick_5D118C384AE61F1C80292E81627CAB5C();
	void OnCompleted_5D118C384AE61F1C80292E81969A0E42();
	void OnBlendOut_5D118C384AE61F1C80292E81969A0E42();
	void OnInterrupted_5D118C384AE61F1C80292E81969A0E42();
	void OnCancelled_5D118C384AE61F1C80292E81969A0E42();
	void OnTick_5D118C384AE61F1C80292E81969A0E42();
	void OnCompleted_5D118C384AE61F1C80292E81E432411F();
	void OnBlendOut_5D118C384AE61F1C80292E81E432411F();
	void OnInterrupted_5D118C384AE61F1C80292E81E432411F();
	void OnCancelled_5D118C384AE61F1C80292E81E432411F();
	void OnTick_5D118C384AE61F1C80292E81E432411F();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ME1JiancuxiongMd00001_Attack04_C">();
	}
	static class UGA_ME1JiancuxiongMd00001_Attack04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ME1JiancuxiongMd00001_Attack04_C>();
	}
};
static_assert(alignof(UGA_ME1JiancuxiongMd00001_Attack04_C) == 0x000008, "Wrong alignment on UGA_ME1JiancuxiongMd00001_Attack04_C");
static_assert(sizeof(UGA_ME1JiancuxiongMd00001_Attack04_C) == 0x000570, "Wrong size on UGA_ME1JiancuxiongMd00001_Attack04_C");
static_assert(offsetof(UGA_ME1JiancuxiongMd00001_Attack04_C, UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack04_C) == 0x000568, "Member 'UGA_ME1JiancuxiongMd00001_Attack04_C::UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack04_C' has a wrong offset!");

}

