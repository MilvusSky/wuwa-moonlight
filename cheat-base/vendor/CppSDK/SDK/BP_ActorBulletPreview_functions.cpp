#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorBulletPreview

#include "Basic.hpp"

#include "BP_ActorBulletPreview_classes.hpp"
#include "BP_ActorBulletPreview_parameters.hpp"


namespace SDK
{

// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C. �
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorBulletPreview_C::___0(class USkeletalMeshComponent* MeshComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", " �");

	Params::BP_ActorBulletPreview_C____0 Parms{};

	Parms.MeshComp = MeshComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.b��
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBulletShape                            b_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorBulletPreview_C::b____(EBulletShape b_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "b��");

	Params::BP_ActorBulletPreview_C_b____ Parms{};

	Parms.b_ = b_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.�
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSReBulletDataMain               Mn_0                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                           Param_____0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorBulletPreview_C::Func_____0(const struct FSReBulletDataMain& Mn_0, class AActor* Param_____0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "�");

	Params::BP_ActorBulletPreview_C_Func_____0 Parms{};

	Parms.Mn_0 = std::move(Mn_0);
	Parms.Param_____0 = Param_____0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.OnTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ActorBulletPreview_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.-�MnO�
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ActorBulletPreview_C::Minus_MnO_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "-�MnO�");

	UObject::ProcessEvent(Func, nullptr);
}

}

