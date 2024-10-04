#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsUiSceneRoleActor

#include "Basic.hpp"

#include "TsUiSceneRoleActor_classes.hpp"
#include "TsUiSceneRoleActor_parameters.hpp"


namespace SDK
{

// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.ExecuteUbergraph_TsUiSceneRoleActor
// (Final, Native, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsUiSceneRoleActor_C::ExecuteUbergraph_TsUiSceneRoleActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsUiSceneRoleActor_C", "ExecuteUbergraph_TsUiSceneRoleActor");

	Params::TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor Parms{};

	Parms.EntryPoint = EntryPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.ReceiveTick
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsUiSceneRoleActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsUiSceneRoleActor_C", "ReceiveTick");

	Params::TsUiSceneRoleActor_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.IsShowUiWepaonEffect
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATsUiSceneRoleActor_C::IsShowUiWepaonEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsUiSceneRoleActor_C", "IsShowUiWepaonEffect");

	Params::TsUiSceneRoleActor_C_IsShowUiWepaonEffect Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

