/*
 * PIE_RegisterIRQVector.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_REGISTERIRQVECTOR_H_
#define XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_REGISTERIRQVECTOR_H_


#include <xDriver_MCU/PIE/Peripheral/xHeader/PIE_Enum.h>

void PIE__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), void (**pfIrqVectorHandlerExtern) (void), PIE_nVECTOR enVector);
void PIE__vUnregisterIRQVectorHandler(void (**pfIrqVectorHandlerExtern) (void), PIE_nVECTOR enVector);

#endif /* XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_REGISTERIRQVECTOR_H_ */
