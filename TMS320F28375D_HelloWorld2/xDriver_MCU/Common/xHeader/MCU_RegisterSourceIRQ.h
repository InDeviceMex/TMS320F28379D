/*
 * MCU_RegisterSourceIRQ.h
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_

#include <xUtils/Standard/Standard.h>

#pragma  CODE_SECTION(MCU__vRegisterIRQSourceHandler_RAM, ".TI.ramfunc")

void MCU__vRegisterIRQSourceHandler_RAM(void (*pfIrqSourceHandler) (void), void (**pfIrqVectorHandler) (void), uint32_t u32InterruptSource, uint32_t u32InterruptSourceMax);
void MCU__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), void (**pfIrqVectorHandler) (void), uint32_t u32InterruptSource, uint32_t u32InterruptSourceMax);


#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_ */
