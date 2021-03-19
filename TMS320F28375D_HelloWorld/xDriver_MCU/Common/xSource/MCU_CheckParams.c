/*
 * MCU_CheckParams.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>

uint16_t MCU__u16CheckParams(uint16_t u16Module, uint16_t u16ModuleMax)
{
    if(u16ModuleMax <= u16Module)
    {
        u16Module = u16ModuleMax - 1U;
    }
    return u16Module;
}

uint16_t MCU__u16CheckParams_RAM(uint16_t u16Module, uint16_t u16ModuleMax)
{
    if(u16ModuleMax <= u16Module)
    {
        u16Module = u16ModuleMax - 1U;
    }
    return u16Module;
}



