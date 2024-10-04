#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskChangePatrol

#include "Basic.hpp"

#include "TsTaskChangePatrol_classes.hpp"
#include "TsTaskChangePatrol_parameters.hpp"


namespace SDK
{

// Function TsTaskChangePatrol.TsTaskChangePatrol_C.ReceiveExecuteAI
// (Native, Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsTaskChangePatrol_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsTaskChangePatrol_C", "ReceiveExecuteAI");

	Params::TsTaskChangePatrol_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsTaskChangePatrol.TsTaskChangePatrol_C.ExecuteUbergraph_TsTaskChangePatrol
// (Final, Native, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsTaskChangePatrol_C::ExecuteUbergraph_TsTaskChangePatrol(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsTaskChangePatrol_C", "ExecuteUbergraph_TsTaskChangePatrol");

	Params::TsTaskChangePatrol_C_ExecuteUbergraph_TsTaskChangePatrol Parms{};

	Parms.EntryPoint = EntryPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

