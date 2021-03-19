/*
 * MCU_CheckParams.h
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_

#include <xUtils/Standard/Standard.h>

#pragma  CODE_SECTION(MCU__u32CheckParams_RAM, ".TI.ramfunc")

uint32_t MCU__u32CheckParams_RAM(uint32_t u32Module, uint32_t u32ModuleMax);
uint32_t MCU__u32CheckParams(uint32_t u32Module, uint32_t u32ModuleMax);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_ */
