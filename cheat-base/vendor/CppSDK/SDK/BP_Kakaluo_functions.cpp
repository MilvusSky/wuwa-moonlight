#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Kakaluo

#include "Basic.hpp"

#include "BP_Kakaluo_classes.hpp"
#include "BP_Kakaluo_parameters.hpp"


namespace SDK
{

// Function BP_Kakaluo.BP_Kakaluo_C.ExecuteUbergraph_BP_Kakaluo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Kakaluo_C::ExecuteUbergraph_BP_Kakaluo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Kakaluo_C", "ExecuteUbergraph_BP_Kakaluo");

	Params::BP_Kakaluo_C_ExecuteUbergraph_BP_Kakaluo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Kakaluo.BP_Kakaluo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Kakaluo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Kakaluo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Kakaluo.BP_Kakaluo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Kakaluo_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Kakaluo_C", "ReceiveTick");

	Params::BP_Kakaluo_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Kakaluo.BP_Kakaluo_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Kakaluo_C::FightCommand(bool IsInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Kakaluo_C", "FightCommand");

	Params::BP_Kakaluo_C_FightCommand Parms{};

	Parms.IsInAir = IsInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}

