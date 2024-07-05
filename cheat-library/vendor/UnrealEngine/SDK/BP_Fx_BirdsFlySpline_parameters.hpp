#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fx_BirdsFlySpline

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C.ExecuteUbergraph_BP_Fx_BirdsFlySpline
// 0x0010 (0x0010 - 0x0000)
struct BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_StopEffect_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue_1;        // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline) == 0x000004, "Wrong alignment on BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline");
static_assert(sizeof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline) == 0x000010, "Wrong size on BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline, EntryPoint) == 0x000000, "Member 'BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline, CallFunc_StopEffect_ReturnValue) == 0x00000C, "Member 'BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline::CallFunc_StopEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline, CallFunc_EffectHandleIsValid_ReturnValue) == 0x00000D, "Member 'BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline, CallFunc_EffectHandleIsValid_ReturnValue_1) == 0x00000E, "Member 'BP_Fx_BirdsFlySpline_C_ExecuteUbergraph_BP_Fx_BirdsFlySpline::CallFunc_EffectHandleIsValid_ReturnValue_1' has a wrong offset!");

// Function BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Fx_BirdsFlySpline_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fx_BirdsFlySpline_C_EditorTick) == 0x000004, "Wrong alignment on BP_Fx_BirdsFlySpline_C_EditorTick");
static_assert(sizeof(BP_Fx_BirdsFlySpline_C_EditorTick) == 0x000004, "Wrong size on BP_Fx_BirdsFlySpline_C_EditorTick");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'BP_Fx_BirdsFlySpline_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Fx_BirdsFlySpline_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fx_BirdsFlySpline_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Fx_BirdsFlySpline_C_ReceiveEndPlay");
static_assert(sizeof(BP_Fx_BirdsFlySpline_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Fx_BirdsFlySpline_C_ReceiveEndPlay");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Fx_BirdsFlySpline_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C.Reset
// 0x0080 (0x0080 - 0x0000)
struct BP_Fx_BirdsFlySpline_C_Reset final
{
public:
	bool                                          CallFunc_IsEditor_IsEditor;                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_397D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Pad_397E[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SpawnEffect_ReturnValue;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397F[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPathName_ReturnValue_1;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_SpawnEffectWithActor_ReturnValue;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fx_BirdsFlySpline_C_Reset) == 0x000010, "Wrong alignment on BP_Fx_BirdsFlySpline_C_Reset");
static_assert(sizeof(BP_Fx_BirdsFlySpline_C_Reset) == 0x000080, "Wrong size on BP_Fx_BirdsFlySpline_C_Reset");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_IsEditor_IsEditor) == 0x000000, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_IsEditor_IsEditor' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_GetPathName_ReturnValue) == 0x000008, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_GetPathName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_GetOuterObject_ReturnValue) == 0x000050, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_SpawnEffect_ReturnValue) == 0x000058, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_SpawnEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_GetPathName_ReturnValue_1) == 0x000060, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_GetPathName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_SpawnEffectWithActor_ReturnValue) == 0x000070, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_SpawnEffectWithActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_Reset, CallFunc_IsValid_ReturnValue) == 0x000074, "Member 'BP_Fx_BirdsFlySpline_C_Reset::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C.PlayEditor
// 0x0002 (0x0002 - 0x0000)
struct BP_Fx_BirdsFlySpline_C_PlayEditor final
{
public:
	bool                                          CallFunc_StopEffect_ReturnValue;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fx_BirdsFlySpline_C_PlayEditor) == 0x000001, "Wrong alignment on BP_Fx_BirdsFlySpline_C_PlayEditor");
static_assert(sizeof(BP_Fx_BirdsFlySpline_C_PlayEditor) == 0x000002, "Wrong size on BP_Fx_BirdsFlySpline_C_PlayEditor");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_PlayEditor, CallFunc_StopEffect_ReturnValue) == 0x000000, "Member 'BP_Fx_BirdsFlySpline_C_PlayEditor::CallFunc_StopEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_PlayEditor, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000001, "Member 'BP_Fx_BirdsFlySpline_C_PlayEditor::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");

// Function BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C.StopEditor
// 0x0002 (0x0002 - 0x0000)
struct BP_Fx_BirdsFlySpline_C_StopEditor final
{
public:
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_StopEffect_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fx_BirdsFlySpline_C_StopEditor) == 0x000001, "Wrong alignment on BP_Fx_BirdsFlySpline_C_StopEditor");
static_assert(sizeof(BP_Fx_BirdsFlySpline_C_StopEditor) == 0x000002, "Wrong size on BP_Fx_BirdsFlySpline_C_StopEditor");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_StopEditor, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000000, "Member 'BP_Fx_BirdsFlySpline_C_StopEditor::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_StopEditor, CallFunc_StopEffect_ReturnValue) == 0x000001, "Member 'BP_Fx_BirdsFlySpline_C_StopEditor::CallFunc_StopEffect_ReturnValue' has a wrong offset!");

// Function BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C.IsEditor
// 0x0005 (0x0005 - 0x0000)
struct BP_Fx_BirdsFlySpline_C_IsEditor final
{
public:
	bool                                          Param_IsEditor;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EBP_EWorldType                                CallFunc_GetWorldType_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fx_BirdsFlySpline_C_IsEditor) == 0x000001, "Wrong alignment on BP_Fx_BirdsFlySpline_C_IsEditor");
static_assert(sizeof(BP_Fx_BirdsFlySpline_C_IsEditor) == 0x000005, "Wrong size on BP_Fx_BirdsFlySpline_C_IsEditor");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_IsEditor, Param_IsEditor) == 0x000000, "Member 'BP_Fx_BirdsFlySpline_C_IsEditor::Param_IsEditor' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_IsEditor, CallFunc_GetWorldType_ReturnValue) == 0x000001, "Member 'BP_Fx_BirdsFlySpline_C_IsEditor::CallFunc_GetWorldType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_IsEditor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_Fx_BirdsFlySpline_C_IsEditor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_IsEditor, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'BP_Fx_BirdsFlySpline_C_IsEditor::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fx_BirdsFlySpline_C_IsEditor, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'BP_Fx_BirdsFlySpline_C_IsEditor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
