/*
 * PIE_Vector.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_VECTOR_H_
#define XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_VECTOR_H_

#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>

#define PIE_VECTOR_TABLE_SIZE ((uint16_t) 0x0200U)

__interrupt void IntDefaultHandler(void);
extern void (*PIE__pfnVectors[PIE_VECTOR_TABLE_SIZE])(void);

extern void (*const g_pfnVectors[PIE_IRQ_MAX])(void);

void PIE__vInitVector(void);

#endif /* XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_VECTOR_H_ */
