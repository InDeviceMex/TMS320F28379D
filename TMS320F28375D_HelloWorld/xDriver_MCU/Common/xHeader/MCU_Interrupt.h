/*
 * MCU_Interrupt.h
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_

#include <xUtils/Standard/Standard.h>

#pragma  CODE_SECTION(MCU__u16EnaGlobalInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16DisGlobalInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vEnaGlobaRealTimeInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vDisGlobaRealTimelInterrupt_RAM, ".TI.ramfunc")

uint16_t MCU__u16EnaGlobalInterrupt_RAM(void);
uint16_t MCU__u16DisGlobalInterrupt_RAM(void);

uint16_t MCU__u16EnaGlobalInterrupt(void);
uint16_t MCU__u16DisGlobalInterrupt(void);

void MCU__vEnaGlobaRealTimeInterrupt_RAM(void);
void MCU__vDisGlobaRealTimelInterrupt_RAM(void);

void MCU__vEnaGlobalRealTimeInterrupt(void);
void MCU__vDisGlobalRealTimeInterrupt(void);

void MCU__vNOP(void);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
