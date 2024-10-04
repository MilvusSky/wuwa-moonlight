#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateShowUiWeapon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateShowUiWeapon.TsAnimNotifyStateShowUiWeapon_C
// 0x0038 (0x0080 - 0x0048)
class UTsAnimNotifyStateShowUiWeapon_C final : public UKuroAnimNotifyState
{
public:
	int32                                         WeaponIndex;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMaterialController;                            // 0x004C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HideEffect;                                        // 0x004D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0050(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateShowUiWeapon_C">();
	}
	static class UTsAnimNotifyStateShowUiWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateShowUiWeapon_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateShowUiWeapon_C) == 0x000010, "Wrong alignment on UTsAnimNotifyStateShowUiWeapon_C");
static_assert(sizeof(UTsAnimNotifyStateShowUiWeapon_C) == 0x000080, "Wrong size on UTsAnimNotifyStateShowUiWeapon_C");
static_assert(offsetof(UTsAnimNotifyStateShowUiWeapon_C, WeaponIndex) == 0x000048, "Member 'UTsAnimNotifyStateShowUiWeapon_C::WeaponIndex' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateShowUiWeapon_C, ShowMaterialController) == 0x00004C, "Member 'UTsAnimNotifyStateShowUiWeapon_C::ShowMaterialController' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateShowUiWeapon_C, HideEffect) == 0x00004D, "Member 'UTsAnimNotifyStateShowUiWeapon_C::HideEffect' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateShowUiWeapon_C, Transform) == 0x000050, "Member 'UTsAnimNotifyStateShowUiWeapon_C::Transform' has a wrong offset!");

}

