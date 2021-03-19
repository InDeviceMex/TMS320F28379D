

/**
 * main.c
 */

#include <xDriver_MCU/xDriver_MCU.h>

int main(void)
{
    Core__vModeC28();
    Core__vEnaInterruptVector(CORE_enINTERRUPT_VECTOR_MASK_INT1);
    MCU__vDisGlobalInterrupt();
    Core__vEnaAllowRegModification();
    while(1U){}
}
