/*
 * PIE_WriteReg.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_WRITEREG_H_
#define XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_WRITEREG_H_

#include <xDriver_MCU/PIE/Peripheral/xHeader/PIE_Enum.h>

void PIE__vWriteRegister(PIE_nVECTOR enIRQ, uint16_t u16RegisterOffset, uint16_t u16Value);


#endif /* XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_WRITEREG_H_ */
