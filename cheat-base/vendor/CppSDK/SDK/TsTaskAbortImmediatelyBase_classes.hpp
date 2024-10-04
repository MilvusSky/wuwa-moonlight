#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskAbortImmediatelyBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskAbortImmediatelyBase.TsTaskAbortImmediatelyBase_C
// 0x0008 (0x00B8 - 0x00B0)
class UTsTaskAbortImmediatelyBase_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TsTaskAbortImmediatelyBase(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskAbortImmediatelyBase_C">();
	}
	static class UTsTaskAbortImmediatelyBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskAbortImmediatelyBase_C>();
	}
};
static_assert(alignof(UTsTaskAbortImmediatelyBase_C) == 0x000008, "Wrong alignment on UTsTaskAbortImmediatelyBase_C");
static_assert(sizeof(UTsTaskAbortImmediatelyBase_C) == 0x0000B8, "Wrong size on UTsTaskAbortImmediatelyBase_C");
static_assert(offsetof(UTsTaskAbortImmediatelyBase_C, UberGraphFrame) == 0x0000B0, "Member 'UTsTaskAbortImmediatelyBase_C::UberGraphFrame' has a wrong offset!");

}

