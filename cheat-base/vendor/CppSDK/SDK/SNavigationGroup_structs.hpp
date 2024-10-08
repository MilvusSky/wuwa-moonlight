#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SNavigationGroup

#include "Basic.hpp"

#include "LGUI_structs.hpp"


namespace SDK
{

// UserDefinedStruct SNavigationGroup.SNavigationGroup
// 0x00C8 (0x00C8 - 0x0000)
struct FSNavigationGroup final
{
public:
	class FString                                 GroupName_5_4A4352724F4FB7DCAC7B1E99DB409163;      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         GroupType_34_CF445B0640A4DABDD990CDB2BA9ADE72;     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PrevGroupName_2_C3E8149D474A89D8206FA2B12E32529D;  // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 NextGroupName_6_084CCE4C42A106023371A99997D409D6;  // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InsideGroupName_55_A0683A7F4A1938CD21B3979FF0F50E22; // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            GroupNameMap_69_4D6B03A64DE54000AE4B2D8DEE5F6B23;  // 0x0048(0x0050)(Edit, BlueprintVisible)
	EUINavigationWrapMode                         HorizontalWrapMode_26_49A03601465F8B9BB2322B83A19E0BD4; // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUINavigationPriorityMode                     HorizontalPriorityMode_23_5BE26BB043F38B37D3377FA0A3265698; // 0x0099(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUINavigationWrapMode                         VerticalWrapMode_27_F70C67404D65D80542040BBD7132C225; // 0x009A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUINavigationPriorityMode                     VerticalPriorityMode_24_E268C647431089CCF97AC3BA9E2DB824; // 0x009B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SelectableMemory_49_B4EED11F416769180DC1539CA5AAC7AC; // 0x009C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AllowNavigationInSelfDynamic_58_B0CB45D44CCE272844B17F84E032F4B3; // 0x009D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTsUiNavigationBehaviorListener_C*> ListenerList_45_EAA9FC4F4D58ACE6FB6D34AA29398B77;  // 0x00A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UTsUiNavigationBehaviorListener_C*      LastSelectListener_52_2296EA704FCC240B8822DBA749E6FD16; // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTsUiNavigationBehaviorListener_C*      DefaultListener_61_4BC594C344FB04899405DCADA412E415; // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RefreshNavigation_71_063A142F4E9EE8A94E59478317E22ADE; // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSNavigationGroup) == 0x000008, "Wrong alignment on FSNavigationGroup");
static_assert(sizeof(FSNavigationGroup) == 0x0000C8, "Wrong size on FSNavigationGroup");
static_assert(offsetof(FSNavigationGroup, GroupName_5_4A4352724F4FB7DCAC7B1E99DB409163) == 0x000000, "Member 'FSNavigationGroup::GroupName_5_4A4352724F4FB7DCAC7B1E99DB409163' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, GroupType_34_CF445B0640A4DABDD990CDB2BA9ADE72) == 0x000010, "Member 'FSNavigationGroup::GroupType_34_CF445B0640A4DABDD990CDB2BA9ADE72' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, PrevGroupName_2_C3E8149D474A89D8206FA2B12E32529D) == 0x000018, "Member 'FSNavigationGroup::PrevGroupName_2_C3E8149D474A89D8206FA2B12E32529D' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, NextGroupName_6_084CCE4C42A106023371A99997D409D6) == 0x000028, "Member 'FSNavigationGroup::NextGroupName_6_084CCE4C42A106023371A99997D409D6' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, InsideGroupName_55_A0683A7F4A1938CD21B3979FF0F50E22) == 0x000038, "Member 'FSNavigationGroup::InsideGroupName_55_A0683A7F4A1938CD21B3979FF0F50E22' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, GroupNameMap_69_4D6B03A64DE54000AE4B2D8DEE5F6B23) == 0x000048, "Member 'FSNavigationGroup::GroupNameMap_69_4D6B03A64DE54000AE4B2D8DEE5F6B23' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, HorizontalWrapMode_26_49A03601465F8B9BB2322B83A19E0BD4) == 0x000098, "Member 'FSNavigationGroup::HorizontalWrapMode_26_49A03601465F8B9BB2322B83A19E0BD4' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, HorizontalPriorityMode_23_5BE26BB043F38B37D3377FA0A3265698) == 0x000099, "Member 'FSNavigationGroup::HorizontalPriorityMode_23_5BE26BB043F38B37D3377FA0A3265698' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, VerticalWrapMode_27_F70C67404D65D80542040BBD7132C225) == 0x00009A, "Member 'FSNavigationGroup::VerticalWrapMode_27_F70C67404D65D80542040BBD7132C225' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, VerticalPriorityMode_24_E268C647431089CCF97AC3BA9E2DB824) == 0x00009B, "Member 'FSNavigationGroup::VerticalPriorityMode_24_E268C647431089CCF97AC3BA9E2DB824' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, SelectableMemory_49_B4EED11F416769180DC1539CA5AAC7AC) == 0x00009C, "Member 'FSNavigationGroup::SelectableMemory_49_B4EED11F416769180DC1539CA5AAC7AC' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, AllowNavigationInSelfDynamic_58_B0CB45D44CCE272844B17F84E032F4B3) == 0x00009D, "Member 'FSNavigationGroup::AllowNavigationInSelfDynamic_58_B0CB45D44CCE272844B17F84E032F4B3' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, ListenerList_45_EAA9FC4F4D58ACE6FB6D34AA29398B77) == 0x0000A0, "Member 'FSNavigationGroup::ListenerList_45_EAA9FC4F4D58ACE6FB6D34AA29398B77' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, LastSelectListener_52_2296EA704FCC240B8822DBA749E6FD16) == 0x0000B0, "Member 'FSNavigationGroup::LastSelectListener_52_2296EA704FCC240B8822DBA749E6FD16' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, DefaultListener_61_4BC594C344FB04899405DCADA412E415) == 0x0000B8, "Member 'FSNavigationGroup::DefaultListener_61_4BC594C344FB04899405DCADA412E415' has a wrong offset!");
static_assert(offsetof(FSNavigationGroup, RefreshNavigation_71_063A142F4E9EE8A94E59478317E22ADE) == 0x0000C0, "Member 'FSNavigationGroup::RefreshNavigation_71_063A142F4E9EE8A94E59478317E22ADE' has a wrong offset!");

}

