/*
 * MCU_ReadReg.h
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_READREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_READREG_H_

#include <xUtils/Standard/Standard.h>

#pragma  CODE_SECTION(MCU__u16ReadRegister_RAM, ".TI.ramfunc")

uint16_t MCU__u16ReadRegister_RAM(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16MaskFeature, uint16_t u16BitFeature);
uint16_t MCU__u16ReadRegister(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16MaskFeature, uint16_t u16BitFeature);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_READREG_H_ */
