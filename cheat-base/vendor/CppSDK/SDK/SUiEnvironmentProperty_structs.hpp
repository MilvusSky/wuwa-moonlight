#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SUiEnvironmentProperty

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SUiEnvironmentProperty.SUiEnvironmentProperty
// 0x00C8 (0x00C8 - 0x0000)
struct FSUiEnvironmentProperty final
{
public:
	struct FSoftObjectPath                        IconFrame_18_A9EAC4584D190F873B8F7E89AF008D22;     // 0x0000(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        Icon_5_A2C3EB414E77EF5C24971D8A233A8C36;           // 0x0020(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        IconFull_28_6A2691024E39B23E183A08B1B1E93E1B;      // 0x0040(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                         WarningPercent_39_C6C752C04F7AD4CF53E4FF8974775F02; // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FColor>                         BgColors_35_9BDBDC0E491DF957C68F0BB2B35C0137;      // 0x0068(0x0010)(Edit, BlueprintVisible)
	TArray<struct FColor>                         BarColors_36_CB446A534C823A7AA40C44BFE9702B1C;     // 0x0078(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UEffectScreenPlayData_C> SceneEffect_24_85A89F414CB1A4C872F427B995DB02A5;   // 0x0088(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FColor>                         Colors_43_4E0718F04515F46D64C37EB9767B1607;        // 0x00B8(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSUiEnvironmentProperty) == 0x000008, "Wrong alignment on FSUiEnvironmentProperty");
static_assert(sizeof(FSUiEnvironmentProperty) == 0x0000C8, "Wrong size on FSUiEnvironmentProperty");
static_assert(offsetof(FSUiEnvironmentProperty, IconFrame_18_A9EAC4584D190F873B8F7E89AF008D22) == 0x000000, "Member 'FSUiEnvironmentProperty::IconFrame_18_A9EAC4584D190F873B8F7E89AF008D22' has a wrong offset!");
static_assert(offsetof(FSUiEnvironmentProperty, Icon_5_A2C3EB414E77EF5C24971D8A233A8C36) == 0x000020, "Member 'FSUiEnvironmentProperty::Icon_5_A2C3EB414E77EF5C24971D8A233A8C36' has a wrong offset!");
static_assert(offsetof(FSUiEnvironmentProperty, IconFull_28_6A2691024E39B23E183A08B1B1E93E1B) == 0x000040, "Member 'FSUiEnvironmentProperty::IconFull_28_6A2691024E39B23E183A08B1B1E93E1B' has a wrong offset!");
static_assert(offsetof(FSUiEnvironmentProperty, WarningPercent_39_C6C752C04F7AD4CF53E4FF8974775F02) == 0x000060, "Member 'FSUiEnvironmentProperty::WarningPercent_39_C6C752C04F7AD4CF53E4FF8974775F02' has a wrong offset!");
static_assert(offsetof(FSUiEnvironmentProperty, BgColors_35_9BDBDC0E491DF957C68F0BB2B35C0137) == 0x000068, "Member 'FSUiEnvironmentProperty::BgColors_35_9BDBDC0E491DF957C68F0BB2B35C0137' has a wrong offset!");
static_assert(offsetof(FSUiEnvironmentProperty, BarColors_36_CB446A534C823A7AA40C44BFE9702B1C) == 0x000078, "Member 'FSUiEnvironmentProperty::BarColors_36_CB446A534C823A7AA40C44BFE9702B1C' has a wrong offset!");
static_assert(offsetof(FSUiEnvironmentProperty, SceneEffect_24_85A89F414CB1A4C872F427B995DB02A5) == 0x000088, "Member 'FSUiEnvironmentProperty::SceneEffect_24_85A89F414CB1A4C872F427B995DB02A5' has a wrong offset!");
static_assert(offsetof(FSUiEnvironmentProperty, Colors_43_4E0718F04515F46D64C37EB9767B1607) == 0x0000B8, "Member 'FSUiEnvironmentProperty::Colors_43_4E0718F04515F46D64C37EB9767B1607' has a wrong offset!");

}

