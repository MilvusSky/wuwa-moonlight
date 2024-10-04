#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Saomiao

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_Saomiao.GA_Role_Saomiao_C
// 0x0008 (0x0560 - 0x0558)
class UGA_Role_Saomiao_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_Saomiao_C;                  // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Role_Saomiao(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_Saomiao_C">();
	}
	static class UGA_Role_Saomiao_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_Saomiao_C>();
	}
};
static_assert(alignof(UGA_Role_Saomiao_C) == 0x000008, "Wrong alignment on UGA_Role_Saomiao_C");
static_assert(sizeof(UGA_Role_Saomiao_C) == 0x000560, "Wrong size on UGA_Role_Saomiao_C");
static_assert(offsetof(UGA_Role_Saomiao_C, UberGraphFrame_GA_Role_Saomiao_C) == 0x000558, "Member 'UGA_Role_Saomiao_C::UberGraphFrame_GA_Role_Saomiao_C' has a wrong offset!");

}

