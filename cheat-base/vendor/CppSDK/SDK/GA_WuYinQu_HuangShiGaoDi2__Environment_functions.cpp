#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_HuangShiGaoDi2__Environment

#include "Basic.hpp"

#include "GA_WuYinQu_HuangShiGaoDi2__Environment_classes.hpp"
#include "GA_WuYinQu_HuangShiGaoDi2__Environment_parameters.hpp"


namespace SDK
{

// Function GA_WuYinQu_HuangShiGaoDi2__Environment.GA_WuYinQu_HuangShiGaoDi2__Environment_C.ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi2__Environment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuYinQu_HuangShiGaoDi2__Environment_C::ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi2__Environment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_HuangShiGaoDi2__Environment_C", "ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi2__Environment");

	Params::GA_WuYinQu_HuangShiGaoDi2__Environment_C_ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi2__Environment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuYinQu_HuangShiGaoDi2__Environment.GA_WuYinQu_HuangShiGaoDi2__Environment_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_WuYinQu_HuangShiGaoDi2__Environment_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_HuangShiGaoDi2__Environment_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

