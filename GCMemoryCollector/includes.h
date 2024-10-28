#pragma once
#include <Windows.h>
#include <iostream>
#include <d3d11.h>
#include <dxgi.h>
#include <MinHook.h>
#include <gc.h>
#include <gc/gc_allocator.h>
#include <gc_cpp.h>
#include "ImGui/imconfig.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_internal.h"
#include "ImGui/imstb_rectpack.h"
#include "ImGui/imstb_textedit.h"
#include "ImGui/imstb_truetype.h"
#include "ImGui/imgui_impl_win32.h"
#include "kiero/kiero.h"
#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "gc.lib")
typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;
using namespace std;
void AllocMem(int memory) {
	malloc((size_t)memory);
}