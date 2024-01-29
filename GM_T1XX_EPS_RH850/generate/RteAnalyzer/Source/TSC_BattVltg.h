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
 *          File:  TSC_BattVltg.h
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
Std_ReturnType TSC_BattVltg_Rte_Read_BattSwdVltgCorrlnSts_Val(uint8 *data);
Std_ReturnType TSC_BattVltg_Rte_Read_BattVltg_Val(float32 *data);
Std_ReturnType TSC_BattVltg_Rte_Read_BattVltgSwd1_Val(float32 *data);
Std_ReturnType TSC_BattVltg_Rte_Read_BattVltgSwd2_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_BattVltg_Rte_Write_BrdgVltg_Val(float32 data);

/** Calibration Component Calibration Parameters */
float32  TSC_BattVltg_Rte_Prm_BattVltgCorrlnSysMinVltg_Val(void);
float32  TSC_BattVltg_Rte_Prm_BattVltgSwdMax_Val(void);
float32  TSC_BattVltg_Rte_Prm_BrdgVltgMax_Val(void);




