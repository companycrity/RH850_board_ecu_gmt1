/* -----------------------------------------------------------------------------
  Filename:    v_cfg.h
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

#if !defined(__V_CFG_H__)
#define __V_CFG_H__

#ifndef VGEN_GENY
#define VGEN_GENY
#endif

#ifndef GENy
#define GENy
#endif

#ifndef SUPPLIER_CANBEDDED
#define SUPPLIER_CANBEDDED                   30
#endif

/* -----------------------------------------------------------------------------
    &&&~ Version
 ----------------------------------------------------------------------------- */

#ifndef VERSIONNUMBER_0
#define VERSIONNUMBER_0                      0x0
#endif

#ifndef VERSIONNUMBER_1
#define VERSIONNUMBER_1                      0x0
#endif



/* -----------------------------------------------------------------------------
    &&&~ General Switches
 ----------------------------------------------------------------------------- */

#ifndef V_OSTYPE_OSEK
#define V_OSTYPE_OSEK
#endif



/* -----------------------------------------------------------------------------
    &&&~ Processor specific
 ----------------------------------------------------------------------------- */

#ifndef C_CPUTYPE_32BIT
#define C_CPUTYPE_32BIT
#endif


#ifndef V_CPUTYPE_BITARRAY_32BIT
#define V_CPUTYPE_BITARRAY_32BIT
#endif


#ifndef C_CPUTYPE_LITTLEENDIAN
#define C_CPUTYPE_LITTLEENDIAN
#endif


#ifndef C_CPUTYPE_BITORDER_LSB2MSB
#define C_CPUTYPE_BITORDER_LSB2MSB
#endif


#ifndef V_DISABLE_USE_DUMMY_FUNCTIONS
#define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif


#ifndef V_ENABLE_USE_DUMMY_STATEMENT
#define V_ENABLE_USE_DUMMY_STATEMENT
#endif


#ifndef C_COMP_GHS_RH850_RSCAN
#define C_COMP_GHS_RH850_RSCAN
#endif


#ifndef V_CPU_RH850
#define V_CPU_RH850
#endif

#ifndef V_COMP_GHS
#define V_COMP_GHS
#endif

#ifndef V_COMP_GHS_RH850
#define V_COMP_GHS_RH850
#endif

#ifndef V_PROCESSOR_P1M
#define V_PROCESSOR_P1M
#endif


#ifndef C_PROCESSOR_P1M
#define C_PROCESSOR_P1M
#endif




/* -----------------------------------------------------------------------------
    &&&~ Used Modules
 ----------------------------------------------------------------------------- */

#define VGEN_ENABLE_DIAG_CANDESC_KWP
#ifndef VGEN_ENABLE_VSTDLIB
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef VSTD_ENABLE_APPL_INTCTRL
#define VSTD_ENABLE_APPL_INTCTRL
#endif

void osPsysCallSuspendOSInterrupts(void);
void osPsysCallResumeOSInterrupts(void);
#ifndef VStdUserNestedDisable
#define VStdUserNestedDisable                osPsysCallSuspendOSInterrupts
#endif

#ifndef VStdUserNestedRestore
#define VStdUserNestedRestore                osPsysCallResumeOSInterrupts
#endif

#ifndef VSTD_DISABLE_DEBUG_SUPPORT
#define VSTD_DISABLE_DEBUG_SUPPORT
#endif

#ifndef VSTD_ENABLE_LIBRARY_FUNCTIONS
#define VSTD_ENABLE_LIBRARY_FUNCTIONS
#endif


#define VGEN_ENABLE_XCP
#define VGEN_ENABLE_CAN_DRV
#define C_ENABLE_CAN_CHANNELS
#define V_BUSTYPE_CAN
#define VGEN_ENABLE_IL_VECTOR
#define VGEN_ENABLE_NM_GMLAN
#define VGEN_ENABLE_TP_ISO_MC
#define VGEN_ENABLE_DIAG_GGDA


#ifndef kVNumberOfIdentities
#define kVNumberOfIdentities                 1
#endif

#ifndef tVIdentityMsk
#define tVIdentityMsk                        vuint8
#endif

#ifndef kVIdentityIdentity_0
#define kVIdentityIdentity_0                 (vuint8) 0
#endif

#ifndef VSetActiveIdentity
#define VSetActiveIdentity(identityLog)
#endif

#ifndef V_ACTIVE_IDENTITY_MSK
#define V_ACTIVE_IDENTITY_MSK                1
#endif

#ifndef V_ACTIVE_IDENTITY_LOG
#define V_ACTIVE_IDENTITY_LOG                0
#endif


#define DIAG_API_CALL_TYPE
#define DIAG_API_CALLBACK_TYPE
#define DIAG_INTERNAL_CALL_TYPE
#define TP_API_CALL_TYPE
#define TP_API_CALLBACK_TYPE
#define TP_INTERNAL_CALL_TYPE

/* -----------------------------------------------------------------------------
    &&&~ Versions of Preconfig Files
 ----------------------------------------------------------------------------- */

#define VGEN_OEM_PRECONFIG_GM_SLP8
#define VGEN_OEM_PRECONFIG_VERSION           0x0000
#define VGEN_OEM_PRECONFIG_RELEASE_VERSION   0x00
#define VGEN_USER_PRECONFIG_Gateway
#define VGEN_USER_PRECONFIG_VERSION          0x0000
#define VGEN_USER_PRECONFIG_RELEASE_VERSION  0x00


/* -----------------------------------------------------------------------------
    &&&~ Optimization
 ----------------------------------------------------------------------------- */

#define V_ATOMIC_BIT_ACCESS_IN_BITFIELD      STD_OFF
#define V_ATOMIC_VARIABLE_ACCESS             32



#ifndef VGEN_ENABLE_VSTDLIB
/* Diag_CanDesc requires VSTDLIB */
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef C_CLIENT_GM
#define C_CLIENT_GM
#endif

#ifndef __EPS_HS__
#define __EPS_HS__
#endif

/* -----------------------------------------------------------------------------
    &&&~ Compatibility defines for ComSetCurrentECU
 ----------------------------------------------------------------------------- */

#define kComNumberOfNodes                    kVNumberOfIdentities
#define ComSetCurrentECU                     VSetActiveIdentity
#define comMultipleECUCurrent                vActiveIdentityLog


#define C_VERSION_REF_IMPLEMENTATION         0x150


#ifndef VGEN_ENABLE_VSTDLIB
/* DrvCan__baseRi15 requires VSTDLIB */
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef VGEN_ENABLE_VSTDLIB
#define VGEN_ENABLE_VSTDLIB
#endif


#ifndef VGEN_ENABLE_VSTDLIB
/* TpMC requires VSTDLIB */
#define VGEN_ENABLE_VSTDLIB
#endif


#pragma ghs section bss=".osAppl_Appl6_bss"
#pragma ghs section sbss=".osAppl_Appl6_sbss"
#pragma ghs section data=".osAppl_Appl6_data"
#pragma ghs section sdata=".osAppl_Appl6_sdata"

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\v_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __V_CFG_H__ */
