#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CommonMaleXL_AimShoot

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_CommonMaleXL_AimShoot.GA_CommonMaleXL_AimShoot_C.ExecuteUbergraph_GA_CommonMaleXL_AimShoot
// 0x0258 (0x0258 - 0x0000)
struct GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x0048(0x0020)()
	class AActor*                                 CallFunc____________;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_1;    // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_1;      // 0x0080(0x0020)()
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_____________1;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_2;    // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_2;      // 0x00C0(0x0020)()
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x00E0(0x00B8)()
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;             // 0x0198(0x00B8)()
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot) == 0x000008, "Wrong alignment on GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot");
static_assert(sizeof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot) == 0x000258, "Wrong size on GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, EntryPoint) == 0x000000, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc__________) == 0x000008, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc___________1) == 0x000010, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, K2Node_DynamicCast_AsTs_Base_Character) == 0x000018, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc___________2) == 0x000028, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc___________3) == 0x000030, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc_GetOwnedGameplayTags_self_CastInput) == 0x000038, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc_GetOwnedGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x000048, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc____________) == 0x000068, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc_GetOwnedGameplayTags_self_CastInput_1) == 0x000070, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc_GetOwnedGameplayTags_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc_GetOwnedGameplayTags_TagContainer_1) == 0x000080, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc_GetOwnedGameplayTags_TagContainer_1' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc___________4) == 0x0000A0, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc_____________1) == 0x0000A8, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc_____________1' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc_GetOwnedGameplayTags_self_CastInput_2) == 0x0000B0, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc_GetOwnedGameplayTags_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, CallFunc_GetOwnedGameplayTags_TagContainer_2) == 0x0000C0, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::CallFunc_GetOwnedGameplayTags_TagContainer_2' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, K2Node_MakeStruct_GameplayEventData) == 0x0000E0, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, K2Node_MakeStruct_GameplayEventData_1) == 0x000198, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::K2Node_MakeStruct_GameplayEventData_1' has a wrong offset!");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot, K2Node_Event_bWasCancelled) == 0x000250, "Member 'GA_CommonMaleXL_AimShoot_C_ExecuteUbergraph_GA_CommonMaleXL_AimShoot::K2Node_Event_bWasCancelled' has a wrong offset!");

// Function GA_CommonMaleXL_AimShoot.GA_CommonMaleXL_AimShoot_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_CommonMaleXL_AimShoot_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_CommonMaleXL_AimShoot_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_CommonMaleXL_AimShoot_C_K2_OnEndAbility");
static_assert(sizeof(GA_CommonMaleXL_AimShoot_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_CommonMaleXL_AimShoot_C_K2_OnEndAbility");
static_assert(offsetof(GA_CommonMaleXL_AimShoot_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_CommonMaleXL_AimShoot_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

