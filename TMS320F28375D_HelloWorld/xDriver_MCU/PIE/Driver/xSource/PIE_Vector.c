/*
 * PIE_Vector.c
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#include <xDriver_MCU/PIE/Driver/xHeader/PIE_Vector.h>
#include <xDriver_MCU/Core/Core.h>

void IntDefaultHandler1(void);

#pragma DATA_SECTION(PIE__pfnVectors,".vtable");
void (*PIE__pfnVectors[PIE_VECTOR_TABLE_SIZE]) (void) = {0U};

void (*const g_pfnVectors[PIE_IRQ_MAX])(void) =
{
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    0U,             // Reserved
    IntDefaultHandler,                   // CPU Timer 1 Interrupt
    IntDefaultHandler1,                   // CPU Timer 2 Interrupt
    IntDefaultHandler,                  // Datalogging Interrupt
    IntDefaultHandler,                     // RTOS Interrupt
    IntDefaultHandler,                      // Emulation Interrupt
    IntDefaultHandler,                      // Non-Maskable Interrupt
    IntDefaultHandler,                  // Illegal Operation Trap
    IntDefaultHandler,                    // User Defined Trap 1
    IntDefaultHandler,                    // User Defined Trap 2
    IntDefaultHandler,                    // User Defined Trap 3
    IntDefaultHandler,                    // User Defined Trap 4
    IntDefaultHandler,                    // User Defined Trap 5
    IntDefaultHandler,                    // User Defined Trap 6
    IntDefaultHandler,                    // User Defined Trap 7
    IntDefaultHandler,                    // User Defined Trap 8
    IntDefaultHandler,                    // User Defined Trap 9
    IntDefaultHandler,                   // User Defined Trap 1
    IntDefaultHandler,                   // User Defined Trap 11
    IntDefaultHandler,                   // User Defined Trap 12
    IntDefaultHandler,                    // 1.1 - ADCA Interrupt 1
    IntDefaultHandler,                    // 1.2 - ADCB Interrupt 1
    IntDefaultHandler,                    // 1.3 - ADCC Interrupt 1
    IntDefaultHandler,                    // 1.4 - XINT1 Interrupt
    IntDefaultHandler,                    // 1.5 - XINT2 Interrupt
    IntDefaultHandler,                    // 1.6 - ADCD Interrupt 1
    IntDefaultHandler,                   // 1.7 - Timer  Interrupt
    IntDefaultHandler,                     // 1.8 - Standby and Halt Wakeup Interrupt
    IntDefaultHandler,                 // 2.1 - ePWM1 Trip Zone Interrupt
    IntDefaultHandler,                 // 2.2 - ePWM2 Trip Zone Interrupt
    IntDefaultHandler,                 // 2.3 - ePWM3 Trip Zone Interrupt
    IntDefaultHandler,                 // 2.4 - ePWM4 Trip Zone Interrupt
    IntDefaultHandler,                 // 2.5 - ePWM5 Trip Zone Interrupt
    IntDefaultHandler,                 // 2.6 - ePWM6 Trip Zone Interrupt
    IntDefaultHandler,                 // 2.7 - ePWM7 Trip Zone Interrupt
    IntDefaultHandler,                 // 2.8 - ePWM8 Trip Zone Interrupt
    IntDefaultHandler,                    // 3.1 - ePWM1 Interrupt
    IntDefaultHandler,                    // 3.2 - ePWM2 Interrupt
    IntDefaultHandler,                    // 3.3 - ePWM3 Interrupt
    IntDefaultHandler,                    // 3.4 - ePWM4 Interrupt
    IntDefaultHandler,                    // 3.5 - ePWM5 Interrupt
    IntDefaultHandler,                    // 3.6 - ePWM6 Interrupt
    IntDefaultHandler,                    // 3.7 - ePWM7 Interrupt
    IntDefaultHandler,                    // 3.8 - ePWM8 Interrupt
    IntDefaultHandler,                    // 4.1 - eCAP1 Interrupt
    IntDefaultHandler,                    // 4.2 - eCAP2 Interrupt
    IntDefaultHandler,                    // 4.3 - eCAP3 Interrupt
    IntDefaultHandler,                    // 4.4 - eCAP4 Interrupt
    IntDefaultHandler,                    // 4.5 - eCAP5 Interrupt
    IntDefaultHandler,                    // 4.6 - eCAP6 Interrupt
    0U,             // 4.7 - Reserved
    0U,             // 4.8 - Reserved
    IntDefaultHandler,                    // 5.1 - eQEP1 Interrupt
    IntDefaultHandler,                    // 5.2 - eQEP2 Interrupt
    IntDefaultHandler,                    // 5.3 - eQEP3 Interrupt
    0U,             // 5.4 - Reserved
    0U,             // 5.5 - Reserved
    0U,             // 5.6 - Reserved
    0U,             // 5.7 - Reserved
    0U,             // 5.8 - Reserved
    IntDefaultHandler,                  // 6.1 - SPIA Receive Interrupt
    IntDefaultHandler,                  // 6.2 - SPIA Transmit Interrupt
    IntDefaultHandler,                  // 6.3 - SPIB Receive Interrupt
    IntDefaultHandler,                  // 6.4 - SPIB Transmit Interrupt
    IntDefaultHandler,                // 6.5 - McBSPA Receive Interrupt
    IntDefaultHandler,                // 6.6 - McBSPA Transmit Interrupt
    IntDefaultHandler,                // 6.7 - McBSPB Receive Interrupt
    IntDefaultHandler,                // 6.8 - McBSPB Transmit Interrupt
    IntDefaultHandler,                  // 7.1 - DMA Channel 1 Interrupt
    IntDefaultHandler,                  // 7.2 - DMA Channel 2 Interrupt
    IntDefaultHandler,                  // 7.3 - DMA Channel 3 Interrupt
    IntDefaultHandler,                  // 7.4 - DMA Channel 4 Interrupt
    IntDefaultHandler,                  // 7.5 - DMA Channel 5 Interrupt
    IntDefaultHandler,                  // 7.6 - DMA Channel 6 Interrupt
    0U,             // 7.7 - Reserved
    0U,             // 7.8 - Reserved
    IntDefaultHandler,                     // 8.1 - I2CA Interrupt 1
    IntDefaultHandler,                // 8.2 - I2CA Interrupt 2
    IntDefaultHandler,                     // 8.3 - I2CB Interrupt 1
    IntDefaultHandler,                // 8.4 - I2CB Interrupt 2
    IntDefaultHandler,                  // 8.5 - SCIC Receive Interrupt
    IntDefaultHandler,                  // 8.6 - SCIC Transmit Interrupt
    IntDefaultHandler,                  // 8.7 - SCID Receive Interrupt
    IntDefaultHandler,                  // 8.8 - SCID Transmit Interrupt
    IntDefaultHandler,                  // 9.1 - SCIA Receive Interrupt
    IntDefaultHandler,                  // 9.2 - SCIA Transmit Interrupt
    IntDefaultHandler,                  // 9.3 - SCIB Receive Interrupt
    IntDefaultHandler,                  // 9.4 - SCIB Transmit Interrupt
    IntDefaultHandler,                    // 9.5 - CANA Interrupt
    IntDefaultHandler,                    // 9.6 - CANA Interrupt 1
    IntDefaultHandler,                    // 9.7 - CANB Interrupt
    IntDefaultHandler,                    // 9.8 - CANB Interrupt 1
    IntDefaultHandler,                 // 1.1 - ADCA Event Interrupt
    IntDefaultHandler,                    // 1.2 - ADCA Interrupt 2
    IntDefaultHandler,                    // 1.3 - ADCA Interrupt 3
    IntDefaultHandler,                    // 1.4 - ADCA Interrupt 4
    IntDefaultHandler,                 // 1.5 - ADCB Event Interrupt
    IntDefaultHandler,                    // 1.6 - ADCB Interrupt 2
    IntDefaultHandler,                    // 1.7 - ADCB Interrupt 3
    IntDefaultHandler,                    // 1.8 - ADCB Interrupt 4
    IntDefaultHandler,                   // 11.1 - CLA1 Interrupt 1
    IntDefaultHandler,                   // 11.2 - CLA1 Interrupt 2
    IntDefaultHandler,                   // 11.3 - CLA1 Interrupt 3
    IntDefaultHandler,                   // 11.4 - CLA1 Interrupt 4
    IntDefaultHandler,                   // 11.5 - CLA1 Interrupt 5
    IntDefaultHandler,                   // 11.6 - CLA1 Interrupt 6
    IntDefaultHandler,                   // 11.7 - CLA1 Interrupt 7
    IntDefaultHandler,                   // 11.8 - CLA1 Interrupt 8
    IntDefaultHandler,                    // 12.1 - XINT3 Interrupt
    IntDefaultHandler,                    // 12.2 - XINT4 Interrupt
    IntDefaultHandler,                    // 12.3 - XINT5 Interrupt
    0U,             // 12.4 - Reserved
    0U,             // 12.5 - Reserved
    IntDefaultHandler,                      // 12.6 - VCU Interrupt
    IntDefaultHandler,             // 12.7 - FPU Overflow Interrupt
    IntDefaultHandler,            // 12.8 - FPU Underflow Interrupt
    0U,             // 1.9 - Reserved
    0U,             // 1.1 - Reserved
    0U,             // 1.11 - Reserved
    0U,             // 1.12 - Reserved
    IntDefaultHandler,                     // 1.13 - IPC Interrupt
    IntDefaultHandler,                     // 1.14 - IPC Interrupt 1
    IntDefaultHandler,                     // 1.15 - IPC Interrupt 2
    IntDefaultHandler,                     // 1.16 - IPC Interrupt 3
    IntDefaultHandler,                 // 2.9 - ePWM9 Trip Zone Interrupt
    IntDefaultHandler,                // 2.1 - ePWM1 Trip Zone Interrupt
    IntDefaultHandler,                // 2.11 - ePWM11 Trip Zone Interrupt
    IntDefaultHandler,                // 2.12 - ePWM12 Trip Zone Interrupt
    0U,             // 2.13 - Reserved
    0U,             // 2.14 - Reserved
    0U,             // 2.15 - Reserved
    0U,             // 2.16 - Reserved
    IntDefaultHandler,                    // 3.9 - ePWM9 Interrupt
    IntDefaultHandler,                   // 3.1 - ePWM1 Interrupt
    IntDefaultHandler,                   // 3.11 - ePWM11 Interrupt
    IntDefaultHandler,                   // 3.12 - ePWM12 Interrupt
    0U,             // 3.13 - Reserved
    0U,             // 3.14 - Reserved
    0U,             // 3.15 - Reserved
    0U,             // 3.16 - Reserved
    0U,             // 4.9 - Reserved
    0U,             // 4.1 - Reserved
    0U,             // 4.11 - Reserved
    0U,             // 4.12 - Reserved
    0U,             // 4.13 - Reserved
    0U,             // 4.14 - Reserved
    0U,             // 4.15 - Reserved
    0U,             // 4.16 - Reserved
    IntDefaultHandler,                      // 5.9 - SD1 Interrupt
    IntDefaultHandler,                      // 5.1 - SD2 Interrupt
    0U,             // 5.11 - Reserved
    0U,             // 5.12 - Reserved
    0U,             // 5.13 - Reserved
    0U,             // 5.14 - Reserved
    0U,             // 5.15 - Reserved
    0U,             // 5.16 - Reserved
    IntDefaultHandler,                  // 6.9 - SPIC Receive Interrupt
    IntDefaultHandler,                  // 6.1 - SPIC Transmit Interrupt
    0U,             // 6.11 - Reserved
    0U,             // 6.12 - Reserved
    0U,             // 6.13 - Reserved
    0U,             // 6.14 - Reserved
    0U,             // 6.15 - Reserved
    0U,             // 6.16 - Reserved
    0U,             // 7.9 - Reserved
    0U,             // 7.1 - Reserved
    0U,             // 7.11 - Reserved
    0U,             // 7.12 - Reserved
    0U,             // 7.13 - Reserved
    0U,             // 7.14 - Reserved
    0U,             // 7.15 - Reserved
    0U,             // 7.16 - Reserved
    0U,             // 8.9 - Reserved
    0U,             // 8.1 - Reserved
    0U,             // 8.11 - Reserved
    0U,             // 8.12 - Reserved
    0U,             // 8.13 - Reserved
    0U,             // 8.14 - Reserved
    #ifdef CPU1
    IntDefaultHandler,                     // 8.15 - uPPA Interrupt
    #else
    0U,             // 8.15 - Reserved
    #endif
    0U,             // 8.16 - Reserved
    0U,             // 9.9 - Reserved
    0U,             // 9.1 - Reserved
    0U,             // 9.11 - Reserved
    0U,             // 9.12 - Reserved
    0U,             // 9.13 - Reserved
    0U,             // 9.14 - Reserved
    #ifdef CPU1
    IntDefaultHandler,                     // 9.15 - USBA Interrupt
    #else
    0U,             // 9.15 - Reserved
    #endif
    0U,             // 9.16 - Reserved
    IntDefaultHandler,                 // 1.9 - ADCC Event Interrupt
    IntDefaultHandler,                    // 1.1 - ADCC Interrupt 2
    IntDefaultHandler,                    // 1.11 - ADCC Interrupt 3
    IntDefaultHandler,                    // 1.12 - ADCC Interrupt 4
    IntDefaultHandler,                 // 1.13 - ADCD Event Interrupt
    IntDefaultHandler,                    // 1.14 - ADCD Interrupt 2
    IntDefaultHandler,                    // 1.15 - ADCD Interrupt 3
    IntDefaultHandler,                    // 1.16 - ADCD Interrupt 4
    0U,             // 11.9 - Reserved
    0U,             // 11.1 - Reserved
    0U,             // 11.11 - Reserved
    0U,             // 11.12 - Reserved
    0U,             // 11.13 - Reserved
    0U,             // 11.14 - Reserved
    0U,             // 11.15 - Reserved
    0U,             // 11.16 - Reserved
    IntDefaultHandler,               // 12.9 - EMIF Error Interrupt
    IntDefaultHandler,    // 12.1 - RAM Correctable Error Interrupt
    IntDefaultHandler,  // 12.11 - Flash Correctable Error Interrupt
    IntDefaultHandler,     // 12.12 - RAM Access Violation Interrupt
    IntDefaultHandler,             // 12.13 - System PLL Slip Interrupt
    IntDefaultHandler,             // 12.14 - Auxiliary PLL Slip Interrupt
    IntDefaultHandler,             // 12.15 - CLA Overflow Interrupt
    IntDefaultHandler             // 12.16 - CLA Underflow Interrupt
};



__interrupt void
IntDefaultHandler(void)
{
    /**/
    /* Go into an infinite loop.*/
    /**/
    while(1U)
    {
    }
}
__interrupt void
IntDefaultHandler1(void)
{

}

void PIE__vInitVector(void)
{
    uint32_t* pu32Ram = 0UL;
    const uint32_t* pu32Flash = 0UL;
    uint32_t u32Count = 0UL;

    Core__vEnaAllowRegModification();

    pu32Flash = (const uint32_t*) g_pfnVectors;
    pu32Ram = (uint32_t*) &PIE__pfnVectors;
    pu32Flash = pu32Flash + 3U;
    pu32Ram = pu32Ram + 3U;
    for(u32Count = 0UL; u32Count < (PIE_IRQ_MAX - 3U); u32Count++ )
    {
        *pu32Ram = *pu32Flash;
        pu32Ram += 1U;
        pu32Flash += 1U;
    }

    Core__vDisAllowRegModification();
}

