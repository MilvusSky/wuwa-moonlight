#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Super_Sprint_F

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.ExecuteUbergraph_GA_Super_Sprint_F
// 0x02E0 (0x02E0 - 0x0000)
struct GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x0010(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc____________;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ___struct_Variable;                                // 0x0020(0x000C)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0090(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B8(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00E0(0x0028)(ZeroConstructor)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_5;            // 0x0130(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________2;                              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ___struct_Variable_1;                              // 0x018C(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x0198(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_____GA______________;                     // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_6;            // 0x01C8(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________3;                              // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_2;         // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x3];                                      // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_CustomEvent_Tag_2;                          // 0x020C(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_7;            // 0x0220(0x0028)(ZeroConstructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x3];                                      // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ___struct_Variable_2;                              // 0x024C(0x000C)(NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x3];                                      // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc__________SpeedRatio;                      // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________2;                          // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyDown_ReturnValue;                    // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28A[0x6];                                      // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________8;                              // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________9;                              // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_________Id________;                       // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_____________1;                            // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B2[0x6];                                      // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________10;                             // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____________2;                            // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_________Id_________1;                     // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F) == 0x000008, "Wrong alignment on GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F");
static_assert(sizeof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F) == 0x0002E0, "Wrong size on GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, EntryPoint) == 0x000000, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc__________) == 0x000008, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CustomEvent_Tag) == 0x000010, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc____________) == 0x00001C, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, ___struct_Variable) == 0x000020, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000030, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate_2) == 0x000090, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000E0, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________1) == 0x000108, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000110, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc______________) == 0x000118, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_DynamicCast_AsTs_Base_Character) == 0x000120, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00012C, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate_5) == 0x000130, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________2) == 0x000158, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_GetDisplayName_ReturnValue) == 0x000160, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_GetObjectClass_ReturnValue) == 0x000170, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000178, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x000180, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_IsValid_ReturnValue_1) == 0x000188, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, ___struct_Variable_1) == 0x00018C, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::___struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CustomEvent_Tag_1) == 0x000198, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_____GA______________) == 0x0001A8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_Conv_NameToString_ReturnValue) == 0x0001B8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001C8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________3) == 0x0001F0, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_IsValid_ReturnValue_2) == 0x0001F8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_WaitGameplayTagAdd_ReturnValue_2) == 0x000200, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_WaitGameplayTagAdd_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_IsValid_ReturnValue_3) == 0x000208, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CustomEvent_Tag_2) == 0x00020C, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CustomEvent_Tag_2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________4) == 0x000218, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_CreateDelegate_OutputDelegate_7) == 0x000220, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, K2Node_Event_bWasCancelled) == 0x000248, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, ___struct_Variable_2) == 0x00024C, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::___struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________5) == 0x000258, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_______________1) == 0x000260, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc__________SpeedRatio) == 0x000264, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000268, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_IsValid_ReturnValue_4) == 0x000270, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________6) == 0x000278, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________7) == 0x000280, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_______________2) == 0x000288, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_______________2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_IsKeyDown_ReturnValue) == 0x000289, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_IsKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________8) == 0x000290, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________8' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________9) == 0x000298, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________9' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_________Id________) == 0x0002A0, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_________Id________' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_____________1) == 0x0002B0, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_____________1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0002B1, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc___________10) == 0x0002B8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc___________10' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_____________2) == 0x0002C0, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_____________2' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_________Id_________1) == 0x0002C8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_________Id_________1' has a wrong offset!");
static_assert(offsetof(GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0002D8, "Member 'GA_Super_Sprint_F_C_ExecuteUbergraph_GA_Super_Sprint_F::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Super_Sprint_F_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Super_Sprint_F_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Super_Sprint_F_C_K2_OnEndAbility");
static_assert(sizeof(GA_Super_Sprint_F_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Super_Sprint_F_C_K2_OnEndAbility");
static_assert(offsetof(GA_Super_Sprint_F_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Super_Sprint_F_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.Added_21071CB943CD992BF8EFD6A36D09B45D
// 0x000C (0x000C - 0x0000)
struct GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D) == 0x000004, "Wrong alignment on GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D");
static_assert(sizeof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D) == 0x00000C, "Wrong size on GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D");
static_assert(offsetof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D, Tag) == 0x000000, "Member 'GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A36D09B45D::Tag' has a wrong offset!");

// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.Added_21071CB943CD992BF8EFD6A3015EDD8F
// 0x000C (0x000C - 0x0000)
struct GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F) == 0x000004, "Wrong alignment on GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F");
static_assert(sizeof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F) == 0x00000C, "Wrong size on GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F");
static_assert(offsetof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F, Tag) == 0x000000, "Member 'GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3015EDD8F::Tag' has a wrong offset!");

// Function GA_Super_Sprint_F.GA_Super_Sprint_F_C.Added_21071CB943CD992BF8EFD6A3E2664B71
// 0x000C (0x000C - 0x0000)
struct GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71) == 0x000004, "Wrong alignment on GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71");
static_assert(sizeof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71) == 0x00000C, "Wrong size on GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71");
static_assert(offsetof(GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71, Tag) == 0x000000, "Member 'GA_Super_Sprint_F_C_Added_21071CB943CD992BF8EFD6A3E2664B71::Tag' has a wrong offset!");

}

