#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAxisHandle

#include "Basic.hpp"

#include "TsAxisHandle_classes.hpp"
#include "TsAxisHandle_parameters.hpp"


namespace SDK
{

// Function TsAxisHandle.TsAxisHandle_C.OnInputAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UTsAxisHandle_C::OnInputAxis(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsAxisHandle_C", "OnInputAxis");

	Params::TsAxisHandle_C_OnInputAxis Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

