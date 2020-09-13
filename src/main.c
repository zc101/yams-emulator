/***************************************************
* YAMS-Emu Main Entry Point                        *
* Copyright (C) 2020 Zach Caldwell                 *
****************************************************
* This Source Code Form is subject to the terms of *
* the Mozilla Public License, v. 2.0. If a copy of *
* the MPL was not distributed with this file, You  *
* can obtain one at http://mozilla.org/MPL/2.0/.   *
***************************************************/

#include "musashi/m68k.h"
#include "usage.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    YAMS_PrintHeader();
    YAMS_params* params = YAMS_ParseArgs(argc, argv);

    m68k_init();
    m68k_set_cpu_type(M68K_CPU_TYPE_68010);
    m68k_pulse_reset();
    m68k_execute(50);
    free(params);

    printf("End of simulation");
    return 0;
}