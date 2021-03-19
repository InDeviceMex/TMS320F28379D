/*
 * PIE_Acknowledge.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_ACKNOWLEDGE_H_
#define XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_ACKNOWLEDGE_H_

#include <xDriver_MCU/PIE/Peripheral/xHeader/PIE_Enum.h>

void PIE__vClearAcknowledgeIRQ(PIE_nVECTOR enIRQ);
void PIE__vClearAcknowledgeVector(PIE_nVECTOR enIRQ);
PIE_nPENDING PIE__enGetAcknowledgeIRQ(PIE_nVECTOR enIRQ);


#endif /* XDRIVER_MCU_PIE_DRIVER_XHEADER_PIE_ACKNOWLEDGE_H_ */
