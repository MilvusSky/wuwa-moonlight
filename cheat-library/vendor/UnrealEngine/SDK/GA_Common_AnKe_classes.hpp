#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_AnKe

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Common_AnKe.GA_Common_AnKe_C
// 0x0008 (0x0538 - 0x0530)
class UGA_Common_AnKe_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Common_AnKe_C;                   // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Common_AnKe(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81F126E343();
	void OnBlendOut_5D118C384AE61F1C80292E81F126E343();
	void OnInterrupted_5D118C384AE61F1C80292E81F126E343();
	void OnCancelled_5D118C384AE61F1C80292E81F126E343();
	void OnTick_5D118C384AE61F1C80292E81F126E343();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Common_AnKe_C">();
	}
	static class UGA_Common_AnKe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Common_AnKe_C>();
	}
};
static_assert(alignof(UGA_Common_AnKe_C) == 0x000008, "Wrong alignment on UGA_Common_AnKe_C");
static_assert(sizeof(UGA_Common_AnKe_C) == 0x000538, "Wrong size on UGA_Common_AnKe_C");
static_assert(offsetof(UGA_Common_AnKe_C, UberGraphFrame_GA_Common_AnKe_C) == 0x000530, "Member 'UGA_Common_AnKe_C::UberGraphFrame_GA_Common_AnKe_C' has a wrong offset!");

}
