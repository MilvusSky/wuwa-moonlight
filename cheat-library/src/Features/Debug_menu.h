#include "Feature.h"
using namespace SDK;

namespace DebugMenu
{
	void DebugMainPage();
	void DebugRoutine();
}

extern void hkPostRender(UObject* _this, UObject* canvas);
extern void hkProcessEvent(UObject* caller, UFunction* fn, void* params);
extern BYTE* vmt_hook(void** VTable, uint32_t index, void* fn);

