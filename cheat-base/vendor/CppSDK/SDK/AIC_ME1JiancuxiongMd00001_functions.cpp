#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_ME1JiancuxiongMd00001

#include "Basic.hpp"

#include "AIC_ME1JiancuxiongMd00001_classes.hpp"
#include "AIC_ME1JiancuxiongMd00001_parameters.hpp"


namespace SDK
{

// Function AIC_ME1JiancuxiongMd00001.AIC_ME1JiancuxiongMd00001_C.OnStart
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_ME1JiancuxiongMd00001_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_ME1JiancuxiongMd00001_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_ME1JiancuxiongMd00001.AIC_ME1JiancuxiongMd00001_C.´
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_ME1JiancuxiongMd00001_C::__(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_ME1JiancuxiongMd00001_C", "´");

	Params::AIC_ME1JiancuxiongMd00001_C___ Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_ME1JiancuxiongMd00001.AIC_ME1JiancuxiongMd00001_C.����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               _r                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     _MTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ATsBaseCharacter_C*               ___                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_ME1JiancuxiongMd00001_C::Func______1(class ATsBaseCharacter_C* _r, const struct FGameplayTag& _MTag, class ATsBaseCharacter_C* ___)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_ME1JiancuxiongMd00001_C", "����");

	Params::AIC_ME1JiancuxiongMd00001_C_Func______1 Parms{};

	Parms._r = _r;
	Parms._MTag = std::move(_MTag);
	Parms.___ = ___;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_ME1JiancuxiongMd00001.AIC_ME1JiancuxiongMd00001_C.S���V���_��_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _V__ID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHitInformation                 __pn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void AAIC_ME1JiancuxiongMd00001_C::S___V_______0(int32 _V__ID, const struct FSHitInformation& __pn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_ME1JiancuxiongMd00001_C", "S���V���_��_0");

	Params::AIC_ME1JiancuxiongMd00001_C_S___V_______0 Parms{};

	Parms._V__ID = _V__ID;
	Parms.__pn = std::move(__pn);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_ME1JiancuxiongMd00001.AIC_ME1JiancuxiongMd00001_C.ExecuteUbergraph_AIC_ME1JiancuxiongMd00001
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_ME1JiancuxiongMd00001_C::ExecuteUbergraph_AIC_ME1JiancuxiongMd00001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_ME1JiancuxiongMd00001_C", "ExecuteUbergraph_AIC_ME1JiancuxiongMd00001");

	Params::AIC_ME1JiancuxiongMd00001_C_ExecuteUbergraph_AIC_ME1JiancuxiongMd00001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

