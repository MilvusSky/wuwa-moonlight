#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterRenderingFunctionLibrary

#include "Basic.hpp"

#include "BP_CharacterRenderingFunctionLibrary_classes.hpp"
#include "BP_CharacterRenderingFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.QuickInitAndAddData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*               SkeletalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_CharacterControllerData_C*    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::QuickInitAndAddData(class ASkeletalMeshActor* SkeletalMesh, class UPD_CharacterControllerData_C* Data, class UObject* __WorldContext, float* HandleId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "QuickInitAndAddData");

	Params::BP_CharacterRenderingFunctionLibrary_C_QuickInitAndAddData Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.RemoveMaterialControllerData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*               SkeletalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::RemoveMaterialControllerData(class ASkeletalMeshActor* SkeletalMesh, float HandleId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "RemoveMaterialControllerData");

	Params::BP_CharacterRenderingFunctionLibrary_C_RemoveMaterialControllerData Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.HandleId = HandleId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.QuickInitAndAddDataGroup
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*               SkeletalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_CharacterControllerDataGroup_C*Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::QuickInitAndAddDataGroup(class ASkeletalMeshActor* SkeletalMesh, class UPD_CharacterControllerDataGroup_C* Data, class UObject* __WorldContext, float* HandleId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "QuickInitAndAddDataGroup");

	Params::BP_CharacterRenderingFunctionLibrary_C_QuickInitAndAddDataGroup Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.QuickInitAndAddData_BP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_CharacterControllerData_C*    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::QuickInitAndAddData_BP(class ATsBaseCharacter_C* Character, class UPD_CharacterControllerData_C* Data, class UObject* __WorldContext, float* HandleId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "QuickInitAndAddData_BP");

	Params::BP_CharacterRenderingFunctionLibrary_C_QuickInitAndAddData_BP Parms{};

	Parms.Character = Character;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.RemoveMaterialControllerDataGroup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*               SkeletalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::RemoveMaterialControllerDataGroup(class ASkeletalMeshActor* SkeletalMesh, float HandleId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "RemoveMaterialControllerDataGroup");

	Params::BP_CharacterRenderingFunctionLibrary_C_RemoveMaterialControllerDataGroup Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.HandleId = HandleId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.RemoveMaterialControllerData_BP
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::RemoveMaterialControllerData_BP(class ATsBaseCharacter_C* Character, float HandleId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "RemoveMaterialControllerData_BP");

	Params::BP_CharacterRenderingFunctionLibrary_C_RemoveMaterialControllerData_BP Parms{};

	Parms.Character = Character;
	Parms.HandleId = HandleId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.QuickInitAndAddDataGroup_BP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_CharacterControllerDataGroup_C*Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::QuickInitAndAddDataGroup_BP(class ATsBaseCharacter_C* Character, class UPD_CharacterControllerDataGroup_C* Data, class UObject* __WorldContext, float* HandleId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "QuickInitAndAddDataGroup_BP");

	Params::BP_CharacterRenderingFunctionLibrary_C_QuickInitAndAddDataGroup_BP Parms{};

	Parms.Character = Character;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.RemoveMaterialControllerDataGroup_BP
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::RemoveMaterialControllerDataGroup_BP(class ATsBaseCharacter_C* Character, float HandleId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "RemoveMaterialControllerDataGroup_BP");

	Params::BP_CharacterRenderingFunctionLibrary_C_RemoveMaterialControllerDataGroup_BP Parms{};

	Parms.Character = Character;
	Parms.HandleId = HandleId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.SetCharacterStarScarValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SectionIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::SetCharacterStarScarValue(class ATsBaseCharacter_C* Character, float Value, float SectionIndex, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "SetCharacterStarScarValue");

	Params::BP_CharacterRenderingFunctionLibrary_C_SetCharacterStarScarValue Parms{};

	Parms.Character = Character;
	Parms.Value = Value;
	Parms.SectionIndex = SectionIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.QuickInitAndAddData_MeshComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_CharacterControllerData_C*    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::QuickInitAndAddData_MeshComponent(class UMeshComponent* MeshComponent, class UPD_CharacterControllerData_C* Data, class UObject* __WorldContext, float* HandleId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "QuickInitAndAddData_MeshComponent");

	Params::BP_CharacterRenderingFunctionLibrary_C_QuickInitAndAddData_MeshComponent Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.RemoveMaterialControllerData_MeshComponent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::RemoveMaterialControllerData_MeshComponent(class UMeshComponent* MeshComponent, float HandleId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "RemoveMaterialControllerData_MeshComponent");

	Params::BP_CharacterRenderingFunctionLibrary_C_RemoveMaterialControllerData_MeshComponent Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.HandleId = HandleId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.AddSimpleHolographicEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::AddSimpleHolographicEffect(class AActor* Target, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "AddSimpleHolographicEffect");

	Params::BP_CharacterRenderingFunctionLibrary_C_AddSimpleHolographicEffect Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.RemoveSimpleHolographicEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::RemoveSimpleHolographicEffect(class AActor* Target, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "RemoveSimpleHolographicEffect");

	Params::BP_CharacterRenderingFunctionLibrary_C_RemoveSimpleHolographicEffect Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.ApplyWeaponLevelMaterial
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPD_WeaponLevelMaterialDatas_C*   Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::ApplyWeaponLevelMaterial(class USkinnedMeshComponent* Mesh, class UPD_WeaponLevelMaterialDatas_C* Data, const int32& Level, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "ApplyWeaponLevelMaterial");

	Params::BP_CharacterRenderingFunctionLibrary_C_ApplyWeaponLevelMaterial Parms{};

	Parms.Mesh = Mesh;
	Parms.Data = Data;
	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.GetLGUIMPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialParameterCollection*     MPC                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::GetLGUIMPC(class UObject* __WorldContext, class UMaterialParameterCollection** MPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "GetLGUIMPC");

	Params::BP_CharacterRenderingFunctionLibrary_C_GetLGUIMPC Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (MPC != nullptr)
		*MPC = Parms.MPC;
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.AddMaterialControllerDataForAllCases
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_CharacterControllerData_C*    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::AddMaterialControllerDataForAllCases(class AActor* Actor, class UPD_CharacterControllerData_C* Data, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "AddMaterialControllerDataForAllCases");

	Params::BP_CharacterRenderingFunctionLibrary_C_AddMaterialControllerDataForAllCases Parms{};

	Parms.Actor = Actor;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.QuickInitAndAddDataGroup_MeshComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_CharacterControllerDataGroup_C*Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharRenderingComponent_C*        CharRenderComponent                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::QuickInitAndAddDataGroup_MeshComponent(class USkeletalMeshComponent* MeshComponent, class UPD_CharacterControllerDataGroup_C* Data, class UObject* __WorldContext, float* HandleId, class UCharRenderingComponent_C** CharRenderComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "QuickInitAndAddDataGroup_MeshComponent");

	Params::BP_CharacterRenderingFunctionLibrary_C_QuickInitAndAddDataGroup_MeshComponent Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;

	if (CharRenderComponent != nullptr)
		*CharRenderComponent = Parms.CharRenderComponent;
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.RemoveMaterialControllerDataGroup_MeshComponent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HandleId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::RemoveMaterialControllerDataGroup_MeshComponent(class UMeshComponent* MeshComponent, float HandleId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "RemoveMaterialControllerDataGroup_MeshComponent");

	Params::BP_CharacterRenderingFunctionLibrary_C_RemoveMaterialControllerDataGroup_MeshComponent Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.HandleId = HandleId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.ApplyMaterialParems
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSWeaponMaterialParams           Params_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::ApplyMaterialParems(const struct FSWeaponMaterialParams& Params_0, class UMaterialInstanceDynamic* Material, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "ApplyMaterialParems");

	Params::BP_CharacterRenderingFunctionLibrary_C_ApplyMaterialParems Parms{};

	Parms.Params_0 = std::move(Params_0);
	Parms.Material = Material;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderingFunctionLibrary.BP_CharacterRenderingFunctionLibrary_C.GetFallbackLevelData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FirstIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPD_WeaponLevelMaterialDatas_C*   Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSWeaponLevelMaterialData        Value                                                  (Parm, OutParm, HasGetValueTypeHash)

void UBP_CharacterRenderingFunctionLibrary_C::GetFallbackLevelData(int32 FirstIndex, class UPD_WeaponLevelMaterialDatas_C* Data, class UObject* __WorldContext, struct FSWeaponLevelMaterialData* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRenderingFunctionLibrary_C", "GetFallbackLevelData");

	Params::BP_CharacterRenderingFunctionLibrary_C_GetFallbackLevelData Parms{};

	Parms.FirstIndex = FirstIndex;
	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}

}
