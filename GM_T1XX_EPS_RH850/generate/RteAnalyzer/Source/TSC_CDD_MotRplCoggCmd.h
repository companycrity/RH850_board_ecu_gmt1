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
 *          File:  TSC_CDD_MotRplCoggCmd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Service interfaces */
Std_ReturnType TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_MotRplCoggCmd_Rte_Call_MotCoggCmdY_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
uint8  TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void);
uint8  TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void);
uint8  TSC_CDD_MotRplCoggCmd_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void);

/** Per Instance Memories */
float32 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCoggCmd(void);
float32 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim(void);
float32 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim(void);
uint16 *TSC_CDD_MotRplCoggCmd_Rte_Pim_dMotRplCoggCmdCoggIdx(void);
s1p14 *TSC_CDD_MotRplCoggCmd_Rte_Pim_MotCoggCmdY(void);



