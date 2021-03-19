/*
 * PIE_WriteReg.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_WriteReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>

void PIE__vWriteRegister(PIE_nVECTOR enIRQ, uint16_t u16RegisterOffset, uint16_t u16Value)
{
    uint16_t u16IsrIndex = 0U;
    uint16_t u16IsrBit = 0U;
    uint16_t u16IRQ = 0U;
    u16IRQ = (uint16_t) enIRQ;
    if( 32U <= u16IRQ)
    {
        u16IRQ -= 32U;
        u16IsrBit = u16IRQ % 16U;
        u16IsrIndex = u16IRQ / 16U;
        u16IsrIndex *= 2U;
        u16RegisterOffset += u16IsrIndex;
        MCU__vWriteRegister(PIE_BASE, u16RegisterOffset, u16Value, 0x1U, u16IsrBit);
    }
}



