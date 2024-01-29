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
 *          File:  TSC_CDD_FlsMem.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_FlsMem_Rte_Write_CodFlsCrcChkCmpl_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_FlsMem_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_CDD_FlsMem_Rte_Call_ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 *CrcHwInRegAdr_Arg, uint32 *CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, uint16 *ResvKey_Arg);
Std_ReturnType TSC_CDD_FlsMem_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Per Instance Memories */
uint32 *TSC_CDD_FlsMem_Rte_Pim_CodFlsCrcChkStrtTi(void);
uint16 *TSC_CDD_FlsMem_Rte_Pim_CrcHwIdxKey(void);
boolean *TSC_CDD_FlsMem_Rte_Pim_CodFlsSngBitErr(void);
boolean *TSC_CDD_FlsMem_Rte_Pim_CrcChkCmpl(void);
boolean *TSC_CDD_FlsMem_Rte_Pim_PwrOnRstCrcChkCmpl(void);



