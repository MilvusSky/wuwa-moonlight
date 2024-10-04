#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAiBlueprintFunctionLibrary

#include "Basic.hpp"

#include "EQuestStepState_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAiBlueprintFunctionLibrary.TsAiBlueprintFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UTsAiBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static EQuestStepState GetQuestState(int32 EntityId, float QuestId, class UObject* __WorldContext);
	static float GetDistanceByPlayer(int32 EntityId, class UObject* __WorldContext);
	static bool CheckPlayerGameplayTag(int32 EntityId, const struct FGameplayTag& Tag, class UObject* __WorldContext);
	static void RestartBehaviorTree(int32 EntityId, class UObject* __WorldContext);
	static void SetAiEnabled(int32 EntityId, bool Value, const class FString& Key, class UObject* __WorldContext);
	static bool NeedCheckPlayerImpact(int32 EntityId, class UObject* __WorldContext);
	static bool NeedCheckPlayerAttack(int32 EntityId, class UObject* __WorldContext);
	static void UpdateInteractionComponent(int32 EntityId, class UObject* __WorldContext);
	static void OnPlayerAttack(int32 EntityId, class UObject* __WorldContext);
	static void OnPlayerImpact(int32 EntityId, class UObject* __WorldContext);
	static bool IsAiDriver(int32 EntityId, class UObject* __WorldContext);
	static class AActor* GetRoleActor(int32 EntityId, class UObject* __WorldContext);
	static void SetFollowData(int32 EntityId, class AActor* Target, int32 Type, class UObject* __WorldContext);
	static TArray<class AActor*> GetFollowActor(int32 EntityId, class UObject* __WorldContext);
	static void Reset(int32 EntityId, float TargetEntityId, class UObject* __WorldContext);
	static float GetToRoleDistance(int32 EntityId, class UObject* __WorldContext);
	static int32 GetSummonType(int32 EntityId, class UObject* __WorldContext);
	static void TsLogInfo(const class FString& Text, class UObject* __WorldContext);
	static void OnPlayerAttackEnd(int32 EntityId, class UObject* __WorldContext);
	static void OnPlayerImpactEnd(int32 EntityId, class UObject* __WorldContext);
	static void OnPlayerAttackBegin(int32 EntityId, class UObject* __WorldContext);
	static void OnPlayerImpactBegin(int32 EntityId, class UObject* __WorldContext);
	static void UpdateNpcPerformData(int32 EntityId, bool& IsAttacked1, bool& IsImpacted, float& Direction, float& Strength, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAiBlueprintFunctionLibrary_C">();
	}
	static class UTsAiBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAiBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UTsAiBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UTsAiBlueprintFunctionLibrary_C");
static_assert(sizeof(UTsAiBlueprintFunctionLibrary_C) == 0x000030, "Wrong size on UTsAiBlueprintFunctionLibrary_C");

}

