#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioVisualizationInstanceBase

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.ExecuteUbergraph_AudioVisualizationInstanceBase
// 0x0008 (0x0008 - 0x0000)
struct AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase) == 0x000004, "Wrong alignment on AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase");
static_assert(sizeof(AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase) == 0x000008, "Wrong size on AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase");
static_assert(offsetof(AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase, EntryPoint) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase, K2Node_Event_EndPlayReason) == 0x000004, "Member 'AudioVisualizationInstanceBase_C_ExecuteUbergraph_AudioVisualizationInstanceBase::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_ReceiveEndPlay");
static_assert(sizeof(AudioVisualizationInstanceBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_ReceiveEndPlay");
static_assert(offsetof(AudioVisualizationInstanceBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.CallBackInternal
// 0x0020 (0x0020 - 0x0000)
struct AudioVisualizationInstanceBase_C_CallBackInternal final
{
public:
	class UAkCallbackInfo*                        CallbackInfo;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAkCallbackType                               CallbackType;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 State;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_CallBackInternal) == 0x000008, "Wrong alignment on AudioVisualizationInstanceBase_C_CallBackInternal");
static_assert(sizeof(AudioVisualizationInstanceBase_C_CallBackInternal) == 0x000020, "Wrong size on AudioVisualizationInstanceBase_C_CallBackInternal");
static_assert(offsetof(AudioVisualizationInstanceBase_C_CallBackInternal, CallbackInfo) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_CallBackInternal::CallbackInfo' has a wrong offset!");
static_assert(offsetof(AudioVisualizationInstanceBase_C_CallBackInternal, CallbackType) == 0x000008, "Member 'AudioVisualizationInstanceBase_C_CallBackInternal::CallbackType' has a wrong offset!");
static_assert(offsetof(AudioVisualizationInstanceBase_C_CallBackInternal, State) == 0x000010, "Member 'AudioVisualizationInstanceBase_C_CallBackInternal::State' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiC3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiC3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiC3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiC3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiC3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiC3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiC3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiC3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiCs3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiCs3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiCs3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiCs3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiCs3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiCs3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiCs3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiCs3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiD3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiD3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiD3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiD3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiD3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiD3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiD3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiD3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiDs3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiDs3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiDs3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiDs3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiDs3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiDs3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiDs3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiDs3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiE3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiE3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiE3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiE3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiE3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiE3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiE3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiE3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiF3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiF3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiF3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiF3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiF3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiF3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiF3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiF3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiFs3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiFs3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiFs3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiFs3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiFs3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiFs3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiFs3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiFs3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiG3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiG3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiG3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiG3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiG3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiG3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiG3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiG3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiGs3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiGs3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiGs3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiGs3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiGs3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiGs3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiGs3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiGs3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiA3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiA3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiA3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiA3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiA3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiA3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiA3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiA3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiAs3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiAs3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiAs3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiAs3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiAs3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiAs3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiAs3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiAs3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiB3On
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiB3On final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiB3On) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiB3On");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiB3On) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiB3On");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiB3On, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiB3On::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiC3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiC3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiC3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiC3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiC3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiC3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiC3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiC3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiCs3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiCs3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiCs3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiCs3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiCs3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiCs3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiCs3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiCs3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiD3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiD3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiD3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiD3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiD3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiD3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiD3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiD3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiDs3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiDs3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiDs3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiDs3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiDs3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiDs3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiDs3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiDs3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiE3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiE3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiE3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiE3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiE3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiE3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiE3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiE3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiF3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiF3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiF3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiF3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiF3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiF3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiF3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiF3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiFs3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiFs3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiFs3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiFs3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiFs3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiFs3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiFs3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiFs3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiG3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiG3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiG3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiG3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiG3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiG3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiG3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiG3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiGs3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiGs3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiGs3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiGs3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiGs3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiGs3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiGs3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiGs3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiA3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiA3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiA3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiA3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiA3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiA3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiA3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiA3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiAs3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiAs3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiAs3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiAs3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiAs3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiAs3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiAs3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiAs3Off::Velocity1' has a wrong offset!");

// Function AudioVisualizationInstanceBase.AudioVisualizationInstanceBase_C.MidiB3Off
// 0x0001 (0x0001 - 0x0000)
struct AudioVisualizationInstanceBase_C_MidiB3Off final
{
public:
	uint8                                         Velocity1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(AudioVisualizationInstanceBase_C_MidiB3Off) == 0x000001, "Wrong alignment on AudioVisualizationInstanceBase_C_MidiB3Off");
static_assert(sizeof(AudioVisualizationInstanceBase_C_MidiB3Off) == 0x000001, "Wrong size on AudioVisualizationInstanceBase_C_MidiB3Off");
static_assert(offsetof(AudioVisualizationInstanceBase_C_MidiB3Off, Velocity1) == 0x000000, "Member 'AudioVisualizationInstanceBase_C_MidiB3Off::Velocity1' has a wrong offset!");

}

