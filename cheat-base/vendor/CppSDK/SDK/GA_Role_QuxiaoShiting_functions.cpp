#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_QuxiaoShiting

#include "Basic.hpp"

#include "GA_Role_QuxiaoShiting_classes.hpp"
#include "GA_Role_QuxiaoShiting_parameters.hpp"


namespace SDK
{

// Function GA_Role_QuxiaoShiting.GA_Role_QuxiaoShiting_C.ExecuteUbergraph_GA_Role_QuxiaoShiting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_QuxiaoShiting_C::ExecuteUbergraph_GA_Role_QuxiaoShiting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_QuxiaoShiting_C", "ExecuteUbergraph_GA_Role_QuxiaoShiting");

	Params::GA_Role_QuxiaoShiting_C_ExecuteUbergraph_GA_Role_QuxiaoShiting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_QuxiaoShiting.GA_Role_QuxiaoShiting_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Role_QuxiaoShiting_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_QuxiaoShiting_C", "K2_OnEndAbility");

	Params::GA_Role_QuxiaoShiting_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_QuxiaoShiting.GA_Role_QuxiaoShiting_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Role_QuxiaoShiting_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_QuxiaoShiting_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_QuxiaoShiting.GA_Role_QuxiaoShiting_C. �y�P9
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             P9_W                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ___PP9                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Role_QuxiaoShiting_C::____y_P9(class FName P9_W, bool ___PP9)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_QuxiaoShiting_C", " �y�P9");

	Params::GA_Role_QuxiaoShiting_C_____y_P9 Parms{};

	Parms.P9_W = P9_W;
	Parms.___PP9 = ___PP9;

	UObject::ProcessEvent(Func, &Parms);
}

}

