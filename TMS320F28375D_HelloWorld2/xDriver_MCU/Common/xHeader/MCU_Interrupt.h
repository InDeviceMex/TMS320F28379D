/*
 * MCU_Interrupt.h
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_

#pragma  CODE_SECTION(MCU__vEnGlobalInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vDisGlobalInterrupt_RAM, ".TI.ramfunc")

void MCU__vEnGlobalInterrupt_RAM(void);
void MCU__vDisGlobalInterrupt_RAM(void);

void MCU__vEnGlobalInterrupt(void);
void MCU__vDisGlobalInterrupt(void);


#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
