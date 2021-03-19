/*
 * PIE_Enable.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_EnableIRQ.h>

#include <xDriver_MCU/PIE/Driver/xHeader/PIE_Acknowledge.h>
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_Enable.h>
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_ReadReg.h>
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_WriteReg.h>

#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>
#include <xDriver_MCU/Core/Core.h>
#include <xDriver_MCU/Common/MCU_Common.h>

PIE_nENABLE PIE__enGetEnableIRQ(PIE_nVECTOR enIRQ)
{
    PIE_nENABLE enStatus = PIE_enENABLE_UNDEF;
    uint16_t u16Reg = 0xFFFFU;

    u16Reg = PIE__u16ReadRegister(enIRQ, PIE_PIEIER_OFFSET);
    enStatus = (PIE_nENABLE) u16Reg;

    return enStatus;
}

void PIE__vSetEnableIRQ(PIE_nVECTOR enIRQ, PIE_nENABLE enEnable)
{
    uint16_t u16IRQEnabled = 0U;
    uint16_t u16IntEnabled = 0U;
    uint16_t u16IRQ = 0U;
    uint16_t u16IRQVector = 0U;
    uint16_t u16IRQVectorMask = 0U;

    u16IRQ = (uint16_t) enIRQ;
    u16IRQEnabled = (uint16_t) enEnable;
    Core__vEnaAllowRegModification();

    if(0U != u16IRQEnabled)
    {
        PIE__vSetEnable(PIE_enENABLE);
    }
    u16IntEnabled = MCU__u16DisGlobalInterrupt();
    if(32U <= u16IRQ)
    {
        PIE__vWriteRegister(enIRQ, PIE_PIEIER_OFFSET, (uint16_t) u16IRQEnabled);
        u16IRQVector = u16IRQ / 16U;
        /* Wait for any pending interrupts to get to the CPU*/
        MCU__vNOP();
        MCU__vNOP();
        MCU__vNOP();
        MCU__vNOP();
        MCU__vNOP();
        Core__vClearInterruptVector((CORE_nINTERRUPT_VECTOR)u16IRQVector);
        PIE__vClearAcknowledgeVector((PIE_nVECTOR) u16IRQVector);
        if(0U != u16IRQEnabled)
        {
            Core__vEnaInterruptVector((CORE_nINTERRUPT_VECTOR_MASK) u16IRQVectorMask);
        }
    }
    else
    {
        if ((0U < u16IRQ) && (16 >= u16IRQ)) //INT13, INT14, DLOGINT, & RTOSINT
        {
            u16IRQ--; /*remove reset offset*/
            u16IRQVectorMask = 1U << u16IRQ;
            if(0U != u16IRQEnabled)
            {
                Core__vEnaInterruptVector((CORE_nINTERRUPT_VECTOR_MASK) u16IRQVectorMask);
            }
            else
            {
                Core__vDisInterruptVector((CORE_nINTERRUPT_VECTOR_MASK) u16IRQVectorMask);
            }
        }
    }

    Core__vDisAllowRegModification();

    if(0U != u16IntEnabled)
    {
        MCU__u16EnaGlobalInterrupt();
    }
}



