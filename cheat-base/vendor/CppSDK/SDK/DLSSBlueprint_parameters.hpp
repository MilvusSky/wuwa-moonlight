#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLSSBlueprint

#include "Basic.hpp"

#include "DLSSBlueprint_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// 0x0001 (0x0001 - 0x0000)
struct DLSSLibrary_GetDefaultDLSSMode final
{
public:
	EUDLSSMode                                    ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_GetDefaultDLSSMode) == 0x000001, "Wrong alignment on DLSSLibrary_GetDefaultDLSSMode");
static_assert(sizeof(DLSSLibrary_GetDefaultDLSSMode) == 0x000001, "Wrong size on DLSSLibrary_GetDefaultDLSSMode");
static_assert(offsetof(DLSSLibrary_GetDefaultDLSSMode, ReturnValue) == 0x000000, "Member 'DLSSLibrary_GetDefaultDLSSMode::ReturnValue' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// 0x0008 (0x0008 - 0x0000)
struct DLSSLibrary_GetDLSSMinimumDriverVersion final
{
public:
	int32                                         MinDriverVersionMajor;                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinDriverVersionMinor;                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_GetDLSSMinimumDriverVersion) == 0x000004, "Wrong alignment on DLSSLibrary_GetDLSSMinimumDriverVersion");
static_assert(sizeof(DLSSLibrary_GetDLSSMinimumDriverVersion) == 0x000008, "Wrong size on DLSSLibrary_GetDLSSMinimumDriverVersion");
static_assert(offsetof(DLSSLibrary_GetDLSSMinimumDriverVersion, MinDriverVersionMajor) == 0x000000, "Member 'DLSSLibrary_GetDLSSMinimumDriverVersion::MinDriverVersionMajor' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSMinimumDriverVersion, MinDriverVersionMinor) == 0x000004, "Member 'DLSSLibrary_GetDLSSMinimumDriverVersion::MinDriverVersionMinor' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// 0x0001 (0x0001 - 0x0000)
struct DLSSLibrary_GetDLSSMode final
{
public:
	EUDLSSMode                                    ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_GetDLSSMode) == 0x000001, "Wrong alignment on DLSSLibrary_GetDLSSMode");
static_assert(sizeof(DLSSLibrary_GetDLSSMode) == 0x000001, "Wrong size on DLSSLibrary_GetDLSSMode");
static_assert(offsetof(DLSSLibrary_GetDLSSMode, ReturnValue) == 0x000000, "Member 'DLSSLibrary_GetDLSSMode::ReturnValue' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// 0x0024 (0x0024 - 0x0000)
struct DLSSLibrary_GetDLSSModeInformation final
{
public:
	EUDLSSMode                                    DLSSMode;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ScreenResolution;                                  // 0x0004(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSupported;                                      // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OptimalScreenPercentage;                           // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFixedScreenPercentage;                          // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinScreenPercentage;                               // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxScreenPercentage;                               // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OptimalSharpness;                                  // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_GetDLSSModeInformation) == 0x000004, "Wrong alignment on DLSSLibrary_GetDLSSModeInformation");
static_assert(sizeof(DLSSLibrary_GetDLSSModeInformation) == 0x000024, "Wrong size on DLSSLibrary_GetDLSSModeInformation");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, DLSSMode) == 0x000000, "Member 'DLSSLibrary_GetDLSSModeInformation::DLSSMode' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, ScreenResolution) == 0x000004, "Member 'DLSSLibrary_GetDLSSModeInformation::ScreenResolution' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, bIsSupported) == 0x00000C, "Member 'DLSSLibrary_GetDLSSModeInformation::bIsSupported' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, OptimalScreenPercentage) == 0x000010, "Member 'DLSSLibrary_GetDLSSModeInformation::OptimalScreenPercentage' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, bIsFixedScreenPercentage) == 0x000014, "Member 'DLSSLibrary_GetDLSSModeInformation::bIsFixedScreenPercentage' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, MinScreenPercentage) == 0x000018, "Member 'DLSSLibrary_GetDLSSModeInformation::MinScreenPercentage' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, MaxScreenPercentage) == 0x00001C, "Member 'DLSSLibrary_GetDLSSModeInformation::MaxScreenPercentage' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSModeInformation, OptimalSharpness) == 0x000020, "Member 'DLSSLibrary_GetDLSSModeInformation::OptimalSharpness' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// 0x0008 (0x0008 - 0x0000)
struct DLSSLibrary_GetDLSSScreenPercentageRange final
{
public:
	float                                         MinScreenPercentage;                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxScreenPercentage;                               // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_GetDLSSScreenPercentageRange) == 0x000004, "Wrong alignment on DLSSLibrary_GetDLSSScreenPercentageRange");
static_assert(sizeof(DLSSLibrary_GetDLSSScreenPercentageRange) == 0x000008, "Wrong size on DLSSLibrary_GetDLSSScreenPercentageRange");
static_assert(offsetof(DLSSLibrary_GetDLSSScreenPercentageRange, MinScreenPercentage) == 0x000000, "Member 'DLSSLibrary_GetDLSSScreenPercentageRange::MinScreenPercentage' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_GetDLSSScreenPercentageRange, MaxScreenPercentage) == 0x000004, "Member 'DLSSLibrary_GetDLSSScreenPercentageRange::MaxScreenPercentage' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// 0x0004 (0x0004 - 0x0000)
struct DLSSLibrary_GetDLSSSharpness final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_GetDLSSSharpness) == 0x000004, "Wrong alignment on DLSSLibrary_GetDLSSSharpness");
static_assert(sizeof(DLSSLibrary_GetDLSSSharpness) == 0x000004, "Wrong size on DLSSLibrary_GetDLSSSharpness");
static_assert(offsetof(DLSSLibrary_GetDLSSSharpness, ReturnValue) == 0x000000, "Member 'DLSSLibrary_GetDLSSSharpness::ReturnValue' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// 0x0010 (0x0010 - 0x0000)
struct DLSSLibrary_GetSupportedDLSSModes final
{
public:
	TArray<EUDLSSMode>                            ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_GetSupportedDLSSModes) == 0x000008, "Wrong alignment on DLSSLibrary_GetSupportedDLSSModes");
