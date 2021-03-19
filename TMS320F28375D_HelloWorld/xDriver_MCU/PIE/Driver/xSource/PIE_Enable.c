/*
 * PIE_Enable.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_Enable.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>


PIE_nENABLE PIE__enGetEnable(void)
{
    PIE_nENABLE enStatus = PIE_enENABLE_UNDEF;
    uint16_t u16Reg = 0xFFFFU;
    u16Reg = MCU__u16ReadRegister(PIE_BASE, PIE_PIECTRL_OFFSET, PIE_PIECTRL_ENPIE_MASK, PIE_PIECTRL_R_ENPIE_BIT);
    enStatus = (PIE_nENABLE) u16Reg;
    return enStatus;
}

void PIE__vSetEnable(PIE_nENABLE enEnableArg)
{
    MCU__vWriteRegister(PIE_BASE, PIE_PIECTRL_OFFSET, (uint16_t) enEnableArg, PIE_PIECTRL_ENPIE_MASK, PIE_PIECTRL_R_ENPIE_BIT);
}
