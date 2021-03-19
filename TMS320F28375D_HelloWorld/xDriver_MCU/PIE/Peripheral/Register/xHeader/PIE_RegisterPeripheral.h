/*
 * PIE_RegisterPeripheral.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_XHEADER_PIE_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_XHEADER_PIE_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/PIE/Peripheral/Struct/xHeader/PIE_StructPeripheral.h>
#include <xDriver_MCU/PIE/Peripheral/Register/xHeader/PIE_RegisterAddress.h>

#define PIE    ((PIE_TypeDef*) (PIE_BASE + PIE_OFFSET))   /*!< PIE configuration struct          */
#define PIE_ARRAY    ((PIE_ARRAY_TypeDef*) (PIE_BASE + PIE_OFFSET))   /*!< PIE configuration struct          */
#define PIE_UNION    ((PIE_UNION_TypeDef*) (PIE_BASE + PIE_OFFSET))   /*!< PIE configuration struct          */

/********************************************************************************************/
/************************************* PIECTRL ***********************************************/
/********************************************************************************************/
#define PIE_PIECTRL    (((PIECTRL_TypeDef*) (PIE_BASE + PIE_PIECTRL_OFFSET)))
#define PIE_PIECTRL_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIECTRL_OFFSET)))

/********************************************************************************************/
/************************************* PIEACK ***********************************************/
/********************************************************************************************/
#define PIE_PIEACK    (((PIEACK_TypeDef*) (PIE_BASE + PIE_PIEACK_OFFSET)))
#define PIE_PIEACK_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEACK_OFFSET)))

/********************************************************************************************/
/************************************* PIEIR ***********************************************/
/********************************************************************************************/
#define PIE_PIEIR    (((PIEIS_TypeDef*) (PIE_BASE + PIE_PIEIER1_OFFSET)))

#define PIE_PIEIR1    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER1_OFFSET)))
#define PIE_PIEIR2    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER2_OFFSET)))
#define PIE_PIEIR3    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER3_OFFSET)))
#define PIE_PIEIR4    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER4_OFFSET)))
#define PIE_PIEIR5    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER5_OFFSET)))
#define PIE_PIEIR6    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER6_OFFSET)))
#define PIE_PIEIR7    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER7_OFFSET)))
#define PIE_PIEIR8    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER8_OFFSET)))
#define PIE_PIEIR9    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER9_OFFSET)))
#define PIE_PIEIR10    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER10_OFFSET)))
#define PIE_PIEIR11    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER11_OFFSET)))
#define PIE_PIEIR12    (((PIEI_UNION_TypeDef*) (PIE_BASE + PIE_PIEIER12_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER1 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER1    (((PIEIR1_TypeDef*) (PIE_BASE + PIE_PIEIER1_OFFSET)))
#define PIE_PIEIER1_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER1_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR1 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR1    (((PIEIR1_TypeDef*) (PIE_BASE + PIE_PIEIFR1_OFFSET)))
#define PIE_PIEIFR1_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR1_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER2 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER2    (((PIEIR2_TypeDef*) (PIE_BASE + PIE_PIEIER2_OFFSET)))
#define PIE_PIEIER2_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER2_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR2 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR2    (((PIEIR2_TypeDef*) (PIE_BASE + PIE_PIEIFR2_OFFSET)))
#define PIE_PIEIFR2_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR2_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER3 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER3    (((PIEIR3_TypeDef*) (PIE_BASE + PIE_PIEIER3_OFFSET)))
#define PIE_PIEIER3_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER3_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR3 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR3    (((PIEIR3_TypeDef*) (PIE_BASE + PIE_PIEIFR3_OFFSET)))
#define PIE_PIEIFR3_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR3_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER4 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER4    (((PIEIR4_TypeDef*) (PIE_BASE + PIE_PIEIER4_OFFSET)))
#define PIE_PIEIER4_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER4_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR4 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR4    (((PIEIR4_TypeDef*) (PIE_BASE + PIE_PIEIFR4_OFFSET)))
#define PIE_PIEIFR4_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR4_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER4 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER4    (((PIEIR4_TypeDef*) (PIE_BASE + PIE_PIEIER4_OFFSET)))
#define PIE_PIEIER4_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER4_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR5 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR5    (((PIEIR5_TypeDef*) (PIE_BASE + PIE_PIEIFR5_OFFSET)))
#define PIE_PIEIFR5_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR5_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR6 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR6    (((PIEIR6_TypeDef*) (PIE_BASE + PIE_PIEIFR6_OFFSET)))
#define PIE_PIEIFR6_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR6_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER7 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER7    (((PIEIR7_TypeDef*) (PIE_BASE + PIE_PIEIER7_OFFSET)))
#define PIE_PIEIER7_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER7_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR7 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR7    (((PIEIR7_TypeDef*) (PIE_BASE + PIE_PIEIFR7_OFFSET)))
#define PIE_PIEIFR7_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR7_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER8 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER8    (((PIEIR8_TypeDef*) (PIE_BASE + PIE_PIEIER8_OFFSET)))
#define PIE_PIEIER8_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER8_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR8 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR8    (((PIEIR8_TypeDef*) (PIE_BASE + PIE_PIEIFR8_OFFSET)))
#define PIE_PIEIFR8_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR8_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER9 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER9    (((PIEIR9_TypeDef*) (PIE_BASE + PIE_PIEIER9_OFFSET)))
#define PIE_PIEIER9_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER9_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR9 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR9    (((PIEIR9_TypeDef*) (PIE_BASE + PIE_PIEIFR9_OFFSET)))
#define PIE_PIEIFR9_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR9_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER10 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER10    (((PIEIR10_TypeDef*) (PIE_BASE + PIE_PIEIER10_OFFSET)))
#define PIE_PIEIER10_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER10_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR10 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR10    (((PIEIR10_TypeDef*) (PIE_BASE + PIE_PIEIFR10_OFFSET)))
#define PIE_PIEIFR10_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR10_OFFSET)))

/********************************************************************************************/
/************************************* PIEIER10 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIER10    (((PIEIR10_TypeDef*) (PIE_BASE + PIE_PIEIER10_OFFSET)))
#define PIE_PIEIER10_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIER10_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR11 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR11    (((PIEIR11_TypeDef*) (PIE_BASE + PIE_PIEIFR11_OFFSET)))
#define PIE_PIEIFR11_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR11_OFFSET)))

/********************************************************************************************/
/************************************* PIEIFR12 ***********************************************/
/********************************************************************************************/
#define PIE_PIEIFR12    (((PIEIR12_TypeDef*) (PIE_BASE + PIE_PIEIFR12_OFFSET)))
#define PIE_PIEIFR12_R    (*((volatile uint16_t*) (PIE_BASE + PIE_PIEIFR12_OFFSET)))

#endif /* XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_XHEADER_PIE_REGISTERPERIPHERAL_H_ */
