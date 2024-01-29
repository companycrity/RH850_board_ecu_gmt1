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
 *          File:  TSC_MotRplCoggCfg.h
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
Std_ReturnType TSC_MotRplCoggCfg_Rte_Read_MotBackEmfConEstimd_Val(float32 *data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Read_MotCurrDaxCmd_Val(float32 *data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Read_MotCurrQaxCmd_Val(float32 *data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Read_MotInduDaxEstimd_Val(float32 *data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Read_MotInduQaxEstimd_Val(float32 *data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Read_MotTqCmdMrfScad_Val(float32 *data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Read_MotVelMrf_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotAgElecDlyRpl_Val(float32 data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotCurrQaxToMotTqGain_Val(float32 data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder1Mgn_Val(float32 data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder1Pha_Val(float32 data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder2Mgn_Val(float32 data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder2Pha_Val(float32 data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder3Mgn_Val(float32 data);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Write_MotTqRplCoggOrder3Pha_Val(float32 data);

/** Service interfaces */
Std_ReturnType TSC_MotRplCoggCfg_Rte_Call_MotRplCoggPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Call_MotRplCoggPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_MotRplCoggCfg_Rte_Call_MotRplCoggPrm_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_MotRplCoggCfg_Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val(void);
float32  TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotAgTiDly_Val(void);
uint8  TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void);
uint8  TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void);
uint8  TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void);
uint8  TSC_MotRplCoggCfg_Rte_Prm_SysGlbPrmMotPoleCnt_Val(void);
Ary1D_u9p7_10 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(void);
Ary1D_u9p7_12 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(void);
Ary2D_u3p13_20_8 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(void);
Ary2D_u0p16_20_8 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(void);
Ary1D_u5p11_8 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(void);
Ary2D_s1p14_10_12 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(void);
Ary2D_s1p14_10_12 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(void);
Ary2D_s1p14_10_12 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(void);
Ary2D_s1p14_10_12 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(void);
Ary2D_s1p14_10_12 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(void);
Ary2D_s1p14_10_12 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(void);
Ary1D_u16p0_20 * TSC_MotRplCoggCfg_Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl(void);
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain(void);
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn(void);
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha(void);
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn(void);
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha(void);
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn(void);
float32 *TSC_MotRplCoggCfg_Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha(void);
s1p14 *TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1X(void);
s1p14 *TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder1Y(void);
s1p14 *TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2X(void);
s1p14 *TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder2Y(void);
s1p14 *TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3X(void);
s1p14 *TSC_MotRplCoggCfg_Rte_Pim_MotTqRplOrder3Y(void);
MotRplCoggPrmRec2 *TSC_MotRplCoggCfg_Rte_Pim_MotRplCoggPrm(void);



