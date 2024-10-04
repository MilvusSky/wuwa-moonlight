#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1QunJingMd00001_RogueThrowStone

#include "Basic.hpp"

#include "GA_ME1QunJingMd00001_RogueThrowStone_classes.hpp"
#include "GA_ME1QunJingMd00001_RogueThrowStone_parameters.hpp"


namespace SDK
{

// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.ExecuteUbergraph_GA_ME1QunJingMd00001_RogueThrowStone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::ExecuteUbergraph_GA_ME1QunJingMd00001_RogueThrowStone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "ExecuteUbergraph_GA_ME1QunJingMd00001_RogueThrowStone");

	Params::GA_ME1QunJingMd00001_RogueThrowStone_C_ExecuteUbergraph_GA_ME1QunJingMd00001_RogueThrowStone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "K2_OnEndAbility");

	Params::GA_ME1QunJingMd00001_RogueThrowStone_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.EventReceived_C507A50648ECD33EF009D3912978967F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::EventReceived_C507A50648ECD33EF009D3912978967F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "EventReceived_C507A50648ECD33EF009D3912978967F");

	Params::GA_ME1QunJingMd00001_RogueThrowStone_C_EventReceived_C507A50648ECD33EF009D3912978967F Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnCompleted_5D118C384AE61F1C80292E815A6E0150
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnCompleted_5D118C384AE61F1C80292E815A6E0150()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnCompleted_5D118C384AE61F1C80292E815A6E0150");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnBlendOut_5D118C384AE61F1C80292E815A6E0150
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnBlendOut_5D118C384AE61F1C80292E815A6E0150()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnBlendOut_5D118C384AE61F1C80292E815A6E0150");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnInterrupted_5D118C384AE61F1C80292E815A6E0150
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnInterrupted_5D118C384AE61F1C80292E815A6E0150()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnInterrupted_5D118C384AE61F1C80292E815A6E0150");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnCancelled_5D118C384AE61F1C80292E815A6E0150
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnCancelled_5D118C384AE61F1C80292E815A6E0150()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnCancelled_5D118C384AE61F1C80292E815A6E0150");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnTick_5D118C384AE61F1C80292E815A6E0150
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnTick_5D118C384AE61F1C80292E815A6E0150()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnTick_5D118C384AE61F1C80292E815A6E0150");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.EventReceived_07BF64D14A21EAAE9C8DCD91DA926A4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::EventReceived_07BF64D14A21EAAE9C8DCD91DA926A4B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "EventReceived_07BF64D14A21EAAE9C8DCD91DA926A4B");

	Params::GA_ME1QunJingMd00001_RogueThrowStone_C_EventReceived_07BF64D14A21EAAE9C8DCD91DA926A4B Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnCompleted_5D118C384AE61F1C80292E815B44B8CF
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnCompleted_5D118C384AE61F1C80292E815B44B8CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnCompleted_5D118C384AE61F1C80292E815B44B8CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnBlendOut_5D118C384AE61F1C80292E815B44B8CF
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnBlendOut_5D118C384AE61F1C80292E815B44B8CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnBlendOut_5D118C384AE61F1C80292E815B44B8CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnInterrupted_5D118C384AE61F1C80292E815B44B8CF
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnInterrupted_5D118C384AE61F1C80292E815B44B8CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnInterrupted_5D118C384AE61F1C80292E815B44B8CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnCancelled_5D118C384AE61F1C80292E815B44B8CF
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnCancelled_5D118C384AE61F1C80292E815B44B8CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnCancelled_5D118C384AE61F1C80292E815B44B8CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.OnTick_5D118C384AE61F1C80292E815B44B8CF
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::OnTick_5D118C384AE61F1C80292E815B44B8CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "OnTick_5D118C384AE61F1C80292E815B44B8CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_RogueThrowStone.GA_ME1QunJingMd00001_RogueThrowStone_C.&X(
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               Param______0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    __0_a                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ME1QunJingMd00001_RogueThrowStone_C::_X_(class ATsBaseCharacter_C** Param______0, bool* __0_a)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_RogueThrowStone_C", "&X(");

	Params::GA_ME1QunJingMd00001_RogueThrowStone_C__X_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param______0 != nullptr)
		*Param______0 = Parms.Param______0;

	if (__0_a != nullptr)
		*__0_a = Parms.__0_a;
}

}

