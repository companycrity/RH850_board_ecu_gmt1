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
 *          File:  TSC_PwrpkCmpbltyChk.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn1_Val(uint8 *data);
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn1Vld_Logl(boolean *data);
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn2_Val(uint8 *data);
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Read_GearIdn2Vld_Logl(boolean *data);

/** Client server interfaces */
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_PwrpkCmpbltyChk_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
uint8  TSC_PwrpkCmpbltyChk_Rte_Prm_PwrpkCmpbltyChkGearId_Val(void);

/** Per Instance Memories */
uint32 *TSC_PwrpkCmpbltyChk_Rte_Pim_GearIdnRefTmr(void);



