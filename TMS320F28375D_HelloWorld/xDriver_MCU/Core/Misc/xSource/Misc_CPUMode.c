/*
 * Misc_CPUMode.c
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */

#include <xDriver_MCU/Core/Misc/xHeader/Misc_CPUMode.h>


void Core__vModeC28_RAM(void)
{
    __asm(" SETC OBJMODE");
    __asm(" CLRC AMODE");

}

void Core__vModeC27_RAM(void)
{
    __asm(" CLRC OBJMODE");
    __asm(" CLRC AMODE");

}

void Core__vModeC24_RAM(void)
{
    __asm(" SETC OBJMODE");
    __asm(" SETC AMODE");

}

void Core__vModeC28(void)
{
    __asm(" SETC OBJMODE");
    __asm(" CLRC AMODE");
}

void Core__vModeC27(void)
{
    __asm(" CLRC OBJMODE");
    __asm(" CLRC AMODE");
}

void Core__vModeC24(void)
{
    __asm(" SETC OBJMODE");
    __asm(" SETC AMODE");
}
