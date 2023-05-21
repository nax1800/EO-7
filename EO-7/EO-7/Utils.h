#pragma once
#include "Framework.h"

namespace Utils
{
	uint GetOffset(uint Offset)
	{
		return ((uint)GetModuleHandle(0) + Offset);
	}


	static BOOL MaskCompare(PVOID pBuffer, LPCSTR lpPattern, LPCSTR lpMask)
	{
		for (auto value = static_cast<PBYTE>(pBuffer); *lpMask; ++lpPattern, ++lpMask, ++value)
		{
			if (*lpMask == 'x' && *reinterpret_cast<LPCBYTE>(lpPattern) != *value)
				return false;
		}

		return true;
	}

	static PBYTE FindPattern(PVOID pBase, DWORD dwSize, LPCSTR lpPattern, LPCSTR lpMask)
	{
		dwSize -= static_cast<DWORD>(strlen(lpMask));

		for (auto i = 0UL; i < dwSize; ++i)
		{
			auto pAddress = static_cast<PBYTE>(pBase) + i;

			if (MaskCompare(pAddress, lpPattern, lpMask))
				return pAddress;
		}

		return NULL;
	}

	static PBYTE FindPattern(LPCSTR lpPattern, LPCSTR lpMask)
	{
		MODULEINFO info = { 0 };

		GetModuleInformation(GetCurrentProcess(), GetModuleHandle(0), &info, sizeof(info));

		return FindPattern(info.lpBaseOfDll, info.SizeOfImage, lpPattern, lpMask);
	}

	uint GetOffsetFromPattern(std::string OffsetName, LPCSTR Pattern, LPCSTR Mask)
	{
		std::cout << "LogEO-7:Info: " << OffsetName << ": 0x" << std::hex << ((uint)(FindPattern(Pattern, Mask)) - (uint)GetModuleHandle(0)) << std::endl;

		return ((uint)(FindPattern(Pattern, Mask)) - (uint)GetModuleHandle(0));
	}
}