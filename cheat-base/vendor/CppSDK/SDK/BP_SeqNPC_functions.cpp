#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SeqNPC

#include "Basic.hpp"

#include "BP_SeqNPC_classes.hpp"
#include "BP_SeqNPC_parameters.hpp"


namespace SDK
{

// Function BP_SeqNPC.BP_SeqNPC_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SeqNPC_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeqNPC_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SeqNPC.BP_SeqNPC_C.SetAnimDataVector
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FVector>       VectorCurveData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_SeqNPC_C::SetAnimDataVector(const TMap<class FName, struct FVector>& VectorCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeqNPC_C", "SetAnimDataVector");

	Params::BP_SeqNPC_C_SetAnimDataVector Parms{};

	Parms.VectorCurveData = std::move(VectorCurveData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SeqNPC.BP_SeqNPC_C.SetAnimDataFloat
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FNamedCurveValue>         FloatCurveData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_SeqNPC_C::SetAnimDataFloat(const TArray<struct FNamedCurveValue>& FloatCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeqNPC_C", "SetAnimDataFloat");

	Params::BP_SeqNPC_C_SetAnimDataFloat Parms{};

	Parms.FloatCurveData = std::move(FloatCurveData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SeqNPC.BP_SeqNPC_C.GetSupportGroupNames
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class FName> ABP_SeqNPC_C::GetSupportGroupNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeqNPC_C", "GetSupportGroupNames");

	Params::BP_SeqNPC_C_GetSupportGroupNames Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SeqNPC.BP_SeqNPC_C.GetAnimDataVector
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FVector>       VectorCurveData                                        (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_SeqNPC_C::GetAnimDataVector(TMap<class FName, struct FVector>* VectorCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeqNPC_C", "GetAnimDataVector");

	Params::BP_SeqNPC_C_GetAnimDataVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VectorCurveData != nullptr)
		*VectorCurveData = std::move(Parms.VectorCurveData);

	return Parms.ReturnValue;
}


// Function BP_SeqNPC.BP_SeqNPC_C.GetAnimDataFloat
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FNamedCurveValue>         FloatCurveData                                         (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_SeqNPC_C::GetAnimDataFloat(TArray<struct FNamedCurveValue>* FloatCurveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeqNPC_C", "GetAnimDataFloat");

	Params::BP_SeqNPC_C_GetAnimDataFloat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FloatCurveData != nullptr)
		*FloatCurveData = std::move(Parms.FloatCurveData);

	return Parms.ReturnValue;
}


// Function BP_SeqNPC.BP_SeqNPC_C.GetABPC_Body_V2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UABPC_Seq_Body_V2_C*              ABPC_Body_V2_0                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SeqNPC_C::GetABPC_Body_V2(class UABPC_Seq_Body_V2_C** ABPC_Body_V2_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeqNPC_C", "GetABPC_Body_V2");

	Params::BP_SeqNPC_C_GetABPC_Body_V2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ABPC_Body_V2_0 != nullptr)
		*ABPC_Body_V2_0 = Parms.ABPC_Body_V2_0;
}

}

