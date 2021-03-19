/*
 * MCU_CheckParams.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>

uint32_t MCU__u32CheckParams(uint32_t u32Module, uint32_t u32ModuleMax)
{
    if(u32ModuleMax <= u32Module)
    {
        u32Module = u32ModuleMax - 1UL;
    }
    return u32Module;
}

uint32_t MCU__u32CheckParams_RAM(uint32_t u32Module, uint32_t u32ModuleMax)
{
    if(u32ModuleMax <= u32Module)
    {
        u32Module = u32ModuleMax - 1UL;
    }
    return u32Module;
}



