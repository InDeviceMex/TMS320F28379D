/*
 * PIE_RegisterAddress.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_XHEADER_PIE_REGISTERADDRESS_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_XHEADER_PIE_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define PIE_BASE    ((uint32_t) 0x00000CE0UL)
#define PIE_OFFSET    ((uint32_t) 0x00000000UL)

#define PIE_IRQ_MAX    (224UL)
#define PIE_MAX    (14UL)

#define PIE_PIECTRL_OFFSET    ((uint32_t) 0x0000UL)
#define PIE_PIEACK_OFFSET    ((uint32_t) 0x0001UL)

#define PIE_PIEIER_OFFSET    ((uint32_t) 0x0002UL)
#define PIE_PIEIFR_OFFSET    ((uint32_t) 0x0003UL)

#define PIE_PIEIER1_OFFSET    ((uint32_t) 0x0002UL)
#define PIE_PIEIFR1_OFFSET    ((uint32_t) 0x0003UL)
#define PIE_PIEIER2_OFFSET    ((uint32_t) 0x0004UL)
#define PIE_PIEIFR2_OFFSET    ((uint32_t) 0x0005UL)
#define PIE_PIEIER3_OFFSET    ((uint32_t) 0x0006UL)
#define PIE_PIEIFR3_OFFSET    ((uint32_t) 0x0007UL)
#define PIE_PIEIER4_OFFSET    ((uint32_t) 0x0008UL)
#define PIE_PIEIFR4_OFFSET    ((uint32_t) 0x0009UL)
#define PIE_PIEIER5_OFFSET    ((uint32_t) 0x000AUL)
#define PIE_PIEIFR5_OFFSET    ((uint32_t) 0x000BUL)
#define PIE_PIEIER6_OFFSET    ((uint32_t) 0x000CUL)
#define PIE_PIEIFR6_OFFSET    ((uint32_t) 0x000DUL)
#define PIE_PIEIER7_OFFSET    ((uint32_t) 0x000EUL)
#define PIE_PIEIFR7_OFFSET    ((uint32_t) 0x000FUL)
#define PIE_PIEIER8_OFFSET    ((uint32_t) 0x0010UL)
#define PIE_PIEIFR8_OFFSET    ((uint32_t) 0x0011UL)
#define PIE_PIEIER9_OFFSET    ((uint32_t) 0x0012UL)
#define PIE_PIEIFR9_OFFSET    ((uint32_t) 0x0013UL)
#define PIE_PIEIER10_OFFSET    ((uint32_t) 0x0014UL)
#define PIE_PIEIFR10_OFFSET    ((uint32_t) 0x0015UL)
#define PIE_PIEIER11_OFFSET    ((uint32_t) 0x0016UL)
#define PIE_PIEIFR11_OFFSET    ((uint32_t) 0x0017UL)
#define PIE_PIEIER12_OFFSET    ((uint32_t) 0x0018UL)
#define PIE_PIEIFR12_OFFSET    ((uint32_t) 0x0019UL)


#endif /* XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_XHEADER_PIE_REGISTERADDRESS_H_ */
