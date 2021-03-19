/*
 * MCU_ReadReg.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_ReadReg.h>

uint16_t MCU__u16ReadRegister(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16MaskFeature, uint16_t u16BitFeature)
{
    uint16_t u16FeatureValue = 0UL;
    uint16_t u16Reg = 0UL;
    uint16_t u16RegAddress = u16PeripheralBase;
    volatile uint16_t* pu16Peripheral = 0UL;

    u16RegAddress += u16OffsetRegister;
    pu16Peripheral = (volatile uint16_t*) (u16RegAddress);

    u16Reg = *pu16Peripheral;

    if(0xFFFFFFFFUL != u16MaskFeature)
    {
        u16Reg >>= u16BitFeature;
        u16Reg &= u16MaskFeature;
    }

    u16FeatureValue = u16Reg;
    return u16FeatureValue;
}


uint16_t MCU__u16ReadRegister_RAM(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16MaskFeature, uint16_t u16BitFeature)
{
    uint16_t u16FeatureValue = 0UL;
    uint16_t u16Reg = 0UL;
    uint16_t u16RegAddress = u16PeripheralBase;
    volatile uint16_t* pu16Peripheral = 0UL;

    u16RegAddress += u16OffsetRegister;
    pu16Peripheral = (volatile uint16_t*) (u16RegAddress);

    u16Reg = *pu16Peripheral;

    if(0xFFFFFFFFUL != u16MaskFeature)
    {
        u16Reg >>= u16BitFeature;
        u16Reg &= u16MaskFeature;
    }

    u16FeatureValue = u16Reg;
    return u16FeatureValue;
}




