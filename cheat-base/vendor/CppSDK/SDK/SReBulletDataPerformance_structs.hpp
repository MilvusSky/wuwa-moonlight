#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SReBulletDataPerformance

#include "Basic.hpp"

#include "EBulletSpecificEffect_structs.hpp"
#include "EBulletHitEffect_structs.hpp"
#include "EBulletEffectParam_structs.hpp"
#include "SBulletEffectOnHitConf_structs.hpp"


namespace SDK
{

// UserDefinedStruct SReBulletDataPerformance.SReBulletDataPerformance
// 0x0248 (0x0248 - 0x0000)
struct FSReBulletDataPerformance final
{
public:
	bool                                          _K6P9_yH_80_9F7DC8A841D73FDC00EB84A17B1275EB;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UEffectModelBase>        P9yHDA_143_A4DDFA8A450DA7D112EF79BE7E6B44A4;       // 0x0008(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<EBulletEffectParam, class FString>       P9yHDA_p_104_CE1F47CD41F7F3190071198240B93A1E;     // 0x0038(0x0050)(Edit, BlueprintVisible)
	TMap<EBulletSpecificEffect, TSoftObjectPtr<class UObject>> Y_yHDA_135_0D42AB4E49CF93DC4D234D86F34B3E9C;       // 0x0088(0x0050)(Edit, BlueprintVisible)
	bool                                          P9____P9_byH_6_6D80C3BE42200534298A6C964FC0DDAF;   // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EBulletHitEffect, TSoftObjectPtr<class UObject>> _MinusyHDA_134_F879336F4BCA1C86C8E4009ECA210399;   // 0x00E0(0x0050)(Edit, BlueprintVisible)
	class FString                                 _Minus_H_146_CAFEF49A49D4D694CF8D7C911CB72A87;     // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   _______O_118_9935D0704581906CD143F4878CF41C47;     // 0x0140(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   _Minus_____O_76_DA091D584EDEB8543C02C1B7FD0DFBE4;  // 0x0170(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   _Minus_____O_77_9E34F7C7455CF6C4C40B0DA0A3203F85;  // 0x01A0(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   _Minus1______O_133_F3A8C1A34D99B6D841C2E4A229358EA3; // 0x01D0(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         _____p_27_10EF5EBC4E5B7C5410227AB80FD9EEEF;        // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _OsT0______111_D320AF2B4F133EF041676E9A7B8B6AD9;   // 0x0204(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205[0x3];                                      // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBulletEffectOnHitConf>        _MinusyHMn_142_0183F6F34279268BC0DB5BA431D0354C;   // 0x0208(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UPD_CharacterControllerData_C> _____149_0AEEAA7B423D48764A7A65AAD5452335;         // 0x0218(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FSReBulletDataPerformance) == 0x000008, "Wrong alignment on FSReBulletDataPerformance");
static_assert(sizeof(FSReBulletDataPerformance) == 0x000248, "Wrong size on FSReBulletDataPerformance");
static_assert(offsetof(FSReBulletDataPerformance, _K6P9_yH_80_9F7DC8A841D73FDC00EB84A17B1275EB) == 0x000000, "Member 'FSReBulletDataPerformance::_K6P9_yH_80_9F7DC8A841D73FDC00EB84A17B1275EB' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, P9yHDA_143_A4DDFA8A450DA7D112EF79BE7E6B44A4) == 0x000008, "Member 'FSReBulletDataPerformance::P9yHDA_143_A4DDFA8A450DA7D112EF79BE7E6B44A4' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, P9yHDA_p_104_CE1F47CD41F7F3190071198240B93A1E) == 0x000038, "Member 'FSReBulletDataPerformance::P9yHDA_p_104_CE1F47CD41F7F3190071198240B93A1E' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, Y_yHDA_135_0D42AB4E49CF93DC4D234D86F34B3E9C) == 0x000088, "Member 'FSReBulletDataPerformance::Y_yHDA_135_0D42AB4E49CF93DC4D234D86F34B3E9C' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, P9____P9_byH_6_6D80C3BE42200534298A6C964FC0DDAF) == 0x0000D8, "Member 'FSReBulletDataPerformance::P9____P9_byH_6_6D80C3BE42200534298A6C964FC0DDAF' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _MinusyHDA_134_F879336F4BCA1C86C8E4009ECA210399) == 0x0000E0, "Member 'FSReBulletDataPerformance::_MinusyHDA_134_F879336F4BCA1C86C8E4009ECA210399' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _Minus_H_146_CAFEF49A49D4D694CF8D7C911CB72A87) == 0x000130, "Member 'FSReBulletDataPerformance::_Minus_H_146_CAFEF49A49D4D694CF8D7C911CB72A87' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _______O_118_9935D0704581906CD143F4878CF41C47) == 0x000140, "Member 'FSReBulletDataPerformance::_______O_118_9935D0704581906CD143F4878CF41C47' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _Minus_____O_76_DA091D584EDEB8543C02C1B7FD0DFBE4) == 0x000170, "Member 'FSReBulletDataPerformance::_Minus_____O_76_DA091D584EDEB8543C02C1B7FD0DFBE4' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _Minus_____O_77_9E34F7C7455CF6C4C40B0DA0A3203F85) == 0x0001A0, "Member 'FSReBulletDataPerformance::_Minus_____O_77_9E34F7C7455CF6C4C40B0DA0A3203F85' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _Minus1______O_133_F3A8C1A34D99B6D841C2E4A229358EA3) == 0x0001D0, "Member 'FSReBulletDataPerformance::_Minus1______O_133_F3A8C1A34D99B6D841C2E4A229358EA3' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _____p_27_10EF5EBC4E5B7C5410227AB80FD9EEEF) == 0x000200, "Member 'FSReBulletDataPerformance::_____p_27_10EF5EBC4E5B7C5410227AB80FD9EEEF' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _OsT0______111_D320AF2B4F133EF041676E9A7B8B6AD9) == 0x000204, "Member 'FSReBulletDataPerformance::_OsT0______111_D320AF2B4F133EF041676E9A7B8B6AD9' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _MinusyHMn_142_0183F6F34279268BC0DB5BA431D0354C) == 0x000208, "Member 'FSReBulletDataPerformance::_MinusyHMn_142_0183F6F34279268BC0DB5BA431D0354C' has a wrong offset!");
static_assert(offsetof(FSReBulletDataPerformance, _____149_0AEEAA7B423D48764A7A65AAD5452335) == 0x000218, "Member 'FSReBulletDataPerformance::_____149_0AEEAA7B423D48764A7A65AAD5452335' has a wrong offset!");

}

