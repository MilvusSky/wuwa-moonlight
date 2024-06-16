#pragma once
#include "dllmain.h"
#define MenuKey VK_INSERT
#define QuitKey VK_END

using namespace SDK;
using namespace SDKTools;
using namespace SDKTools::World;
using namespace SDKTools::Player;

void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_SIZE:
		if (pDevice != nullptr && wParam != SIZE_MINIMIZED) {
			UINT width = LOWORD(lParam);
			UINT height = HIWORD(lParam);
			ResizeSwapChain(pSwapChain, pDevice, pContext, &mainRenderTargetView, width, height);
		}
		break;
	}

	ImGuiIO& io = ImGui::GetIO();
	io.MouseDrawCursor = menu.IsOpened();

	if (menu.IsOpened() && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;
	

	return menu.IsOpened() ? menu.IsOpened() : CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	static bool init = false;
	static bool AlertMessage = true;
	if (!init) {
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice))) {
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;

			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();

			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		}
		else {
			return oPresent(pSwapChain, SyncInterval, Flags);
		}
	}

	static bool styleInitialized = false;
	if (!styleInitialized) {
		ImGuiIO& io = ImGui::GetIO();
		ImVec2 whole_content_size = io.DisplaySize;
		whole_content_size.x = whole_content_size.x * 0.3;
		whole_content_size.y = whole_content_size.y * 0.2;

		ImGuiStyle& style = ImGui::GetStyle();
		ImVec4* colors = style.Colors;
		menu.SetUpColors(style, colors, whole_content_size);
		styleInitialized = true;
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();

	ImGui::NewFrame();
	
	// Show FPS
	fpsUnlock.DrawFPS();
	//
	menu.RenderWatermark();
	menu.PreventMoveOutOfWndBounds(" ");

	//menu.ShowCenteredPopupSubmit("ALERT", "This cheat is opensource if you purchase it from someone u got scammed!", "Ok", &AlertMessage);
	if (menu.IsOpened())
		menu.Render();

	ImGui::Render();
	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return oPresent(pSwapChain, SyncInterval, Flags);
}


HRESULT ResizeSwapChain(IDXGISwapChain* pSwapChain, ID3D11Device* pDevice, ID3D11DeviceContext* pContext,
	ID3D11RenderTargetView** pRenderTargetView, UINT Width, UINT Height) {
	if (*pRenderTargetView) {
		(*pRenderTargetView)->Release();
		*pRenderTargetView = nullptr;
	}

	HRESULT hr = pSwapChain->ResizeBuffers(0, Width, Height, DXGI_FORMAT_UNKNOWN, 0);
	if (FAILED(hr)) {
		return hr;
	}

	ID3D11Texture2D* pBackBuffer = nullptr;
	hr = pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&pBackBuffer);
	if (FAILED(hr)) {
		return hr;
	}

	hr = pDevice->CreateRenderTargetView(pBackBuffer, nullptr, pRenderTargetView);
	pBackBuffer->Release();
	if (FAILED(hr)) {
		return hr;
	}

	pContext->OMSetRenderTargets(1, pRenderTargetView, nullptr);

	D3D11_VIEWPORT viewport = {};
	viewport.Width = static_cast<float>(Width);
	viewport.Height = static_cast<float>(Height);
	viewport.MinDepth = 0.0f;
	viewport.MaxDepth = 1.0f;
	viewport.TopLeftX = 0;
	viewport.TopLeftY = 0;
	pContext->RSSetViewports(1, &viewport);

	return S_OK;
}

DWORD WINAPI KeyHandler(LPVOID lpReserved)
{

	while (!g_bUnload) {

		if (GetAsyncKeyState(MenuKey) & 1)
			menu.SetIsOpen(!menu.IsOpened());


		if (GetAsyncKeyState(QuitKey) & 1) {
			kiero::shutdown();
			ExitProcess(EXIT_SUCCESS);

			// Temporary disabled due to crash
			//DllSelfUnloading((HMODULE)hModule);

			return 0;
		}

		Sleep(100);
	}

	return TRUE;
}

