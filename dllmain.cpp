#include "framework.h"

#define Attach DLL_PROCESS_ATTACH

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ReasonForCall, LPVOID lpReserved)
{
	if (ReasonForCall == Attach)
	{

	}
	return TRUE;
}

