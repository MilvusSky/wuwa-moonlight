#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_RainConfig_CommonDrop

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SCommonRainSpawnerConfig_structs.hpp"
#include "Engine_classes.hpp"
#include "KuroCurve_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_RainConfig_CommonDrop.PDA_RainConfig_CommonDrop_C
// 0x0190 (0x01C8 - 0x0038)
class UPDA_RainConfig_CommonDrop_C final : public UPrimaryDataAsset
{
public:
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0038(0x0010)(Edit, BlueprintVisible)
	TArray<class UStaticMesh*>                    Meshes;                                            // 0x0048(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSCommonRainSpawnerConfig>      Spawners;                                          // 0x0058(0x0010)(Edit, BlueprintVisible)
	struct FVector                                Gravity;                                           // 0x0068(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Wind;                                              // 0x0074(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Drag;                                              // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKuroCurveFloat                        OpacityCurve;                                      // 0x0088(0x0090)(Edit, BlueprintVisible)
	struct FKuroCurveFloat                        StretchCurve;                                      // 0x0118(0x0090)(Edit, BlueprintVisible)
	float                                         CycleBoxX;                                         // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CycleBoxY;                                         // 0x01AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CycleBoxZ_Positive;                                // 0x01B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CycleBoxZ_Negative;                                // 0x01B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Niagara;                                           // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AudioEvent;                                        // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_RainConfig_CommonDrop_C">();
	}
	static class UPDA_RainConfig_CommonDrop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_RainConfig_CommonDrop_C>();
	}
};
static_assert(alignof(UPDA_RainConfig_CommonDrop_C) == 0x000008, "Wrong alignment on UPDA_RainConfig_CommonDrop_C");
static_assert(sizeof(UPDA_RainConfig_CommonDrop_C) == 0x0001C8, "Wrong size on UPDA_RainConfig_CommonDrop_C");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, Materials) == 0x000038, "Member 'UPDA_RainConfig_CommonDrop_C::Materials' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, Meshes) == 0x000048, "Member 'UPDA_RainConfig_CommonDrop_C::Meshes' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, Spawners) == 0x000058, "Member 'UPDA_RainConfig_CommonDrop_C::Spawners' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, Gravity) == 0x000068, "Member 'UPDA_RainConfig_CommonDrop_C::Gravity' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, Wind) == 0x000074, "Member 'UPDA_RainConfig_CommonDrop_C::Wind' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, Drag) == 0x000080, "Member 'UPDA_RainConfig_CommonDrop_C::Drag' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, OpacityCurve) == 0x000088, "Member 'UPDA_RainConfig_CommonDrop_C::OpacityCurve' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, StretchCurve) == 0x000118, "Member 'UPDA_RainConfig_CommonDrop_C::StretchCurve' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, CycleBoxX) == 0x0001A8, "Member 'UPDA_RainConfig_CommonDrop_C::CycleBoxX' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, CycleBoxY) == 0x0001AC, "Member 'UPDA_RainConfig_CommonDrop_C::CycleBoxY' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, CycleBoxZ_Positive) == 0x0001B0, "Member 'UPDA_RainConfig_CommonDrop_C::CycleBoxZ_Positive' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, CycleBoxZ_Negative) == 0x0001B4, "Member 'UPDA_RainConfig_CommonDrop_C::CycleBoxZ_Negative' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, Niagara) == 0x0001B8, "Member 'UPDA_RainConfig_CommonDrop_C::Niagara' has a wrong offset!");
static_assert(offsetof(UPDA_RainConfig_CommonDrop_C, AudioEvent) == 0x0001C0, "Member 'UPDA_RainConfig_CommonDrop_C::AudioEvent' has a wrong offset!");

}

