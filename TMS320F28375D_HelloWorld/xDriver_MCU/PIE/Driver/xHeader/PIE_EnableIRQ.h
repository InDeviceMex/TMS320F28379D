/*
 * PIE_Enable.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_ENABLEIRQ_H_
#define XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_ENABLEIRQ_H_

#include <xDriver_MCU/PIE/Peripheral/xHeader/PIE_Enum.h>

PIE_nENABLE PIE__enGetEnableIRQ(PIE_nVECTOR enIRQ);
void PIE__vSetEnableIRQ(PIE_nVECTOR enIRQ, PIE_nENABLE enEnable);

#endif /* XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_ENABLEIRQ_H_ */
