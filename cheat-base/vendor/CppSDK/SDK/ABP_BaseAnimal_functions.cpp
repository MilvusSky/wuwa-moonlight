#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BaseAnimal

#include "Basic.hpp"

#include "ABP_BaseAnimal_classes.hpp"
#include "ABP_BaseAnimal_parameters.hpp"


namespace SDK
{

// Function ABP_BaseAnimal.ABP_BaseAnimal_C.ExecuteUbergraph_ABP_BaseAnimal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BaseAnimal_C::ExecuteUbergraph_ABP_BaseAnimal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "ExecuteUbergraph_ABP_BaseAnimal");

	Params::ABP_BaseAnimal_C_ExecuteUbergraph_ABP_BaseAnimal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.SystemUiEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::SystemUiEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "SystemUiEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.SystemUiStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::SystemUiStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "SystemUiStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.FeedStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UABP_BaseAnimal_C::FeedStart(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "FeedStart");

	Params::ABP_BaseAnimal_C_FeedStart Parms{};

	Parms.GameplayTag = std::move(GameplayTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.TakeOffStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::TakeOffStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "TakeOffStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.AlertStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::AlertStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "AlertStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.UnderAttackStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::UnderAttackStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "UnderAttackStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.IdleStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::IdleStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "IdleStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::InteractStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "InteractStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.NoneStateStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::NoneStateStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "NoneStateStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.StateMachineInitializationComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::StateMachineInitializationComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "StateMachineInitializationComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BaseAnimal_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "BlueprintUpdateAnimation");

	Params::ABP_BaseAnimal_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_BaseAnimal_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.AnimNotify_Animal_UnderAttackEnd
// (BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::AnimNotify_Animal_UnderAttackEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "AnimNotify_Animal_UnderAttackEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.AnimNotify_Animal_AlertEnd
// (BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::AnimNotify_Animal_AlertEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "AnimNotify_Animal_AlertEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.AnimNotify_Animal_InteractActionEnd
// (BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::AnimNotify_Animal_InteractActionEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "AnimNotify_Animal_InteractActionEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.AnimNotify_Animal_IdleActionEnd
// (BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::AnimNotify_Animal_IdleActionEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "AnimNotify_Animal_IdleActionEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_2F01251B4B4FE9EAA39B3D9247C31675
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_2F01251B4B4FE9EAA39B3D9247C31675()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_2F01251B4B4FE9EAA39B3D9247C31675");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_D33F159C49CF71493708D08A76E6E7CD
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_D33F159C49CF71493708D08A76E6E7CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_D33F159C49CF71493708D08A76E6E7CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_BDCAAEE64FE7F1405D8B77AE820B11F2
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_BDCAAEE64FE7F1405D8B77AE820B11F2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_BDCAAEE64FE7F1405D8B77AE820B11F2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_49F87C244E0713CE630B39AA9A563674
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_49F87C244E0713CE630B39AA9A563674()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_49F87C244E0713CE630B39AA9A563674");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B5FA9C6847AB27EDF1D286A59C39E411
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B5FA9C6847AB27EDF1D286A59C39E411()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B5FA9C6847AB27EDF1D286A59C39E411");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_DF17119740839C99CBDC5BB7A7ACF2FB
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_DF17119740839C99CBDC5BB7A7ACF2FB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_DF17119740839C99CBDC5BB7A7ACF2FB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_0FDD922B45E34D982F8F85B15BF4E09D
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_0FDD922B45E34D982F8F85B15BF4E09D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_0FDD922B45E34D982F8F85B15BF4E09D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B9970B3845ED2CF05C0CE2905CD1D9DA
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B9970B3845ED2CF05C0CE2905CD1D9DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B9970B3845ED2CF05C0CE2905CD1D9DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_8A402BC24A8BC234FA1647AE139FAFCA
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_8A402BC24A8BC234FA1647AE139FAFCA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_8A402BC24A8BC234FA1647AE139FAFCA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B7E4C2F643A351461514F3A4BB27FD57
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B7E4C2F643A351461514F3A4BB27FD57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_B7E4C2F643A351461514F3A4BB27FD57");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_C4B06AF44285B268E642C280316C25BE
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_C4B06AF44285B268E642C280316C25BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_C4B06AF44285B268E642C280316C25BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_274A99114D34CF70A381F6832E28301D
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_274A99114D34CF70A381F6832E28301D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_274A99114D34CF70A381F6832E28301D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_8D1F93424AA669264C48C4A3AD645001
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_8D1F93424AA669264C48C4A3AD645001()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_8D1F93424AA669264C48C4A3AD645001");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_9C995D5F413AB0D5EEC5B0B25BCA0B99
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_9C995D5F413AB0D5EEC5B0B25BCA0B99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_9C995D5F413AB0D5EEC5B0B25BCA0B99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1BFEF6B2423BB23F3A743FA37CFEFB6E
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1BFEF6B2423BB23F3A743FA37CFEFB6E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1BFEF6B2423BB23F3A743FA37CFEFB6E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1FA99C764B6E9143E9A2EBBC467023D2
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1FA99C764B6E9143E9A2EBBC467023D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1FA99C764B6E9143E9A2EBBC467023D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_7DF62BD6494255C57AF1CA838DF2F699
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_7DF62BD6494255C57AF1CA838DF2F699()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_7DF62BD6494255C57AF1CA838DF2F699");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_E492EC01485375CFE000B0A5E11A31F8
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_E492EC01485375CFE000B0A5E11A31F8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_E492EC01485375CFE000B0A5E11A31F8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_00AF891944077B505E5628A5880DB881
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_00AF891944077B505E5628A5880DB881()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_00AF891944077B505E5628A5880DB881");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_9E2813C546DB12830090D0B49CAFCF8A
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_9E2813C546DB12830090D0B49CAFCF8A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_9E2813C546DB12830090D0B49CAFCF8A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_437CDAF94B84EB0EA0350A81D62C1333
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_437CDAF94B84EB0EA0350A81D62C1333()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_437CDAF94B84EB0EA0350A81D62C1333");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_3C432C1A4EAC4B8EEC7FAA9810D7964C
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_3C432C1A4EAC4B8EEC7FAA9810D7964C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_3C432C1A4EAC4B8EEC7FAA9810D7964C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_3B0855934F908EBADF5C0E905BE5EBAD
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_3B0855934F908EBADF5C0E905BE5EBAD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_3B0855934F908EBADF5C0E905BE5EBAD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_28773EEC4DFEA3865FF9E284E7CE5F47
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_28773EEC4DFEA3865FF9E284E7CE5F47()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_28773EEC4DFEA3865FF9E284E7CE5F47");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_DBE786244F0BB91CD41D8289371D7030
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_DBE786244F0BB91CD41D8289371D7030()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_DBE786244F0BB91CD41D8289371D7030");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_764CCFAC4D41871FBC3DA79A1C2573AB
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_764CCFAC4D41871FBC3DA79A1C2573AB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_764CCFAC4D41871FBC3DA79A1C2573AB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_416429BC4584FF707D49B1BF83556BF2
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_416429BC4584FF707D49B1BF83556BF2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_416429BC4584FF707D49B1BF83556BF2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1769F6104A02243DD5C6589592A29465
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1769F6104A02243DD5C6589592A29465()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_1769F6104A02243DD5C6589592A29465");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_0A62643941C9F2534B1AF99C24980E2C
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_0A62643941C9F2534B1AF99C24980E2C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_0A62643941C9F2534B1AF99C24980E2C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.TakeOffEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::TakeOffEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "TakeOffEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_49945F8B4DD298D2ED4AE0B5BD3BFF51
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_49945F8B4DD298D2ED4AE0B5BD3BFF51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_49945F8B4DD298D2ED4AE0B5BD3BFF51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.AlertEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::AlertEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "AlertEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_AEAB655045E3052DFA6C2EB97F6BAEE4
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_AEAB655045E3052DFA6C2EB97F6BAEE4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_AEAB655045E3052DFA6C2EB97F6BAEE4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.UnderAttackEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::UnderAttackEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "UnderAttackEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_F2118EA4482961323A4284A5C757A6D4
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_F2118EA4482961323A4284A5C757A6D4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_F2118EA4482961323A4284A5C757A6D4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_D76347B84F84143110867F87A063BC9A
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_D76347B84F84143110867F87A063BC9A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_D76347B84F84143110867F87A063BC9A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_E971F2414D8A609D52454EBD86A29DDE
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_E971F2414D8A609D52454EBD86A29DDE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_E971F2414D8A609D52454EBD86A29DDE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_6708632043AE1764C2B1A2BC8487CAA2
// (BlueprintEvent)

void UABP_BaseAnimal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_6708632043AE1764C2B1A2BC8487CAA2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseAnimal_AnimGraphNode_TransitionResult_6708632043AE1764C2B1A2BC8487CAA2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.IdleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::IdleEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "IdleEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.InteractEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::InteractEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "InteractEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.NoneStateEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::NoneStateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "NoneStateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.���:h
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::____h__0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "���:h");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.OnIdleStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::OnIdleStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "OnIdleStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.����h
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::____h_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "����h");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.��y���h
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::__y___h_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "��y���h");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.OnInteractStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::OnInteractStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "OnInteractStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.��ƿ
// (Private, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "��ƿ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.OnAlertStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::OnAlertStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "OnAlertStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.OnTakeOffStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::OnTakeOffStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "OnTakeOffStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.OnUnderAttackStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::OnUnderAttackStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "OnUnderAttackStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.�\H�
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::_____H_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "�\H�");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.�����o
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::_____o()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "�����o");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.OnFeedStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UABP_BaseAnimal_C::OnFeedStart(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "OnFeedStart");

	Params::ABP_BaseAnimal_C_OnFeedStart Parms{};

	Parms.GameplayTag = std::move(GameplayTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.OnSystemUIStart
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_BaseAnimal_C::OnSystemUIStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "OnSystemUIStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_BaseAnimal_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "AnimGraph");

	Params::ABP_BaseAnimal_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.�@B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param___B_0                                            (Parm, OutParm, NoDestructor)

void UABP_BaseAnimal_C::__B_0(struct FPoseLink* Param___B_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "�@B");

	Params::ABP_BaseAnimal_C___B_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param___B_0 != nullptr)
		*Param___B_0 = std::move(Parms.Param___B_0);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        ___e                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        ___B_0                                                 (Parm, OutParm, NoDestructor)

void UABP_BaseAnimal_C::___B(const struct FPoseLink& ___e, struct FPoseLink* ___B_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "B");

	Params::ABP_BaseAnimal_C____B Parms{};

	Parms.___e = std::move(___e);

	UObject::ProcessEvent(Func, &Parms);

	if (___B_0 != nullptr)
		*___B_0 = std::move(Parms.___B_0);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.�B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        ____e                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        __B_0                                                  (Parm, OutParm, NoDestructor)

void UABP_BaseAnimal_C::__B(const struct FPoseLink& ____e, struct FPoseLink* __B_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "�B");

	Params::ABP_BaseAnimal_C___B Parms{};

	Parms.____e = std::move(____e);

	UObject::ProcessEvent(Func, &Parms);

	if (__B_0 != nullptr)
		*__B_0 = std::move(Parms.__B_0);
}


// Function ABP_BaseAnimal.ABP_BaseAnimal_C.GetCurrentActionTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ActionTime_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BaseAnimal_C::GetCurrentActionTime(float* ActionTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseAnimal_C", "GetCurrentActionTime");

	Params::ABP_BaseAnimal_C_GetCurrentActionTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActionTime_0 != nullptr)
		*ActionTime_0 = Parms.ActionTime_0;
}

}

