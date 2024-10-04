#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LinRen_daoguanqufen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LinRen_daoguanqufen.GA_LinRen_daoguanqufen_C
// 0x0010 (0x0578 - 0x0568)
class UGA_LinRen_daoguanqufen_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_LinRen_daoguanqufen_C;           // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     As_Ts_Base_Character;                              // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_LinRen_daoguanqufen(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E818F61F1AF();
	void OnBlendOut_5D118C384AE61F1C80292E818F61F1AF();
	void OnInterrupted_5D118C384AE61F1C80292E818F61F1AF();
	void OnCancelled_5D118C384AE61F1C80292E818F61F1AF();
	void OnTick_5D118C384AE61F1C80292E818F61F1AF();
	void OnCompleted_5D118C384AE61F1C80292E817444D244();
	void OnBlendOut_5D118C384AE61F1C80292E817444D244();
	void OnInterrupted_5D118C384AE61F1C80292E817444D244();
	void OnCancelled_5D118C384AE61F1C80292E817444D244();
	void OnTick_5D118C384AE61F1C80292E817444D244();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LinRen_daoguanqufen_C">();
	}
	static class UGA_LinRen_daoguanqufen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LinRen_daoguanqufen_C>();
	}
};
static_assert(alignof(UGA_LinRen_daoguanqufen_C) == 0x000008, "Wrong alignment on UGA_LinRen_daoguanqufen_C");
static_assert(sizeof(UGA_LinRen_daoguanqufen_C) == 0x000578, "Wrong size on UGA_LinRen_daoguanqufen_C");
static_assert(offsetof(UGA_LinRen_daoguanqufen_C, UberGraphFrame_GA_LinRen_daoguanqufen_C) == 0x000568, "Member 'UGA_LinRen_daoguanqufen_C::UberGraphFrame_GA_LinRen_daoguanqufen_C' has a wrong offset!");
static_assert(offsetof(UGA_LinRen_daoguanqufen_C, As_Ts_Base_Character) == 0x000570, "Member 'UGA_LinRen_daoguanqufen_C::As_Ts_Base_Character' has a wrong offset!");

}

