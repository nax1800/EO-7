#pragma once
#include "Framework.h"

using namespace std;

namespace Logging
{
	void Setup()
	{
		AllocConsole();
		FILE* pFile;
		freopen_s(&pFile, "CONOUT$", "w", stdout);

		LogInfo("Welcome to EO-7! The best 1.8 single-player experience you'll ever enjoy.\n");
	}
}