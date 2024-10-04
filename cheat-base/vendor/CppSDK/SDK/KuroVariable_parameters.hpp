#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroVariable

#include "Basic.hpp"


namespace SDK::Params
{

// Function KuroVariable.KuroVariableFunctionLibrary.GetBoolValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_GetBoolValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Value;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_GetBoolValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_GetBoolValue");
static_assert(sizeof(KuroVariableFunctionLibrary_GetBoolValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_GetBoolValue");
static_assert(offsetof(KuroVariableFunctionLibrary_GetBoolValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_GetBoolValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetBoolValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_GetBoolValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetBoolValue, ReturnValue) == 0x000011, "Member 'KuroVariableFunctionLibrary_GetBoolValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.GetFloatValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_GetFloatValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_GetFloatValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_GetFloatValue");
static_assert(sizeof(KuroVariableFunctionLibrary_GetFloatValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_GetFloatValue");
static_assert(offsetof(KuroVariableFunctionLibrary_GetFloatValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_GetFloatValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetFloatValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_GetFloatValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetFloatValue, ReturnValue) == 0x000014, "Member 'KuroVariableFunctionLibrary_GetFloatValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.GetIntValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_GetIntValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_GetIntValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_GetIntValue");
static_assert(sizeof(KuroVariableFunctionLibrary_GetIntValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_GetIntValue");
static_assert(offsetof(KuroVariableFunctionLibrary_GetIntValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_GetIntValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetIntValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_GetIntValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetIntValue, ReturnValue) == 0x000014, "Member 'KuroVariableFunctionLibrary_GetIntValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.GetObject
// 0x0020 (0x0020 - 0x0000)
struct KuroVariableFunctionLibrary_GetObject final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Value;                                             // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_GetObject) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_GetObject");
static_assert(sizeof(KuroVariableFunctionLibrary_GetObject) == 0x000020, "Wrong size on KuroVariableFunctionLibrary_GetObject");
static_assert(offsetof(KuroVariableFunctionLibrary_GetObject, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_GetObject::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetObject, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_GetObject::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetObject, ReturnValue) == 0x000018, "Member 'KuroVariableFunctionLibrary_GetObject::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.GetStringValue
// 0x0028 (0x0028 - 0x0000)
struct KuroVariableFunctionLibrary_GetStringValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_GetStringValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_GetStringValue");
static_assert(sizeof(KuroVariableFunctionLibrary_GetStringValue) == 0x000028, "Wrong size on KuroVariableFunctionLibrary_GetStringValue");
static_assert(offsetof(KuroVariableFunctionLibrary_GetStringValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_GetStringValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetStringValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_GetStringValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_GetStringValue, ReturnValue) == 0x000020, "Member 'KuroVariableFunctionLibrary_GetStringValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.HasBoolValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_HasBoolValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_HasBoolValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_HasBoolValue");
static_assert(sizeof(KuroVariableFunctionLibrary_HasBoolValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_HasBoolValue");
static_assert(offsetof(KuroVariableFunctionLibrary_HasBoolValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_HasBoolValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_HasBoolValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_HasBoolValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.HasFloatValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_HasFloatValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_HasFloatValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_HasFloatValue");
static_assert(sizeof(KuroVariableFunctionLibrary_HasFloatValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_HasFloatValue");
static_assert(offsetof(KuroVariableFunctionLibrary_HasFloatValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_HasFloatValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_HasFloatValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_HasFloatValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.HasIntValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_HasIntValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_HasIntValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_HasIntValue");
static_assert(sizeof(KuroVariableFunctionLibrary_HasIntValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_HasIntValue");
static_assert(offsetof(KuroVariableFunctionLibrary_HasIntValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_HasIntValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_HasIntValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_HasIntValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.HasObject
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_HasObject final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_HasObject) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_HasObject");
static_assert(sizeof(KuroVariableFunctionLibrary_HasObject) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_HasObject");
static_assert(offsetof(KuroVariableFunctionLibrary_HasObject, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_HasObject::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_HasObject, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_HasObject::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.HasStringValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_HasStringValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_HasStringValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_HasStringValue");
static_assert(sizeof(KuroVariableFunctionLibrary_HasStringValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_HasStringValue");
static_assert(offsetof(KuroVariableFunctionLibrary_HasStringValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_HasStringValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_HasStringValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_HasStringValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.RemoveBoolValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_RemoveBoolValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_RemoveBoolValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_RemoveBoolValue");
static_assert(sizeof(KuroVariableFunctionLibrary_RemoveBoolValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_RemoveBoolValue");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveBoolValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_RemoveBoolValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveBoolValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_RemoveBoolValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.RemoveFloatValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_RemoveFloatValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_RemoveFloatValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_RemoveFloatValue");
static_assert(sizeof(KuroVariableFunctionLibrary_RemoveFloatValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_RemoveFloatValue");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveFloatValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_RemoveFloatValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveFloatValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_RemoveFloatValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.RemoveIntValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_RemoveIntValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_RemoveIntValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_RemoveIntValue");
static_assert(sizeof(KuroVariableFunctionLibrary_RemoveIntValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_RemoveIntValue");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveIntValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_RemoveIntValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveIntValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_RemoveIntValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.RemoveObject
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_RemoveObject final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_RemoveObject) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_RemoveObject");
static_assert(sizeof(KuroVariableFunctionLibrary_RemoveObject) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_RemoveObject");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveObject, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_RemoveObject::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveObject, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_RemoveObject::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.RemoveStringValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_RemoveStringValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_RemoveStringValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_RemoveStringValue");
static_assert(sizeof(KuroVariableFunctionLibrary_RemoveStringValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_RemoveStringValue");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveStringValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_RemoveStringValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_RemoveStringValue, ReturnValue) == 0x000010, "Member 'KuroVariableFunctionLibrary_RemoveStringValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.SetBoolValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_SetBoolValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Value;                                             // 0x0010(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_SetBoolValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_SetBoolValue");
static_assert(sizeof(KuroVariableFunctionLibrary_SetBoolValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_SetBoolValue");
static_assert(offsetof(KuroVariableFunctionLibrary_SetBoolValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_SetBoolValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetBoolValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_SetBoolValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetBoolValue, ReturnValue) == 0x000011, "Member 'KuroVariableFunctionLibrary_SetBoolValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.SetFloatValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_SetFloatValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_SetFloatValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_SetFloatValue");
static_assert(sizeof(KuroVariableFunctionLibrary_SetFloatValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_SetFloatValue");
static_assert(offsetof(KuroVariableFunctionLibrary_SetFloatValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_SetFloatValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetFloatValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_SetFloatValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetFloatValue, ReturnValue) == 0x000014, "Member 'KuroVariableFunctionLibrary_SetFloatValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.SetIntValue
// 0x0018 (0x0018 - 0x0000)
struct KuroVariableFunctionLibrary_SetIntValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_SetIntValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_SetIntValue");
static_assert(sizeof(KuroVariableFunctionLibrary_SetIntValue) == 0x000018, "Wrong size on KuroVariableFunctionLibrary_SetIntValue");
static_assert(offsetof(KuroVariableFunctionLibrary_SetIntValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_SetIntValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetIntValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_SetIntValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetIntValue, ReturnValue) == 0x000014, "Member 'KuroVariableFunctionLibrary_SetIntValue::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.SetObject
// 0x0020 (0x0020 - 0x0000)
struct KuroVariableFunctionLibrary_SetObject final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Value;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_SetObject) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_SetObject");
static_assert(sizeof(KuroVariableFunctionLibrary_SetObject) == 0x000020, "Wrong size on KuroVariableFunctionLibrary_SetObject");
static_assert(offsetof(KuroVariableFunctionLibrary_SetObject, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_SetObject::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetObject, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_SetObject::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetObject, ReturnValue) == 0x000018, "Member 'KuroVariableFunctionLibrary_SetObject::ReturnValue' has a wrong offset!");

// Function KuroVariable.KuroVariableFunctionLibrary.SetStringValue
// 0x0028 (0x0028 - 0x0000)
struct KuroVariableFunctionLibrary_SetStringValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroVariableFunctionLibrary_SetStringValue) == 0x000008, "Wrong alignment on KuroVariableFunctionLibrary_SetStringValue");
static_assert(sizeof(KuroVariableFunctionLibrary_SetStringValue) == 0x000028, "Wrong size on KuroVariableFunctionLibrary_SetStringValue");
static_assert(offsetof(KuroVariableFunctionLibrary_SetStringValue, Key) == 0x000000, "Member 'KuroVariableFunctionLibrary_SetStringValue::Key' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetStringValue, Value) == 0x000010, "Member 'KuroVariableFunctionLibrary_SetStringValue::Value' has a wrong offset!");
static_assert(offsetof(KuroVariableFunctionLibrary_SetStringValue, ReturnValue) == 0x000020, "Member 'KuroVariableFunctionLibrary_SetStringValue::ReturnValue' has a wrong offset!");

}

