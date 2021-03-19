/*
 * Misc_CPUMode.h
 *
 *  Created on: 11 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_CORE_MISC_XHEADER_MISC_CPUMODE_H_
#define XDRIVER_MCU_CORE_MISC_XHEADER_MISC_CPUMODE_H_


#pragma  CODE_SECTION(Core__vModeC28_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(Core__vModeC27_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(Core__vModeC24_RAM, ".TI.ramfunc")

void Core__vModeC28_RAM(void);
void Core__vModeC27_RAM(void);
void Core__vModeC24_RAM(void);

void Core__vModeC28(void);
void Core__vModeC27(void);
void Core__vModeC24(void);


#endif /* XDRIVER_MCU_CORE_MISC_XHEADER_MISC_CPUMODE_H_ */
