#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterCommon_HitWeakness

#include "Basic.hpp"

#include "GA_MonsterCommon_HitWeakness_classes.hpp"
#include "GA_MonsterCommon_HitWeakness_parameters.hpp"


namespace SDK
{

// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.ExecuteUbergraph_GA_MonsterCommon_HitWeakness
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterCommon_HitWeakness_C::ExecuteUbergraph_GA_MonsterCommon_HitWeakness(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "ExecuteUbergraph_GA_MonsterCommon_HitWeakness");

	Params::GA_MonsterCommon_HitWeakness_C_ExecuteUbergraph_GA_MonsterCommon_HitWeakness Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_MonsterCommon_HitWeakness_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_MonsterCommon_HitWeakness_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "K2_OnEndAbility");

	Params::GA_MonsterCommon_HitWeakness_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.OnCompleted_5D118C384AE61F1C80292E818D57686C
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterCommon_HitWeakness_C::OnCompleted_5D118C384AE61F1C80292E818D57686C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "OnCompleted_5D118C384AE61F1C80292E818D57686C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.OnBlendOut_5D118C384AE61F1C80292E818D57686C
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterCommon_HitWeakness_C::OnBlendOut_5D118C384AE61F1C80292E818D57686C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "OnBlendOut_5D118C384AE61F1C80292E818D57686C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.OnInterrupted_5D118C384AE61F1C80292E818D57686C
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterCommon_HitWeakness_C::OnInterrupted_5D118C384AE61F1C80292E818D57686C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "OnInterrupted_5D118C384AE61F1C80292E818D57686C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.OnCancelled_5D118C384AE61F1C80292E818D57686C
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterCommon_HitWeakness_C::OnCancelled_5D118C384AE61F1C80292E818D57686C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "OnCancelled_5D118C384AE61F1C80292E818D57686C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterCommon_HitWeakness.GA_MonsterCommon_HitWeakness_C.OnTick_5D118C384AE61F1C80292E818D57686C
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterCommon_HitWeakness_C::OnTick_5D118C384AE61F1C80292E818D57686C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterCommon_HitWeakness_C", "OnTick_5D118C384AE61F1C80292E818D57686C");

	UObject::ProcessEvent(Func, nullptr);
}

}

