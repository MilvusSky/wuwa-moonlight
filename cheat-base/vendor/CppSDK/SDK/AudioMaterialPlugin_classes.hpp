#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMaterialPlugin

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "KuroWorldPartition_classes.hpp"


namespace SDK
{

// Class AudioMaterialPlugin.AudioGlobalSystem
// 0x0018 (0x0048 - 0x0030)
class UAudioGlobalSystem final : public UAudioGlobalSystemBase
{
public:
	TArray<class UAudioMaterialComponent*>        AudioComponents;                                   // 0x0030(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                          bOpenLogging;                                      // 0x0040(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGlobalSystem">();
	}
	static class UAudioGlobalSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGlobalSystem>();
	}
};
static_assert(alignof(UAudioGlobalSystem) == 0x000008, "Wrong alignment on UAudioGlobalSystem");
static_assert(sizeof(UAudioGlobalSystem) == 0x000048, "Wrong size on UAudioGlobalSystem");
static_assert(offsetof(UAudioGlobalSystem, AudioComponents) == 0x000030, "Member 'UAudioGlobalSystem::AudioComponents' has a wrong offset!");
static_assert(offsetof(UAudioGlobalSystem, bOpenLogging) == 0x000040, "Member 'UAudioGlobalSystem::bOpenLogging' has a wrong offset!");

// Class AudioMaterialPlugin.AudioMaterialCookBlueprint
// 0x0000 (0x0030 - 0x0030)
class UAudioMaterialCookBlueprint final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMaterialCookBlueprint">();
	}
	static class UAudioMaterialCookBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMaterialCookBlueprint>();
	}
};
static_assert(alignof(UAudioMaterialCookBlueprint) == 0x000008, "Wrong alignment on UAudioMaterialCookBlueprint");
static_assert(sizeof(UAudioMaterialCookBlueprint) == 0x000030, "Wrong size on UAudioMaterialCookBlueprint");

// Class AudioMaterialPlugin.AudioMaterialBlueprint
// 0x0000 (0x0030 - 0x0030)
class UAudioMaterialBlueprint final : public UBlueprintFunctionLibrary
{
public:
	static uint8 GetMaterialID(const struct FVector& Position);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMaterialBlueprint">();
	}
	static class UAudioMaterialBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMaterialBlueprint>();
	}
};
static_assert(alignof(UAudioMaterialBlueprint) == 0x000008, "Wrong alignment on UAudioMaterialBlueprint");
static_assert(sizeof(UAudioMaterialBlueprint) == 0x000030, "Wrong size on UAudioMaterialBlueprint");

// Class AudioMaterialPlugin.AudioMaterialPartitionActor
// 0x0008 (0x02B8 - 0x02B0)
class AAudioMaterialPartitionActor final : public AKuroWorldPartitionActor
{
public:
	class UAudioMaterialComponent*                AudioMaterialComp;                                 // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMaterialPartitionActor">();
	}
	static class AAudioMaterialPartitionActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAudioMaterialPartitionActor>();
	}
};
static_assert(alignof(AAudioMaterialPartitionActor) == 0x000008, "Wrong alignment on AAudioMaterialPartitionActor");
static_assert(sizeof(AAudioMaterialPartitionActor) == 0x0002B8, "Wrong size on AAudioMaterialPartitionActor");
static_assert(offsetof(AAudioMaterialPartitionActor, AudioMaterialComp) == 0x0002B0, "Member 'AAudioMaterialPartitionActor::AudioMaterialComp' has a wrong offset!");

}

