#pragma once
#include <includes.h>
#include <globals.h>
#include <SDK/TsAnimNotifyReSkillEvent_parameters.hpp>

using namespace globals;

using namespace SDK;
using tProcessEvent = void(__thiscall*)(UObject*, UFunction*, void*);

class SpeedHack
{
private:

	struct Speed {
		float Speed;
		float MinSpeed;
		float MaxSpeed;
		float Default = 1.0f;
	};

	Speed rateSpeed		= { 2, -1, 100 };
	Speed animSpeed		= { 2, -1, 100 };
	Speed moveSpeed		= { 5, 1, 30 };
	Speed worldSpeed	= { 2, 0, 5 };

	bool bOnce = false;
	bool bEnable = false;

	// Bindings
	bool bSettingKey = false;
	KeyBindToggle kbToggle = KeyBindToggle(KeyBind::KeyCode::Z);


public:
	void HandleKeys() {
		if (GetAsyncKeyState(kbToggle.toInt()) & 0x1) {
			bEnable = !bEnable;
		}
	}

	// This should be run in the ImGUI draw loop, used to draw anything to the menu
	void DrawMenuItems();

	// This should be run at the top of the ImGUI draw loop, used to render things like ESP, Tracers, and Debug Info
	void Render();

	// This should be run in the feature loop, used to run any acutal feature code like setting a value for godmode
	void Run();
	void Call(UObject*, UFunction*, void*);
};



inline void SpeedHack::DrawMenuItems()
{
	ImGui::Checkbox("SpeedHack", &bEnable);
	ImGui::SameLine();
	ImGui::Hotkey("##SpeedHack Key", kbToggle, &bSettingKey);

	if (bEnable) {
		ImGui::Text("Speed Multiplier");
		ImGui::SliderFloat("##SpeedMultiplier", &moveSpeed.Speed, moveSpeed.MinSpeed, moveSpeed.MaxSpeed);
		ImGui::Text("World Speed Multiplier");
		ImGui::SliderFloat("##WorldSpeed", &worldSpeed.Speed, worldSpeed.MinSpeed, worldSpeed.MaxSpeed);
		ImGui::Text("Rate Speed (sequences)");
		ImGui::SliderFloat("##RateSpeed", &rateSpeed.Speed, rateSpeed.MinSpeed, rateSpeed.MaxSpeed);
	}
}

inline void SpeedHack::Run()
{

	HandleKeys();

	// Character speedhack
	if (bEnable && AcknowledgedPawn)
	{
		AcknowledgedPawn->CustomTimeDilation = moveSpeed.Speed;
		bOnce = false;
	}

	if (!bEnable && AcknowledgedPawn && !bOnce)
	{
		AcknowledgedPawn->CustomTimeDilation = moveSpeed.Default;
		bOnce = true;
	}

	// World speedhack
	if (bEnable && World && World->PersistentLevel)
	{

		World->PersistentLevel->WorldSettings->TimeDilation = worldSpeed.Speed;
		bOnce = false;
	}

	if (!bEnable && World->PersistentLevel && !bOnce)
	{
		World->PersistentLevel->WorldSettings->TimeDilation = worldSpeed.Default;
		bOnce = true;
	}
}

inline void SpeedHack::Call(UObject* Object, UFunction* Function, void* Parms)
{
	//if (Function == FN_TsAnimNotifyReSkillEvent_C) {
	//	
	//	Params::TsAnimNotifyReSkillEvent_C_K2_Notify* parameters = (Params::TsAnimNotifyReSkillEvent_C_K2_Notify*)Parms;
	//	bool IsMyMesh = parameters->MeshComp == PlayerController->Character->Mesh;

	//	if (IsMyMesh) {
	//		//
	//		//			billet
	//		// 
	//		//if (bEnable)
	//		//	parameters->Animation->RateScale = rateSpeed.Speed;
	//		//else
	//		//	parameters->Animation->RateScale = rateSpeed.Default;
	//	}
	//}
}

inline SpeedHack speedhack;