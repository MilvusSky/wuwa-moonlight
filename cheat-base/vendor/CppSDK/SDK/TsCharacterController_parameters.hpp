#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsCharacterController

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsCharacterController.TsCharacterController_C.ExecuteUbergraph_TsCharacterController
// 0x0028 (0x0028 - 0x0000)
struct TsCharacterController_C_ExecuteUbergraph_TsCharacterController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_UnpossessedPawn;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime_1;                          // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bGamePaused_1;                        // 0x0014(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bGamePaused;                          // 0x001C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController) == 0x000008, "Wrong alignment on TsCharacterController_C_ExecuteUbergraph_TsCharacterController");
static_assert(sizeof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController) == 0x000028, "Wrong size on TsCharacterController_C_ExecuteUbergraph_TsCharacterController");
static_assert(offsetof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController, EntryPoint) == 0x000000, "Member 'TsCharacterController_C_ExecuteUbergraph_TsCharacterController::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController, K2Node_Event_UnpossessedPawn) == 0x000008, "Member 'TsCharacterController_C_ExecuteUbergraph_TsCharacterController::K2Node_Event_UnpossessedPawn' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController, K2Node_Event_DeltaTime_1) == 0x000010, "Member 'TsCharacterController_C_ExecuteUbergraph_TsCharacterController::K2Node_Event_DeltaTime_1' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController, K2Node_Event_bGamePaused_1) == 0x000014, "Member 'TsCharacterController_C_ExecuteUbergraph_TsCharacterController::K2Node_Event_bGamePaused_1' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController, K2Node_Event_DeltaTime) == 0x000018, "Member 'TsCharacterController_C_ExecuteUbergraph_TsCharacterController::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController, K2Node_Event_bGamePaused) == 0x00001C, "Member 'TsCharacterController_C_ExecuteUbergraph_TsCharacterController::K2Node_Event_bGamePaused' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ExecuteUbergraph_TsCharacterController, K2Node_Event_PossessedPawn) == 0x000020, "Member 'TsCharacterController_C_ExecuteUbergraph_TsCharacterController::K2Node_Event_PossessedPawn' has a wrong offset!");

// Function TsCharacterController.TsCharacterController_C.ReceiveUnPossess
// 0x0008 (0x0008 - 0x0000)
struct TsCharacterController_C_ReceiveUnPossess final
{
public:
	class APawn*                                  UnpossessedPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsCharacterController_C_ReceiveUnPossess) == 0x000008, "Wrong alignment on TsCharacterController_C_ReceiveUnPossess");
static_assert(sizeof(TsCharacterController_C_ReceiveUnPossess) == 0x000008, "Wrong size on TsCharacterController_C_ReceiveUnPossess");
static_assert(offsetof(TsCharacterController_C_ReceiveUnPossess, UnpossessedPawn) == 0x000000, "Member 'TsCharacterController_C_ReceiveUnPossess::UnpossessedPawn' has a wrong offset!");

// Function TsCharacterController.TsCharacterController_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct TsCharacterController_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsCharacterController_C_ReceivePossess) == 0x000008, "Wrong alignment on TsCharacterController_C_ReceivePossess");
static_assert(sizeof(TsCharacterController_C_ReceivePossess) == 0x000008, "Wrong size on TsCharacterController_C_ReceivePossess");
static_assert(offsetof(TsCharacterController_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'TsCharacterController_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function TsCharacterController.TsCharacterController_C.ReceivePreProcessInput
// 0x0008 (0x0008 - 0x0000)
struct TsCharacterController_C_ReceivePreProcessInput final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGamePaused;                                       // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsCharacterController_C_ReceivePreProcessInput) == 0x000004, "Wrong alignment on TsCharacterController_C_ReceivePreProcessInput");
static_assert(sizeof(TsCharacterController_C_ReceivePreProcessInput) == 0x000008, "Wrong size on TsCharacterController_C_ReceivePreProcessInput");
static_assert(offsetof(TsCharacterController_C_ReceivePreProcessInput, DeltaTime) == 0x000000, "Member 'TsCharacterController_C_ReceivePreProcessInput::DeltaTime' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ReceivePreProcessInput, bGamePaused) == 0x000004, "Member 'TsCharacterController_C_ReceivePreProcessInput::bGamePaused' has a wrong offset!");

// Function TsCharacterController.TsCharacterController_C.ReceivePostProcessInput
// 0x0008 (0x0008 - 0x0000)
struct TsCharacterController_C_ReceivePostProcessInput final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGamePaused;                                       // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsCharacterController_C_ReceivePostProcessInput) == 0x000004, "Wrong alignment on TsCharacterController_C_ReceivePostProcessInput");
static_assert(sizeof(TsCharacterController_C_ReceivePostProcessInput) == 0x000008, "Wrong size on TsCharacterController_C_ReceivePostProcessInput");
static_assert(offsetof(TsCharacterController_C_ReceivePostProcessInput, DeltaTime) == 0x000000, "Member 'TsCharacterController_C_ReceivePostProcessInput::DeltaTime' has a wrong offset!");
static_assert(offsetof(TsCharacterController_C_ReceivePostProcessInput, bGamePaused) == 0x000004, "Member 'TsCharacterController_C_ReceivePostProcessInput::bGamePaused' has a wrong offset!");

}

