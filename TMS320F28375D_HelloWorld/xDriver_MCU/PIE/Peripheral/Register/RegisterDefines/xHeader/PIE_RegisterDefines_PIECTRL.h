/*
 * PIE_RegisterDefines_PIECTRL.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PIE_REGISTERDEFINES_PIECTRL_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PIE_REGISTERDEFINES_PIECTRL_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* 1 PIECTRL ***********************************************/
/******************************************************************************************/

/*----------*/
#define PIE_PIECTRL_R_ENPIE_MASK    ((uint16_t) 0x0001U)
#define PIE_PIECTRL_R_ENPIE_BIT    (0U)
#define PIE_PIECTRL_R_ENPIE_DIS    ((uint16_t) 0x0000U)
#define PIE_PIECTRL_R_ENPIE_ENA    ((uint16_t) 0x0001U)

#define PIE_PIECTRL_ENPIE_MASK    ((uint16_t) 0x0001U)
#define PIE_PIECTRL_ENPIE_DIS    ((uint16_t) 0x0000U)
#define PIE_PIECTRL_ENPIE_ENA    ((uint16_t) 0x0001U)
/*-----------------*/

/*----------*/
#define PIE_PIECTRL_R_PIEVECT_MASK    ((uint16_t) 0xFFFEU)
#define PIE_PIECTRL_R_PIEVECT_BIT    (1U)

#define PIE_PIECTRL_PIEVECT_MASK    ((uint16_t) 0x7FFFU)
/*-----------------*/



#endif /* XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PIE_REGISTERDEFINES_PIECTRL_H_ */