static_assert(sizeof(DLSSLibrary_GetSupportedDLSSModes) == 0x000010, "Wrong size on DLSSLibrary_GetSupportedDLSSModes");
static_assert(offsetof(DLSSLibrary_GetSupportedDLSSModes, ReturnValue) == 0x000000, "Member 'DLSSLibrary_GetSupportedDLSSModes::ReturnValue' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// 0x0002 (0x0002 - 0x0000)
struct DLSSLibrary_IsDLSSModeSupported final
{
public:
	EUDLSSMode                                    DLSSMode;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_IsDLSSModeSupported) == 0x000001, "Wrong alignment on DLSSLibrary_IsDLSSModeSupported");
static_assert(sizeof(DLSSLibrary_IsDLSSModeSupported) == 0x000002, "Wrong size on DLSSLibrary_IsDLSSModeSupported");
static_assert(offsetof(DLSSLibrary_IsDLSSModeSupported, DLSSMode) == 0x000000, "Member 'DLSSLibrary_IsDLSSModeSupported::DLSSMode' has a wrong offset!");
static_assert(offsetof(DLSSLibrary_IsDLSSModeSupported, ReturnValue) == 0x000001, "Member 'DLSSLibrary_IsDLSSModeSupported::ReturnValue' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// 0x0001 (0x0001 - 0x0000)
struct DLSSLibrary_IsDLSSSupported final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_IsDLSSSupported) == 0x000001, "Wrong alignment on DLSSLibrary_IsDLSSSupported");
static_assert(sizeof(DLSSLibrary_IsDLSSSupported) == 0x000001, "Wrong size on DLSSLibrary_IsDLSSSupported");
static_assert(offsetof(DLSSLibrary_IsDLSSSupported, ReturnValue) == 0x000000, "Member 'DLSSLibrary_IsDLSSSupported::ReturnValue' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// 0x0001 (0x0001 - 0x0000)
struct DLSSLibrary_QueryDLSSSupport final
{
public:
	EUDLSSSupport                                 ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_QueryDLSSSupport) == 0x000001, "Wrong alignment on DLSSLibrary_QueryDLSSSupport");
static_assert(sizeof(DLSSLibrary_QueryDLSSSupport) == 0x000001, "Wrong size on DLSSLibrary_QueryDLSSSupport");
static_assert(offsetof(DLSSLibrary_QueryDLSSSupport, ReturnValue) == 0x000000, "Member 'DLSSLibrary_QueryDLSSSupport::ReturnValue' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// 0x0001 (0x0001 - 0x0000)
struct DLSSLibrary_SetDLSSMode final
{
public:
	EUDLSSMode                                    DLSSMode;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_SetDLSSMode) == 0x000001, "Wrong alignment on DLSSLibrary_SetDLSSMode");
static_assert(sizeof(DLSSLibrary_SetDLSSMode) == 0x000001, "Wrong size on DLSSLibrary_SetDLSSMode");
static_assert(offsetof(DLSSLibrary_SetDLSSMode, DLSSMode) == 0x000000, "Member 'DLSSLibrary_SetDLSSMode::DLSSMode' has a wrong offset!");

// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
// 0x0004 (0x0004 - 0x0000)
struct DLSSLibrary_SetDLSSSharpness final
{
public:
	float                                         Sharpness;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DLSSLibrary_SetDLSSSharpness) == 0x000004, "Wrong alignment on DLSSLibrary_SetDLSSSharpness");
static_assert(sizeof(DLSSLibrary_SetDLSSSharpness) == 0x000004, "Wrong size on DLSSLibrary_SetDLSSSharpness");
static_assert(offsetof(DLSSLibrary_SetDLSSSharpness, Sharpness) == 0x000000, "Member 'DLSSLibrary_SetDLSSSharpness::Sharpness' has a wrong offset!");

}

