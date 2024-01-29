/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_CDD_VrfyCritReg.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Client server interfaces */
Std_ReturnType TSC_CDD_VrfyCritReg_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_VrfyCritReg_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Per Instance Memories */
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegCritRegActVal(void);
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegCritRegAdr(void);
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegCritRegDesVal(void);
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegSysCritRegActVal(void);
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegSysCritRegAdr(void);
uint32 *TSC_CDD_VrfyCritReg_Rte_Pim_dVrfyCritRegSysCritRegDesVal(void);



