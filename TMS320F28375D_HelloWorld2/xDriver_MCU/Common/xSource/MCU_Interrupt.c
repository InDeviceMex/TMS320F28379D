/*
 * MCU_Interrupt.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>

void MCU__vDisGlobalInterrupt(void)
{
    { __asm(" DINT");}
}

void MCU__vEnGlobalInterrupt(void)
{
    {__asm(" EINT");}
}

void MCU__vDisGlobalInterrupt_RAM(void)
{
    { __asm(" DINT");}
}

void MCU__vEnGlobalInterrupt_RAM(void)
{
    {__asm(" EINT");}
}

void MCU__vDisGlobalRealTimeInterrupt(void)
{
    { __asm(" setc DBGM");}
}

void MCU__vEnGlobalRealTimeInterrupt(void)
{
    {__asm(" clrc DBGM");}
}

void MCU__vDisGlobalRealTimeInterrupt_RAM(void)
{
    { __asm(" setc DBGM");}
}

void MCU__vEnGlobalRealTimeInterrupt_RAM(void)
{
    {__asm(" clrc DBGM");}
}



