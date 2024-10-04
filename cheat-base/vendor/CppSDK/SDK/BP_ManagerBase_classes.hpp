#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ManagerBase

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ManagerBase.BP_ManagerBase_C
// 0x0018 (0x0048 - 0x0030)
class UBP_ManagerBase_C : public UObject
{
public:
	class UBP_MainGameInstance_C*                 Eight___;                                          // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Lb__h;                                             // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EventManager_C*                     ____h;                                             // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ___(class UBP_MainGameInstance_C* Eight____0);
	void OnLeaveWorld();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ManagerBase_C">();
	}
	static class UBP_ManagerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ManagerBase_C>();
	}
};
static_assert(alignof(UBP_ManagerBase_C) == 0x000008, "Wrong alignment on UBP_ManagerBase_C");
static_assert(sizeof(UBP_ManagerBase_C) == 0x000048, "Wrong size on UBP_ManagerBase_C");
static_assert(offsetof(UBP_ManagerBase_C, Eight___) == 0x000030, "Member 'UBP_ManagerBase_C::Eight___' has a wrong offset!");
static_assert(offsetof(UBP_ManagerBase_C, Lb__h) == 0x000038, "Member 'UBP_ManagerBase_C::Lb__h' has a wrong offset!");
static_assert(offsetof(UBP_ManagerBase_C, ____h) == 0x000040, "Member 'UBP_ManagerBase_C::____h' has a wrong offset!");

}

