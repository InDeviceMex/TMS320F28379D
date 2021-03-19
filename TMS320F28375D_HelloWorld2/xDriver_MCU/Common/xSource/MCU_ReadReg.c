/*
 * MCU_ReadReg.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_ReadReg.h>

uint32_t MCU__u32ReadRegister(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureValue = 0UL;
    uint32_t u32Reg = 0UL;
    uint32_t u32RegAddress = u32PeripheralBase;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32RegAddress += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) (u32RegAddress);

    u32Reg = *pu32Peripheral;

    if(0xFFFFFFFFUL != u32MaskFeature)
    {
        u32Reg >>= u32BitFeature;
        u32Reg &= u32MaskFeature;
    }

    u32FeatureValue = u32Reg;
    return u32FeatureValue;
}


uint32_t MCU__u32ReadRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureValue = 0UL;
    uint32_t u32Reg = 0UL;
    uint32_t u32RegAddress = u32PeripheralBase;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32RegAddress += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) (u32RegAddress);

    u32Reg = *pu32Peripheral;

    if(0xFFFFFFFFUL != u32MaskFeature)
    {
        u32Reg >>= u32BitFeature;
        u32Reg &= u32MaskFeature;
    }

    u32FeatureValue = u32Reg;
    return u32FeatureValue;
}




