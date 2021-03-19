/*
 * PIE_Acknowledge.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_Acknowledge.h>

#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>
#include <xDriver_MCU/Common/MCU_Common.h>

void PIE__vClearAcknowledgeIRQ(PIE_nVECTOR enIRQ)
{
    uint16_t u16IRQ = 0U;
    uint16_t u16IRQVector = 0U;
    uint16_t u16IRQVectorMask = 0U;
    u16IRQ = (uint16_t) enIRQ;
    if(32U <= u16IRQ)
    {
        u16IRQVector = u16IRQ / 16U;
        u16IRQVectorMask = 1U << u16IRQVector;
        MCU__vWriteRegister(PIE_OFFSET, PIE_PIEACK_OFFSET, u16IRQVectorMask, 0xFFFFU, 0U);
    }
    else
    {
        if ((0U < u16IRQ) && (16 >= u16IRQ)) //INT13, INT14, DLOGINT, & RTOSINT
        {
            u16IRQ--; /*remove reset offset*/
            u16IRQVectorMask = 1U << u16IRQ;
            MCU__vWriteRegister(PIE_OFFSET, PIE_PIEACK_OFFSET, u16IRQVectorMask, 0xFFFFU, 0U);
        }
    }
}

void PIE__vClearAcknowledgeVector(PIE_nVECTOR enIRQ)
{
    uint16_t u16IRQ = 0U;
    uint16_t u16IRQVectorMask = 0U;
    u16IRQ = (uint16_t) enIRQ;

    if ((0U < u16IRQ) && (16 >= u16IRQ)) //INT13, INT14, DLOGINT, & RTOSINT
    {
        u16IRQ--; /*remove reset offset*/
        u16IRQVectorMask = 1U << u16IRQ;
        MCU__vWriteRegister(PIE_OFFSET, PIE_PIEACK_OFFSET, u16IRQVectorMask, 0xFFFFU, 0U);
    }
}

PIE_nPENDING PIE__enGetAcknowledgeIRQ(PIE_nVECTOR enIRQ)
{
    PIE_nPENDING enStatus = PIE_enPENDING_UNDEF;
    uint16_t u16Status = 0xFFFFU;
    uint16_t u16IRQ = 0U;
    uint16_t u16IRQVector = 0U;
    uint16_t u16IRQVectorMask = 0U;

    u16IRQ = (uint16_t) enIRQ;
    if(32U <= u16IRQ)
    {
        u16IRQVector = u16IRQ / 16U;
        u16IRQVectorMask = 1U << u16IRQVector;
        u16Status = MCU__u16ReadRegister(PIE_OFFSET, PIE_PIEACK_OFFSET, u16IRQVectorMask, 0U);

    }
    else
    {
        if ((0U < u16IRQ) && (16 >= u16IRQ)) //INT13, INT14, DLOGINT, & RTOSINT
        {
            u16IRQ--; /*remove reset offset*/
            u16IRQVectorMask = 1U << u16IRQ;
            u16Status = MCU__u16ReadRegister(PIE_OFFSET, PIE_PIEACK_OFFSET, u16IRQVectorMask, 0U);
        }
    }

    if(0xFFFFU != u16Status)
    {
        if(0U != u16Status)
        {
            enStatus = PIE_enPENDING;
        }
        else
        {
            enStatus = PIE_enNOPENDING;

        }
    }
    return enStatus;
}
