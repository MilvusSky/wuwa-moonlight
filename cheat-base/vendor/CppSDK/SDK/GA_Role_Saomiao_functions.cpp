#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Saomiao

#include "Basic.hpp"

#include "GA_Role_Saomiao_classes.hpp"
#include "GA_Role_Saomiao_parameters.hpp"


namespace SDK
{

// Function GA_Role_Saomiao.GA_Role_Saomiao_C.ExecuteUbergraph_GA_Role_Saomiao
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_Saomiao_C::ExecuteUbergraph_GA_Role_Saomiao(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Saomiao_C", "ExecuteUbergraph_GA_Role_Saomiao");

	Params::GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_Saomiao.GA_Role_Saomiao_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Role_Saomiao_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Saomiao_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

