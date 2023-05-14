#include "Framework.h"

#define ProcessAttach DLL_PROCESS_ATTACH

BOOL APIENTRY DllMain(HMODULE HModule, DWORD ReasonForCall, LPVOID LPReserved)
{
	if (ReasonForCall == ProcessAttach)
	{

	}
	return TRUE;
}

