#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsLguiEventSystemActor

#include "Basic.hpp"

#include "TsLguiEventSystemActor_classes.hpp"
#include "TsLguiEventSystemActor_parameters.hpp"


namespace SDK
{

// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.InputTrigger
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TriggerPress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// EMouseButtonType                        MouseButtonType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ATsLguiEventSystemActor_C::InputTrigger(bool TriggerPress, EMouseButtonType MouseButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "InputTrigger");

	Params::TsLguiEventSystemActor_C_InputTrigger Parms{};

	Parms.TriggerPress = TriggerPress;
	Parms.MouseButtonType = MouseButtonType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.InputNavigation
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELGUINavigationDirection                Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    PressOrRelease                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                                    ForceNavigation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

void ATsLguiEventSystemActor_C::InputNavigation(ELGUINavigationDirection Direction, bool PressOrRelease, bool ForceNavigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "InputNavigation");

	Params::TsLguiEventSystemActor_C_InputNavigation Parms{};

	Parms.Direction = Direction;
	Parms.PressOrRelease = PressOrRelease;
	Parms.ForceNavigation = ForceNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.InputTriggerForNavigation
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TriggerPress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

void ATsLguiEventSystemActor_C::InputTriggerForNavigation(bool TriggerPress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "InputTriggerForNavigation");

	Params::TsLguiEventSystemActor_C_InputTriggerForNavigation Parms{};

	Parms.TriggerPress = TriggerPress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.InputScroll
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsLguiEventSystemActor_C::InputScroll(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "InputScroll");

	Params::TsLguiEventSystemActor_C_InputScroll Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.InputTouchTrigger
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TouchPress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                                   TouchId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TouchPointPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ATsLguiEventSystemActor_C::InputTouchTrigger(bool TouchPress, int32 TouchId, const struct FVector& TouchPointPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "InputTouchTrigger");

	Params::TsLguiEventSystemActor_C_InputTouchTrigger Parms{};

	Parms.TouchPress = TouchPress;
	Parms.TouchId = TouchId;
	Parms.TouchPointPosition = std::move(TouchPointPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.InputTouchMove
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TouchId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TouchPointPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ATsLguiEventSystemActor_C::InputTouchMove(int32 TouchId, const struct FVector& TouchPointPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "InputTouchMove");

	Params::TsLguiEventSystemActor_C_InputTouchMove Parms{};

	Parms.TouchId = TouchId;
	Parms.TouchPointPosition = std::move(TouchPointPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.GetNowHitComponent
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIItem*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

class UUIItem* ATsLguiEventSystemActor_C::GetNowHitComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "GetNowHitComponent");

	Params::TsLguiEventSystemActor_C_GetNowHitComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.GetPointerEventData
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PointerId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    CreateIfNotExist                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULGUIPointerEventData*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

class ULGUIPointerEventData* ATsLguiEventSystemActor_C::GetPointerEventData(float PointerId, bool CreateIfNotExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "GetPointerEventData");

	Params::TsLguiEventSystemActor_C_GetPointerEventData Parms{};

	Parms.PointerId = PointerId;
	Parms.CreateIfNotExist = CreateIfNotExist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsLguiEventSystemActor.TsLguiEventSystemActor_C.IsPointerEventDataLineTrace
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULGUIPointerEventData*            PointerEventData                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper)

bool ATsLguiEventSystemActor_C::IsPointerEventDataLineTrace(class ULGUIPointerEventData* PointerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsLguiEventSystemActor_C", "IsPointerEventDataLineTrace");

	Params::TsLguiEventSystemActor_C_IsPointerEventDataLineTrace Parms{};

	Parms.PointerEventData = PointerEventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

