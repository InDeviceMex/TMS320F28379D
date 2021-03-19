/*
 * PIE_Init.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/PIE/App/xHeader/PIE_Init.h>

#include <xDriver_MCU/PIE/Driver/PIE_Driver.h>
#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>
#include <xDriver_MCU/Core/Core.h>
#include <xDriver_MCU/Common/MCU_Common.h>

void PIE__vInit(void)
{
    PIE__vSetEnable(PIE_enENABLE);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEACK_OFFSET, 0xFFFFU, 0xFFFFU, 0U);
}

void PIE__vDeinit(void)
{
    PIE__vSetEnable(PIE_enDISABLE);

    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER1_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER2_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER3_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER4_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER5_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER6_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER7_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER8_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER9_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER10_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER11_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIER12_OFFSET, 0U, 0xFFFFU, 0U);

    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR1_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR2_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR3_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR4_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR5_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR6_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR7_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR8_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR9_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR10_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR11_OFFSET, 0U, 0xFFFFU, 0U);
    MCU__vWriteRegister(PIE_OFFSET, PIE_PIEIFR12_OFFSET, 0U, 0xFFFFU, 0U);
}

