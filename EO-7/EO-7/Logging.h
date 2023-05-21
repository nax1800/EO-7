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

		string str = R"(
Welcome to EO-7! The best 1.8 single-player experience you'll ever enjoy.

Credits:
Abilities - Jacobb626


)";

		LogInfo(str);
	}
}