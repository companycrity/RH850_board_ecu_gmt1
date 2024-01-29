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
 *          File:  TSC_CurrMeasCorrln.h
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
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrCorrdA_Val(float32 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrCorrdB_Val(float32 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrCorrdC_Val(float32 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrCorrdD_Val(float32 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrCorrdE_Val(float32 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrCorrdF_Val(float32 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrQlfr1_Val(SigQlfr1 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrQlfr2_Val(SigQlfr1 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrRollgCntr1_Val(uint8 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_MotCurrRollgCntr2_Val(uint8 *data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Read_SysSt_Val(SysSt1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CurrMeasCorrln_Rte_Write_CurrMeasCorrlnSts_Val(uint8 data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Write_CurrMeasIdptSig_Val(uint8 data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Write_CurrMotSumABC_Val(float32 data);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Write_CurrMotSumDEF_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_CurrMeasCorrln_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_CurrMeasCorrln_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_CurrMeasCorrln_Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val(void);
uint16  TSC_CurrMeasCorrln_Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val(void);
uint16  TSC_CurrMeasCorrln_Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val(void);
uint16  TSC_CurrMeasCorrln_Rte_Prm_CurrMeasCorrlnNtc0x04EFailStep_Val(void);
uint16  TSC_CurrMeasCorrln_Rte_Prm_CurrMeasCorrlnNtc0x04EPassStep_Val(void);
uint8  TSC_CurrMeasCorrln_Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val(void);

/** Per Instance Memories */
uint8 *TSC_CurrMeasCorrln_Rte_Pim_CurrMeasCorrlnSens0RollgCntPrev(void);
uint8 *TSC_CurrMeasCorrln_Rte_Pim_CurrMeasCorrlnSens0StallCntPrev(void);
uint8 *TSC_CurrMeasCorrln_Rte_Pim_CurrMeasCorrlnSens1RollgCntPrev(void);
uint8 *TSC_CurrMeasCorrln_Rte_Pim_CurrMeasCorrlnSens1StallCntPrev(void);



