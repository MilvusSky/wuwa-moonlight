#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SAiAttributeRate

#include "Basic.hpp"

#include "EAttributeType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SAiAttributeRate.SAiAttributeRate
// 0x0014 (0x0014 - 0x0000)
struct FSAiAttributeRate final
{
public:
	EAttributeType                                Numerator_2_879CECAC4C2242972A16E48082373253;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttributeType                                Denominator_4_A5C33DA14A9006589C5057B0992CD995;    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFloatRange                            Range_7_0B0B5A33484A82C4743B49A6F8BE3937;          // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSAiAttributeRate) == 0x000004, "Wrong alignment on FSAiAttributeRate");
static_assert(sizeof(FSAiAttributeRate) == 0x000014, "Wrong size on FSAiAttributeRate");
static_assert(offsetof(FSAiAttributeRate, Numerator_2_879CECAC4C2242972A16E48082373253) == 0x000000, "Member 'FSAiAttributeRate::Numerator_2_879CECAC4C2242972A16E48082373253' has a wrong offset!");
static_assert(offsetof(FSAiAttributeRate, Denominator_4_A5C33DA14A9006589C5057B0992CD995) == 0x000001, "Member 'FSAiAttributeRate::Denominator_4_A5C33DA14A9006589C5057B0992CD995' has a wrong offset!");
static_assert(offsetof(FSAiAttributeRate, Range_7_0B0B5A33484A82C4743B49A6F8BE3937) == 0x000004, "Member 'FSAiAttributeRate::Range_7_0B0B5A33484A82C4743B49A6F8BE3937' has a wrong offset!");

}

