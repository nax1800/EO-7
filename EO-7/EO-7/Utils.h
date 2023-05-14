#pragma once
#include "Framework.h"

namespace Utils
{
	uint GetOffset(uint Offset)
	{
		return ((uint)GetModuleHandle(0) + Offset);
	}
}