#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SReBulletDataScale

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SReBulletDataScale.SReBulletDataScale
// 0x0020 (0x0020 - 0x0000)
struct FSReBulletDataScale final
{
public:
	struct FVector                                _____7_06C9B76548AE06E63683EBB72FF80B72;           // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveVector*                           _______3_4F35AFEE45D6789ED2FD4FA147E399A1;         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Y_b__s_10_627DC635472F7D10349AA6872BE92D28;        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSReBulletDataScale) == 0x000008, "Wrong alignment on FSReBulletDataScale");
static_assert(sizeof(FSReBulletDataScale) == 0x000020, "Wrong size on FSReBulletDataScale");
static_assert(offsetof(FSReBulletDataScale, _____7_06C9B76548AE06E63683EBB72FF80B72) == 0x000000, "Member 'FSReBulletDataScale::_____7_06C9B76548AE06E63683EBB72FF80B72' has a wrong offset!");
static_assert(offsetof(FSReBulletDataScale, _______3_4F35AFEE45D6789ED2FD4FA147E399A1) == 0x000010, "Member 'FSReBulletDataScale::_______3_4F35AFEE45D6789ED2FD4FA147E399A1' has a wrong offset!");
static_assert(offsetof(FSReBulletDataScale, Y_b__s_10_627DC635472F7D10349AA6872BE92D28) == 0x000018, "Member 'FSReBulletDataScale::Y_b__s_10_627DC635472F7D10349AA6872BE92D28' has a wrong offset!");

}

