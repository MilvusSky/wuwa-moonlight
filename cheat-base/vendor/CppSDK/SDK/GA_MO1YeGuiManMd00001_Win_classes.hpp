#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MO1YeGuiManMd00001_Win

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MO1YeGuiManMd00001_Win.GA_MO1YeGuiManMd00001_Win_C
// 0x0008 (0x0570 - 0x0568)
class UGA_MO1YeGuiManMd00001_Win_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MO1YeGuiManMd00001_Win_C;        // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnTick_5D118C384AE61F1C80292E81D0F269F6();
	void OnCancelled_5D118C384AE61F1C80292E81D0F269F6();
	void OnInterrupted_5D118C384AE61F1C80292E81D0F269F6();
	void OnBlendOut_5D118C384AE61F1C80292E81D0F269F6();
	void OnCompleted_5D118C384AE61F1C80292E81D0F269F6();
	void OnTick_5D118C384AE61F1C80292E81EB886A81();
	void OnCancelled_5D118C384AE61F1C80292E81EB886A81();
	void OnInterrupted_5D118C384AE61F1C80292E81EB886A81();
	void OnBlendOut_5D118C384AE61F1C80292E81EB886A81();
	void OnCompleted_5D118C384AE61F1C80292E81EB886A81();
	void OnTick_5D118C384AE61F1C80292E81BB9C47BE();
	void OnCancelled_5D118C384AE61F1C80292E81BB9C47BE();
	void OnInterrupted_5D118C384AE61F1C80292E81BB9C47BE();
	void OnBlendOut_5D118C384AE61F1C80292E81BB9C47BE();
	void OnCompleted_5D118C384AE61F1C80292E81BB9C47BE();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_MO1YeGuiManMd00001_Win(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MO1YeGuiManMd00001_Win_C">();
	}
	static class UGA_MO1YeGuiManMd00001_Win_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MO1YeGuiManMd00001_Win_C>();
	}
};
static_assert(alignof(UGA_MO1YeGuiManMd00001_Win_C) == 0x000008, "Wrong alignment on UGA_MO1YeGuiManMd00001_Win_C");
static_assert(sizeof(UGA_MO1YeGuiManMd00001_Win_C) == 0x000570, "Wrong size on UGA_MO1YeGuiManMd00001_Win_C");
static_assert(offsetof(UGA_MO1YeGuiManMd00001_Win_C, UberGraphFrame_GA_MO1YeGuiManMd00001_Win_C) == 0x000568, "Member 'UGA_MO1YeGuiManMd00001_Win_C::UberGraphFrame_GA_MO1YeGuiManMd00001_Win_C' has a wrong offset!");

}

