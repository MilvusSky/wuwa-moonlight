#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskPatrol

#include "Basic.hpp"

#include "TsTaskAbortImmediatelyBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskPatrol.TsTaskPatrol_C
// 0x0018 (0x00D0 - 0x00B8)
class UTsTaskPatrol_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskPatrol_C;                     // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         MoveState;                                         // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MoveOnePath;                                       // 0x00C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseActorForward;                                   // 0x00C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OpenDebugNode;                                     // 0x00C6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseLastMoveIndex;                                  // 0x00C7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseSimpleMove;                                     // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TsTaskPatrol(int32 EntryPoint);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskPatrol_C">();
	}
	static class UTsTaskPatrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskPatrol_C>();
	}
};
static_assert(alignof(UTsTaskPatrol_C) == 0x000008, "Wrong alignment on UTsTaskPatrol_C");
static_assert(sizeof(UTsTaskPatrol_C) == 0x0000D0, "Wrong size on UTsTaskPatrol_C");
static_assert(offsetof(UTsTaskPatrol_C, UberGraphFrame_TsTaskPatrol_C) == 0x0000B8, "Member 'UTsTaskPatrol_C::UberGraphFrame_TsTaskPatrol_C' has a wrong offset!");
static_assert(offsetof(UTsTaskPatrol_C, MoveState) == 0x0000C0, "Member 'UTsTaskPatrol_C::MoveState' has a wrong offset!");
static_assert(offsetof(UTsTaskPatrol_C, MoveOnePath) == 0x0000C4, "Member 'UTsTaskPatrol_C::MoveOnePath' has a wrong offset!");
static_assert(offsetof(UTsTaskPatrol_C, UseActorForward) == 0x0000C5, "Member 'UTsTaskPatrol_C::UseActorForward' has a wrong offset!");
static_assert(offsetof(UTsTaskPatrol_C, OpenDebugNode) == 0x0000C6, "Member 'UTsTaskPatrol_C::OpenDebugNode' has a wrong offset!");
static_assert(offsetof(UTsTaskPatrol_C, UseLastMoveIndex) == 0x0000C7, "Member 'UTsTaskPatrol_C::UseLastMoveIndex' has a wrong offset!");
static_assert(offsetof(UTsTaskPatrol_C, UseSimpleMove) == 0x0000C8, "Member 'UTsTaskPatrol_C::UseSimpleMove' has a wrong offset!");

}

