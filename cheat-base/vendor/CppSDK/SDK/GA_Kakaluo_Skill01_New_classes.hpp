#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Kakaluo_Skill01_New

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Kakaluo_Skill01_New.GA_Kakaluo_Skill01_New_C
// 0x00A8 (0x0600 - 0x0558)
class UGA_Kakaluo_Skill01_New_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Kakaluo_Skill01_New_C;           // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 N___ID;                                            // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         N__p;                                              // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           _______GA_Kakaluo_Skill01_New_C;                   // 0x0574(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         E__qP;                                             // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_584[0x4];                                      // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     E____;                                             // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             _c_qPMn;                                           // 0x0590(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             _c_Mn__H;                                          // 0x05C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FGameplayTag>                   N___;                                              // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Kakaluo_Skill01_New(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_18B59F5945020DB23C42FD886C9EC236(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD88140078BA(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E813AD4461D();
	void OnBlendOut_5D118C384AE61F1C80292E813AD4461D();
	void OnInterrupted_5D118C384AE61F1C80292E813AD4461D();
	void OnCancelled_5D118C384AE61F1C80292E813AD4461D();
	void OnTick_5D118C384AE61F1C80292E813AD4461D();
	void OnCompleted_5D118C384AE61F1C80292E811E8E025E();
	void OnBlendOut_5D118C384AE61F1C80292E811E8E025E();
	void OnInterrupted_5D118C384AE61F1C80292E811E8E025E();
	void OnCancelled_5D118C384AE61F1C80292E811E8E025E();
	void OnTick_5D118C384AE61F1C80292E811E8E025E();
	void AaW__Mn____K(struct FTransform* _c_Mn);
	void AaW____Mn(struct FTransform* NewParam);
	void Six0_____qP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Kakaluo_Skill01_New_C">();
	}
	static class UGA_Kakaluo_Skill01_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Kakaluo_Skill01_New_C>();
	}
};
static_assert(alignof(UGA_Kakaluo_Skill01_New_C) == 0x000010, "Wrong alignment on UGA_Kakaluo_Skill01_New_C");
static_assert(sizeof(UGA_Kakaluo_Skill01_New_C) == 0x000600, "Wrong size on UGA_Kakaluo_Skill01_New_C");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, UberGraphFrame_GA_Kakaluo_Skill01_New_C) == 0x000558, "Member 'UGA_Kakaluo_Skill01_New_C::UberGraphFrame_GA_Kakaluo_Skill01_New_C' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, N___ID) == 0x000560, "Member 'UGA_Kakaluo_Skill01_New_C::N___ID' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, N__p) == 0x000570, "Member 'UGA_Kakaluo_Skill01_New_C::N__p' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, _______GA_Kakaluo_Skill01_New_C) == 0x000574, "Member 'UGA_Kakaluo_Skill01_New_C::_______GA_Kakaluo_Skill01_New_C' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, E__qP) == 0x000580, "Member 'UGA_Kakaluo_Skill01_New_C::E__qP' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, E____) == 0x000588, "Member 'UGA_Kakaluo_Skill01_New_C::E____' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, _c_qPMn) == 0x000590, "Member 'UGA_Kakaluo_Skill01_New_C::_c_qPMn' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, _c_Mn__H) == 0x0005C0, "Member 'UGA_Kakaluo_Skill01_New_C::_c_Mn__H' has a wrong offset!");
static_assert(offsetof(UGA_Kakaluo_Skill01_New_C, N___) == 0x0005F0, "Member 'UGA_Kakaluo_Skill01_New_C::N___' has a wrong offset!");

}

