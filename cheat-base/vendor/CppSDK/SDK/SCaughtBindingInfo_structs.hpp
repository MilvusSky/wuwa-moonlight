#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCaughtBindingInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ECaughtDirectionType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCaughtBindingInfo.SCaughtBindingInfo
// 0x00C0 (0x00C0 - 0x0000)
struct FSCaughtBindingInfo final
{
public:
	class FString                                 BulletId_2_2CA5CFE9470CB9353F5FB2A8C8F2F78F;       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          DestroyBullet_5_4D0F22CD44415E2F354884880351D2EB;  // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SummonChildBullet_7_61E98A3A49FC1E386BA199A21D7071ED; // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EndBulletId_10_7E5B1F194A0A6E24AA768EA576D26148;   // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TargetMontagePath_12_2AF7BCFE4FDC3E0C29F1FF869BE83BF2; // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TargetBoneName_14_FE60CABE4193074491DFC9A473A61438; // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ECaughtDirectionType                          CaughtDirectionType_26_B3F8B3144AEDC8FF425FEFAEA5334ED1; // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ECollisionChannel, ECollisionResponse>   CollisionResponseToChannel_30_AA307783431D752DB30D2A8F2C75CB31; // 0x0050(0x0050)(Edit, BlueprintVisible)
	TArray<int64>                                 SourceBuffIds_23_E2C1618140159001D3EDDFBA33A70597; // 0x00A0(0x0010)(Edit, BlueprintVisible)
	TArray<int64>                                 TargetBuffIds_25_094B68284AF1F56D06A215867B8CE4E2; // 0x00B0(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSCaughtBindingInfo) == 0x000008, "Wrong alignment on FSCaughtBindingInfo");
static_assert(sizeof(FSCaughtBindingInfo) == 0x0000C0, "Wrong size on FSCaughtBindingInfo");
static_assert(offsetof(FSCaughtBindingInfo, BulletId_2_2CA5CFE9470CB9353F5FB2A8C8F2F78F) == 0x000000, "Member 'FSCaughtBindingInfo::BulletId_2_2CA5CFE9470CB9353F5FB2A8C8F2F78F' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, DestroyBullet_5_4D0F22CD44415E2F354884880351D2EB) == 0x000010, "Member 'FSCaughtBindingInfo::DestroyBullet_5_4D0F22CD44415E2F354884880351D2EB' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, SummonChildBullet_7_61E98A3A49FC1E386BA199A21D7071ED) == 0x000011, "Member 'FSCaughtBindingInfo::SummonChildBullet_7_61E98A3A49FC1E386BA199A21D7071ED' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, EndBulletId_10_7E5B1F194A0A6E24AA768EA576D26148) == 0x000018, "Member 'FSCaughtBindingInfo::EndBulletId_10_7E5B1F194A0A6E24AA768EA576D26148' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, TargetMontagePath_12_2AF7BCFE4FDC3E0C29F1FF869BE83BF2) == 0x000028, "Member 'FSCaughtBindingInfo::TargetMontagePath_12_2AF7BCFE4FDC3E0C29F1FF869BE83BF2' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, TargetBoneName_14_FE60CABE4193074491DFC9A473A61438) == 0x000038, "Member 'FSCaughtBindingInfo::TargetBoneName_14_FE60CABE4193074491DFC9A473A61438' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, CaughtDirectionType_26_B3F8B3144AEDC8FF425FEFAEA5334ED1) == 0x000048, "Member 'FSCaughtBindingInfo::CaughtDirectionType_26_B3F8B3144AEDC8FF425FEFAEA5334ED1' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, CollisionResponseToChannel_30_AA307783431D752DB30D2A8F2C75CB31) == 0x000050, "Member 'FSCaughtBindingInfo::CollisionResponseToChannel_30_AA307783431D752DB30D2A8F2C75CB31' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, SourceBuffIds_23_E2C1618140159001D3EDDFBA33A70597) == 0x0000A0, "Member 'FSCaughtBindingInfo::SourceBuffIds_23_E2C1618140159001D3EDDFBA33A70597' has a wrong offset!");
static_assert(offsetof(FSCaughtBindingInfo, TargetBuffIds_25_094B68284AF1F56D06A215867B8CE4E2) == 0x0000B0, "Member 'FSCaughtBindingInfo::TargetBuffIds_25_094B68284AF1F56D06A215867B8CE4E2' has a wrong offset!");

}

