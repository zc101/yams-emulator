/***************************************************
* Emulator build-time configuration                *
* Copyright (C) 2020 Zach Caldwell                 *
****************************************************
* This Source Code Form is subject to the terms of *
* the Mozilla Public License, v. 2.0. If a copy of *
* the MPL was not distributed with this file, You  *
* can obtain one at http://mozilla.org/MPL/2.0/.   *
***************************************************/

#ifndef _YAMS_CONFIG_H_
#define _YAMS_CONFIG_H_

// Define the bitwidth of real memory (RAM/ROM) space.
// 21 address bits == 2MB
extern const unsigned short MEMORY_BITS;

// Define the debug memory address.
// Any value written to this address will be output to the console
extern const unsigned long DBG_ADDRESS;

// Define the simulation refresh speed (in Hz).
// Helps prevent visual jitter by spacing out cycle use, vs. just quickly
// burning all the cycles-per-second and delaying the rest of the second
extern const unsigned short EMU_REFRESH_HZ;

// Define the emulated CPU's clock speed (in Hz).
extern const unsigned long CPU_SPEED_HZ;

// Shorten some annoyingly long log calls to look more like SDL_Log
#include <SDL2/SDL_log.h>
#ifdef DEBUG
  #define LogDebug(...) SDL_Log(__VA_ARGS__)
#else
  #define LogDebug(...)  
#endif
#define LogWarn(...) SDL_LogWarn(SDL_LOG_CATEGORY_APPLICATION, __VA_ARGS__)
#define LogError(...) SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, __VA_ARGS__)
#define LogCritical(...) SDL_LogCritical(SDL_LOG_CATEGORY_APPLICATION, __VA_ARGS__)

#endif //_YAMS_CONFIG_H_
