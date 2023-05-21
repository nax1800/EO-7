#pragma once
#include "Framework.h"

namespace Menu
{
	typedef HRESULT(__stdcall* Present) (void* pSwapChain, UINT SyncInterval, UINT Flags);
	typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
	typedef uintptr_t PTR;

	Present oPresent;
	HWND window = NULL;
	WNDPROC oWndProc;

	LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT __stdcall hkPresent(void* pSwapChain, UINT SyncInterval, UINT Flags);


	void Theme()
	{

	}

	void InitImGui()
	{

	}

	LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{

	}

	HRESULT __stdcall hkPresent(void* pSwapChain, UINT SyncInterval, UINT Flags)
	{
		return oPresent(pSwapChain, SyncInterval, Flags);
	}

	void StartHooks()
	{

	}
}