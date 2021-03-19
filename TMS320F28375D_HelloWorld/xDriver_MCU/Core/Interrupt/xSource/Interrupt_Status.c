/*
 * Interrupt_Status.c
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/Interrupt/xHeader/Interrupt_Status.h>
#include <xDriver_MCU/Core/Misc/Misc.h>
#include <xUtils/Standard/Standard.h>

/*Dangerous Functionality*/

#if 0
CORE_nINTERRUPT_STATUS Core__enGetStatusInterruptVector(CORE_nINTERRUPT_VECTOR enIntVec)
{
    CORE_nINTERRUPT_STATUS enStatus = CORE_enINTERRUPT_STATUS_CLEAR;
    uint16_t u16Reg = 0U;
    u16Reg = IFR;
    u16Reg &= (uint16_t)enIntVec;
    if(0U != u16Reg)
    {
        enStatus = CORE_enINTERRUPT_STATUS_PEND;
    }
    return enStatus;

}

#endif

void Core__vClearInterruptVector(CORE_nINTERRUPT_VECTOR enIntVec)
{
    switch(enIntVec){
    case CORE_enINTERRUPT_VECTOR_INT1:
        IFR &= ~0x0001U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT2:
        IFR &= ~0x0002U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT3:
        IFR &= ~0x0004U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT4:
        IFR &= ~0x0008U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT5:
        IFR &= ~0x0010U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT6:
        IFR &= ~0x0020U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT7:
        IFR &= ~0x0040U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT8:
        IFR &= ~0x0080U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT9:
        IFR &= ~0x0100U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT10:
        IFR &= ~0x0200U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT11:
        IFR &= ~0x0400U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT12:
        IFR &= ~0x0800U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT13:
        IFR &= ~0x1000U;
        break;
    case CORE_enINTERRUPT_VECTOR_INT14:
        IFR &= ~0x2000U;
        break;
    case CORE_enINTERRUPT_VECTOR_DLOGINT:
        IFR &= ~0x4000U;
        break;
    case CORE_enINTERRUPT_VECTOR_RTOSINT:
        IFR &= ~0x8000U;
        break;
    default:
        break;
    }
}


void Core__vTriggerInterruptVector(CORE_nINTERRUPT_VECTOR enIntVec)
{
    /*TODO: check if PIE is active, if it is active this shall not be executed*/
    switch (enIntVec)
    {
    case CORE_enINTERRUPT_VECTOR_INT1:
        {__asm(" INTR INT1");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT2:
        {__asm(" INTR INT2");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT3:
        {__asm(" INTR INT3");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT4:
        {__asm(" INTR INT4");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT5:
        {__asm(" INTR INT5");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT6:
        {__asm(" INTR INT6");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT7:
        {__asm(" INTR INT7");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT8:
        {__asm(" INTR INT8");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT9:
        {__asm(" INTR INT9");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT10:
        {__asm(" INTR INT10");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT11:
        {__asm(" INTR INT11");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT12:
        {__asm(" INTR INT12");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT13:
        {__asm(" INTR INT13");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT14:
        {__asm(" INTR INT14");}
        break;
    case CORE_enINTERRUPT_VECTOR_DLOGINT:
        {__asm(" INTR DLOGINT");}
        break;
    case CORE_enINTERRUPT_VECTOR_RTOSINT:
        {__asm(" INTR RTOSINT");}
        break;
    case CORE_enINTERRUPT_VECTOR_NMI:
        {__asm(" INTR NMI");}
        break;
    case CORE_enINTERRUPT_VECTOR_EMUINT:
        {__asm(" INTR EMUINT");}
        break;
    default:
        break;
    }
}
void Core__vTriggerInterruptVector_Trap(CORE_nINTERRUPT_VECTOR enIntVec)
{
    /*TODO: check if PIE is active, if it is active this shall not be executed*/
    switch (enIntVec)
    {
    case CORE_enINTERRUPT_VECTOR_RESET:
        {__asm(" TRAP #0");}
    case CORE_enINTERRUPT_VECTOR_INT1:
        {__asm(" TRAP #1");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT2:
        {__asm(" TRAP #2");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT3:
        {__asm(" TRAP #3");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT4:
        {__asm(" TRAP #4");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT5:
        {__asm(" TRAP #5");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT6:
        {__asm(" TRAP #6");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT7:
        {__asm(" TRAP #7");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT8:
        {__asm(" TRAP #8");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT9:
        {__asm(" TRAP #9");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT10:
        {__asm(" TRAP #10");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT11:
        {__asm(" TRAP #11");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT12:
        {__asm(" TRAP #12");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT13:
        {__asm(" TRAP #13");}
        break;
    case CORE_enINTERRUPT_VECTOR_INT14:
        {__asm(" TRAP #14");}
        break;
    case CORE_enINTERRUPT_VECTOR_DLOGINT:
        {__asm(" TRAP #15");}
        break;
    case CORE_enINTERRUPT_VECTOR_RTOSINT:
        {__asm(" TRAP #16");}
        break;
    case CORE_enINTERRUPT_VECTOR_NMI:
        {__asm(" TRAP #18");}
        break;
    case CORE_enINTERRUPT_VECTOR_EMUINT:
        {__asm(" TRAP #19");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER1:
        {__asm(" TRAP #20");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER2:
        {__asm(" TRAP #21");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER3:
        {__asm(" TRAP #22");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER4:
        {__asm(" TRAP #23");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER5:
        {__asm(" TRAP #24");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER6:
        {__asm(" TRAP #25");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER7:
        {__asm(" TRAP #26");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER8:
        {__asm(" TRAP #27");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER9:
        {__asm(" TRAP #28");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER10:
        {__asm(" TRAP #29");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER11:
        {__asm(" TRAP #30");}
        break;
    case CORE_enINTERRUPT_VECTOR_USER12:
        {__asm(" TRAP #31");}
        break;
    default:
        break;
    }
}
