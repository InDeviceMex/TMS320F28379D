/*
 * PIE_ReadReg.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_READREG_H_
#define XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_READREG_H_

#include <xDriver_MCU/PIE/Peripheral/xHeader/PIE_Enum.h>

uint16_t PIE__u16ReadRegister(PIE_nVECTOR enIRQ, uint16_t u16RegisterOffset);

#endif /* XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_READREG_H_ */
