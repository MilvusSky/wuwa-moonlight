#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsUiBlur

#include "Basic.hpp"

#include "LGUI_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsUiBlur.TsUiBlur_C
// 0x0008 (0x0108 - 0x0100)
class UTsUiBlur_C final : public ULGUIBehaviour
{
public:
	class AActor*                                 OverrideItem;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsUiBlur_C">();
	}
	static class UTsUiBlur_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsUiBlur_C>();
	}
};
static_assert(alignof(UTsUiBlur_C) == 0x000008, "Wrong alignment on UTsUiBlur_C");
static_assert(sizeof(UTsUiBlur_C) == 0x000108, "Wrong size on UTsUiBlur_C");
static_assert(offsetof(UTsUiBlur_C, OverrideItem) == 0x000100, "Member 'UTsUiBlur_C::OverrideItem' has a wrong offset!");

}

