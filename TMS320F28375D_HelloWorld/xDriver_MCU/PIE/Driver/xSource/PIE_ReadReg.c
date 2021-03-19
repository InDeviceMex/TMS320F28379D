/*
 * PIE_ReadReg.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_ReadReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>

uint16_t PIE__u16ReadRegister(PIE_nVECTOR enIRQ, uint16_t u16RegisterOffset)
{
    uint16_t u16Reg = 0xFFFFU;
    uint16_t u16IsrIndex = 0U;
    uint16_t u16IsrBit = 0U;
    uint16_t u16IRQ = 0U;
    u16IRQ = (uint16_t) enIRQ;
    if(32U <= u16IRQ)
    {
        u16IRQ -= 32U;
        u16IsrBit = u16IRQ % 16U;
        u16IsrIndex = u16IRQ / 16U;
        u16IsrIndex *= 2U;
        u16RegisterOffset += u16IsrIndex;
        u16Reg = MCU__u16ReadRegister(PIE_BASE, u16RegisterOffset, 0x1U, u16IsrBit);
    }
    return u16Reg;
}



