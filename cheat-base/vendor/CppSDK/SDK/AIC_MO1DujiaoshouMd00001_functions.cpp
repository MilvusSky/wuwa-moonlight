#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1DujiaoshouMd00001

#include "Basic.hpp"

#include "AIC_MO1DujiaoshouMd00001_classes.hpp"
#include "AIC_MO1DujiaoshouMd00001_parameters.hpp"


namespace SDK
{

// Function AIC_MO1DujiaoshouMd00001.AIC_MO1DujiaoshouMd00001_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_MO1DujiaoshouMd00001_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1DujiaoshouMd00001_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_MO1DujiaoshouMd00001.AIC_MO1DujiaoshouMd00001_C.OnStart
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_MO1DujiaoshouMd00001_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1DujiaoshouMd00001_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_MO1DujiaoshouMd00001.AIC_MO1DujiaoshouMd00001_C.ExecuteUbergraph_AIC_MO1DujiaoshouMd00001
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_MO1DujiaoshouMd00001_C::ExecuteUbergraph_AIC_MO1DujiaoshouMd00001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1DujiaoshouMd00001_C", "ExecuteUbergraph_AIC_MO1DujiaoshouMd00001");

	Params::AIC_MO1DujiaoshouMd00001_C_ExecuteUbergraph_AIC_MO1DujiaoshouMd00001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

