/*
 * MCU_WriteReg.h
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_

#include <xUtils/Standard/Standard.h>

#pragma  CODE_SECTION(MCU__vWriteRegister_RAM, ".ramcode")

void MCU__vWriteRegister_RAM(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16FeatureValue, uint16_t u16MaskFeature, uint16_t u16BitFeature);

void MCU__vWriteRegister(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16FeatureValue, uint16_t u16MaskFeature, uint16_t u16BitFeature);
void MCU__vWriteRegister_Direct(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16FeatureValue, uint16_t u16MaskFeature, uint16_t u16BitFeature);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_ */
