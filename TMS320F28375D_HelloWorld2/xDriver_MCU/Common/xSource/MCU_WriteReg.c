/*
 * MCU_WriteReg.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_WriteReg.h>

void MCU__vWriteRegister(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureReg = u32FeatureValue;
    uint32_t u32FeatureClear = u32MaskFeature;
    uint32_t u32Reg = u32FeatureValue;
    uint32_t u32RegAddress = u32PeripheralBase;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32RegAddress += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) u32RegAddress;
    if(0xFFFFFFFFUL != u32MaskFeature)
    {
        u32Reg = *pu32Peripheral;
        /*Get Value in bit position*/
        u32FeatureReg &= u32MaskFeature;
        u32FeatureReg <<= u32BitFeature;

        /*Get Value to clear*/
        u32FeatureClear <<= u32BitFeature;
;
        u32Reg &= ~u32FeatureClear;
        u32Reg |= u32FeatureReg;
    }

    (*pu32Peripheral) = u32Reg;
}

void MCU__vWriteRegister_Direct(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureReg = u32FeatureValue;
    uint32_t u32RegAddress = u32PeripheralBase;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32RegAddress += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) u32RegAddress;
    /*Get Value in bit position*/
    u32FeatureReg &= u32MaskFeature;
    u32FeatureReg <<= u32BitFeature;
    (*pu32Peripheral) = u32FeatureReg;
}
void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureReg = u32FeatureValue;
    uint32_t u32FeatureClear = u32MaskFeature;
    uint32_t u32Reg = u32FeatureValue;
    uint32_t u32RegAddress = u32PeripheralBase;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32RegAddress += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) u32RegAddress;
    if(0xFFFFFFFFUL != u32MaskFeature)
    {
        u32Reg = *pu32Peripheral;
        /*Get Value in bit position*/
        u32FeatureReg &= u32MaskFeature;
        u32FeatureReg <<= u32BitFeature;

        /*Get Value to clear*/
        u32FeatureClear <<= u32BitFeature;
;
        u32Reg &= ~u32FeatureClear;
        u32Reg |= u32FeatureReg;
    }

    (*pu32Peripheral) = u32Reg;
}



