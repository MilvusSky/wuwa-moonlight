#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Super_Sprint_F

#include "Basic.hpp"

#include "GA_Super_Sprint_F_classes.hpp"
#include "GA_Super_Sprint_F_parameters.hpp"


namespace SDK
{

// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.ExecuteUbergraph_GA_Super_Sprint_F
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Super_Sprint_F_C::ExecuteUbergraph_GA_Super_Sprint_F(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "ExecuteUbergraph_GA_Super_Sprint_F");

	Params::GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Super_Sprint_F_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "K2_OnEndAbility");

	Params::GA_Super_Sprint_F_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Super_Sprint_F_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.OnCompleted_5D118C384AE61F1C80292E8128017D05
// (BlueprintCallable, BlueprintEvent)

void UGA_Super_Sprint_F_C::OnCompleted_5D118C384AE61F1C80292E8128017D05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "OnCompleted_5D118C384AE61F1C80292E8128017D05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.OnBlendOut_5D118C384AE61F1C80292E8128017D05
// (BlueprintCallable, BlueprintEvent)

void UGA_Super_Sprint_F_C::OnBlendOut_5D118C384AE61F1C80292E8128017D05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "OnBlendOut_5D118C384AE61F1C80292E8128017D05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.OnInterrupted_5D118C384AE61F1C80292E8128017D05
// (BlueprintCallable, BlueprintEvent)

void UGA_Super_Sprint_F_C::OnInterrupted_5D118C384AE61F1C80292E8128017D05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "OnInterrupted_5D118C384AE61F1C80292E8128017D05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.OnCancelled_5D118C384AE61F1C80292E8128017D05
// (BlueprintCallable, BlueprintEvent)

void UGA_Super_Sprint_F_C::OnCancelled_5D118C384AE61F1C80292E8128017D05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "OnCancelled_5D118C384AE61F1C80292E8128017D05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.OnTick_5D118C384AE61F1C80292E8128017D05
// (BlueprintCallable, BlueprintEvent)

void UGA_Super_Sprint_F_C::OnTick_5D118C384AE61F1C80292E8128017D05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "OnTick_5D118C384AE61F1C80292E8128017D05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.Added_21071CB943CD992BF8EFD6A36D09B45D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Super_Sprint_F_C::Added_21071CB943CD992BF8EFD6A36D09B45D(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "Added_21071CB943CD992BF8EFD6A36D09B45D");

	Params::GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.Added_21071CB943CD992BF8EFD6A3015EDD8F
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Super_Sprint_F_C::Added_21071CB943CD992BF8EFD6A3015EDD8F(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "Added_21071CB943CD992BF8EFD6A3015EDD8F");

	Params::GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.Added_21071CB943CD992BF8EFD6A3E2664B71
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Super_Sprint_F_C::Added_21071CB943CD992BF8EFD6A3E2664B71(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Super_Sprint_F_C", "Added_21071CB943CD992BF8EFD6A3E2664B71");

	Params::GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}

}

