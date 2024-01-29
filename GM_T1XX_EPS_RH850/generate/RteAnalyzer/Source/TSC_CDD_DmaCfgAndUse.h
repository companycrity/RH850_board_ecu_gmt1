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
 *          File:  TSC_CDD_DmaCfgAndUse.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Client server interfaces */
Std_ReturnType TSC_CDD_DmaCfgAndUse_Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper(void);
Std_ReturnType TSC_CDD_DmaCfgAndUse_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_CDD_DmaCfgAndUse_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);

/** Per Instance Memories */
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi(void);
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0ReadPtrRst(void);
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg0TrsmStrt(void);
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1ReadPtrRst(void);
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_MotAg1TrsmStrt(void);
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcActDmaTrfTi(void);
uint32 *TSC_CDD_DmaCfgAndUse_Rte_Pim_d2MilliSecAdcMaxDmaTrfTi(void);



