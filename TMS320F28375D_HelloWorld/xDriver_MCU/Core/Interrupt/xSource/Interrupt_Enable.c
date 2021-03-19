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
    IER &= ~(uint16_t) enIntVec;
}

void Core__vEnaInterruptVectorNumber(CORE_nINTERRUPT_VECTOR enIntVec)
{
    uint16_t u16IntVec = 0U;
    uint16_t u16IIntVecMask = 0U;
    u16IntVec = (uint16_t) enIntVec;

    if ((0U < u16IntVec) && (16U >= u16IntVec)) //INT13, INT14, DLOGINT, & RTOSINT
    {
        u16IntVec--; /*remove reset offset*/
        u16IIntVecMask = 1U << u16IntVec;

        IER |= (uint16_t) u16IIntVecMask;
    }

}

void Core__vDisInterruptVectorNumber(CORE_nINTERRUPT_VECTOR enIntVec)
{
    uint16_t u16IntVec = 0U;
    uint16_t u16IIntVecMask = 0U;
    u16IntVec = (uint16_t) enIntVec;

    if ((0U < u16IntVec) && (16U >= u16IntVec)) //INT13, INT14, DLOGINT, & RTOSINT
    {
        u16IntVec--; /*remove reset offset*/
        u16IIntVecMask = 1U << u16IntVec;

        IER &= ~(uint16_t) u16IIntVecMask;
    }
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
    IER &= ~(uint16_t) enIntVec;
    u16RegDebug &= ~(uint16_t) enIntVec;
    SetDBGIER(u16RegDebug);
}

