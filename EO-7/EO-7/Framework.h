#pragma once

#include <Windows.h>
#include <psapi.h>
#include <iostream>
#include <Detours.h>

#define uint uintptr_t
#define ProcessAttach DLL_PROCESS_ATTACH

#include "SDK.hpp"

#include "Logging.h"
#include "Utils.h"
#include "Globals.h"
#include "Helpers.h"
#include "Player.h"
#include "Inventory.h"
#include "Gameplay.h"

