/*
 * Misc_Protect.c
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/Misc/xHeader/Misc_Protect.h>

void Core__vEnaAllowRegModification_RAM(void)
{
    __asm(" EALLOW");
}

void Core__vDisAllowRegModification_RAM(void)
{
    __asm(" EDIS");
}

void Core__vEnaAllowRegModification(void)
{
    __asm(" EALLOW");
}

void Core__vDisAllowRegModification(void)
{
    __asm(" EDIS");
}




