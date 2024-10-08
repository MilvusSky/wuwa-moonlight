#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Input_Kakaluo

#include "Basic.hpp"

#include "BP_InputComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Input_Kakaluo.BP_Input_Kakaluo_C
// 0x0000 (0x0220 - 0x0220)
class UBP_Input_Kakaluo_C final : public UBP_InputComponent_C
{
public:
	struct FSInputCommand Func______18(float Time);
	struct FSInputCommand Func______17(float Time);
	struct FSInputCommand ___w_6(float Time);
	struct FSInputCommand __1___0(float Time);
	struct FSInputCommand Func______16(float Time);
	struct FSInputCommand _a1___1(float Time);
	struct FSInputCommand _a2___1(float Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Input_Kakaluo_C">();
	}
	static class UBP_Input_Kakaluo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Input_Kakaluo_C>();
	}
};
static_assert(alignof(UBP_Input_Kakaluo_C) == 0x000008, "Wrong alignment on UBP_Input_Kakaluo_C");
static_assert(sizeof(UBP_Input_Kakaluo_C) == 0x000220, "Wrong size on UBP_Input_Kakaluo_C");

}

