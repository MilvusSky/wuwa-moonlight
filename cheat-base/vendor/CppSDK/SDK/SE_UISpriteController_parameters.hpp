#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_UISpriteController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "E_SE_PlayState_structs.hpp"
#include "SMaterialControllerColorParameter_structs.hpp"
#include "SMaterialControllerFloatParameter_structs.hpp"


namespace SDK::Params
{

// Function SE_UISpriteController.SE_UISpriteController_C.ExecuteUbergraph_SE_UISpriteController
// 0x0050 (0x0050 - 0x0000)
struct SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_time_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_time_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUISpriteActor*                         K2Node_DynamicCast_AsUISprite_Actor;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_time;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetCustomUIMaterial_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_alpha;                                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController) == 0x000008, "Wrong alignment on SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController");
static_assert(sizeof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController) == 0x000050, "Wrong size on SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, EntryPoint) == 0x000000, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::EntryPoint' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_Event_EndPlayReason) == 0x000004, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_Event_time_2) == 0x00000C, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_Event_time_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_Event_time_1) == 0x000010, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_Event_time_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_DynamicCast_AsUISprite_Actor) == 0x000020, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_DynamicCast_AsUISprite_Actor' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_Event_time) == 0x00002C, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_Event_time' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, CallFunc_GetCustomUIMaterial_ReturnValue) == 0x000030, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::CallFunc_GetCustomUIMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000040, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController, K2Node_Event_alpha) == 0x00004C, "Member 'SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController::K2Node_Event_alpha' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct SE_UISpriteController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on SE_UISpriteController_C_ReceiveEndPlay");
static_assert(sizeof(SE_UISpriteController_C_ReceiveEndPlay) == 0x000001, "Wrong size on SE_UISpriteController_C_ReceiveEndPlay");
static_assert(offsetof(SE_UISpriteController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'SE_UISpriteController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.ApplyAlpha
// 0x0004 (0x0004 - 0x0000)
struct SE_UISpriteController_C_ApplyAlpha final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_ApplyAlpha) == 0x000004, "Wrong alignment on SE_UISpriteController_C_ApplyAlpha");
static_assert(sizeof(SE_UISpriteController_C_ApplyAlpha) == 0x000004, "Wrong size on SE_UISpriteController_C_ApplyAlpha");
static_assert(offsetof(SE_UISpriteController_C_ApplyAlpha, Alpha) == 0x000000, "Member 'SE_UISpriteController_C_ApplyAlpha::Alpha' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.Loop
// 0x0004 (0x0004 - 0x0000)
struct SE_UISpriteController_C_Loop final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_Loop) == 0x000004, "Wrong alignment on SE_UISpriteController_C_Loop");
static_assert(sizeof(SE_UISpriteController_C_Loop) == 0x000004, "Wrong size on SE_UISpriteController_C_Loop");
static_assert(offsetof(SE_UISpriteController_C_Loop, Time) == 0x000000, "Member 'SE_UISpriteController_C_Loop::Time' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.End
// 0x0004 (0x0004 - 0x0000)
struct SE_UISpriteController_C_End final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_End) == 0x000004, "Wrong alignment on SE_UISpriteController_C_End");
static_assert(sizeof(SE_UISpriteController_C_End) == 0x000004, "Wrong size on SE_UISpriteController_C_End");
static_assert(offsetof(SE_UISpriteController_C_End, Time) == 0x000000, "Member 'SE_UISpriteController_C_End::Time' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.Start
// 0x0004 (0x0004 - 0x0000)
struct SE_UISpriteController_C_Start final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_Start) == 0x000004, "Wrong alignment on SE_UISpriteController_C_Start");
static_assert(sizeof(SE_UISpriteController_C_Start) == 0x000004, "Wrong size on SE_UISpriteController_C_Start");
static_assert(offsetof(SE_UISpriteController_C_Start, Time) == 0x000000, "Member 'SE_UISpriteController_C_Start::Time' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct SE_UISpriteController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_ReceiveTick) == 0x000004, "Wrong alignment on SE_UISpriteController_C_ReceiveTick");
static_assert(sizeof(SE_UISpriteController_C_ReceiveTick) == 0x000004, "Wrong size on SE_UISpriteController_C_ReceiveTick");
static_assert(offsetof(SE_UISpriteController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'SE_UISpriteController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.UpdateComponent
// 0x08F8 (0x08F8 - 0x0000)
struct SE_UISpriteController_C_UpdateComponent final
{
public:
	E_SE_PlayState                                State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TempV;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempF;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_1;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_1;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_2;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_2;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_3;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_3;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E[0x2];                                       // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73[0x5];                                       // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSMaterialControllerColorParameter     CallFunc_Array_Get_Item_2;                         // 0x0078(0x0670)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x06E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x06EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED[0x3];                                      // 0x06ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetValue_LinearColor_ReturnValue;         // 0x06F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetValue_LinearColor_ReturnValue_1;       // 0x0700(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetValue_LinearColor_ReturnValue_2;       // 0x0710(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSMaterialControllerFloatParameter     CallFunc_Array_Get_Item_3;                         // 0x0720(0x01C0)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x08E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x08E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E5[0x3];                                      // 0x08E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValue_Float_ReturnValue;               // 0x08E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_Float_ReturnValue_1;             // 0x08EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_Float_ReturnValue_2;             // 0x08F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_UpdateComponent) == 0x000008, "Wrong alignment on SE_UISpriteController_C_UpdateComponent");
static_assert(sizeof(SE_UISpriteController_C_UpdateComponent) == 0x0008F8, "Wrong size on SE_UISpriteController_C_UpdateComponent");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, State) == 0x000000, "Member 'SE_UISpriteController_C_UpdateComponent::State' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, Time) == 0x000004, "Member 'SE_UISpriteController_C_UpdateComponent::Time' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, TempV) == 0x000008, "Member 'SE_UISpriteController_C_UpdateComponent::TempV' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, TempF) == 0x000018, "Member 'SE_UISpriteController_C_UpdateComponent::TempF' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Array_Index_Variable) == 0x00001C, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Loop_Counter_Variable) == 0x000020, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Array_Index_Variable_1) == 0x000028, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Loop_Counter_Variable_1) == 0x00002C, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Array_Index_Variable_2) == 0x000034, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Loop_Counter_Variable_2) == 0x000038, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Add_IntInt_ReturnValue_2) == 0x00003C, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Array_Index_Variable_3) == 0x000040, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, ___int_Loop_Counter_Variable_3) == 0x000044, "Member 'SE_UISpriteController_C_UpdateComponent::___int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Add_IntInt_ReturnValue_3) == 0x000048, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Get_Item) == 0x000050, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Less_IntInt_ReturnValue) == 0x00005D, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'SE_UISpriteController_C_UpdateComponent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Less_IntInt_ReturnValue_1) == 0x000070, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, K2Node_SwitchEnum_CmpSuccess_1) == 0x000071, "Member 'SE_UISpriteController_C_UpdateComponent::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_IsValid_ReturnValue_2) == 0x000072, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Get_Item_2) == 0x000078, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Length_ReturnValue_2) == 0x0006E8, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Less_IntInt_ReturnValue_2) == 0x0006EC, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_GetValue_LinearColor_ReturnValue) == 0x0006F0, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_GetValue_LinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_GetValue_LinearColor_ReturnValue_1) == 0x000700, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_GetValue_LinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_GetValue_LinearColor_ReturnValue_2) == 0x000710, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_GetValue_LinearColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Get_Item_3) == 0x000720, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Array_Length_ReturnValue_3) == 0x0008E0, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_Less_IntInt_ReturnValue_3) == 0x0008E4, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_GetValue_Float_ReturnValue) == 0x0008E8, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_GetValue_Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_GetValue_Float_ReturnValue_1) == 0x0008EC, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_GetValue_Float_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponent, CallFunc_GetValue_Float_ReturnValue_2) == 0x0008F0, "Member 'SE_UISpriteController_C_UpdateComponent::CallFunc_GetValue_Float_ReturnValue_2' has a wrong offset!");

// Function SE_UISpriteController.SE_UISpriteController_C.UpdateComponentAlpha
// 0x0038 (0x0038 - 0x0000)
struct SE_UISpriteController_C_UpdateComponentAlpha final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TempV;                                             // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempF;                                             // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteController_C_UpdateComponentAlpha) == 0x000008, "Wrong alignment on SE_UISpriteController_C_UpdateComponentAlpha");
static_assert(sizeof(SE_UISpriteController_C_UpdateComponentAlpha) == 0x000038, "Wrong size on SE_UISpriteController_C_UpdateComponentAlpha");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, Alpha) == 0x000000, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::Alpha' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, TempV) == 0x000004, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::TempV' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, TempF) == 0x000014, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::TempF' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, ___int_Array_Index_Variable) == 0x000018, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, ___int_Loop_Counter_Variable) == 0x00001C, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, CallFunc_Array_Get_Item) == 0x000020, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_UISpriteController_C_UpdateComponentAlpha, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'SE_UISpriteController_C_UpdateComponentAlpha::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

