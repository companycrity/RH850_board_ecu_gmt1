/*===========================================================================*/
/* Module       = dr7f701311.ld                                              */
/* Version      = E1.00f                                                     */
/*                extracted from device file dr7f701311.dvf                  */
/*                by DeFiXRH850 0.7.5.2                                      */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2014 by Renesas Electronics Europe GmbH,                    */
/*               a company of the Renesas Electronics Corporation            */
/*===========================================================================*/
/* Purpose:     Template of linker directive file                            */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* Because the Product(s) is licensed free of charge, there is no warranty   */
/* of any kind whatsoever and expressly disclaimed and excluded by Renesas,  */
/* either expressed or implied, including but not limited to those for       */
/* non-infringement of intellectual property, merchantability and/or         */
/* fitness for the particular purpose.                                       */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Device:         R7F701311                                    */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

/**********************************************************************************************************************
* Module File Name  : dr7f701311.ld
* Module Description: T1xx Linker Directive File
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          12 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/26/15  2        LWW       Modifications from Renesas Template for O/S regions
* 05/01/15  3        LWW       Updates for bootloader integration                                              EA4#553
* 05/05/15  4        LWW       Added calibration flash section
* 06/08/15  5        LWW       Added 4k RAM section dedicated to data DMA writes to                            EA4#731
* 01/25/16  8        LWW       Update for new Os memory section names and added os MPU reference symbols       EA4#3191
# 01/28/16  9        JWJ       Updates for chechsum symbols to support flash CRC integration                   EA4#3350
* 02/16/16  10       JWJ       Added new symbol for application CRC location for state of health monitor       EA4#2790
* 03/30/16  11       JWJ       Updates to add third calibration section                                        EA4#4829
* 12/15/16  12       HM        Updates for Vector SIP CBD1400351_D04 integration                               EA4#8935
**********************************************************************************************************************/

CONSTANTS
{
  zero_start = 0xffff8000
}

MEMORY
 {
    /* Bootloader 0x0000 0000 - 0x0000 17FFF */

    /* Application */
    GMAPPHEADER      (RX) : ORIGIN=0x00018000, LENGTH=0x00000200
    APPVECTOR        (RX) : ORIGIN=0x00018200, LENGTH=0x00000800
    APP_FLASH        (RX) : ORIGIN=0x00018A00, LENGTH=0x0009F3F0
    APP_CRC          (RX) : ORIGIN=0x000B7DF0, LENGTH=0x00000010
    APPPRESENCE      (RX) : ORIGIN=0x000B7E00, LENGTH=0x00000100
    APP_VALDBLK      (RX) : ORIGIN=0x000B7F00, LENGTH=0x00000100

    /* Calibration 2 - Feature Cals */
    GMCAL2HEADER     (RX) : ORIGIN=0x000B8000, LENGTH=0x00000020
    CAL2_FLASH       (RX) : ORIGIN=0x000B8020, LENGTH=0x00007DD0
    CAL2_CRC         (RX) : ORIGIN=0x000BFDF0, LENGTH=0x00000010
    CAL2PRESENCE     (RX) : ORIGIN=0x000BFE00, LENGTH=0x00000100
    CAL2_VALDBLK     (RX) : ORIGIN=0x000BFF00, LENGTH=0x00000100

    /* Calibration 1 - System Cals */
    GMCAL1HEADER     (RX) : ORIGIN=0x000C0000, LENGTH=0x00000020
    CAL1_FLASH       (RX) : ORIGIN=0x000C0020, LENGTH=0x0001FDD0
    CAL1_CRC         (RX) : ORIGIN=0x000DFDF0, LENGTH=0x00000010
    CAL1PRESENCE     (RX) : ORIGIN=0x000DFE00, LENGTH=0x00000100
    CAL1_VALDBLK     (RX) : ORIGIN=0x000DFF00, LENGTH=0x00000100

    /* Calibration 3 - Performance Cals */
    GMCAL3HEADER     (RX) : ORIGIN=0x000E0000, LENGTH=0x00000020
    CAL3_FLASH       (RX) : ORIGIN=0x000E0020, LENGTH=0x0001FDD0
    CAL3_CRC         (RX) : ORIGIN=0x000FFDF0, LENGTH=0x00000010
    CAL3PRESENCE     (RX) : ORIGIN=0x000FFE00, LENGTH=0x00000100
    CAL3_VALDBLK     (RX) : ORIGIN=0x000FFF00, LENGTH=0x00000100

    iROM_1         : ORIGIN = 0x01000000,  LENGTH = 32k
    iRAM_0         : ORIGIN = 0xFEBE0000,  LENGTH = 124k
    iRAM_DMAWRITE  : ORIGIN = 0xFEBFF000,  LENGTH = 4k
}

