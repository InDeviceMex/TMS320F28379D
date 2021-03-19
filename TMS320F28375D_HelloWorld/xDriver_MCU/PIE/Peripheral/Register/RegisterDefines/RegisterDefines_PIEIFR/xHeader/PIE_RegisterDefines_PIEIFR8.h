/*
 * PIE_RegisterDefines_PIEIFR8.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR8_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR8_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* PIEIFR8 ***********************************************/
/********************************************************************************************/

/*----------*/
#define PIE_PIEIFR8_R_PIE_I2CA_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_R_PIE_I2CA_BIT    (0U)
#define PIE_PIEIFR8_R_PIE_I2CA_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_I2CA_PEND    ((uint16_t) 0x0001U)

#define PIE_PIEIFR8_PIE_I2CA_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_I2CA_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_I2CA_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_I2CA_FIFO_MASK    ((uint16_t) 0x0002U)
#define PIE_PIEIFR8_R_PIE_I2CA_FIFO_BIT    (1U)
#define PIE_PIEIFR8_R_PIE_I2CA_FIFO_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_I2CA_FIFO_PEND    ((uint16_t) 0x0002U)

#define PIE_PIEIFR8_PIE_I2CA_FIFO_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_I2CA_FIFO_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_I2CA_FIFO_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_I2CB_MASK    ((uint16_t) 0x0004U)
#define PIE_PIEIFR8_R_PIE_I2CB_BIT    (2U)
#define PIE_PIEIFR8_R_PIE_I2CB_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_I2CB_PEND    ((uint16_t) 0x0004U)

#define PIE_PIEIFR8_PIE_I2CB_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_I2CB_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_I2CB_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_I2CB_FIFO_MASK    ((uint16_t) 0x0008U)
#define PIE_PIEIFR8_R_PIE_I2CB_FIFO_BIT    (3U)
#define PIE_PIEIFR8_R_PIE_I2CB_FIFO_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_I2CB_FIFO_PEND    ((uint16_t) 0x0008U)

#define PIE_PIEIFR8_PIE_I2CB_FIFO_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_I2CB_FIFO_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_I2CB_FIFO_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_SCIC_RX_MASK    ((uint16_t) 0x0010U)
#define PIE_PIEIFR8_R_PIE_SCIC_RX_BIT    (4U)
#define PIE_PIEIFR8_R_PIE_SCIC_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_SCIC_RX_PEND    ((uint16_t) 0x0010U)

#define PIE_PIEIFR8_PIE_SCIC_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_SCIC_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_SCIC_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_SCIC_TX_MASK    ((uint16_t) 0x0020U)
#define PIE_PIEIFR8_R_PIE_SCIC_TX_BIT    (5U)
#define PIE_PIEIFR8_R_PIE_SCIC_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_SCIC_TX_PEND    ((uint16_t) 0x0020U)

#define PIE_PIEIFR8_PIE_SCIC_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_SCIC_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_SCIC_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_SCID_RX_MASK    ((uint16_t) 0x0040U)
#define PIE_PIEIFR8_R_PIE_SCID_RX_BIT    (6U)
#define PIE_PIEIFR8_R_PIE_SCID_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_SCID_RX_PEND    ((uint16_t) 0x0040U)

#define PIE_PIEIFR8_PIE_SCID_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_SCID_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_SCID_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_SCID_TX_MASK    ((uint16_t) 0x0080U)
#define PIE_PIEIFR8_R_PIE_SCID_TX_BIT    (7U)
#define PIE_PIEIFR8_R_PIE_SCID_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_SCID_TX_PEND    ((uint16_t) 0x0080U)

#define PIE_PIEIFR8_PIE_SCID_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_SCID_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_SCID_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_RES184_MASK    ((uint16_t) 0x0100U)
#define PIE_PIEIFR8_R_PIE_RES184_BIT    (8U)
#define PIE_PIEIFR8_R_PIE_RES184_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES184_PEND    ((uint16_t) 0x0100U)

#define PIE_PIEIFR8_PIE_RES184_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES184_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES184_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_RES185_MASK    ((uint16_t) 0x0200U)
#define PIE_PIEIFR8_R_PIE_RES185_BIT    (9U)
#define PIE_PIEIFR8_R_PIE_RES185_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES185_PEND    ((uint16_t) 0x0200U)

#define PIE_PIEIFR8_PIE_RES185_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES185_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES185_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_RES186_MASK    ((uint16_t) 0x0400U)
#define PIE_PIEIFR8_R_PIE_RES186_BIT    (10U)
#define PIE_PIEIFR8_R_PIE_RES186_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES186_PEND    ((uint16_t) 0x0400U)

#define PIE_PIEIFR8_PIE_RES186_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES186_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES186_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_RES187_MASK    ((uint16_t) 0x0800U)
#define PIE_PIEIFR8_R_PIE_RES187_BIT    (11U)
#define PIE_PIEIFR8_R_PIE_RES187_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES187_PEND    ((uint16_t) 0x0800U)

#define PIE_PIEIFR8_PIE_RES187_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES187_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES187_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_RES188_MASK    ((uint16_t) 0x1000U)
#define PIE_PIEIFR8_R_PIE_RES188_BIT    (12U)
#define PIE_PIEIFR8_R_PIE_RES188_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES188_PEND    ((uint16_t) 0x1000U)

#define PIE_PIEIFR8_PIE_RES188_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES188_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES188_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR8_R_PIE_RES189_MASK    ((uint16_t) 0x2000U)
#define PIE_PIEIFR8_R_PIE_RES189_BIT    (13U)
#define PIE_PIEIFR8_R_PIE_RES189_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES189_PEND    ((uint16_t) 0x2000U)

#define PIE_PIEIFR8_PIE_RES189_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES189_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES189_PEND    ((uint16_t) 0x0001U)
/*----------*/

#if defined(CPU1)
/*----------*/
#define PIE_PIEIFR8_R_PIE_UPPA_MASK    ((uint16_t) 0x4000U)
#define PIE_PIEIFR8_R_PIE_UPPA_BIT    (14U)
#define PIE_PIEIFR8_R_PIE_UPPA_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_UPPA_PEND    ((uint16_t) 0x4000U)

#define PIE_PIEIFR8_PIE_UPPA_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_UPPA_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_UPPA_PEND    ((uint16_t) 0x0001U)
/*----------*/
#else
/*----------*/
#define PIE_PIEIFR8_R_PIE_RES190_MASK    ((uint16_t) 0x4000U)
#define PIE_PIEIFR8_R_PIE_RES190_BIT    (14U)
#define PIE_PIEIFR8_R_PIE_RES190_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES190_PEND    ((uint16_t) 0x4000U)

#define PIE_PIEIFR8_PIE_RES190_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES190_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES190_PEND    ((uint16_t) 0x0001U)
/*----------*/

#endif

/*----------*/
#define PIE_PIEIFR8_R_PIE_RES191_MASK    ((uint16_t) 0x8000U)
#define PIE_PIEIFR8_R_PIE_RES191_BIT    (15U)
#define PIE_PIEIFR8_R_PIE_RES191_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_R_PIE_RES191_PEND    ((uint16_t) 0x8000U)

#define PIE_PIEIFR8_PIE_RES191_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR8_PIE_RES191_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR8_PIE_RES191_PEND    ((uint16_t) 0x0001U)
/*----------*/





#endif /* XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR8_H_ */
