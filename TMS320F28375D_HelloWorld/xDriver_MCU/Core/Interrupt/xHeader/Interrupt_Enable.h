/*
 * Interrupt_Enable.h
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_CORE_INTERRUPT_XHEADER_INTERRUPT_ENABLE_H_
#define XDRIVER_MCU_CORE_INTERRUPT_XHEADER_INTERRUPT_ENABLE_H_


#include <xDriver_MCU/Core/Interrupt/xHeader/Interrupt_Enum.h>


void Core__vEnaInterruptVector(CORE_nINTERRUPT_VECTOR_MASK enIntVec);
void Core__vDisInterruptVector(CORE_nINTERRUPT_VECTOR_MASK enIntVec);

void Core__vEnaInterruptVectorNumber(CORE_nINTERRUPT_VECTOR enIntVec);
void Core__vDisInterruptVectorNumber(CORE_nINTERRUPT_VECTOR enIntVec);

void Core__vEnaInterruptVector_RealTime(CORE_nINTERRUPT_VECTOR_MASK enIntVec);
void Core__vDisInterruptVector_RealTime(CORE_nINTERRUPT_VECTOR_MASK enIntVec);

#endif /* XDRIVER_MCU_CORE_INTERRUPT_XHEADER_INTERRUPT_ENABLE_H_ */
