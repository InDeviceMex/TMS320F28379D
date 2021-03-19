/*
 * MCU_WriteReg.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_WriteReg.h>

void MCU__vWriteRegister(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16FeatureValue, uint16_t u16MaskFeature, uint16_t u16BitFeature)
{
    uint16_t u16FeatureReg = u16FeatureValue;
    uint16_t u16FeatureClear = u16MaskFeature;
    uint16_t u16Reg = u16FeatureValue;
    uint16_t u16RegAddress = u16PeripheralBase;
    volatile uint16_t* pu16Peripheral = 0UL;

    u16RegAddress += u16OffsetRegister;
    pu16Peripheral = (volatile uint16_t*) u16RegAddress;
    if(0xFFFFFFFFUL != u16MaskFeature)
    {
        u16Reg = *pu16Peripheral;
        /*Get Value in bit position*/
        u16FeatureReg &= u16MaskFeature;
        u16FeatureReg <<= u16BitFeature;

        /*Get Value to clear*/
        u16FeatureClear <<= u16BitFeature;
;
        u16Reg &= ~u16FeatureClear;
        u16Reg |= u16FeatureReg;
    }

    (*pu16Peripheral) = u16Reg;
}

void MCU__vWriteRegister_Direct(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16FeatureValue, uint16_t u16MaskFeature, uint16_t u16BitFeature)
{
    uint16_t u16FeatureReg = u16FeatureValue;
    uint16_t u16RegAddress = u16PeripheralBase;
    volatile uint16_t* pu16Peripheral = 0UL;

    u16RegAddress += u16OffsetRegister;
    pu16Peripheral = (volatile uint16_t*) u16RegAddress;
    /*Get Value in bit position*/
    u16FeatureReg &= u16MaskFeature;
    u16FeatureReg <<= u16BitFeature;
    (*pu16Peripheral) = u16FeatureReg;
}
void MCU__vWriteRegister_RAM(uint16_t u16PeripheralBase, uint16_t u16OffsetRegister, uint16_t u16FeatureValue, uint16_t u16MaskFeature, uint16_t u16BitFeature)
{
    uint16_t u16FeatureReg = u16FeatureValue;
    uint16_t u16FeatureClear = u16MaskFeature;
    uint16_t u16Reg = u16FeatureValue;
    uint16_t u16RegAddress = u16PeripheralBase;
    volatile uint16_t* pu16Peripheral = 0UL;

    u16RegAddress += u16OffsetRegister;
    pu16Peripheral = (volatile uint16_t*) u16RegAddress;
    if(0xFFFFFFFFUL != u16MaskFeature)
    {
        u16Reg = *pu16Peripheral;
        /*Get Value in bit position*/
        u16FeatureReg &= u16MaskFeature;
        u16FeatureReg <<= u16BitFeature;

        /*Get Value to clear*/
        u16FeatureClear <<= u16BitFeature;
;
        u16Reg &= ~u16FeatureClear;
        u16Reg |= u16FeatureReg;
    }

    (*pu16Peripheral) = u16Reg;
}



