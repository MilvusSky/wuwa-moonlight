#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ManagerBase

#include "Basic.hpp"

#include "BP_ManagerBase_classes.hpp"
#include "BP_ManagerBase_parameters.hpp"


namespace SDK
{

// Function BP_ManagerBase.BP_ManagerBase_C.�
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MainGameInstance_C*           Eight____0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ManagerBase_C::___(class UBP_MainGameInstance_C* Eight____0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ManagerBase_C", "�");

	Params::BP_ManagerBase_C____ Parms{};

	Parms.Eight____0 = Eight____0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ManagerBase.BP_ManagerBase_C.OnLeaveWorld
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ManagerBase_C::OnLeaveWorld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ManagerBase_C", "OnLeaveWorld");

	UObject::ProcessEvent(Func, nullptr);
}

}

