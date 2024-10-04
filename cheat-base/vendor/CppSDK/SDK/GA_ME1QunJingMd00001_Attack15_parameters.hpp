#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1QunJingMd00001_Attack15

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_ME1QunJingMd00001_Attack15.GA_ME1QunJingMd00001_Attack15_C.ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15
// 0x0340 (0x0340 - 0x0000)
struct GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc____________;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0028)(ZeroConstructor)
	bool                                          CallFunc_____________1;                            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0070(0x0028)(ZeroConstructor)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00C8(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________3;                              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0120(0x0028)(ZeroConstructor)
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_____GA______________;                     // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     ___struct_Variable;                                // 0x0168(0x00B8)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0230(0x00B8)()
	class UAnimMontage*                           CallFunc___________4;                              // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F1[0x3];                                      // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc__________SpeedRatio;                      // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x02F8(0x0028)(ZeroConstructor)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15) == 0x000008, "Wrong alignment on GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15");
static_assert(sizeof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15) == 0x000340, "Wrong size on GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, EntryPoint) == 0x000000, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc__________) == 0x000008, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc____________) == 0x000010, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_____________1) == 0x000040, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_____________1' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_CreateDelegate_OutputDelegate_2) == 0x000070, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc___________1) == 0x000098, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc___________2) == 0x0000A0, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc______________) == 0x0000A8, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x0000B0, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_DynamicCast_AsTs_Base_Character) == 0x0000B8, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C8, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000F0, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc___________3) == 0x0000F8, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_GetDisplayName_ReturnValue) == 0x000100, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_GetObjectClass_ReturnValue) == 0x000110, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000118, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_CreateDelegate_OutputDelegate_4) == 0x000120, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000148, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_____GA______________) == 0x000150, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, ___struct_Variable) == 0x000168, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_Conv_NameToString_ReturnValue) == 0x000220, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_CustomEvent_Payload) == 0x000230, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc___________4) == 0x0002E8, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_IsValid_ReturnValue_1) == 0x0002F0, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc__________SpeedRatio) == 0x0002F4, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, K2Node_CreateDelegate_OutputDelegate_5) == 0x0002F8, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000320, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_IsValid_ReturnValue_2) == 0x000328, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc___________5) == 0x000330, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15, CallFunc_______________1) == 0x000338, "Member 'GA_ME1QunJingMd00001_Attack15_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack15::CallFunc_______________1' has a wrong offset!");

// Function GA_ME1QunJingMd00001_Attack15.GA_ME1QunJingMd00001_Attack15_C.EventReceived_18B59F5945020DB23C42FD8864C29D2C
// 0x00B8 (0x00B8 - 0x0000)
struct GA_ME1QunJingMd00001_Attack15_C_EventReceived_18B59F5945020DB23C42FD8864C29D2C final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_ME1QunJingMd00001_Attack15_C_EventReceived_18B59F5945020DB23C42FD8864C29D2C) == 0x000008, "Wrong alignment on GA_ME1QunJingMd00001_Attack15_C_EventReceived_18B59F5945020DB23C42FD8864C29D2C");
static_assert(sizeof(GA_ME1QunJingMd00001_Attack15_C_EventReceived_18B59F5945020DB23C42FD8864C29D2C) == 0x0000B8, "Wrong size on GA_ME1QunJingMd00001_Attack15_C_EventReceived_18B59F5945020DB23C42FD8864C29D2C");
static_assert(offsetof(GA_ME1QunJingMd00001_Attack15_C_EventReceived_18B59F5945020DB23C42FD8864C29D2C, Payload) == 0x000000, "Member 'GA_ME1QunJingMd00001_Attack15_C_EventReceived_18B59F5945020DB23C42FD8864C29D2C::Payload' has a wrong offset!");

}

