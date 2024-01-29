/* -----------------------------------------------------------------------------
  Filename:    nm_cfg.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Nm_Gmlan_Gm
               
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

#if !defined(__NM_CFG_H__)
#define __NM_CFG_H__

#include "can_par.h"
#define NM_GMLAN_GMDLL_VERSION               0x0102
#define NM_GMLAN_GMDLL_RELEASE_VERSION       0x02
#define NM_TYPE_GMLAN
#define GMLAN_VERSION 0x301
#define kNmNumberOfChannels                  2
#define kNmNumberOfIdentities                1
/* Module specific attributes */
/* Feature configuration */
#define NM_DISABLE_CANOFF_ON_LOWVOLTAGE_MODE
#define NM_DISABLE_LOWVOLTAGE_MODE
#define NM_DISABLE_INHIBIT_VN_HIGHLOAD
#define NM_DISABLE_HIGHSPEED_MODE
#define NM_ENABLE_CALL_CANINITPON
#define NM_ENABLE_BUSOFF_FCT
#define NM_DISABLE_BUSOFF_END_FCT
#define NM_DISABLE_WAKEUP_FCT
#define NM_DISABLE_SLEEP_FCT
#define NM_DISABLE_WAKEUP_RECEIVED_FCT
#define NM_DISABLE_VN_REMOTE_ACTIVATE_REQUEST_FCT
#define NM_DISABLE_VN_ACTIVATION_FAILED_FCT
#define NM_DISABLE_VNMF_CONFIRMATION_TIMEOUT_FCT
#define NM_DISABLE_HLVW_INDICATION_FCT
#define NM_DISABLE_REINITREQUEST_FCT
#define NM_DISABLE_SLEEPCONFIRMATION_FCT
#define NM_DISABLE_EXTENDED_RETURNCODES
#define NM_DISABLE_ASSERTIONS
/* VN configuration */
#define NM_DISABLE_VN_ACTIVATOR
#define NM_DISABLE_VN_REMOTED
#define NM_ENABLE_VN_LOCAL
#define NM_ENABLE_VN_INITACTIVE
#define NM_DISABLE_LV_SUSCEPT_VN
#define kNmNumberOfVirtualNets               6
#define kNmNumberOfVnBytes                   2
#define kNmNumberOfLVSusceptibleVNs          0
/* VN handles */
#define VN_SLHSSharedDiagnostic              0
#define VN_AllNodes                          1
#define VN_SLHS_VNReq                        2
/* Transceiver */
#define NM_DISABLE_SINGLEWIRE_TRCV
#define NM_ENABLE_HIGHSPEED_NOSLEEP_TRCV
#define NM_DISABLE_HIGHSPEED_SLEEP_TRCV
/* BusTypes */
#define NM_DISABLE_BODYBUS
#define NM_ENABLE_POWERTRAIN
#define NM_DISABLE_INFOTAINMENT
#define NM_DISABLE_DIAGNOSTICS
/* Fault Detection and Mitigation */
#define NM_ENABLE_FDR_ALGORITHM
#define NM_ENABLE_FDR_NO_SLEEP_CONF_FAULT_REPORT
#define NM_ENABLE_FDR_NO_SLEEP_CONF_FAULT_MITIGATION
/* Channel specific attributes are generated into the file 'nm_par.c' */

#pragma ghs section bss=".osAppl_Appl6_bss"
#pragma ghs section sbss=".osAppl_Appl6_sbss"
#pragma ghs section data=".osAppl_Appl6_data"
#pragma ghs section sdata=".osAppl_Appl6_sdata"

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\nm_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __NM_CFG_H__ */
