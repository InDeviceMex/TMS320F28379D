/*
 * Interrupt_Enable.c
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/Interrupt/xHeader/Interrupt_Enable.h>
#include <xDriver_MCU/Core/Interrupt/xHeader/F2837xD_DBGIER.h>
#include <xDriver_MCU/Core/Misc/Misc.h>
#include <xUtils/Standard/Standard.h>

void Core__vEnaInterruptVector(CORE_nINTERRUPT_VECTOR_MASK enIntVec)
{
  IER |= (uint16_t) enIntVec;

}

void Core__vDisInterruptVector(CORE_nINTERRUPT_VECTOR_MASK enIntVec)
{
    IER &= (uint16_t) enIntVec;
}

void Core__vEnaInterruptVector_RealTime(CORE_nINTERRUPT_VECTOR_MASK enIntVec)
{
    uint16_t u16RegDebug = 0U;
    IER |= (uint16_t) enIntVec;
    u16RegDebug |= (uint16_t) enIntVec;
    SetDBGIER(u16RegDebug);

}

void Core__vDisInterruptVector_RealTime(CORE_nINTERRUPT_VECTOR_MASK enIntVec)
{
    uint16_t u16RegDebug = 0U;
    IER &= (uint16_t) enIntVec;
    u16RegDebug &= ~(uint16_t) enIntVec;
    SetDBGIER(u16RegDebug);
}

