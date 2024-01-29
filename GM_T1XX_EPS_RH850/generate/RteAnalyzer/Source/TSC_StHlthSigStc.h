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
 *          File:  TSC_StHlthSigStc.h
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
Std_ReturnType TSC_StHlthSigStc_Rte_Read_AbsltMotPosABDifStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_AbsltMotPosACDifStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_AbsltMotPosBCDifStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_CtrlrTStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_CurrMotSumABCStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_CurrMotSumDEFStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_DigTqIdptSigStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_DigTqSnsrAStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_DigTqSnsrBStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_DutyCycStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_EotImpctStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_FricEstimnStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_MotPosStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_OutpAssiStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaAStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaBStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaCStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaDStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaEStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_PhaFStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_RamEccSngBitCorrnStHlth_Val(uint8 *data);
Std_ReturnType TSC_StHlthSigStc_Rte_Read_WhlImbMaxCmpStHlth_Val(uint8 *data);

/** Service interfaces */
Std_ReturnType TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_StHlthSigStc_Rte_Call_SigStcHistDataAry_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Exclusive Areas */
void TSC_StHlthSigStc_Rte_Enter_StHlthSigStc_ExclusiveArea(void);
void TSC_StHlthSigStc_Rte_Exit_StHlthSigStc_ExclusiveArea(void);

/** Per Instance Memories */
boolean *TSC_StHlthSigStc_Rte_Pim_VldNvm(void);
uint32 *TSC_StHlthSigStc_Rte_Pim_IgnCycSampleCntrAry(void);
uint8 *TSC_StHlthSigStc_Rte_Pim_RamBuf(void);
float32 *TSC_StHlthSigStc_Rte_Pim_SigAvrgBuf(void);
uint8 *TSC_StHlthSigStc_Rte_Pim_SigStcHistDataAry(void);



