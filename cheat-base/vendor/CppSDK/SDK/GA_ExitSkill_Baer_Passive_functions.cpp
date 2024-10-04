#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ExitSkill_Baer_Passive

#include "Basic.hpp"

#include "GA_ExitSkill_Baer_Passive_classes.hpp"
#include "GA_ExitSkill_Baer_Passive_parameters.hpp"


namespace SDK
{

// Function GA_ExitSkill_Baer_Passive.GA_ExitSkill_Baer_Passive_C.ExecuteUbergraph_GA_ExitSkill_Baer_Passive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ExitSkill_Baer_Passive_C::ExecuteUbergraph_GA_ExitSkill_Baer_Passive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Baer_Passive_C", "ExecuteUbergraph_GA_ExitSkill_Baer_Passive");

	Params::GA_ExitSkill_Baer_Passive_C_ExecuteUbergraph_GA_ExitSkill_Baer_Passive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ExitSkill_Baer_Passive.GA_ExitSkill_Baer_Passive_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ExitSkill_Baer_Passive_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Baer_Passive_C", "K2_ActivateAbilityFromEvent");

	Params::GA_ExitSkill_Baer_Passive_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

