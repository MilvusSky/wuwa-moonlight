#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SQuest

#include "Basic.hpp"

#include "EQuestType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SQuest.SQuest
// 0x0028 (0x0028 - 0x0000)
struct FSQuest final
{
public:
	int32                                         ID_56_0FF0336441941D8CDD474BB0C0F6A03D;            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _____53_59AED228401FF0B93173EFAFF65F6618;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 __KEY_48_AD95229F4164D1C78B215B96E79700D1;         // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EQuestType                                    _____21_D2AB5BD943FE39E0B57CB583308EC876;          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____43_67F5ED074F81A6051829C9BACE8B58CD;          // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ____24_7B4C96A243CDF65C6B8CEC8ACE19E7D6;           // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _____o_52_AD80EB174F1FBA9BA40A27A2DB308228;        // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __T__51_623231A7452FAC803B3879BD2857FFEC;          // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSQuest) == 0x000008, "Wrong alignment on FSQuest");
static_assert(sizeof(FSQuest) == 0x000028, "Wrong size on FSQuest");
static_assert(offsetof(FSQuest, ID_56_0FF0336441941D8CDD474BB0C0F6A03D) == 0x000000, "Member 'FSQuest::ID_56_0FF0336441941D8CDD474BB0C0F6A03D' has a wrong offset!");
static_assert(offsetof(FSQuest, _____53_59AED228401FF0B93173EFAFF65F6618) == 0x000004, "Member 'FSQuest::_____53_59AED228401FF0B93173EFAFF65F6618' has a wrong offset!");
static_assert(offsetof(FSQuest, __KEY_48_AD95229F4164D1C78B215B96E79700D1) == 0x000008, "Member 'FSQuest::__KEY_48_AD95229F4164D1C78B215B96E79700D1' has a wrong offset!");
static_assert(offsetof(FSQuest, _____21_D2AB5BD943FE39E0B57CB583308EC876) == 0x000018, "Member 'FSQuest::_____21_D2AB5BD943FE39E0B57CB583308EC876' has a wrong offset!");
static_assert(offsetof(FSQuest, _____43_67F5ED074F81A6051829C9BACE8B58CD) == 0x000019, "Member 'FSQuest::_____43_67F5ED074F81A6051829C9BACE8B58CD' has a wrong offset!");
static_assert(offsetof(FSQuest, ____24_7B4C96A243CDF65C6B8CEC8ACE19E7D6) == 0x00001A, "Member 'FSQuest::____24_7B4C96A243CDF65C6B8CEC8ACE19E7D6' has a wrong offset!");
static_assert(offsetof(FSQuest, _____o_52_AD80EB174F1FBA9BA40A27A2DB308228) == 0x00001C, "Member 'FSQuest::_____o_52_AD80EB174F1FBA9BA40A27A2DB308228' has a wrong offset!");
static_assert(offsetof(FSQuest, __T__51_623231A7452FAC803B3879BD2857FFEC) == 0x000020, "Member 'FSQuest::__T__51_623231A7452FAC803B3879BD2857FFEC' has a wrong offset!");

}

