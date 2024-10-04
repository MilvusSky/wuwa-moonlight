#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SGEData

#include "Basic.hpp"

#include "SFloatPayload_structs.hpp"


namespace SDK
{

// UserDefinedStruct SGEData.SGEData
// 0x0040 (0x0040 - 0x0000)
struct FSGEData final
{
public:
	class FName                                   GEName_33_CD20134B4FF965FE4A0C15B8FCEB7C50;        // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Comment_35_12ED30B04010F417FA4E43B006B5B501;       // 0x0010(0x0018)(Edit, BlueprintVisible)
	class UClass*                                 GE_14_BF5BCF984BDC9A36087EA18C18100D60;            // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSFloatPayload>                 Payload_30_F73C06A2417500FD22519DB42CBF340C;       // 0x0030(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSGEData) == 0x000008, "Wrong alignment on FSGEData");
static_assert(sizeof(FSGEData) == 0x000040, "Wrong size on FSGEData");
static_assert(offsetof(FSGEData, GEName_33_CD20134B4FF965FE4A0C15B8FCEB7C50) == 0x000000, "Member 'FSGEData::GEName_33_CD20134B4FF965FE4A0C15B8FCEB7C50' has a wrong offset!");
static_assert(offsetof(FSGEData, Comment_35_12ED30B04010F417FA4E43B006B5B501) == 0x000010, "Member 'FSGEData::Comment_35_12ED30B04010F417FA4E43B006B5B501' has a wrong offset!");
static_assert(offsetof(FSGEData, GE_14_BF5BCF984BDC9A36087EA18C18100D60) == 0x000028, "Member 'FSGEData::GE_14_BF5BCF984BDC9A36087EA18C18100D60' has a wrong offset!");
static_assert(offsetof(FSGEData, Payload_30_F73C06A2417500FD22519DB42CBF340C) == 0x000030, "Member 'FSGEData::Payload_30_F73C06A2417500FD22519DB42CBF340C' has a wrong offset!");

}

