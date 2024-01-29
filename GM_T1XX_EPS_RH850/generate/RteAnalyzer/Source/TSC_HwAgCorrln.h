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
 *          File:  TSC_HwAgCorrln.h
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
Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgA_Val(float32 *data);
Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgARollgCntr_Val(uint8 *data);
Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgB_Val(float32 *data);
Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgBARollgCntr_Val(uint8 *data);
Std_ReturnType TSC_HwAgCorrln_Rte_Read_HwAgBQlfr_Val(SigQlfr1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAgCorrln_Rte_Write_HwAgCorrlnSt_Val(uint8 data);
Std_ReturnType TSC_HwAgCorrln_Rte_Write_HwAgIdptSig_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_HwAgCorrln_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_HwAgCorrln_Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_HwAgCorrln_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_HwAgCorrln_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnHwAgAbsltDif_Val(void);
uint16  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnNtc0x092FailStep_Val(void);
uint16  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnNtc0x092PassStep_Val(void);
uint8  TSC_HwAgCorrln_Rte_Prm_HwAgCorrlnHwAgMaxStall_Val(void);

/** Per Instance Memories */
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgARollgCntPrev(void);
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgAStallCntPrev(void);
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgBRollgCntPrev(void);
uint8 *TSC_HwAgCorrln_Rte_Pim_HwAgBStallCntPrev(void);
boolean *TSC_HwAgCorrln_Rte_Pim_dHwAgCorrlnAgAAvl(void);
boolean *TSC_HwAgCorrln_Rte_Pim_dHwAgCorrlnAgBAvl(void);



