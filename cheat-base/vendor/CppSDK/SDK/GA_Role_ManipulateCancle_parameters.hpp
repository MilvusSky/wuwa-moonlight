#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_ManipulateCancle

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Role_ManipulateCancle.GA_Role_ManipulateCancle_C.ExecuteUbergraph_GA_Role_ManipulateCancle
// 0x0068 (0x0068 - 0x0000)
struct GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0008(0x0020)()
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc________;                                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsTag_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle) == 0x000008, "Wrong alignment on GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle");
static_assert(sizeof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle) == 0x000068, "Wrong size on GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, EntryPoint) == 0x000000, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000008, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, K2Node_Event_bWasCancelled) == 0x000028, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc__________) == 0x000030, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000038, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000048, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc___________1) == 0x000050, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc___________2) == 0x000058, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc________) == 0x000060, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc________' has a wrong offset!");
static_assert(offsetof(GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle, CallFunc_ContainsTag_ReturnValue) == 0x000064, "Member 'GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle::CallFunc_ContainsTag_ReturnValue' has a wrong offset!");

// Function GA_Role_ManipulateCancle.GA_Role_ManipulateCancle_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Role_ManipulateCancle_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_ManipulateCancle_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Role_ManipulateCancle_C_K2_OnEndAbility");
static_assert(sizeof(GA_Role_ManipulateCancle_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Role_ManipulateCancle_C_K2_OnEndAbility");
static_assert(offsetof(GA_Role_ManipulateCancle_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Role_ManipulateCancle_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

