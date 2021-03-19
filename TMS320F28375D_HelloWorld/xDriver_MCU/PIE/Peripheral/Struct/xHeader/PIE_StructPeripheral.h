/*
 * PIE_StructPeripheral.h
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_STRUCT_XHEADER_PIE_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_STRUCT_XHEADER_PIE_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/PIE/Peripheral/Struct/xHeader/PIE_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint16_t PIECTRL;
        PIECTRL_TypeDef PIECTRL_Bit;
    };
    union
    {
        volatile uint16_t PIEACK;
        PIEACK_TypeDef PIEACK_Bit;
    };
    PIEIS_TypeDef PIEIR;
}  PIE_UNION_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint16_t PIECTRL;
        PIECTRL_TypeDef PIECTRL_Bit;
    };
    union
    {
        volatile uint16_t PIEACK;
        PIEACK_TypeDef PIEACK_Bit;
    };
    union
    {
        volatile uint16_t PIEIR1[2U];
        PIEI_UNION_TypeDef PIEIR1_Union;
    };
    union
    {
        volatile uint16_t PIEIR2[2U];
        PIEI_UNION_TypeDef PIEIR2_Union;
    };
    union
    {
        volatile uint16_t PIEIR3[2U];
        PIEI_UNION_TypeDef PIEIR3_Union;
    };
    union
    {
        volatile uint16_t PIEIR4[2U];
        PIEI_UNION_TypeDef PIEIR4_Union;
    };
    union
    {
        volatile uint16_t PIEIR5[2U];
        PIEI_UNION_TypeDef PIEIR5_Union;
    };
    union
    {
        volatile uint16_t PIEIR6[2U];
        PIEI_UNION_TypeDef PIEIR6_Union;
    };
    union
    {
        volatile uint16_t PIEIR7[2U];
        PIEI_UNION_TypeDef PIEIR7_Union;
    };
    union
    {
        volatile uint16_t PIEIR8[2U];
        PIEI_UNION_TypeDef PIEIR8_Union;
    };
    union
    {
        volatile uint16_t PIEIR9[2U];
        PIEI_UNION_TypeDef PIEIR9_Union;
    };
    union
    {
        volatile uint16_t PIEIR10[2U];
        PIEI_UNION_TypeDef PIEIR10_Union;
    };
    union
    {
        volatile uint16_t PIEIR11[2U];
        PIEI_UNION_TypeDef PIEIR11_Union;
    };
    union
    {
        volatile uint16_t PIEIR12[2U];
        PIEI_UNION_TypeDef PIEIR12_Union;
    };
}  PIE_ARRAY_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint16_t PIECTRL;
        PIECTRL_TypeDef PIECTRL_Bit;
    };
    union
    {
        volatile uint16_t PIEACK;
        PIEACK_TypeDef PIEACK_Bit;
    };
    union
    {
        volatile uint16_t PIEIER1;
        PIEIR1_TypeDef PIEIER1_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR1;
        PIEIR1_TypeDef PIEIFR1_Bit;
    };
    union
    {
        volatile uint16_t PIEIER2;
        PIEIR2_TypeDef PIEIER2_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR2;
        PIEIR2_TypeDef PIEIFR2_Bit;
    };
    union
    {
        volatile uint16_t PIEIER3;
        PIEIR3_TypeDef PIEIER3_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR3;
        PIEIR3_TypeDef PIEIFR3_Bit;
    };
    union
    {
        volatile uint16_t PIEIER4;
        PIEIR4_TypeDef PIEIER4_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR4;
        PIEIR4_TypeDef PIEIFR4_Bit;
    };
    union
    {
        volatile uint16_t PIEIER5;
        PIEIR5_TypeDef PIEIER5_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR5;
        PIEIR5_TypeDef PIEIFR5_Bit;
    };
    union
    {
        volatile uint16_t PIEIER6;
        PIEIR6_TypeDef PIEIER6_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR6;
        PIEIR6_TypeDef PIEIFR6_Bit;
    };
    union
    {
        volatile uint16_t PIEIER7;
        PIEIR7_TypeDef PIEIER7_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR7;
        PIEIR7_TypeDef PIEIFR7_Bit;
    };
    union
    {
        volatile uint16_t PIEIER8;
        PIEIR8_TypeDef PIEIER8_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR8;
        PIEIR8_TypeDef PIEIFR8_Bit;
    };
    union
    {
        volatile uint16_t PIEIER9;
        PIEIR9_TypeDef PIEIER9_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR9;
        PIEIR9_TypeDef PIEIFR9_Bit;
    };
    union
    {
        volatile uint16_t PIEIER10;
        PIEIR10_TypeDef PIEIER10_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR10;
        PIEIR10_TypeDef PIEIFR10_Bit;
    };
    union
    {
        volatile uint16_t PIEIER11;
        PIEIR11_TypeDef PIEIER11_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR11;
        PIEIR11_TypeDef PIEIFR11_Bit;
    };
    union
    {
        volatile uint16_t PIEIER12;
        PIEIR12_TypeDef PIEIER12_Bit;
    };
    union
    {
        volatile uint16_t PIEIFR12;
        PIEIR12_TypeDef PIEIFR12_Bit;
    };
}PIE_TypeDef;


#endif /* XDRIVER_MCU_PIE_PERIPHERAL_STRUCT_XHEADER_PIE_STRUCTPERIPHERAL_H_ */
