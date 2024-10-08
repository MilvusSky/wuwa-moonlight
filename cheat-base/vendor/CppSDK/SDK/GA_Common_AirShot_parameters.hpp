#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_AirShot

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Common_AirShot.GA_Common_AirShot_C.ExecuteUbergraph_GA_Common_AirShot
// 0x0178 (0x0178 - 0x0000)
struct GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_2;                          // 0x0018(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable;                                // 0x0024(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x0070(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_1;                              // 0x007C(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x0098(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x00C0(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_2;                              // 0x00CC(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F8(0x0028)(ZeroConstructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc___ID____Buff_____;                        // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_MainAnimInstance_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot) == 0x000008, "Wrong alignment on GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot");
static_assert(sizeof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot) == 0x000178, "Wrong size on GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, EntryPoint) == 0x000000, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, K2Node_CustomEvent_Tag_2) == 0x000018, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::K2Node_CustomEvent_Tag_2' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, ___struct_Variable) == 0x000024, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000030, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_Percent_IntInt_ReturnValue) == 0x00003C, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, K2Node_CustomEvent_Tag_1) == 0x000070, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, ___struct_Variable_1) == 0x00007C, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::___struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000088, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, K2Node_CreateDelegate_OutputDelegate_1) == 0x000098, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, K2Node_CustomEvent_Tag) == 0x0000C0, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, ___struct_Variable_2) == 0x0000CC, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::___struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x0000D8, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_IsValid_ReturnValue_2) == 0x0000E0, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc__________) == 0x0000E8, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc___________1) == 0x0000F0, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F8, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000120, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000121, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, K2Node_Event_bWasCancelled) == 0x000122, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_BooleanOR_ReturnValue) == 0x000123, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc___ID____Buff_____) == 0x000124, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc___ID____Buff_____' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc___________2) == 0x000128, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc___________3) == 0x000130, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc___________4) == 0x000138, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc___________5) == 0x000140, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc___________6) == 0x000148, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_MainAnimInstance_ReturnValue) == 0x000150, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_MainAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_MakeVector_ReturnValue) == 0x000158, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000168, "Member 'GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");

// Function GA_Common_AirShot.GA_Common_AirShot_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Common_AirShot_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Common_AirShot_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Common_AirShot_C_K2_OnEndAbility");
static_assert(sizeof(GA_Common_AirShot_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Common_AirShot_C_K2_OnEndAbility");
static_assert(offsetof(GA_Common_AirShot_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Common_AirShot_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Common_AirShot.GA_Common_AirShot_C.Added_FFBD6C384BB1FB51A97536A87C7A0267
// 0x000C (0x000C - 0x0000)
struct GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267) == 0x000004, "Wrong alignment on GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267");
static_assert(sizeof(GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267) == 0x00000C, "Wrong size on GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267");
static_assert(offsetof(GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267, Tag) == 0x000000, "Member 'GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267::Tag' has a wrong offset!");

// Function GA_Common_AirShot.GA_Common_AirShot_C.Added_8BFB30E14403CD30B6735ABFFDD5C4B2
// 0x000C (0x000C - 0x0000)
struct GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2) == 0x000004, "Wrong alignment on GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2");
static_assert(sizeof(GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2) == 0x00000C, "Wrong size on GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2");
static_assert(offsetof(GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2, Tag) == 0x000000, "Member 'GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2::Tag' has a wrong offset!");

// Function GA_Common_AirShot.GA_Common_AirShot_C.Removed_672DF730488FF3847426B2B0B4DDBA8C
// 0x000C (0x000C - 0x0000)
struct GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C) == 0x000004, "Wrong alignment on GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C");
static_assert(sizeof(GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C) == 0x00000C, "Wrong size on GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C");
static_assert(offsetof(GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C, Tag) == 0x000000, "Member 'GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C::Tag' has a wrong offset!");

}

