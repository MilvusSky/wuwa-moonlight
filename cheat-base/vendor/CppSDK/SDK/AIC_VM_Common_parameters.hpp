#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_VM_Common

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AIC_VM_Common.AIC_VM_Common_C.ExecuteUbergraph_AIC_VM_Common
// 0x0110 (0x0110 - 0x0000)
struct AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0028)(ZeroConstructor)
	int32                                         CallFunc_GetSummonerEntityId_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0028)(ZeroConstructor)
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0078(0x0028)(ZeroConstructor)
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A0(0x0028)(ZeroConstructor)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseVision_C*                       K2Node_DynamicCast_AsBP_Base_Vision;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bContent_2;                     // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue;                      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue_1;                    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bContent_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue_2;                    // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bContent;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common) == 0x000008, "Wrong alignment on AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common");
static_assert(sizeof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common) == 0x000110, "Wrong size on AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, EntryPoint) == 0x000000, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc_GetEntityId_self_CastInput) == 0x000008, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc_GetEntityId_ReturnValue) == 0x000018, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc_GetSummonerEntityId_ReturnValue) == 0x000048, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc_GetSummonerEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_CreateDelegate_OutputDelegate_2) == 0x000078, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A0, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc_K2_GetPawn_ReturnValue) == 0x0000C8, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_DynamicCast_AsBP_Base_Vision) == 0x0000D0, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_DynamicCast_AsBP_Base_Vision' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_CustomEvent_bContent_2) == 0x0000D9, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_CustomEvent_bContent_2' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000E0, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc___AIC___ReturnValue) == 0x0000E8, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc___AIC___ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc___AIC___ReturnValue_1) == 0x0000F0, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc___AIC___ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_CustomEvent_bContent_1) == 0x0000F8, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_CustomEvent_bContent_1' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, CallFunc___AIC___ReturnValue_2) == 0x000100, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::CallFunc___AIC___ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common, K2Node_CustomEvent_bContent) == 0x000108, "Member 'AIC_VM_Common_C_ExecuteUbergraph_AIC_VM_Common::K2Node_CustomEvent_bContent' has a wrong offset!");

// Function AIC_VM_Common.AIC_VM_Common_C.M�P9
// 0x0001 (0x0001 - 0x0000)
struct AIC_VM_Common_C_M_P9 final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_VM_Common_C_M_P9) == 0x000001, "Wrong alignment on AIC_VM_Common_C_M_P9");
static_assert(sizeof(AIC_VM_Common_C_M_P9) == 0x000001, "Wrong size on AIC_VM_Common_C_M_P9");
static_assert(offsetof(AIC_VM_Common_C_M_P9, bContent) == 0x000000, "Member 'AIC_VM_Common_C_M_P9::bContent' has a wrong offset!");

// Function AIC_VM_Common.AIC_VM_Common_C.ֈ��
// 0x0001 (0x0001 - 0x0000)
struct AIC_VM_Common_C_Func______2 final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_VM_Common_C_____) == 0x000001, "Wrong alignment on AIC_VM_Common_C_____");
static_assert(sizeof(AIC_VM_Common_C_____) == 0x000001, "Wrong size on AIC_VM_Common_C_____");
static_assert(offsetof(AIC_VM_Common_C_____, bContent) == 0x000000, "Member 'AIC_VM_Common_C_____::bContent' has a wrong offset!");

// Function AIC_VM_Common.AIC_VM_Common_C.��}h
// 0x0001 (0x0001 - 0x0000)
struct AIC_VM_Common_C_____h_ final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_VM_Common_C_____h_) == 0x000001, "Wrong alignment on AIC_VM_Common_C_____h_");
static_assert(sizeof(AIC_VM_Common_C_____h_) == 0x000001, "Wrong size on AIC_VM_Common_C_____h_");
static_assert(offsetof(AIC_VM_Common_C_____h_, bContent) == 0x000000, "Member 'AIC_VM_Common_C_____h_::bContent' has a wrong offset!");

}

