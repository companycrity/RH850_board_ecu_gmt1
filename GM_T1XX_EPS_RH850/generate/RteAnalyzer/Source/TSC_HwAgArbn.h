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
 *          File:  TSC_HwAgArbn.h
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
Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgA_Val(float32 *data);
Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgARollgCntr_Val(uint8 *data);
Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgB_Val(float32 *data);
Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgBQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgBRollgCntr_Val(uint8 *data);
Std_ReturnType TSC_HwAgArbn_Rte_Read_HwAgCorrlnSt_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAgArbn_Rte_Write_HwAg_Val(float32 data);

/** Calibration Component Calibration Parameters */
uint8  TSC_HwAgArbn_Rte_Prm_HwAgArbnHwAgMaxStall_Val(void);

/** Per Instance Memories */
float32 *TSC_HwAgArbn_Rte_Pim_HwAgPrev(void);
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgARollgCntrPrev(void);
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgAStallCntrPrev(void);
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgBRollgCntrPrev(void);
uint8 *TSC_HwAgArbn_Rte_Pim_HwAgBStallCntrPrev(void);
boolean *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgAAvl(void);
boolean *TSC_HwAgArbn_Rte_Pim_dHwAgArbnAgBAvl(void);



