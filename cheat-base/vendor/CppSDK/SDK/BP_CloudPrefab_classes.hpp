#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CloudPrefab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CloudPrefab.BP_CloudPrefab_C
// 0x00F0 (0x03B0 - 0x02C0)
class ABP_CloudPrefab_C : public AKuroCloudPrefabActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Mountain;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cloud_BigShape;                                    // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cloud_Cover;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cloud_Top;                                         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               CloudColorMap;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture*                               CloudMaskMap;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ChangeSpeed;                                       // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         CloudRotateSpeed;                                  // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Change;                                            // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Stop;                                              // 0x030D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Farward;                                           // 0x030E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30F[0x1];                                      // 0x030F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       DMI;                                               // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Delta_Seconds;                                     // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TimerInit;                                         // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ColoredCloud_;                                     // 0x0325(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_326[0x2];                                      // 0x0326(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CloudSaturation;                                   // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentOpacity___Plus9___;                         // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Top;                                           // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Cover;                                         // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Anomalies;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_BigShape;                                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Mountain;                                      // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloudInitialZAngle;                                // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdatePerFourFrame01;                              // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UpdatePerFourFrame02;                              // 0x035D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SetCoverMaterial;                                  // 0x035E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35F[0x1];                                      // 0x035F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Cloud_Cover_Material;                              // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TransSortNumber;                                   // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           MeshArray;                                         // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>       DMIArray;                                          // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Random;                                            // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Trans;                                             // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         SDFTime;                                           // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CloudPrefab(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void EditorTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Active();
	void Hidden();
	void AddCloudRotation();
	void Timer(bool Forward, float DeltaTime, float Speed, float* Time_0, bool* Stop_0);
	void CloudInitial();
	void Single_Cloud_Parameters_Initial(class UMaterialInstanceDynamic* DMI_0, class UStaticMeshComponent* Mesh, const struct FCloudParameters& CloudStructParameter, int32 TransSortNumber_0);
	void UpdatePerFourFrame();
	void Single_Building_Parameters_Initial(class UMaterialInstanceDynamic* DMI_0, class UStaticMeshComponent* Mesh, const struct FAnomaliesParameters& CloudStructParameter, int32 TransSortNumber_0);
	void Single_POICloud_Parameters_Initial(class UMaterialInstanceDynamic* DMI_0, class UStaticMeshComponent* Mesh, const struct FPOICloudParameters& CloudStructParameter, int32 TransSortNumber_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CloudPrefab_C">();
	}
	static class ABP_CloudPrefab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CloudPrefab_C>();
	}
};
static_assert(alignof(ABP_CloudPrefab_C) == 0x000008, "Wrong alignment on ABP_CloudPrefab_C");
static_assert(sizeof(ABP_CloudPrefab_C) == 0x0003B0, "Wrong size on ABP_CloudPrefab_C");
static_assert(offsetof(ABP_CloudPrefab_C, UberGraphFrame) == 0x0002C0, "Member 'ABP_CloudPrefab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Mountain) == 0x0002C8, "Member 'ABP_CloudPrefab_C::Mountain' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Cloud_BigShape) == 0x0002D0, "Member 'ABP_CloudPrefab_C::Cloud_BigShape' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Cloud_Cover) == 0x0002D8, "Member 'ABP_CloudPrefab_C::Cloud_Cover' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Cloud_Top) == 0x0002E0, "Member 'ABP_CloudPrefab_C::Cloud_Top' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DefaultSceneRoot) == 0x0002E8, "Member 'ABP_CloudPrefab_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, CloudColorMap) == 0x0002F0, "Member 'ABP_CloudPrefab_C::CloudColorMap' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, CloudMaskMap) == 0x0002F8, "Member 'ABP_CloudPrefab_C::CloudMaskMap' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, ChangeSpeed) == 0x000300, "Member 'ABP_CloudPrefab_C::ChangeSpeed' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, CloudRotateSpeed) == 0x000304, "Member 'ABP_CloudPrefab_C::CloudRotateSpeed' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Time) == 0x000308, "Member 'ABP_CloudPrefab_C::Time' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Change) == 0x00030C, "Member 'ABP_CloudPrefab_C::Change' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Stop) == 0x00030D, "Member 'ABP_CloudPrefab_C::Stop' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Farward) == 0x00030E, "Member 'ABP_CloudPrefab_C::Farward' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DMI) == 0x000310, "Member 'ABP_CloudPrefab_C::DMI' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Delta_Seconds) == 0x000320, "Member 'ABP_CloudPrefab_C::Delta_Seconds' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, TimerInit) == 0x000324, "Member 'ABP_CloudPrefab_C::TimerInit' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, ColoredCloud_) == 0x000325, "Member 'ABP_CloudPrefab_C::ColoredCloud_' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, CloudSaturation) == 0x000328, "Member 'ABP_CloudPrefab_C::CloudSaturation' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, CurrentOpacity___Plus9___) == 0x00032C, "Member 'ABP_CloudPrefab_C::CurrentOpacity___Plus9___' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DMI_Top) == 0x000330, "Member 'ABP_CloudPrefab_C::DMI_Top' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DMI_Cover) == 0x000338, "Member 'ABP_CloudPrefab_C::DMI_Cover' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DMI_Anomalies) == 0x000340, "Member 'ABP_CloudPrefab_C::DMI_Anomalies' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DMI_BigShape) == 0x000348, "Member 'ABP_CloudPrefab_C::DMI_BigShape' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DMI_Mountain) == 0x000350, "Member 'ABP_CloudPrefab_C::DMI_Mountain' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, CloudInitialZAngle) == 0x000358, "Member 'ABP_CloudPrefab_C::CloudInitialZAngle' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, UpdatePerFourFrame01) == 0x00035C, "Member 'ABP_CloudPrefab_C::UpdatePerFourFrame01' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, UpdatePerFourFrame02) == 0x00035D, "Member 'ABP_CloudPrefab_C::UpdatePerFourFrame02' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, SetCoverMaterial) == 0x00035E, "Member 'ABP_CloudPrefab_C::SetCoverMaterial' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Cloud_Cover_Material) == 0x000360, "Member 'ABP_CloudPrefab_C::Cloud_Cover_Material' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, TransSortNumber) == 0x000368, "Member 'ABP_CloudPrefab_C::TransSortNumber' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, MeshArray) == 0x000370, "Member 'ABP_CloudPrefab_C::MeshArray' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, DMIArray) == 0x000380, "Member 'ABP_CloudPrefab_C::DMIArray' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Random) == 0x000390, "Member 'ABP_CloudPrefab_C::Random' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, Trans) == 0x000398, "Member 'ABP_CloudPrefab_C::Trans' has a wrong offset!");
static_assert(offsetof(ABP_CloudPrefab_C, SDFTime) == 0x0003A8, "Member 'ABP_CloudPrefab_C::SDFTime' has a wrong offset!");

}