DWORD WINAPI FeaturesThread(LPVOID lpReserved)
{
	speedhack.Setup();
	god.Setup();
	fly.Setup();
	gravityScale.Setup();
	walkFloorZ.Setup();
	walkFloorAngle.Setup();
	fpsUnlock.Setup();

	UWorld* mWorld = nullptr;
	UEngine* mEngine = nullptr;

	while (!g_bUnload)
	{
		if (!mEngine)
		{
			mEngine = UEngine::GetEngine();
			if (!mEngine)
				continue;
		}

		if (!mWorld)
		{
			mWorld = SDK::UWorld::GetWorld();
			if (!mWorld)
				continue;
		}

		// this is important
		if (!IsPlayerLoaded(mWorld) || !IsWorldFullyLoaded(mWorld))
			continue;

		ULocalPlayer* LocalPlayer = mWorld->OwningGameInstance->LocalPlayers[0];
		APlayerController* PlayerController = LocalPlayer->PlayerController;
		APawn* APawn = PlayerController->AcknowledgedPawn;

		void* AcknowledgePawnPtr[1] = { APawn };

		speedhack.Run( AcknowledgePawnPtr, 1 );
		god.Run( AcknowledgePawnPtr, 1 );
		gravityScale.Run( AcknowledgePawnPtr, 1 );
		walkFloorZ.Run( AcknowledgePawnPtr, 1 );
		walkFloorAngle.Run(AcknowledgePawnPtr , 1 );

		UPawnMovementComponent* MoveComponent = APawn->GetMovementComponent();
		void* flyArgs[2] = { MoveComponent, APawn };
		fly.Run(flyArgs, 1);

		void* userSettings[1] = { mEngine->GameUserSettings };
		fpsUnlock.Run(userSettings,1);

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

	return TRUE;

}

DWORD WINAPI MainThread(HMODULE hMod, LPVOID lpReserved)
{

	AllocConsole();
	FILE* dummy;
	freopen_s(&dummy, "CONOUT$", "w", stdout);
	freopen_s(&dummy, "CONOUT$", "w", stderr);
	freopen_s(&dummy, "CONOUT$", "w", stdin);

	HANDLE hProc = GetCurrentProcess();
	Helper proc;

	BaseAddr = proc.GetBaseModuleAddress("Client-Win64-Shipping.exe");
	std::cout << "Base address: " << BaseAddr << " hex: " << std::hex << BaseAddr << std::endl;
	std::cout << "Builded at " << BuildInfo << std::endl;

		
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}

	} while (!init_hook);

	while (!g_bUnload)
		continue;

	return TRUE;
}


// TO FIX CRASH
// https://www.unknowncheats.me/forum/c-and-c-/146497-release-source-self-unloading-dll.html
//unsigned int WINAPI DllUnloadThreadProc(LPVOID lParam)
//{
//	PDLLUNLOADINFO pDllUnloadInfo = (PDLLUNLOADINFO)lParam;
//
//	//  
//	// FreeLibrary dll  
//	//  
//	(pDllUnloadInfo->m_fpFreeLibrary)(pDllUnloadInfo->m_hFreeModule);
//
//	//
//	// Exit Thread
//	// This thread return value is freed memory.
//	// So you don't have to return this thread.
//	//
//	pDllUnloadInfo->m_fpExitThread(0);
//	return 0;
//}
//
//VOID DllSelfUnloading(_In_ const HMODULE hModule)
//{
//	PVOID pMemory = NULL;
//	ULONG ulFuncSize;
//	unsigned int uintThreadId = 0;
//
//	pMemory = VirtualAlloc(NULL, 0x1000, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
//	if (pMemory != NULL)
//	{
//		ulFuncSize = (ULONG_PTR)DllUnloadThreadProc - (ULONG_PTR)DllSelfUnloading;
//		if ((ulFuncSize >> 31) & 0x01)
//		{
//			ulFuncSize = (ULONG_PTR)DllSelfUnloading - (ULONG_PTR)DllUnloadThreadProc;
//		}
//
//		memcpy(pMemory, DllUnloadThreadProc, ulFuncSize);
//
//		((PDLLUNLOADINFO)(((ULONG_PTR)pMemory) + 0x500))->m_fpFreeLibrary =
//			(PFreeLibrary)GetProcAddress(GetModuleHandle(_T("kernel32.dll")), "FreeLibrary");
//
//		((PDLLUNLOADINFO)(((ULONG_PTR)pMemory) + 0x500))->m_fpExitThread =
//			(PExitThread)GetProcAddress(GetModuleHandle(_T("kernel32.dll")), "ExitThread");
//
//		((PDLLUNLOADINFO)(((ULONG_PTR)pMemory) + 0x500))->m_hFreeModule = hModule;
//
//		_beginthreadex(NULL, 0, (PTHREADPROC)pMemory, (PVOID)(((ULONG_PTR)pMemory) + 0x500), 0, &uintThreadId);
//	}
//}

BOOL APIENTRY DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hMod);
	switch (dwReason)
	{

	case DLL_PROCESS_ATTACH:
		CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hMod, 0, nullptr);
		CreateThread(nullptr, 0, KeyHandler, hMod, 0, nullptr);
		CreateThread(nullptr, 0, FeaturesThread, hMod, 0, nullptr);
		hModule = hMod;
		break;

	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}

	return TRUE;
}