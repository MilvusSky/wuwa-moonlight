#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Jianxin

#include "Basic.hpp"

#include "ABP_Jianxin_classes.hpp"
#include "ABP_Jianxin_parameters.hpp"


namespace SDK
{

// Function ABP_Jianxin.ABP_Jianxin_C.ExecuteUbergraph_ABP_Jianxin
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Jianxin_C::ExecuteUbergraph_ABP_Jianxin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Jianxin_C", "ExecuteUbergraph_ABP_Jianxin");

	Params::ABP_Jianxin_C_ExecuteUbergraph_ABP_Jianxin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Jianxin.ABP_Jianxin_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Jianxin_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Jianxin_C", "BlueprintUpdateAnimation");

	Params::ABP_Jianxin_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

}

