#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Wwise_AudioSpectrum

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.ExecuteUbergraph_BP_Wwise_AudioSpectrum
// 0x0080 (0x0080 - 0x0000)
struct BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           K2Node_CustomEvent_Ak;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> ___delegate_Variable;                              // 0x0028(0x0028)(ConstParm, ZeroConstructor)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSourcePlayPosition_ReturnValue;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRTPCValue_Value;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERTPCValueType                                CallFunc_GetRTPCValue_OutputValueType;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 CallFunc_GetNormalizedChannelConstantQAtTime_OutConstantQ; // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum) == 0x000008, "Wrong alignment on BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum");
static_assert(sizeof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum) == 0x000080, "Wrong size on BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, EntryPoint) == 0x000000, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, K2Node_CustomEvent_Ak) == 0x000008, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::K2Node_CustomEvent_Ak' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, K2Node_CustomEvent_AkEvent) == 0x000010, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::K2Node_CustomEvent_AkEvent' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, ___int_Array_Index_Variable) == 0x000018, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, ___int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, K2Node_Event_DeltaSeconds) == 0x000024, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, ___delegate_Variable) == 0x000028, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::___delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_PostAkEvent_ReturnValue) == 0x000050, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_GetSourcePlayPosition_ReturnValue) == 0x000054, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_GetSourcePlayPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_GetRTPCValue_Value) == 0x000058, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_GetRTPCValue_Value' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_GetRTPCValue_OutputValueType) == 0x00005C, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_GetRTPCValue_OutputValueType' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000060, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000064, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_GetNormalizedChannelConstantQAtTime_OutConstantQ) == 0x000068, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_GetNormalizedChannelConstantQAtTime_OutConstantQ' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.AkCall
// 0x0010 (0x0010 - 0x0000)
struct BP_Wwise_AudioSpectrum_C_AkCall final
{
public:
	class UAkComponent*                           Ak_0;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Wwise_AudioSpectrum_C_AkCall) == 0x000008, "Wrong alignment on BP_Wwise_AudioSpectrum_C_AkCall");
static_assert(sizeof(BP_Wwise_AudioSpectrum_C_AkCall) == 0x000010, "Wrong size on BP_Wwise_AudioSpectrum_C_AkCall");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_AkCall, Ak_0) == 0x000000, "Member 'BP_Wwise_AudioSpectrum_C_AkCall::Ak_0' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_AkCall, AkEvent) == 0x000008, "Member 'BP_Wwise_AudioSpectrum_C_AkCall::AkEvent' has a wrong offset!");

// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Wwise_AudioSpectrum_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Wwise_AudioSpectrum_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Wwise_AudioSpectrum_C_ReceiveTick");
static_assert(sizeof(BP_Wwise_AudioSpectrum_C_ReceiveTick) == 0x000004, "Wrong size on BP_Wwise_AudioSpectrum_C_ReceiveTick");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Wwise_AudioSpectrum_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.NotifyAnalyser
// 0x0010 (0x0010 - 0x0000)
struct BP_Wwise_AudioSpectrum_C_NotifyAnalyser final
{
public:
	class UAkComponent*                           Ak_0;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Wwise_AudioSpectrum_C_NotifyAnalyser) == 0x000008, "Wrong alignment on BP_Wwise_AudioSpectrum_C_NotifyAnalyser");
static_assert(sizeof(BP_Wwise_AudioSpectrum_C_NotifyAnalyser) == 0x000010, "Wrong size on BP_Wwise_AudioSpectrum_C_NotifyAnalyser");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_NotifyAnalyser, Ak_0) == 0x000000, "Member 'BP_Wwise_AudioSpectrum_C_NotifyAnalyser::Ak_0' has a wrong offset!");
static_assert(offsetof(BP_Wwise_AudioSpectrum_C_NotifyAnalyser, AkEvent) == 0x000008, "Member 'BP_Wwise_AudioSpectrum_C_NotifyAnalyser::AkEvent' has a wrong offset!");

}

