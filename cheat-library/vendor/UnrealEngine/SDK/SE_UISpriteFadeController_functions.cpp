#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_UISpriteFadeController

#include "Basic.hpp"

#include "SE_UISpriteFadeController_classes.hpp"
#include "SE_UISpriteFadeController_parameters.hpp"


namespace SDK
{

// Function SE_UISpriteFadeController.SE_UISpriteFadeController_C.ExecuteUbergraph_SE_UISpriteFadeController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteFadeController_C::ExecuteUbergraph_SE_UISpriteFadeController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteFadeController_C", "ExecuteUbergraph_SE_UISpriteFadeController");

	Params::SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteFadeController.SE_UISpriteFadeController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteFadeController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteFadeController_C", "ReceiveEndPlay");

	Params::SE_UISpriteFadeController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteFadeController.SE_UISpriteFadeController_C.ApplyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USE_UISpriteFadeController_C::ApplyVisibility(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteFadeController_C", "ApplyVisibility");

	Params::SE_UISpriteFadeController_C_ApplyVisibility Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}

}