SECTIONS
{
    .N_AppHeaderSeg          : {*(.GMAPPHEADER)} > GMAPPHEADER
    .N_PresPattAppSeg        : {*(.APPPRESENCE)} > APPPRESENCE

    .N_CalHeaderSeg          : {*(.GMCAL1HEADER)} > GMCAL1HEADER
    .N_PresPattCalSeg        : {*(.CAL1PRESENCE)} > CAL1PRESENCE

    .N_Cal2HeaderSeg         : {*(.GMCAL2HEADER)} > GMCAL2HEADER
    .N_PresPattCalSeg2       : {*(.CAL2PRESENCE)} > CAL2PRESENCE

    .N_Cal3HeaderSeg         : {*(.GMCAL3HEADER)} > GMCAL3HEADER
    .N_PresPattCalSeg3       : {*(.CAL3PRESENCE)} > CAL3PRESENCE

    .intvect                          FILL(0xFF)    :{*(.APPVECTOR) .=align(4);}>APPVECTOR            /* start of interrupt vector */
    .intvect_end  0x00018900                  :>.      /* end   of interrupt vector */

    .rozdata                          FILL(0xFF)    :{*(.rozdata) .=align(4);}>APP_FLASH              /* constant datas in ZDA area */
    .robase                           FILL(0xFF)    :{*(.robase) .=align(4);}>.                       /* initialize textpointer TP for SDA addressing */
    .rosdata                          FILL(0xFF)    :{*(.rosdata) .=align(4);}>.                      /* constant datas in SDA area */
    .os_rosdata                       FILL(0xFF)    :{*(.os_rosdata) .=align(4);}>.                   /* constant datas in SDA area */
    .rodata                           FILL(0xFF)    :{*(.rodata) .=align(4);}>.                       /* constant datas in normal area */
    .os_rodata                        FILL(0xFF)    :{*(.os_rodata) .=align(4);}>.                    /* constant datas in normal area */
    .osConfigBlock_rodata             FILL(0xFF)    :{*(.osConfigBlock_rodata) .=align(4);}>.         /* constant datas in normal area */
    .osSysCallTable_c0                FILL(0xFF)    :{*(.osSysCallTable_c0) .=align(8);}>.               /* constant datas in normal area */

    .text                             FILL(0xFF)    :{*(.text) .=align(4);}>.                         /* program code area */
    .os_text                          FILL(0xFF)    :{*(.os_text) .=align(4);}>.                      /* program code area */
    .osExceptionVectorTable_c0        FILL(0xFF)    :{*(.osExceptionVectorTable) .=align(4);}>.       /* program code area */
    .osEIINTVectorTable_c0            FILL(0xFF)    :{*(.osEIINTVectorTable) .=align(4);}>.           /* program code area */

    .fixaddr                          FILL(0xFF)    :{*(.fixaddr) .=align(4);}>.                      /* ghs internal (compiler) */
    .fixtype                          FILL(0xFF)    :{*(.fixtype) .=align(4);}>.                      /* ghs internal (compiler) */
    .secinfo                          FILL(0xFF)    :{*(.secinfo) .=align(4);}>.                      /* ghs internal (runtime library) */
    .syscall                          FILL(0xFF)    :{*(.syscall) .=align(4);}>.                      /* ghs internal (linker) */

    .romdata  ROM(.data)              FILL(0xFF)    :{}>.                                             /* constant data to initialize variables (copied to RAM at startup)*/
    .romzdata ROM(.zdata)             FILL(0xFF)    :{}>.                                             /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
    .romsdata ROM(.sdata)             FILL(0xFF)    :{}>.                                             /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
    .romtdata ROM(.tdata)             FILL(0xFF)    :{}>.                                             /* constant data to initialize variables in TDA area (copied to RAM at startup)*/
    .romsldata ROM(.sldata)           FILL(0xFF)    :{}>.                                             /* constant data to initialize variables in LSDA area (copied to GRAM at startup)*/
    #include "osrom.dld"
    .ROM_data_dma_128   ROM(.data_dma_128)  FILL(0xFF)    :{}>.


/*--------------------------------------------------------------------------------------------------*/
/*                            Checksum Definitions                                                  */
/*--------------------------------------------------------------------------------------------------*/

    .APPLCRC    FILL(0xFF)  align(4)   :{*(.APPLCRC) .= sizeof(APP_CRC);  } > APP_CRC
    .CAL1CRC    FILL(0xFF)  align(4)   :{*(.CAL1CRC) .= sizeof(CAL1_CRC); } > CAL1_CRC
    .CAL2CRC    FILL(0xFF)  align(4)   :{*(.CAL2CRC) .= sizeof(CAL2_CRC); } > CAL2_CRC
    .CAL3CRC    FILL(0xFF)  align(4)   :{*(.CAL3CRC) .= sizeof(CAL3_CRC); } > CAL3_CRC

    CCT_Range_01_Start = 0x018200;
    CCT_Range_01_Length = 0x0009FBF0;
    CCT_Range_01_BitAddrGran = 8;
    CCT_Range_01_Category = 300;
    CCT_Range_01_Algorithm = 14;
    CCT_Range_01_Address = addr(APP_CRC);

    CCT_Range_02_Start =  0x000C0020;
    CCT_Range_02_Length = 0x0001FDD0;
    CCT_Range_02_BitAddrGran = 8;
    CCT_Range_02_Category = 200;
    CCT_Range_02_Algorithm = 14;
    CCT_Range_02_Address = addr(CAL1_CRC);

    CCT_Range_03_Start  = 0x000B8020;
    CCT_Range_03_Length = 0x00007DD0;
    CCT_Range_03_BitAddrGran = 8;
    CCT_Range_03_Category = 200;
    CCT_Range_03_Algorithm = 14;
    CCT_Range_03_Address = addr(CAL2_CRC);

    CCT_Range_04_Start =  0x000E0020;
    CCT_Range_04_Length = 0x0001FDD0;
    CCT_Range_04_BitAddrGran = 8;
    CCT_Range_04_Category = 200;
    CCT_Range_04_Algorithm = 14;
    CCT_Range_04_Address = addr(CAL3_CRC);

    __top_of_iROM_0 = MEMENDADDR(CAL3_VALDBLK);

/* Start of internal User-Boot-ROM1 area (iROM_1) */

    .bcode    align(4)                     :>iROM_1 /* user defined segment for executable code located in user boot 1 area */
    .bconst   align(4)                     :>.      /* user defined segment for constant data located in user boot 1 area   */
    __top_of_iROM1 = MEMENDADDR(iROM_1);

/* Start of internal RAM area (iRAM) */

    .                                     :>iRAM_0    /* initialized data */
    _StackRam_StartAddr = .;
    #include "osstacks.dld"
    _StackRam_EndAddr = .;
    _GeneralRam_StartAddr = .;
    .data                                 :>.         /* initialized data */
    #include "osdata.dld"
    .sldata   align(4)                    :>.         /* user defined segment for initialized data */
    .slbss    align(4)                    :>.         /* user defined segment for initialized data */
    .bss      align(4)                    :>.         /* zero initialized data*/

    .sdabase  align(4)                    :>.         /* initialize globalpointer GP for SDA addressing */
    .sdata    align(4)                    :>.         /* initialized data in SDA area*/
    #include "ossdata.dld"
    .sbss     align(4)                    :>.         /* zero initialized data in SDA area*/
    .zdata    align(4)                    :>.         /* initialized data in ZDA area*/
    .zbss     align(4)                    :>.         /* zero initialized data in ZDA area*/

    .tdata    align(4)   MAX_SIZE(0x0100) :>.         /* initialized and zero-initialized data in TDA area */
    #include "ostdata.dld"
    .stack    align(4) pad(0x0800)        :>.         /* definition of stack size */
    .heapbase align(4)                    :>.
    .heap     align(4)
            pad(endaddr(iRAM_0)-addr(.heapbase))
            NOCLEAR                     :>.         /* definition of heap size */
    .CalRegn01                            :>CAL1_FLASH
    .CalRegn02                            :>CAL2_FLASH
    .CalRegn03                            :>CAL3_FLASH
    __top_of_iRAM_0 = MEMENDADDR( iRAM_0);

    .data_dma_128                                 :>iRAM_DMAWRITE
    _GeneralRam_EndAddr = 0xFEBFFFFF;
    #include "osSysCallTable.dld"


    /* Symbols for State of Health monitoring */
    _ApplCRCAddress = addr(APP_CRC);


/*  Symbols for compiler references */

    ___ghs_romstart   = MEMADDR(GMAPPHEADER);
    ___ghs_romend     = MEMENDADDR(CAL3_VALDBLK);

    ___ghs_ramstart   = MEMADDR(iRAM_0);
    ___ghs_ramend     = MEMENDADDR(iRAM_0);

}

/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
