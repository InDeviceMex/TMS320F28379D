/*
 * MCU_Interrupt.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>

uint16_t MCU__u16DisGlobalInterrupt(void)
{
    return __disable_interrupts() & 0x1U;
}

uint16_t MCU__u16EnaGlobalInterrupt(void)
{
    return __enable_interrupts() & 0x1;
}

uint16_t MCU__u16DisGlobalInterrupt_RAM(void)
{
    return __disable_interrupts() & 0x1U;
}

uint16_t MCU__u16EnaGlobalInterrupt_RAM(void)
{
    return __enable_interrupts() & 0x1;
}

void MCU__vDisGlobalRealTimeInterrupt(void)
{
    { __asm(" setc DBGM");}
}

void MCU__vEnaGlobalRealTimeInterrupt(void)
{
    {__asm(" clrc DBGM");}
}

void MCU__vDisGlobalRealTimeInterrupt_RAM(void)
{
    { __asm(" setc DBGM");}
}

void MCU__vEnaGlobalRealTimeInterrupt_RAM(void)
{
    {__asm(" clrc DBGM");}
}


void MCU__vNOP(void)
{
    {__asm(" NOP");}
}


