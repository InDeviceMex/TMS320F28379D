/*
 * PIE_RegisterDefines_PIEIFR9.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR9_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR9_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* PIEIFR9 ***********************************************/
/********************************************************************************************/

/*----------*/
#define PIE_PIEIFR9_R_PIE_SCIA_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_R_PIE_SCIA_RX_BIT    (0U)
#define PIE_PIEIFR9_R_PIE_SCIA_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_SCIA_RX_PEND    ((uint16_t) 0x0001U)

#define PIE_PIEIFR9_PIE_SCIA_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_SCIA_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_SCIA_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_SCIA_TX_MASK    ((uint16_t) 0x0002U)
#define PIE_PIEIFR9_R_PIE_SCIA_TX_BIT    (1U)
#define PIE_PIEIFR9_R_PIE_SCIA_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_SCIA_TX_PEND    ((uint16_t) 0x0002U)

#define PIE_PIEIFR9_PIE_SCIA_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_SCIA_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_SCIA_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_SCIB_RX_MASK    ((uint16_t) 0x0004U)
#define PIE_PIEIFR9_R_PIE_SCIB_RX_BIT    (2U)
#define PIE_PIEIFR9_R_PIE_SCIB_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_SCIB_RX_PEND    ((uint16_t) 0x0004U)

#define PIE_PIEIFR9_PIE_SCIB_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_SCIB_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_SCIB_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_SCIB_TX_MASK    ((uint16_t) 0x0008U)
#define PIE_PIEIFR9_R_PIE_SCIB_TX_BIT    (3U)
#define PIE_PIEIFR9_R_PIE_SCIB_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_SCIB_TX_PEND    ((uint16_t) 0x0008U)

#define PIE_PIEIFR9_PIE_SCIB_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_SCIB_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_SCIB_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_CANA0_MASK    ((uint16_t) 0x0010U)
#define PIE_PIEIFR9_R_PIE_CANA0_BIT    (4U)
#define PIE_PIEIFR9_R_PIE_CANA0_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_CANA0_PEND    ((uint16_t) 0x0010U)

#define PIE_PIEIFR9_PIE_CANA0_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_CANA0_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_CANA0_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_CANA1_MASK    ((uint16_t) 0x0020U)
#define PIE_PIEIFR9_R_PIE_CANA1_BIT    (5U)
#define PIE_PIEIFR9_R_PIE_CANA1_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_CANA1_PEND    ((uint16_t) 0x0020U)

#define PIE_PIEIFR9_PIE_CANA1_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_CANA1_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_CANA1_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_CANB0_MASK    ((uint16_t) 0x0040U)
#define PIE_PIEIFR9_R_PIE_CANB0_BIT    (6U)
#define PIE_PIEIFR9_R_PIE_CANB0_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_CANB0_PEND    ((uint16_t) 0x0040U)

#define PIE_PIEIFR9_PIE_CANB0_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_CANB0_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_CANB0_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_CANB1_MASK    ((uint16_t) 0x0080U)
#define PIE_PIEIFR9_R_PIE_CANB1_BIT    (7U)
#define PIE_PIEIFR9_R_PIE_CANB1_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_CANB1_PEND    ((uint16_t) 0x0080U)

#define PIE_PIEIFR9_PIE_CANB1_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_CANB1_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_CANB1_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_RES192_MASK    ((uint16_t) 0x0100U)
#define PIE_PIEIFR9_R_PIE_RES192_BIT    (8U)
#define PIE_PIEIFR9_R_PIE_RES192_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES192_PEND    ((uint16_t) 0x0100U)

#define PIE_PIEIFR9_PIE_RES192_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES192_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES192_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_RES193_MASK    ((uint16_t) 0x0200U)
#define PIE_PIEIFR9_R_PIE_RES193_BIT    (9U)
#define PIE_PIEIFR9_R_PIE_RES193_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES193_PEND    ((uint16_t) 0x0200U)

#define PIE_PIEIFR9_PIE_RES193_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES193_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES193_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_RES194_MASK    ((uint16_t) 0x0400U)
#define PIE_PIEIFR9_R_PIE_RES194_BIT    (10U)
#define PIE_PIEIFR9_R_PIE_RES194_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES194_PEND    ((uint16_t) 0x0400U)

#define PIE_PIEIFR9_PIE_RES194_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES194_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES194_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_RES195_MASK    ((uint16_t) 0x0800U)
#define PIE_PIEIFR9_R_PIE_RES195_BIT    (11U)
#define PIE_PIEIFR9_R_PIE_RES195_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES195_PEND    ((uint16_t) 0x0800U)

#define PIE_PIEIFR9_PIE_RES195_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES195_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES195_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_RES196_MASK    ((uint16_t) 0x1000U)
#define PIE_PIEIFR9_R_PIE_RES196_BIT    (12U)
#define PIE_PIEIFR9_R_PIE_RES196_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES196_PEND    ((uint16_t) 0x1000U)

#define PIE_PIEIFR9_PIE_RES196_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES196_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES196_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR9_R_PIE_RES197_MASK    ((uint16_t) 0x2000U)
#define PIE_PIEIFR9_R_PIE_RES197_BIT    (13U)
#define PIE_PIEIFR9_R_PIE_RES197_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES197_PEND    ((uint16_t) 0x2000U)

#define PIE_PIEIFR9_PIE_RES197_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES197_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES197_PEND    ((uint16_t) 0x0001U)
/*----------*/

#if defined(CPU1)
/*----------*/
#define PIE_PIEIFR9_R_PIE_USBA_MASK    ((uint16_t) 0x4000U)
#define PIE_PIEIFR9_R_PIE_USBA_BIT    (14U)
#define PIE_PIEIFR9_R_PIE_USBA_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_USBA_PEND    ((uint16_t) 0x4000U)

#define PIE_PIEIFR9_PIE_USBA_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_USBA_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_USBA_PEND    ((uint16_t) 0x0001U)
/*----------*/
#else
/*----------*/
#define PIE_PIEIFR9_R_PIE_RES198_MASK    ((uint16_t) 0x4000U)
#define PIE_PIEIFR9_R_PIE_RES198_BIT    (14U)
#define PIE_PIEIFR9_R_PIE_RES198_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES198_PEND    ((uint16_t) 0x4000U)

#define PIE_PIEIFR9_PIE_RES198_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES198_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES198_PEND    ((uint16_t) 0x0001U)
/*----------*/

#endif

/*----------*/
#define PIE_PIEIFR9_R_PIE_RES199_MASK    ((uint16_t) 0x8000U)
#define PIE_PIEIFR9_R_PIE_RES199_BIT    (15U)
#define PIE_PIEIFR9_R_PIE_RES199_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_R_PIE_RES199_PEND    ((uint16_t) 0x8000U)

#define PIE_PIEIFR9_PIE_RES199_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR9_PIE_RES199_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR9_PIE_RES199_PEND    ((uint16_t) 0x0001U)
/*----------*/


#endif /* XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR9_H_ */
