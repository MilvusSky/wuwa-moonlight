#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HaloPointLight

#include "Basic.hpp"

#include "BP_HaloPointLight_classes.hpp"
#include "BP_HaloPointLight_parameters.hpp"


namespace SDK
{

// Function BP_HaloPointLight.BP_HaloPointLight_C.ExecuteUbergraph_BP_HaloPointLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HaloPointLight_C::ExecuteUbergraph_BP_HaloPointLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HaloPointLight_C", "ExecuteUbergraph_BP_HaloPointLight");

	Params::BP_HaloPointLight_C_ExecuteUbergraph_BP_HaloPointLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HaloPointLight.BP_HaloPointLight_C.HaloPointParaUpdate
// (Event, Public, BlueprintEvent)

void ABP_HaloPointLight_C::HaloPointParaUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HaloPointLight_C", "HaloPointParaUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HaloPointLight.BP_HaloPointLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HaloPointLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HaloPointLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HaloPointLight.BP_HaloPointLight_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HaloPointLight_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HaloPointLight_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HaloPointLight.BP_HaloPointLight_C.UpdateHaloParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UpdateComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HaloPointLight_C::UpdateHaloParameter(bool UpdateComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HaloPointLight_C", "UpdateHaloParameter");

	Params::BP_HaloPointLight_C_UpdateHaloParameter Parms{};

	Parms.UpdateComponent = UpdateComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HaloPointLight.BP_HaloPointLight_C.GetHaloDrawParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_MinDrawDistance                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_MaxDrawDistance                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_MinDrawRange                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_MaxDrawRange                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HaloPointLight_C::GetHaloDrawParameters(float* Param_MinDrawDistance, float* Param_MaxDrawDistance, float* Param_MinDrawRange, float* Param_MaxDrawRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HaloPointLight_C", "GetHaloDrawParameters");

	Params::BP_HaloPointLight_C_GetHaloDrawParameters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MinDrawDistance != nullptr)
		*Param_MinDrawDistance = Parms.Param_MinDrawDistance;

	if (Param_MaxDrawDistance != nullptr)
		*Param_MaxDrawDistance = Parms.Param_MaxDrawDistance;

	if (Param_MinDrawRange != nullptr)
		*Param_MinDrawRange = Parms.Param_MinDrawRange;

	if (Param_MaxDrawRange != nullptr)
		*Param_MaxDrawRange = Parms.Param_MaxDrawRange;
}

}
