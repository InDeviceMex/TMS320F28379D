/*
 * Interrupt_Status.h
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_CORE_INTERRUPT_XHEADER_INTERRUPT_STATUS_H_
#define XDRIVER_MCU_CORE_INTERRUPT_XHEADER_INTERRUPT_STATUS_H_


#include <xDriver_MCU/Core/Interrupt/xHeader/Interrupt_Enum.h>
/*Dangerous Functionality*/
#if 0
CORE_nINTERRUPT_STATUS Core__enGetStatusInterruptVector(CORE_nINTERRUPT_VECTOR enIntVec);
void Core__vClearInterruptVector(CORE_nINTERRUPT_VECTOR enIntVec);

#endif

void Core__vTriggerInterruptVector(CORE_nINTERRUPT_VECTOR enIntVec);
void Core__vTriggerInterruptVector_Trap(CORE_nINTERRUPT_VECTOR enIntVec);

#endif /* XDRIVER_MCU_CORE_INTERRUPT_XHEADER_INTERRUPT_STATUS_H_ */
