

/**
 * main.c
 */

#include <xDriver_MCU/xDriver_MCU.h>

int main(void)
{
    Core__vModeC28();
    PIE__vInitVector();
    MCU__u16DisGlobalInterrupt();
    PIE__vDeinit();

    PIE__vInit();
    Core__vEnaInterruptVector(CORE_enINTERRUPT_VECTOR_MASK_INT1);
    Core__vEnaAllowRegModification();

    PIE__vSetEnableIRQ(PIE_enVECTOR_ADCA_EVT, PIE_enENABLE);

    PIE->PIECTRL_Bit.ENPIE = 1U;
    PIE->PIEIER1 |= 0x40U;
    PIE->PIEIER1_Bit.PIE_IPC2 = 0x1U;

    PIE_ARRAY->PIEIR10_Union.PIEIER.INTx1 = 1U;
    PIE_ARRAY->PIEIR10[0U] |= 1U;

    PIE_UNION->PIEIR.PIEIR_UNION[3U].PIEIER.INTx13 = 1U;
    PIE_UNION->PIEIR.PIEIR_ARRAY[4U].PIEIR[0U].INTx12 = 0x1U;
	while(1U){}
}
