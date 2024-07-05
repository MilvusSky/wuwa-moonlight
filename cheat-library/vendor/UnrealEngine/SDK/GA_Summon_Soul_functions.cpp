#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Summon_Soul

#include "Basic.hpp"

#include "GA_Summon_Soul_classes.hpp"
#include "GA_Summon_Soul_parameters.hpp"


namespace SDK
{

// Function GA_Summon_Soul.GA_Summon_Soul_C.ExecuteUbergraph_GA_Summon_Soul
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Summon_Soul_C::ExecuteUbergraph_GA_Summon_Soul(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "ExecuteUbergraph_GA_Summon_Soul");

	Params::GA_Summon_Soul_C_ExecuteUbergraph_GA_Summon_Soul Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Summon_Soul_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "K2_OnEndAbility");

	Params::GA_Summon_Soul_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Summon_Soul_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.OnCompleted_5D118C384AE61F1C80292E8109E1332E
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Soul_C::OnCompleted_5D118C384AE61F1C80292E8109E1332E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "OnCompleted_5D118C384AE61F1C80292E8109E1332E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.OnBlendOut_5D118C384AE61F1C80292E8109E1332E
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Soul_C::OnBlendOut_5D118C384AE61F1C80292E8109E1332E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "OnBlendOut_5D118C384AE61F1C80292E8109E1332E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.OnInterrupted_5D118C384AE61F1C80292E8109E1332E
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Soul_C::OnInterrupted_5D118C384AE61F1C80292E8109E1332E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "OnInterrupted_5D118C384AE61F1C80292E8109E1332E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.OnCancelled_5D118C384AE61F1C80292E8109E1332E
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Soul_C::OnCancelled_5D118C384AE61F1C80292E8109E1332E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "OnCancelled_5D118C384AE61F1C80292E8109E1332E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.OnTick_5D118C384AE61F1C80292E8109E1332E
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Soul_C::OnTick_5D118C384AE61F1C80292E8109E1332E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "OnTick_5D118C384AE61F1C80292E8109E1332E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Soul.GA_Summon_Soul_C.EventReceived_18B59F5945020DB23C42FD8843E547D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Summon_Soul_C::EventReceived_18B59F5945020DB23C42FD8843E547D0(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Soul_C", "EventReceived_18B59F5945020DB23C42FD8843E547D0");

	Params::GA_Summon_Soul_C_EventReceived_18B59F5945020DB23C42FD8843E547D0 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}
