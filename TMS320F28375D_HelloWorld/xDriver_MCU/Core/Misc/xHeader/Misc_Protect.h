/*
 * Misc_Protect.h
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_CORE_MISC_XHEADER_MISC_PROTECT_H_
#define XDRIVER_MCU_CORE_MISC_XHEADER_MISC_PROTECT_H_

#pragma  CODE_SECTION(Core__vEnaAllowRegModification_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(Core__vDisAllowRegModification_RAM, ".TI.ramfunc")

void Core__vEnaAllowRegModification_RAM(void);
void Core__vDisAllowRegModification_RAM(void);

void Core__vEnaAllowRegModification(void);
void Core__vDisAllowRegModification(void);


#endif /* XDRIVER_MCU_CORE_MISC_XHEADER_MISC_PROTECT_H_ */
