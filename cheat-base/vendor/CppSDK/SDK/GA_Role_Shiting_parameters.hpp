#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Shiting

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Role_Shiting.GA_Role_Shiting_C.ExecuteUbergraph_GA_Role_Shiting
// 0x0080 (0x0080 - 0x0000)
struct GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0008(0x0020)()
	class ATsBaseCharacter_C*                     CallFunc_________Actor_____;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_CreateBulletFromGA_ReturnValue;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc_________Actor______1;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63[0x5];                                       // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_CreateBulletFromGA_ReturnValue_1;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting) == 0x000008, "Wrong alignment on GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting");
static_assert(sizeof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting) == 0x000080, "Wrong size on GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, EntryPoint) == 0x000000, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000008, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_________Actor_____) == 0x000028, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_________Actor_____' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_CreateBulletFromGA_ReturnValue) == 0x000040, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_CreateBulletFromGA_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, ___bool_Has_Been_Initd_Variable) == 0x000044, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_________Actor______1) == 0x000048, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_________Actor______1' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000050, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000060, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, K2Node_Event_bWasCancelled) == 0x000061, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, ___bool_IsClosed_Variable) == 0x000062, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000068, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting, CallFunc_CreateBulletFromGA_ReturnValue_1) == 0x000078, "Member 'GA_Role_Shiting_C_ExecuteUbergraph_GA_Role_Shiting::CallFunc_CreateBulletFromGA_ReturnValue_1' has a wrong offset!");

// Function GA_Role_Shiting.GA_Role_Shiting_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Role_Shiting_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_Shiting_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Role_Shiting_C_K2_OnEndAbility");
static_assert(sizeof(GA_Role_Shiting_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Role_Shiting_C_K2_OnEndAbility");
static_assert(offsetof(GA_Role_Shiting_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Role_Shiting_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Role_Shiting.GA_Role_Shiting_C. �y�P9
// 0x0030 (0x0030 - 0x0000)
struct GA_Role_Shiting_C_____y_P9 final
{
public:
	class FName                                   P9_W;                                              // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___PP9;                                            // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Role_Shiting_C_____y_P9) == 0x000008, "Wrong alignment on GA_Role_Shiting_C_____y_P9");
static_assert(sizeof(GA_Role_Shiting_C_____y_P9) == 0x000030, "Wrong size on GA_Role_Shiting_C_____y_P9");
static_assert(offsetof(GA_Role_Shiting_C_____y_P9, P9_W) == 0x000000, "Member 'GA_Role_Shiting_C_____y_P9::P9_W' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_____y_P9, ___PP9) == 0x00000C, "Member 'GA_Role_Shiting_C_____y_P9::___PP9' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_____y_P9, CallFunc__________) == 0x000010, "Member 'GA_Role_Shiting_C_____y_P9::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_____y_P9, CallFunc_GetEntityId_self_CastInput) == 0x000018, "Member 'GA_Role_Shiting_C_____y_P9::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Role_Shiting_C_____y_P9, CallFunc_GetEntityId_ReturnValue) == 0x000028, "Member 'GA_Role_Shiting_C_____y_P9::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");

}

