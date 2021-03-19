/*
 * MCU_RegisterSourceIRQ.c
 *
 *  Created on: 10 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Common/xHeader/MCU_RegisterSourceIRQ.h>
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>

void MCU__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), void (**pfIrqVectorHandler) (void), uint32_t u32InterruptSource, uint32_t u32InterruptSourceMax)
{
    uint32_t u32Interrupt = 0UL;
    uint32_t u32IrqSourceHandler = 0UL;
    if((0UL != (uint32_t) pfIrqSourceHandler) && (0UL != (uint32_t) pfIrqVectorHandler))
    {
        u32Interrupt = MCU__u32CheckParams(u32InterruptSource, u32InterruptSourceMax);
        u32IrqSourceHandler = (uint32_t) pfIrqSourceHandler;
        u32IrqSourceHandler |= 1UL;

        pfIrqVectorHandler += u32Interrupt;
        *pfIrqVectorHandler = (void (*) (void)) u32IrqSourceHandler;
    }
}

void MCU__vRegisterIRQSourceHandler_RAM(void (*pfIrqSourceHandler) (void), void (**pfIrqVectorHandler) (void), uint32_t u32InterruptSource, uint32_t u32InterruptSourceMax)
{
    uint32_t u32Interrupt = 0UL;
    uint32_t u32IrqSourceHandler = 0UL;
    if((0UL != (uint32_t) pfIrqSourceHandler) && (0UL != (uint32_t) pfIrqVectorHandler))
    {
        u32Interrupt = MCU__u32CheckParams_RAM(u32InterruptSource, u32InterruptSourceMax);
        u32IrqSourceHandler = (uint32_t) pfIrqSourceHandler;
        u32IrqSourceHandler |= 1UL;

        pfIrqVectorHandler += u32Interrupt;
        *pfIrqVectorHandler = (void (*) (void)) u32IrqSourceHandler;
    }
}




