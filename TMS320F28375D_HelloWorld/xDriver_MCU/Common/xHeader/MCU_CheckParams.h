/*
 * MCU_CheckParams.h
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_

#include <xUtils/Standard/Standard.h>

#pragma  CODE_SECTION(MCU__u16CheckParams_RAM, ".TI.ramfunc")

uint16_t MCU__u16CheckParams_RAM(uint16_t u16Module, uint16_t u16ModuleMax);
uint16_t MCU__u16CheckParams(uint16_t u16Module, uint16_t u16ModuleMax);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_ */
