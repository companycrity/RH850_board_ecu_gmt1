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
 *          File:  TSC_HwTqArbn.h
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
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqA_Val(float32 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqARollgCntr_Val(uint8 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqB_Val(float32 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqBRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqC_Val(float32 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqCRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqCorrlnSts_Val(uint8 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqD_Val(float32 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_HwTqArbn_Rte_Read_HwTqDRollgCntr_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwTqArbn_Rte_Write_HwTq_Val(float32 data);
Std_ReturnType TSC_HwTqArbn_Rte_Write_HwTqChA_Val(float32 data);
Std_ReturnType TSC_HwTqArbn_Rte_Write_HwTqChB_Val(float32 data);

/** Calibration Component Calibration Parameters */
uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqA_Val(void);
uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqB_Val(void);
uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqC_Val(void);
uint8  TSC_HwTqArbn_Rte_Prm_HwTqArbnMaxStallTqD_Val(void);

/** Per Instance Memories */
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqARollgCntrPrev(void);
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqAStallCntrPrev(void);
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBRollgCntrPrev(void);
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqBStallCntrPrev(void);
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCRollgCntrPrev(void);
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqCStallCntrPrev(void);
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDRollgCntrPrev(void);
uint8 *TSC_HwTqArbn_Rte_Pim_HwTqArbnTqDStallCntrPrev(void);
boolean *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChAAvl(void);
boolean *TSC_HwTqArbn_Rte_Pim_dHwTqArbnChBAvl(void);



