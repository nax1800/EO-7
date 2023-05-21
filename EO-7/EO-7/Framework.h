#pragma once

#include <Windows.h>
#include <psapi.h>
#include <format>
#include <vector>
#include <iostream>
#include <Detours.h>

#define uint uintptr_t
#define NPOS std::string::npos
#define ProcessAttach DLL_PROCESS_ATTACH
#define LogInfo(input) std::cout << "LogEO-7:Info: " << input  << std::endl;

#include "SDK.hpp"

#include "Logging.h"
#include "Utils.h"
#include "Globals.h"
#include "Helpers.h"
#include "Loot.h"
#include "Player.h"
#include "Inventory.h"
#include "Abilities.h"
#include "Gameplay.h"

