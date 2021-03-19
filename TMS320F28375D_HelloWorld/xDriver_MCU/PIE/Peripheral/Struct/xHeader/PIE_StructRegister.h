/*
 * PIE_StructRegister.h
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_STRUCT_XHEADER_PIE_STRUCTREGISTER_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_STRUCT_XHEADER_PIE_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile uint16_t ENPIE :1;
    volatile const uint16_t PIEVECT :15;
}PIECTRL_TypeDef;

typedef volatile struct
{
    volatile uint16_t ACK1 :1;
    volatile uint16_t ACK2 :1;
    volatile uint16_t ACK3 :1;
    volatile uint16_t ACK4 :1;
    volatile uint16_t ACK5 :1;
    volatile uint16_t ACK6 :1;
    volatile uint16_t ACK7 :1;
    volatile uint16_t ACK8 :1;
    volatile uint16_t ACK9 :1;
    volatile uint16_t ACK10 :1;
    volatile uint16_t ACK11 :1;
    volatile uint16_t ACK12 :1;
    const uint16_t reserved :4;
}PIEACK_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_ADCA1 :1;
    volatile uint16_t PIE_ADCB1 :1;
    volatile uint16_t PIE_ADCC1 :1;
    volatile uint16_t PIE_XINT1 :1;
    volatile uint16_t PIE_XINT2 :1;
    volatile uint16_t PIE_ADCD1 :1;
    volatile uint16_t PIE_TIMER0 :1;
    volatile uint16_t PIE_WAKE :1;
    const uint16_t PIE_RES128 :1;
    const uint16_t PIE_RES129 :1;
    const uint16_t PIE_RES130 :1;
    const uint16_t PIE_RES131 :1;
    volatile uint16_t PIE_IPC1 :1;
    volatile uint16_t PIE_IPC2 :1;
    volatile uint16_t PIE_IPC3 :1;
    volatile uint16_t PIE_IPC4 :1;
}PIEIR1_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_EPWM1_TZ :1;
    volatile uint16_t PIE_EPWM2_TZ :1;
    volatile uint16_t PIE_EPWM3_TZ :1;
    volatile uint16_t PIE_EPWM4_TZ :1;
    volatile uint16_t PIE_EPWM5_TZ :1;
    volatile uint16_t PIE_EPWM6_TZ :1;
    volatile uint16_t PIE_EPWM7_TZ :1;
    volatile uint16_t PIE_EPWM8_TZ :1;
    volatile uint16_t PIE_EPWM9_TZ :1;
    volatile uint16_t PIE_EPWM10_TZ :1;
    volatile uint16_t PIE_EPWM11_TZ :1;
    volatile uint16_t PIE_EPWM12_TZ :1;
    const uint16_t PIE_RES140 :1;
    const uint16_t PIE_RES141 :1;
    const uint16_t PIE_RES142 :1;
    const uint16_t PIE_RES143 :1;
}PIEIR2_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_EPWM1 :1;
    volatile uint16_t PIE_EPWM2 :1;
    volatile uint16_t PIE_EPWM3 :1;
    volatile uint16_t PIE_EPWM4 :1;
    volatile uint16_t PIE_EPWM5 :1;
    volatile uint16_t PIE_EPWM6 :1;
    volatile uint16_t PIE_EPWM7 :1;
    volatile uint16_t PIE_EPWM8 :1;
    volatile uint16_t PIE_EPWM9 :1;
    volatile uint16_t PIE_EPWM10 :1;
    volatile uint16_t PIE_EPWM11 :1;
    volatile uint16_t PIE_EPWM12 :1;
    const uint16_t PIE_RES148 :1;
    const uint16_t PIE_RES149 :1;
    const uint16_t PIE_RES150 :1;
    const uint16_t PIE_RES151 :1;
}PIEIR3_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_ECAP1 :1;
    volatile uint16_t PIE_ECAP2 :1;
    volatile uint16_t PIE_ECAP3 :1;
    volatile uint16_t PIE_ECAP4 :1;
    volatile uint16_t PIE_ECAP5 :1;
    volatile uint16_t PIE_ECAP6 :1;
    const uint16_t PIE_RES62 :1;
    const uint16_t PIE_RES63 :1;
    const uint16_t PIE_RES152 :1;
    const uint16_t PIE_RES153 :1;
    const uint16_t PIE_RES154 :1;
    const uint16_t PIE_RES155 :1;
    const uint16_t PIE_RES156 :1;
    const uint16_t PIE_RES157 :1;
    const uint16_t PIE_RES158 :1;
    const uint16_t PIE_RES159 :1;
}PIEIR4_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_EQEP1 :1;
    volatile uint16_t PIE_EQEP2 :1;
    volatile uint16_t PIE_EQEP3 :1;
    const uint16_t PIE_RES67 :1;
    volatile uint16_t PIE_CLB1 :1;
    volatile uint16_t PIE_CLB2 :1;
    volatile uint16_t PIE_CLB3 :1;
    volatile uint16_t PIE_CLB4 :1;
    volatile uint16_t PIE_SD1 :1;
    volatile uint16_t PIE_SD2 :1;
    const uint16_t PIE_RES162 :1;
    const uint16_t PIE_RES163 :1;
    const uint16_t PIE_RES164 :1;
    const uint16_t PIE_RES165 :1;
    const uint16_t PIE_RES166 :1;
    const uint16_t PIE_RES167 :1;
}PIEIR5_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_SPIA_RX :1;
    volatile uint16_t PIE_SPIA_TX :1;
    volatile uint16_t PIE_SPIB_RX :1;
    volatile uint16_t PIE_SPIB_TX :1;
    volatile uint16_t PIE_MCBSPA_RX :1;
    volatile uint16_t PIE_MCBSPA_TX :1;
    volatile uint16_t PIE_MCBSPB_RX :1;
    volatile uint16_t PIE_MCBSPB_TX :1;
    volatile uint16_t PIE_SPIC_RX :1;
    volatile uint16_t PIE_SPIC_TX :1;
    const uint16_t PIE_RES170 :1;
    const uint16_t PIE_RES171 :1;
    const uint16_t PIE_RES172 :1;
    const uint16_t PIE_RES173 :1;
    const uint16_t PIE_RES174 :1;
    const uint16_t PIE_RES175 :1;
}PIEIR6_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_DMA_CH1 :1;
    volatile uint16_t PIE_DMA_CH2 :1;
    volatile uint16_t PIE_DMA_CH3 :1;
    volatile uint16_t PIE_DMA_CH4 :1;
    volatile uint16_t PIE_DMA_CH5 :1;
    volatile uint16_t PIE_DMA_CH6 :1;
    const uint16_t PIE_RES86 :1;
    const uint16_t PIE_RES87 :1;
    const uint16_t PIE_RES176 :1;
    const uint16_t PIE_RES177 :1;
    const uint16_t PIE_RES178 :1;
    const uint16_t PIE_RES179 :1;
    const uint16_t PIE_RES180 :1;
    const uint16_t PIE_RES181 :1;
    const uint16_t PIE_RES182 :1;
    const uint16_t PIE_RES183 :1;
}PIEIR7_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_I2CA :1;
    volatile uint16_t PIE_I2CA_FIFO :1;
    volatile uint16_t PIE_I2CB :1;
    volatile uint16_t PIE_I2CB_FIFO :1;
    volatile uint16_t PIE_SCIC_RX :1;
    volatile uint16_t PIE_SCIC_TX :1;
    volatile uint16_t PIE_SCID_RX :1;
    volatile uint16_t PIE_SCID_TX :1;
    const uint16_t PIE_RES184 :1;
    const uint16_t PIE_RES185 :1;
    const uint16_t PIE_RES186 :1;
    const uint16_t PIE_RES187 :1;
    const uint16_t PIE_RES188 :1;
    const uint16_t PIE_RES189 :1;
#if defined(CPU1)
    volatile uint16_t PIE_UPPA :1;
#elif
    const uint16_t PIE_RES190 :1;
#endif
    const uint16_t PIE_RES191 :1;
}PIEIR8_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_SCIA_TX :1;
    volatile uint16_t PIE_SCIA_RX :1;
    volatile uint16_t PIE_SCIB_TX :1;
    volatile uint16_t PIE_SCIB_RX :1;
    volatile uint16_t PIE_CANA0 :1;
    volatile uint16_t PIE_CANA1 :1;
    volatile uint16_t PIE_CANB0 :1;
    volatile uint16_t PIE_CANB1 :1;
    const uint16_t PIE_RES192 :1;
    const uint16_t PIE_RES193 :1;
    const uint16_t PIE_RES194 :1;
    const uint16_t PIE_RES195 :1;
    const uint16_t PIE_RES196 :1;
    const uint16_t PIE_RES197 :1;
#if defined(CPU1)
    volatile uint16_t PIE_USBA :1;
#elif
    const uint16_t PIE_RES198 :1;
#endif
    const uint16_t PIE_RES199 :1;
}PIEIR9_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_ADCA_EVT :1;
    volatile uint16_t PIE_ADCA2 :1;
    volatile uint16_t PIE_ADCA3 :1;
    volatile uint16_t PIE_ADCA4 :1;
    volatile uint16_t PIE_ADCB_EVT :1;
    volatile uint16_t PIE_ADCB2 :1;
    volatile uint16_t PIE_ADCB3 :1;
    volatile uint16_t PIE_ADCB4 :1;
    volatile uint16_t PIE_ADCC_EVT :1;
    volatile uint16_t PIE_ADCC2 :1;
    volatile uint16_t PIE_ADCC3 :1;
    volatile uint16_t PIE_ADCC4 :1;
    volatile uint16_t PIE_ADCD_EVT :1;
    volatile uint16_t PIE_ADCD2 :1;
    volatile uint16_t PIE_ADCD3 :1;
    volatile uint16_t PIE_ADCD4 :1;
}PIEIR10_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_CLA1_1 :1;
    volatile uint16_t PIE_CLA1_2 :1;
    volatile uint16_t PIE_CLA1_3 :1;
    volatile uint16_t PIE_CLA1_4 :1;
    volatile uint16_t PIE_CLA1_5 :1;
    volatile uint16_t PIE_CLA1_6 :1;
    volatile uint16_t PIE_CLA1_7 :1;
    volatile uint16_t PIE_CLA1_8 :1;
    const uint16_t PIE_RES208 :1;
    const uint16_t PIE_RES209 :1;
    const uint16_t PIE_RES210 :1;
    const uint16_t PIE_RES211 :1;
    const uint16_t PIE_RES212 :1;
    const uint16_t PIE_RES213 :1;
    const uint16_t PIE_RES214 :1;
    const uint16_t PIE_RES215 :1;
}PIEIR11_TypeDef;

typedef volatile struct
{
    volatile uint16_t PIE_XINT3 :1;
    volatile uint16_t PIE_XINT4 :1;
    volatile uint16_t PIE_XINT5 :1;
    const uint16_t PIE_RES123 :1;
    const uint16_t PIE_RES124 :1;
    volatile uint16_t PIE_VCU :1;
    volatile uint16_t PIE_FPU_OVERFLOW :1;
    volatile uint16_t PIE_FPU_UNDERFLOW :1;
    volatile uint16_t PIE_EMIF_ERROR :1;
    volatile uint16_t PIE_RAM_CORRECTABLE_ERROR :1;
    volatile uint16_t PIE_FLASH_CORRECTABLE_ERROR :1;
    volatile uint16_t PIE_RAM_ACCESS_VIOLATION :1;
    volatile uint16_t PIE_SYS_PLL_SLIP :1;
    volatile uint16_t PIE_AUX_PLL_SLIP :1;
    volatile uint16_t PIE_CLA_OVERFLOW :1;
    volatile uint16_t PIE_CLA_UNDERFLOW :1;
}PIEIR12_TypeDef;

typedef volatile struct
{
    volatile uint16_t INTx1 :1;
    volatile uint16_t INTx2 :1;
    volatile uint16_t INTx3 :1;
    volatile uint16_t INTx4 :1;
    volatile uint16_t INTx5 :1;
    volatile uint16_t INTx6 :1;
    volatile uint16_t INTx7 :1;
    volatile uint16_t INTx8 :1;
    volatile uint16_t INTx9 :1;
    volatile uint16_t INTx10 :1;
    volatile uint16_t INTx11 :1;
    volatile uint16_t INTx12 :1;
    volatile uint16_t INTx13 :1;
    volatile uint16_t INTx14 :1;
    volatile uint16_t INTx15 :1;
    volatile uint16_t INTx16 :1;
}PIEIR_TypeDef;

typedef volatile struct
{
        PIEIR_TypeDef PIEIER;
        PIEIR_TypeDef PIEIFR;
}PIEI_UNION_TypeDef;

typedef volatile struct
{
    PIEIR_TypeDef PIEIR[2U];
}PIEI_ARRAY_TypeDef;

typedef volatile struct
{
    union
    {
        PIEI_ARRAY_TypeDef PIEIR_ARRAY[12U];
        PIEI_UNION_TypeDef PIEIR_UNION[12U];
    };
}PIEIS_TypeDef;


#endif /* XDRIVER_MCU_PIE_PERIPHERAL_STRUCT_XHEADER_PIE_STRUCTREGISTER_H_ */
