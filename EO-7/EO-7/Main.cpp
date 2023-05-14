#include "Framework.h"

BOOL APIENTRY DllMain(HMODULE HModule, DWORD ReasonForCall, LPVOID LPReserved)
{
	if (ReasonForCall == ProcessAttach)
	{
		Logging::Setup();
		Initialize(); //SDK
		Globals::Initialize();
		Gameplay::StartPEHook();
	}
	return TRUE;
}

