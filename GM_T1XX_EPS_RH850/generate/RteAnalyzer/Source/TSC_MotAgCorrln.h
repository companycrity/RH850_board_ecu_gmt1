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
 *          File:  TSC_MotAgCorrln.h
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
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgAMecl_Val(u0p16 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgAMeclQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgAMeclRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgBMecl_Val(u0p16 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgBMeclQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgBMeclRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgCMecl_Val(u0p16 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgCMeclQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_MotAgCorrln_Rte_Read_MotAgCMeclRollgCntr_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_MotAgCorrln_Rte_Write_MotAgABErrTerm_Val(u0p16 data);
Std_ReturnType TSC_MotAgCorrln_Rte_Write_MotAgACErrTerm_Val(u0p16 data);
Std_ReturnType TSC_MotAgCorrln_Rte_Write_MotAgBCErrTerm_Val(u0p16 data);
Std_ReturnType TSC_MotAgCorrln_Rte_Write_MotAgMeclCorrlnSt_Val(uint8 data);
Std_ReturnType TSC_MotAgCorrln_Rte_Write_MotAgMeclIdptSig_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_MotAgCorrln_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_MotAgCorrln_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_MotAgCorrln_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint8  TSC_MotAgCorrln_Rte_Prm_SysGlbPrmMotPoleCnt_Val(void);

/** Per Instance Memories */
u0p16 *TSC_MotAgCorrln_Rte_Pim_MotAgCorrlnErrThd(void);
uint8 *TSC_MotAgCorrln_Rte_Pim_MotAgCorrlnMotAgARollgCntPrev(void);
uint8 *TSC_MotAgCorrln_Rte_Pim_MotAgCorrlnMotAgAStallCntPrev(void);
uint8 *TSC_MotAgCorrln_Rte_Pim_MotAgCorrlnMotAgBRollgCntPrev(void);
uint8 *TSC_MotAgCorrln_Rte_Pim_MotAgCorrlnMotAgBStallCntPrev(void);
uint8 *TSC_MotAgCorrln_Rte_Pim_MotAgCorrlnMotAgCRollgCntPrev(void);
uint8 *TSC_MotAgCorrln_Rte_Pim_MotAgCorrlnMotAgCStallCntPrev(void);
boolean *TSC_MotAgCorrln_Rte_Pim_dMotAgCorrlnMotAgAOk(void);
boolean *TSC_MotAgCorrln_Rte_Pim_dMotAgCorrlnMotAgBOk(void);
boolean *TSC_MotAgCorrln_Rte_Pim_dMotAgCorrlnMotAgCOk(void);



