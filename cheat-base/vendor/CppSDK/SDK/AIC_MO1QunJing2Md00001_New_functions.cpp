#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1QunJing2Md00001_New

#include "Basic.hpp"

#include "AIC_MO1QunJing2Md00001_New_classes.hpp"
#include "AIC_MO1QunJing2Md00001_New_parameters.hpp"


namespace SDK
{

// Function AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C.ExecuteUbergraph_AIC_MO1QunJing2Md00001_New
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_MO1QunJing2Md00001_New_C::ExecuteUbergraph_AIC_MO1QunJing2Md00001_New(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1QunJing2Md00001_New_C", "ExecuteUbergraph_AIC_MO1QunJing2Md00001_New");

	Params::AIC_MO1QunJing2Md00001_New_C_ExecuteUbergraph_AIC_MO1QunJing2Md00001_New Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C.�
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_MO1QunJing2Md00001_New_C::Func____0(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1QunJing2Md00001_New_C", "�");

	Params::AIC_MO1QunJing2Md00001_New_C_Func____0 Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C.OnStart
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_MO1QunJing2Md00001_New_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1QunJing2Md00001_New_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_MO1QunJing2Md00001_New_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1QunJing2Md00001_New_C", "ReceiveTick");

	Params::AIC_MO1QunJing2Md00001_New_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_MO1QunJing2Md00001_New_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1QunJing2Md00001_New_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_MO1QunJing2Md00001_New.AIC_MO1QunJing2Md00001_New_C.�b�p
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          _r                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         ___                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         ____0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param____0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          _r__                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         _____                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         ______0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param______0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_MO1QunJing2Md00001_New_C::___b_p(class UObject* _r, ECharacterState ___, ECharacterState ____0, bool Param____0, class UObject** _r__, ECharacterState* _____, ECharacterState* ______0, bool* Param______0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1QunJing2Md00001_New_C", "�b�p");

	Params::AIC_MO1QunJing2Md00001_New_C____b_p Parms{};

	Parms._r = _r;
	Parms.___ = ___;
	Parms.____0 = ____0;
	Parms.Param____0 = Param____0;

	UObject::ProcessEvent(Func, &Parms);

	if (_r__ != nullptr)
		*_r__ = Parms._r__;

	if (_____ != nullptr)
		*_____ = Parms._____;

	if (______0 != nullptr)
		*______0 = Parms.______0;

	if (Param______0 != nullptr)
		*Param______0 = Parms.Param______0;
}

}

