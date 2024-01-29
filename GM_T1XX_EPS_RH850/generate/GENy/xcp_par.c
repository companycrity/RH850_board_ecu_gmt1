/* -----------------------------------------------------------------------------
  Filename:    xcp_par.c
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Xcp
               
               Configuration   : C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\tools\GENy\EPS.gny
               
               ECU: 
                       TargetSystem: Hw_Rh850Cpu
                       Compiler:     GreenHills
                       Derivates:    P1M
               
               Channel "HS":
                       Databasefile: GlobalA_HS.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_HS
               Channel "CE":
                       Databasefile: GlobalA_CE.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_CE

 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2014 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__XCP_PAR_C__)
#define __XCP_PAR_C__

#include "v_inc.h"
#include "XcpProf.h"
#include "drv_par.h"

/* Events */
V_MEMROM0 V_MEMROM1 XcpCharType V_MEMROM2 kXcpEventName_0[] = "2ms_DAQ";
V_MEMROM0 V_MEMROM1 XcpCharType V_MEMROM2 V_MEMROM3* V_MEMROM1 V_MEMROM2 kXcpEventName[] = 
{
  &kXcpEventName_0[0]
};
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 kXcpEventNameLength[] = 
{
  (vuint8) 7
};
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 kXcpEventCycle[] = 
{
  (vuint8) 2
};
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 kXcpEventUnit[] = 
{
  (vuint8) DAQ_TIMESTAMP_UNIT_1MS
};
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 kXcpEventDirection[] = 
{
  (vuint8) DAQ_EVENT_DIRECTION_DAQ
};
/* Online calibration */
/* Flash programming */
/* Transport Layer */
/*  */

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\xcp_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __XCP_PAR_C__ */
