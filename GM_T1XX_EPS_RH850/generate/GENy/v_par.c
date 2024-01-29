/* -----------------------------------------------------------------------------
  Filename:    v_par.c
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyVcfgNameDecorator
               
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

/* -----------------------------------------------------------------------------
    &&&~ BaseEnv_PSF_Includes
 ----------------------------------------------------------------------------- */

#include "v_inc.h"
#include "can_inc.h"



/* -----------------------------------------------------------------------------
    &&&~ GENy Version Information
 ----------------------------------------------------------------------------- */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 kGENyVersion[kGENyVersionNumberOfBytes] = 
{
  VGEN_DELIVERY_VERSION_BYTE_0, 
  VGEN_DELIVERY_VERSION_BYTE_1, 
  VGEN_DELIVERY_VERSION_BYTE_2, 
  VGEN_DELIVERY_VERSION_BYTE_3, 
  VGEN_DELIVERY_VERSION_BYTE_4, 
  VGEN_DELIVERY_VERSION_BYTE_5, 
  VGEN_DELIVERY_VERSION_BYTE_6, 
  VGEN_DELIVERY_VERSION_BYTE_7, 
  VGEN_DELIVERY_VERSION_BYTE_8, 
  VGEN_DELIVERY_VERSION_BYTE_9
};
/* ROM CATEGORY 4 END */



/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 tDBCVersion V_MEMROM2 kDBCVersion[2] = 
{
  { 0x17, 0x0, 0x107, 0x0, 0x0 }, 
  { 0x17, 0x0, 0x107, 0x0, 0x0 }
};
/* ROM CATEGORY 4 END */


/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\v_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\v_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

