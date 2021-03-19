/*
 * PIE_RegisterIRQVector.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#include <xDriver_MCU/PIE/Driver/xHeader/PIE_RegisterIRQVector.h>
#include <xDriver_MCU/PIE/Driver/xHeader/PIE_Vector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/Core.h>
#include <xDriver_MCU/PIE/Peripheral/PIE_Peripheral.h>

void PIE__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), void (**pfIrqVectorHandlerExtern) (void), PIE_nVECTOR enVector)
{
    uint32_t u32Vector = 0U;
    uint32_t u32BaseOffsetVector = 0U;
    uint32_t* pu32BaseVector = 0U;
    uint32_t u32IrqVectorHandler = 0U;

    Core__vEnaAllowRegModification();
    if(0U != (uint32_t) pfIrqVectorHandler)
    {
        u32IrqVectorHandler = (uint32_t) pfIrqVectorHandler;

        u32Vector = (uint32_t) enVector;
        if(32U <= u32Vector)
        {
            u32Vector *= 2U;
            u32BaseOffsetVector = (uint32_t) PIE__pfnVectors;
            u32BaseOffsetVector += u32Vector;

            pu32BaseVector = (uint32_t*) u32BaseOffsetVector;
            *pu32BaseVector = u32IrqVectorHandler;
            if(0U != (uint32_t) pfIrqVectorHandlerExtern)
            {
                *pfIrqVectorHandlerExtern = (void (*) (void)) u32IrqVectorHandler;
            }
        }
    }
    Core__vDisAllowRegModification();
}

void PIE__vUnregisterIRQVectorHandler(void (**pfIrqVectorHandlerExtern) (void), PIE_nVECTOR enVector)
{
    uint32_t u32Vector = 0U;
    uint32_t u32BaseOffsetVector = 0U;
    uint32_t* pu32BaseVector = 0U;
    uint32_t u32IrqVectorHandler = 0U;

    Core__vEnaAllowRegModification();
    u32IrqVectorHandler = (uint32_t) &IntDefaultHandler;

    u32Vector = (uint32_t) enVector;
    if(32U <= u32Vector)
    {
        u32Vector *= 2U;
        u32BaseOffsetVector = (uint32_t) PIE__pfnVectors;
        u32BaseOffsetVector += u32Vector;

        pu32BaseVector = (uint32_t*) u32BaseOffsetVector;
        *pu32BaseVector = u32IrqVectorHandler;
        if(0U != (uint32_t) pfIrqVectorHandlerExtern)
        {
            *pfIrqVectorHandlerExtern = (void (*) (void)) u32IrqVectorHandler;
        }
        }

    Core__vDisAllowRegModification();
}
