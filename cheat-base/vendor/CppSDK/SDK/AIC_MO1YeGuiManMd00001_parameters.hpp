#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1YeGuiManMd00001

#include "Basic.hpp"


namespace SDK::Params
{

// Function AIC_MO1YeGuiManMd00001.AIC_MO1YeGuiManMd00001_C.ExecuteUbergraph_AIC_MO1YeGuiManMd00001
// 0x0090 (0x0090 - 0x0000)
struct AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0028)(ZeroConstructor)
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0028)(ZeroConstructor)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bContent_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bContent;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue_1;                    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001) == 0x000008, "Wrong alignment on AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001");
static_assert(sizeof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001) == 0x000090, "Wrong size on AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, EntryPoint) == 0x000000, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, CallFunc_K2_GetPawn_ReturnValue) == 0x000058, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, K2Node_CustomEvent_bContent_1) == 0x000060, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::K2Node_CustomEvent_bContent_1' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, K2Node_DynamicCast_AsTs_Base_Character) == 0x000068, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, CallFunc___AIC___ReturnValue) == 0x000078, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::CallFunc___AIC___ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, K2Node_CustomEvent_bContent) == 0x000080, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::K2Node_CustomEvent_bContent' has a wrong offset!");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001, CallFunc___AIC___ReturnValue_1) == 0x000088, "Member 'AIC_MO1YeGuiManMd00001_C_ExecuteUbergraph_AIC_MO1YeGuiManMd00001::CallFunc___AIC___ReturnValue_1' has a wrong offset!");

// Function AIC_MO1YeGuiManMd00001.AIC_MO1YeGuiManMd00001_C.UK���
// 0x0001 (0x0001 - 0x0000)
struct AIC_MO1YeGuiManMd00001_C_UK___ final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_MO1YeGuiManMd00001_C_UK___) == 0x000001, "Wrong alignment on AIC_MO1YeGuiManMd00001_C_UK___");
static_assert(sizeof(AIC_MO1YeGuiManMd00001_C_UK___) == 0x000001, "Wrong size on AIC_MO1YeGuiManMd00001_C_UK___");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_UK___, bContent) == 0x000000, "Member 'AIC_MO1YeGuiManMd00001_C_UK___::bContent' has a wrong offset!");

// Function AIC_MO1YeGuiManMd00001.AIC_MO1YeGuiManMd00001_C.UKQ��
// 0x0001 (0x0001 - 0x0000)
struct AIC_MO1YeGuiManMd00001_C_UKQ__ final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_MO1YeGuiManMd00001_C_UKQ__) == 0x000001, "Wrong alignment on AIC_MO1YeGuiManMd00001_C_UKQ__");
static_assert(sizeof(AIC_MO1YeGuiManMd00001_C_UKQ__) == 0x000001, "Wrong size on AIC_MO1YeGuiManMd00001_C_UKQ__");
static_assert(offsetof(AIC_MO1YeGuiManMd00001_C_UKQ__, bContent) == 0x000000, "Member 'AIC_MO1YeGuiManMd00001_C_UKQ__::bContent' has a wrong offset!");

}

