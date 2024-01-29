/* -----------------------------------------------------------------------------
  Filename:    ggda_par.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Diag_CanDescGgdaExt_Gm
               
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

#if !defined(__GGDA_PAR_H__)
#define __GGDA_PAR_H__

#define GGDA_CONFIG_OFF                      0
#define GGDA_CONFIG_ON                       1

#define GGDA_CONFIG_VERSION                  0x203

#define GGDA_CONFIG_DEBUG                    GGDA_CONFIG_OFF

/* Support of mode $A9 */
#define GGDA_CONFIG_SERVICE_A9_SUPPORT       GGDA_CONFIG_OFF
#define GGDA_CONFIG_SERVICE_A9_80_SUPPORT    GGDA_CONFIG_OFF
#define GGDA_CONFIG_SERVICE_A9_82_SUPPORT    GGDA_CONFIG_OFF

/* Configuration of mode $10 */
#define GGDA_CONFIG_SERVICE_10_02_SUPPORT    GGDA_CONFIG_ON
#define GGDA_CONFIG_SERVICE_10_04_SUPPORT    GGDA_CONFIG_OFF

/* Configuration of mode $A5 */
#define GGDA_CONFIG_SERVICE_A5_02_SUPPORT    GGDA_CONFIG_OFF

#ifdef DESC_ENABLE_GW_ECU_ADDR
#define GGDA_CONFIG_GW_SUPPORT               GGDA_CONFIG_ON
#else
#define GGDA_CONFIG_GW_SUPPORT               GGDA_CONFIG_OFF
#endif


#define kGgdaNumContexts                     1

#define kGgdaEcuNumber                       kDescEcuAddress

#define kGgdaTimerMsCycle                    (kDescCallCycleUs / 1000)
#define kGgdaTimeoutS1                       kDescS1TimerTicks * kGgdaTimerMsCycle
#define kGgdaTimeoutP2                       kDescP2Ticks * kGgdaTimerMsCycle
#define kGgdaTimeoutP2Ex                     kDescP3maxTicks * kGgdaTimerMsCycle
#define kGgdaTimeoutVnDiagnostics            kDescVnDiagTimerTicks * kGgdaTimerMsCycle
#if defined(kDescUudtNetConfTimeout)
#define kGgdaCanConfirmTimeout               kDescUudtNetConfTimeout
#else
#define kGgdaCanConfirmTimeout               kDescUudtConfirmTimeoutTicks * kGgdaTimerMsCycle
#endif


typedef vuint8 GgdaContextIndexType;
typedef struct GgdaTpConfigTypeTag
{
  canuint8 tpTxChannel;
  canuint8 tpRxChannel;
} GgdaTpConfigType;
typedef struct GgdaCanConfigTypeTag
{
  CanChannelHandle canChannel;
  vbittype optionalModes : 8;
} GgdaCanConfigType;

#define kGgdaDisableAll                      ((vbittype) 0x00u)
#define kGgdaEnableModeA502                  ((vbittype) 0x01u)
#define kGgdaEnableMode1002                  ((vbittype) 0x02u)
#define kGgdaEnableMode1004                  ((vbittype) 0x04u)
#define kGgdaEnableModeA980                  ((vbittype) 0x10u)
#define kGgdaEnableModeA981                  ((vbittype) 0x20u)
#define kGgdaEnableModeA982                  ((vbittype) 0x40u)
#define kGgdaEnableMode10xx                  ((vbittype) (kGgdaEnableMode1002|kGgdaEnableMode1004))
#define kGgdaEnableModeA9xx                  ((vbittype) 0x70u)
#define kGgdaEnableAll                       ((vbittype) (kGgdaEnableModeA502|kGgdaEnableMode10xx|kGgdaEnableModeA9xx))

V_MEMROM0 extern  V_MEMROM1 GgdaCanConfigType V_MEMROM2 ggdaCanConfig[kGgdaNumContexts];
V_MEMROM0 extern  V_MEMROM1 GgdaTpConfigType V_MEMROM2 ggdaTpConfig[kGgdaNumContexts];


#pragma ghs section bss=".osAppl_Appl6_bss"
#pragma ghs section sbss=".osAppl_Appl6_sbss"
#pragma ghs section data=".osAppl_Appl6_data"
#pragma ghs section sdata=".osAppl_Appl6_sdata"

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\ggda_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __GGDA_PAR_H__ */
