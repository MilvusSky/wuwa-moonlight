#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ani_MissionPnlProcess_Start

#include "Basic.hpp"

#include "Ani_MissionPnlProcess_Start_classes.hpp"
#include "Ani_MissionPnlProcess_Start_parameters.hpp"


namespace SDK
{

// Function Ani_MissionPnlProcess_Start.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_Start::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ani_MissionPnlProcess_Start.SequenceDirector_C.PnlParent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIContainerActor*                PnlParent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_Start::USequenceDirector_C::PnlParent_Event_0(class AUIContainerActor* PnlParent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "PnlParent_Event_0");

	Params::SequenceDirector_C_PnlParent_Event_0 Parms{};

	Parms.PnlParent = PnlParent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ani_MissionPnlProcess_Start.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIContainerActor*                PnlParent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_Start::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class AUIContainerActor* PnlParent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.PnlParent = PnlParent;

	UObject::ProcessEvent(Func, &Parms);
}

}

