
MEMORY
{
PAGE 0 :  /* Program Memory */
          /* Memory (RAM/FLASH) blocks can be moved to PAGE1 for data allocation */
          /* BEGIN is used for the "boot to Flash" bootloader mode   */

   BEGIN           	: origin = 0x080000, length = 0x000002
   RAMM0           	: origin = 0x000122, length = 0x0002DE
   RAMD0           	: origin = 0x00B000, length = 0x000800
   RAMLS0          	: origin = 0x008000, length = 0x000800
   RAMLS1          	: origin = 0x008800, length = 0x000800
   RAMLS2      		: origin = 0x009000, length = 0x000800
   RAMLS3      		: origin = 0x009800, length = 0x000800
   RAMLS4      		: origin = 0x00A000, length = 0x000800
   RAMGS14          : origin = 0x01A000, length = 0x001000
   RAMGS15          : origin = 0x01B000, length = 0x001000
   RESET           	: origin = 0x3FFFC0, length = 0x000002
   /* Flash sectors */
   FLASHA           : origin = 0x080002, length = 0x001FFE
   FLASHB           : origin = 0x082000, length = 0x002000
   FLASHC           : origin = 0x084000, length = 0x002000
   FLASHD           : origin = 0x086000, length = 0x002000
   /*FLASHE           : origin = 0x088000, length = 0x008000
   FLASHF           : origin = 0x090000, length = 0x008000
   FLASHG           : origin = 0x098000, length = 0x008000
   FLASHH           : origin = 0x0A0000, length = 0x008000
   FLASHI           : origin = 0x0A8000, length = 0x008000
   FLASHJ           : origin = 0x0B0000, length = 0x008000
   FLASHK           : origin = 0x0B8000, length = 0x002000
   FLASHL           : origin = 0x0BA000, length = 0x002000
   FLASHM           : origin = 0x0BC000, length = 0x002000
   FLASHN           : origin = 0x0BE000, length = 0x002000*/

PAGE 1 : /* Data Memory */
         /* Memory (RAM/FLASH) blocks can be moved to PAGE0 for program allocation */

   BOOT_RSVD       : origin = 0x000002, length = 0x000120     /* Part of M0, BOOT rom will use this for stack */
   RAMM1           : origin = 0x000400, length = 0x000400     /* on-chip RAM block M1 */


   PIEVECTTABLE    : origin = 0x00000D00, length = 0x00000200

   RAMD1           : origin = 0x00B800, length = 0x000800

   RAMLS5      : origin = 0x00A800, length = 0x000800

   RAMGS0      : origin = 0x00C000, length = 0x001000
   RAMGS1      : origin = 0x00D000, length = 0x001000
   RAMGS2      : origin = 0x00E000, length = 0x001000
   RAMGS3      : origin = 0x00F000, length = 0x001000
   RAMGS4      : origin = 0x010000, length = 0x001000
   RAMGS5      : origin = 0x011000, length = 0x001000
   RAMGS6      : origin = 0x012000, length = 0x001000
   RAMGS7      : origin = 0x013000, length = 0x001000
   RAMGS8      : origin = 0x014000, length = 0x001000
   RAMGS9      : origin = 0x015000, length = 0x001000
   RAMGS10     : origin = 0x016000, length = 0x001000
   RAMGS11     : origin = 0x017000, length = 0x001000
   RAMGS12     : origin = 0x018000, length = 0x001000
   RAMGS13     : origin = 0x019000, length = 0x001000

   
   CPU2TOCPU1RAM   : origin = 0x03F800, length = 0x000400
   CPU1TOCPU2RAM   : origin = 0x03FC00, length = 0x000400
}


SECTIONS
{
   /* Allocate program areas: */
   .cinit              : > FLASHB      PAGE = 0, ALIGN(4)
   .pinit              : > FLASHB,     PAGE = 0, ALIGN(4)
   .text               : >> FLASHB /*| FLASHC | FLASHD | FLASHE*/      PAGE = 0, ALIGN(4)
   codestart           : > BEGIN       PAGE = 0, ALIGN(4)

#ifdef __TI_COMPILER_VERSION__
   #if __TI_COMPILER_VERSION__ >= 15009000
    .TI.ramfunc : {} LOAD = FLASHD,
                         RUN = RAMLS0 | RAMLS1 | RAMLS2 |RAMLS3,
                         LOAD_START(_RamfuncsLoadStart),
                         LOAD_SIZE(_RamfuncsLoadSize),
                         LOAD_END(_RamfuncsLoadEnd),
                         RUN_START(_RamfuncsRunStart),
                         RUN_SIZE(_RamfuncsRunSize),
                         RUN_END(_RamfuncsRunEnd),
                         PAGE = 0, ALIGN(4)
   #else
   ramfuncs            : LOAD = FLASHD,
                         RUN = RAMLS0 | RAMLS1 | RAMLS2 |RAMLS3,
                         LOAD_START(_RamfuncsLoadStart),
                         LOAD_SIZE(_RamfuncsLoadSize),
                         LOAD_END(_RamfuncsLoadEnd),
                         RUN_START(_RamfuncsRunStart),
                         RUN_SIZE(_RamfuncsRunSize),
                         RUN_END(_RamfuncsRunEnd),
                         PAGE = 0, ALIGN(4)   
   #endif
#endif

	/*** PIE Vect Table and Boot ROM Variables Structures ***/
	UNION run = PIEVECTTABLE
	{
	    .vtable      : TYPE=DSECT
	    GROUP
	    {
	        EmuKeyVar         : TYPE=DSECT
	        EmuBModeVar       : TYPE=DSECT
	        EmuBootPinsVar    : TYPE=DSECT
	        FlashCallbackVar  : TYPE=DSECT
	        FlashScalingVar   : TYPE=DSECT
	    }
	}
    .vtable :   > PIEVECTTABLE type=NOINIT PAGE =1

   /* Allocate uninitalized data sections: */
   .stack              : > RAMM1        PAGE = 1
   .ebss               : >> RAMLS5 /*| RAMGS0 | RAMGS1*/       PAGE = 1
   .esysmem            : > RAMLS5       PAGE = 1
	.data 			   : > RAMLS5 PAGE = 1
   /* Initalized sections go in Flash */
   .econst             : >> FLASHC/* | FLASHG | FLASHH */     PAGE = 0, ALIGN(4)
   .switch             : > FLASHB      PAGE = 0, ALIGN(4)
   
   .reset              : > RESET,     PAGE = 0, TYPE = DSECT /* not used, */

   Filter_RegsFile     : > RAMGS0,	   PAGE = 1
   
   SHARERAMGS0		: > RAMGS0,		PAGE = 1
   SHARERAMGS1		: > RAMGS1,		PAGE = 1
   
   /* The following section definitions are required when using the IPC API Drivers */ 
    GROUP : > CPU1TOCPU2RAM, PAGE = 1 
    {
        PUTBUFFER 
        PUTWRITEIDX 
        GETREADIDX 
    }
    
    GROUP : > CPU2TOCPU1RAM, PAGE = 1
    {
        GETBUFFER :    TYPE = DSECT
        GETWRITEIDX :  TYPE = DSECT
        PUTREADIDX :   TYPE = DSECT
    }  
    
}

/*
//===========================================================================
// End of file.
//===========================================================================
*/
