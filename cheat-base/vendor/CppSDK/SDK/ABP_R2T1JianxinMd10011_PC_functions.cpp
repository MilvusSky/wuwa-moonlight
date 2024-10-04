#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_R2T1JianxinMd10011_PC

#include "Basic.hpp"

#include "ABP_R2T1JianxinMd10011_PC_classes.hpp"
#include "ABP_R2T1JianxinMd10011_PC_parameters.hpp"


namespace SDK
{

// Function ABP_R2T1JianxinMd10011_PC.ABP_R2T1JianxinMd10011_PC_C.ExecuteUbergraph_ABP_R2T1JianxinMd10011_PC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_R2T1JianxinMd10011_PC_C::ExecuteUbergraph_ABP_R2T1JianxinMd10011_PC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1JianxinMd10011_PC_C", "ExecuteUbergraph_ABP_R2T1JianxinMd10011_PC");

	Params::ABP_R2T1JianxinMd10011_PC_C_ExecuteUbergraph_ABP_R2T1JianxinMd10011_PC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_R2T1JianxinMd10011_PC.ABP_R2T1JianxinMd10011_PC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_R2T1JianxinMd10011_PC_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1JianxinMd10011_PC_C", "AnimGraph");

	Params::ABP_R2T1JianxinMd10011_PC_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_R2T1JianxinMd10011_PC.ABP_R2T1JianxinMd10011_PC_C.PhyCloth
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        PhyCloth_0                                             (Parm, OutParm, NoDestructor)

void UABP_R2T1JianxinMd10011_PC_C::PhyCloth(const struct FPoseLink& InPose, struct FPoseLink* PhyCloth_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1JianxinMd10011_PC_C", "PhyCloth");

	Params::ABP_R2T1JianxinMd10011_PC_C_PhyCloth Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (PhyCloth_0 != nullptr)
		*PhyCloth_0 = std::move(Parms.PhyCloth_0);
}

}

