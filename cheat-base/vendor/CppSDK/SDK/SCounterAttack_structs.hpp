#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCounterAttack

#include "Basic.hpp"

#include "SCounterAttackBuff_structs.hpp"
#include "SCounterAttackEffect_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCounterAttack.SCounterAttack
// 0x03E0 (0x03E0 - 0x0000)
struct FSCounterAttack final
{
public:
	TArray<class FName>                           Nine__M_71_BE8FD36F4A493484450B19BC73EDC7FD;       // 0x0000(0x0010)(Edit, BlueprintVisible)
	struct FSCounterAttackEffect                  _9___H__48_6BA4BD5340721A8BC381B7985973F481;       // 0x0010(0x01C0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSCounterAttackEffect                  _9___H__51_B1D03EC34BA6773FAF72939D97EAE31F;       // 0x01D0(0x01C0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         J____10_5FFEA61B4A6822B406F1E7AB634133B4;          // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______12_B1E9072B4B14DF443199C8A0B257C149;        // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____9__14_9C54863B4F28F6D8229137908D84F815;        // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39C[0x4];                                      // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         _9____BuffID_52_3FD017324758D15AA7A88E8DDDF8F266;  // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         _____BuffID_53_BCC3A4494643E23E0CBC8F8A2EE6977F;   // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____eBuff_K_40_B75D26CA4B24DAB1F5CBF39BB2321401;  // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSCounterAttackBuff>            _KBuff_h_57_5CD865994F901D76CB1C488EE5222C44;      // 0x03B8(0x0010)(Edit, BlueprintVisible)
	int64                                         ANS___9___H_BuffID_60_BB7B172C4B0C23B10BAFB89E83C222A2; // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ____Tag_64_73DE9EC74B7E952793F7B38D76B33642;       // 0x03D0(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          QTE9__e_____K_74_B746849148775FB528669BA90AEF4AB6; // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSCounterAttack) == 0x000008, "Wrong alignment on FSCounterAttack");
static_assert(sizeof(FSCounterAttack) == 0x0003E0, "Wrong size on FSCounterAttack");
static_assert(offsetof(FSCounterAttack, Nine__M_71_BE8FD36F4A493484450B19BC73EDC7FD) == 0x000000, "Member 'FSCounterAttack::Nine__M_71_BE8FD36F4A493484450B19BC73EDC7FD' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, _9___H__48_6BA4BD5340721A8BC381B7985973F481) == 0x000010, "Member 'FSCounterAttack::_9___H__48_6BA4BD5340721A8BC381B7985973F481' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, _9___H__51_B1D03EC34BA6773FAF72939D97EAE31F) == 0x0001D0, "Member 'FSCounterAttack::_9___H__51_B1D03EC34BA6773FAF72939D97EAE31F' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, J____10_5FFEA61B4A6822B406F1E7AB634133B4) == 0x000390, "Member 'FSCounterAttack::J____10_5FFEA61B4A6822B406F1E7AB634133B4' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, _______12_B1E9072B4B14DF443199C8A0B257C149) == 0x000394, "Member 'FSCounterAttack::_______12_B1E9072B4B14DF443199C8A0B257C149' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, ____9__14_9C54863B4F28F6D8229137908D84F815) == 0x000398, "Member 'FSCounterAttack::____9__14_9C54863B4F28F6D8229137908D84F815' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, _9____BuffID_52_3FD017324758D15AA7A88E8DDDF8F266) == 0x0003A0, "Member 'FSCounterAttack::_9____BuffID_52_3FD017324758D15AA7A88E8DDDF8F266' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, _____BuffID_53_BCC3A4494643E23E0CBC8F8A2EE6977F) == 0x0003A8, "Member 'FSCounterAttack::_____BuffID_53_BCC3A4494643E23E0CBC8F8A2EE6977F' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, _____eBuff_K_40_B75D26CA4B24DAB1F5CBF39BB2321401) == 0x0003B0, "Member 'FSCounterAttack::_____eBuff_K_40_B75D26CA4B24DAB1F5CBF39BB2321401' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, _KBuff_h_57_5CD865994F901D76CB1C488EE5222C44) == 0x0003B8, "Member 'FSCounterAttack::_KBuff_h_57_5CD865994F901D76CB1C488EE5222C44' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, ANS___9___H_BuffID_60_BB7B172C4B0C23B10BAFB89E83C222A2) == 0x0003C8, "Member 'FSCounterAttack::ANS___9___H_BuffID_60_BB7B172C4B0C23B10BAFB89E83C222A2' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, ____Tag_64_73DE9EC74B7E952793F7B38D76B33642) == 0x0003D0, "Member 'FSCounterAttack::____Tag_64_73DE9EC74B7E952793F7B38D76B33642' has a wrong offset!");
static_assert(offsetof(FSCounterAttack, QTE9__e_____K_74_B746849148775FB528669BA90AEF4AB6) == 0x0003DC, "Member 'FSCounterAttack::QTE9__e_____K_74_B746849148775FB528669BA90AEF4AB6' has a wrong offset!");

}

