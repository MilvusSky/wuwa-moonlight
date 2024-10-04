#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSceneInteractionTags

#include "Basic.hpp"

#include "SSceneInteractionMaterialController_structs.hpp"
#include "SSceneInteractionitemIndestructibleEffectsParameters_structs.hpp"
#include "SSceneInteractionSequence_structs.hpp"
#include "SSceneInteractionAudio_structs.hpp"


namespace SDK
{

// UserDefinedStruct SSceneInteractionTags.SSceneInteractionTags
// 0x00A0 (0x00A0 - 0x0000)
struct FSSceneInteractionTags final
{
public:
	TArray<class ABP_EffectActor_C*>              Effects_89_54B6DE4441F3AEADA2B6158A3CE7A73A;       // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                         Actors_104_3CB998D844868816DFA499A2D346ED92;       // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                         HideActors_105_0358E37C417F8434637F2882B09FAA0A;   // 0x0020(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FSSceneInteractionMaterialController> MaterialControllers_50_0EBC035B4225A706D705E986C7C02F96; // 0x0030(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSSceneInteractionitemIndestructibleEffectsParameters> IndestructibleEffectsParameters_82_B16BD5A64450652CED7731AF68D8E053; // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<class ABP_EffectActor_C*>              SpecilEffects_109_3EC410EE4031651ED9C2FA9991E4CB8F; // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FSSceneInteractionSequence             Sequence_113_26F27D934AAFE85F0AACF5B136256932;     // 0x0060(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_EffectActor_C*>              EndEffects_117_EF76CFDD4F0B4E2E07B636AA0B03EA3A;   // 0x0070(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FSSceneInteractionAudio                AkEvent_125_7879183C4C0DC27CD1AFB7A4C9432BC3;      // 0x0080(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ADestructibleActor*>             DestructibleActors_129_305813044966887DDDDCAA843C2C5D04; // 0x0090(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
};
static_assert(alignof(FSSceneInteractionTags) == 0x000008, "Wrong alignment on FSSceneInteractionTags");
static_assert(sizeof(FSSceneInteractionTags) == 0x0000A0, "Wrong size on FSSceneInteractionTags");
static_assert(offsetof(FSSceneInteractionTags, Effects_89_54B6DE4441F3AEADA2B6158A3CE7A73A) == 0x000000, "Member 'FSSceneInteractionTags::Effects_89_54B6DE4441F3AEADA2B6158A3CE7A73A' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, Actors_104_3CB998D844868816DFA499A2D346ED92) == 0x000010, "Member 'FSSceneInteractionTags::Actors_104_3CB998D844868816DFA499A2D346ED92' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, HideActors_105_0358E37C417F8434637F2882B09FAA0A) == 0x000020, "Member 'FSSceneInteractionTags::HideActors_105_0358E37C417F8434637F2882B09FAA0A' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, MaterialControllers_50_0EBC035B4225A706D705E986C7C02F96) == 0x000030, "Member 'FSSceneInteractionTags::MaterialControllers_50_0EBC035B4225A706D705E986C7C02F96' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, IndestructibleEffectsParameters_82_B16BD5A64450652CED7731AF68D8E053) == 0x000040, "Member 'FSSceneInteractionTags::IndestructibleEffectsParameters_82_B16BD5A64450652CED7731AF68D8E053' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, SpecilEffects_109_3EC410EE4031651ED9C2FA9991E4CB8F) == 0x000050, "Member 'FSSceneInteractionTags::SpecilEffects_109_3EC410EE4031651ED9C2FA9991E4CB8F' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, Sequence_113_26F27D934AAFE85F0AACF5B136256932) == 0x000060, "Member 'FSSceneInteractionTags::Sequence_113_26F27D934AAFE85F0AACF5B136256932' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, EndEffects_117_EF76CFDD4F0B4E2E07B636AA0B03EA3A) == 0x000070, "Member 'FSSceneInteractionTags::EndEffects_117_EF76CFDD4F0B4E2E07B636AA0B03EA3A' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, AkEvent_125_7879183C4C0DC27CD1AFB7A4C9432BC3) == 0x000080, "Member 'FSSceneInteractionTags::AkEvent_125_7879183C4C0DC27CD1AFB7A4C9432BC3' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionTags, DestructibleActors_129_305813044966887DDDDCAA843C2C5D04) == 0x000090, "Member 'FSSceneInteractionTags::DestructibleActors_129_305813044966887DDDDCAA843C2C5D04' has a wrong offset!");

}

