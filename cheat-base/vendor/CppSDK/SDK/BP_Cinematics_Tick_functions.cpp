#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cinematics_Tick

#include "Basic.hpp"

#include "BP_Cinematics_Tick_classes.hpp"
#include "BP_Cinematics_Tick_parameters.hpp"


namespace SDK
{

// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.ExecuteUbergraph_BP_Cinematics_Tick
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematics_Tick_C::ExecuteUbergraph_BP_Cinematics_Tick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "ExecuteUbergraph_BP_Cinematics_Tick");

	Params::BP_Cinematics_Tick_C_ExecuteUbergraph_BP_Cinematics_Tick Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematics_Tick_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "ReceiveTick");

	Params::BP_Cinematics_Tick_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Cinematics_Tick_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Cinematics_Tick_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.EditorTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematics_Tick_C::EditorTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "EditorTick");

	Params::BP_Cinematics_Tick_C_EditorTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cinematics_Tick_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.SetLightDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LightYaw                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FaceLightYaw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematics_Tick_C::SetLightDirection(class USkeletalMeshComponent* Mesh, float LightYaw, float FaceLightYaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "SetLightDirection");

	Params::BP_Cinematics_Tick_C_SetLightDirection Parms{};

	Parms.Mesh = Mesh;
	Parms.LightYaw = LightYaw;
	Parms.FaceLightYaw = FaceLightYaw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.RevertLightDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematics_Tick_C::RevertLightDirection(class USkeletalMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "RevertLightDirection");

	Params::BP_Cinematics_Tick_C_RevertLightDirection Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.ProcessCombinNPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeqNPC_C*                     Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LightYaw                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FaceLightYaw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematics_Tick_C::ProcessCombinNPC(class ABP_SeqNPC_C* Mesh, float LightYaw, float FaceLightYaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "ProcessCombinNPC");

	Params::BP_Cinematics_Tick_C_ProcessCombinNPC Parms{};

	Parms.Mesh = Mesh;
	Parms.LightYaw = LightYaw;
	Parms.FaceLightYaw = FaceLightYaw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.SetActorLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LightYaw                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FaceLightYaw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRevert                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Cinematics_Tick_C::SetActorLight(class AActor* InActor, float LightYaw, float FaceLightYaw, bool IsRevert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "SetActorLight");

	Params::BP_Cinematics_Tick_C_SetActorLight Parms{};

	Parms.InActor = InActor;
	Parms.LightYaw = LightYaw;
	Parms.FaceLightYaw = FaceLightYaw;
	Parms.IsRevert = IsRevert;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.UpdateMeshAndEffectState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHideMesh_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsHideEffect_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Cinematics_Tick_C::UpdateMeshAndEffectState(class AActor* InActor, bool IsHideMesh_0, bool IsHideEffect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "UpdateMeshAndEffectState");

	Params::BP_Cinematics_Tick_C_UpdateMeshAndEffectState Parms{};

	Parms.InActor = InActor;
	Parms.IsHideMesh_0 = IsHideMesh_0;
	Parms.IsHideEffect_0 = IsHideEffect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cinematics_Tick.BP_Cinematics_Tick_C.EulerToForward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Pitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Yaw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_Cinematics_Tick_C::EulerToForward(float Pitch, float Yaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cinematics_Tick_C", "EulerToForward");

	Params::BP_Cinematics_Tick_C_EulerToForward Parms{};

	Parms.Pitch = Pitch;
	Parms.Yaw = Yaw;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

