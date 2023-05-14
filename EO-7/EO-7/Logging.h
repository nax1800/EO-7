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
	}

	void Log(string ToLog)
	{
		cout << "[EO-7]: " << ToLog << endl;
	}
}