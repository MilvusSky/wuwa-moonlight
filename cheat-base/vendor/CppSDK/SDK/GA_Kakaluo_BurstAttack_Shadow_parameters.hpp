#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Kakaluo_BurstAttack_Shadow

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Kakaluo_BurstAttack_Shadow.GA_Kakaluo_BurstAttack_Shadow_C.ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow
// 0x0370 (0x0370 - 0x0000)
struct GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEntityEnable_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0028)(ZeroConstructor)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0098(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________3;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00E0(0x0028)(ZeroConstructor)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0118(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     ___struct_Variable;                                // 0x0140(0x00B8)()
	class FString                                 CallFunc_____GA______________;                     // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc___________4;                              // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0220(0x00B8)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x02E8(0x0028)(ZeroConstructor)
	bool                                          CallFunc_______________1;                          // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312[0x2];                                      // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc__________SpeedRatio;                      // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____EntityId__;                           // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_33C[0x4];                                      // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc_____ID_______;                            // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____ID___________;                        // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________8;                              // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID_1;                            // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEntityEnable_ReturnValue_1;            // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0365(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_366[0x2];                                      // 0x0366(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_____ID___ID_2;                            // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID_3;                            // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow) == 0x000008, "Wrong alignment on GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow");
static_assert(sizeof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow) == 0x000370, "Wrong size on GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, EntryPoint) == 0x000000, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc__________) == 0x000008, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____ID___ID) == 0x000010, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____ID___ID' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_GetEntityEnable_ReturnValue) == 0x000014, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_GetEntityEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________1) == 0x000068, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________2) == 0x000070, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc______________) == 0x000078, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000080, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_DynamicCast_AsTs_Base_Character) == 0x000088, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_CreateDelegate_OutputDelegate_2) == 0x000098, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000C0, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________3) == 0x0000C8, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_GetDisplayName_ReturnValue) == 0x0000D0, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000E0, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_GetObjectClass_ReturnValue) == 0x000108, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000110, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_CreateDelegate_OutputDelegate_4) == 0x000118, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, ___struct_Variable) == 0x000140, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____GA______________) == 0x0001F8, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_Conv_NameToString_ReturnValue) == 0x000208, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________4) == 0x000218, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_CustomEvent_Payload) == 0x000220, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_IsValid_ReturnValue) == 0x0002D8, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________5) == 0x0002E0, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_CreateDelegate_OutputDelegate_5) == 0x0002E8, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_______________1) == 0x000310, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, K2Node_Event_bWasCancelled) == 0x000311, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc__________SpeedRatio) == 0x000314, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000318, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_IsValid_ReturnValue_1) == 0x000320, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________6) == 0x000328, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________7) == 0x000330, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____EntityId__) == 0x000338, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____EntityId__' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____ID_______) == 0x000340, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____ID_______' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____ID___________) == 0x000348, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____ID___________' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc___________8) == 0x000350, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc___________8' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000358, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____ID___ID_1) == 0x000360, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____ID___ID_1' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_GetEntityEnable_ReturnValue_1) == 0x000364, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_GetEntityEnable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_IsValid_ReturnValue_2) == 0x000365, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____ID___ID_2) == 0x000368, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____ID___ID_2' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow, CallFunc_____ID___ID_3) == 0x00036C, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_ExecuteUbergraph_GA_Kakaluo_BurstAttack_Shadow::CallFunc_____ID___ID_3' has a wrong offset!");

// Function GA_Kakaluo_BurstAttack_Shadow.GA_Kakaluo_BurstAttack_Shadow_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Kakaluo_BurstAttack_Shadow_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Kakaluo_BurstAttack_Shadow_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Kakaluo_BurstAttack_Shadow_C_K2_OnEndAbility");
static_assert(sizeof(GA_Kakaluo_BurstAttack_Shadow_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Kakaluo_BurstAttack_Shadow_C_K2_OnEndAbility");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Kakaluo_BurstAttack_Shadow.GA_Kakaluo_BurstAttack_Shadow_C.EventReceived_18B59F5945020DB23C42FD8843B8BE55
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Kakaluo_BurstAttack_Shadow_C_EventReceived_18B59F5945020DB23C42FD8843B8BE55 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Kakaluo_BurstAttack_Shadow_C_EventReceived_18B59F5945020DB23C42FD8843B8BE55) == 0x000008, "Wrong alignment on GA_Kakaluo_BurstAttack_Shadow_C_EventReceived_18B59F5945020DB23C42FD8843B8BE55");
static_assert(sizeof(GA_Kakaluo_BurstAttack_Shadow_C_EventReceived_18B59F5945020DB23C42FD8843B8BE55) == 0x0000B8, "Wrong size on GA_Kakaluo_BurstAttack_Shadow_C_EventReceived_18B59F5945020DB23C42FD8843B8BE55");
static_assert(offsetof(GA_Kakaluo_BurstAttack_Shadow_C_EventReceived_18B59F5945020DB23C42FD8843B8BE55, Payload) == 0x000000, "Member 'GA_Kakaluo_BurstAttack_Shadow_C_EventReceived_18B59F5945020DB23C42FD8843B8BE55::Payload' has a wrong offset!");

}

