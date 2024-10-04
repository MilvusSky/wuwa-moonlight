#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_ManipulateThrow

#include "Basic.hpp"

#include "GA_Role_ManipulateThrow_classes.hpp"
#include "GA_Role_ManipulateThrow_parameters.hpp"


namespace SDK
{

// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.ExecuteUbergraph_GA_Role_ManipulateThrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_ManipulateThrow_C::ExecuteUbergraph_GA_Role_ManipulateThrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "ExecuteUbergraph_GA_Role_ManipulateThrow");

	Params::GA_Role_ManipulateThrow_C_ExecuteUbergraph_GA_Role_ManipulateThrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Role_ManipulateThrow_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "K2_OnEndAbility");

	Params::GA_Role_ManipulateThrow_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Role_ManipulateThrow_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.OnFinish_AF1BF1C04B887958A892F295ED5B1B60
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_ManipulateThrow_C::OnFinish_AF1BF1C04B887958A892F295ED5B1B60()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "OnFinish_AF1BF1C04B887958A892F295ED5B1B60");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.OnCompleted_5D118C384AE61F1C80292E81ECC61D57
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_ManipulateThrow_C::OnCompleted_5D118C384AE61F1C80292E81ECC61D57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "OnCompleted_5D118C384AE61F1C80292E81ECC61D57");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.OnBlendOut_5D118C384AE61F1C80292E81ECC61D57
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_ManipulateThrow_C::OnBlendOut_5D118C384AE61F1C80292E81ECC61D57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "OnBlendOut_5D118C384AE61F1C80292E81ECC61D57");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.OnInterrupted_5D118C384AE61F1C80292E81ECC61D57
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_ManipulateThrow_C::OnInterrupted_5D118C384AE61F1C80292E81ECC61D57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "OnInterrupted_5D118C384AE61F1C80292E81ECC61D57");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.OnCancelled_5D118C384AE61F1C80292E81ECC61D57
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_ManipulateThrow_C::OnCancelled_5D118C384AE61F1C80292E81ECC61D57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "OnCancelled_5D118C384AE61F1C80292E81ECC61D57");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C.OnTick_5D118C384AE61F1C80292E81ECC61D57
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_ManipulateThrow_C::OnTick_5D118C384AE61F1C80292E81ECC61D57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateThrow_C", "OnTick_5D118C384AE61F1C80292E81ECC61D57");

	UObject::ProcessEvent(Func, nullptr);
}

}

