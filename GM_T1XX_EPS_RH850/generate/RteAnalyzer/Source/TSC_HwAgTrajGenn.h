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
 *          File:  TSC_HwAgTrajGenn.h
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
Std_ReturnType TSC_HwAgTrajGenn_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_HwAgTrajGenn_Rte_Read_HwAgTrajGennEna_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HwAgTrajGenn_Rte_Write_HwAgTrakgServoCmd_Val(float32 data);

/** Explicit inter-runnable variables */
float32 TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwATar(void);
float32 TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwAgTar(void);
float32 TSC_HwAgTrajGenn_Rte_IrvRead_HwAgTrajGennPer1_HwVelTar(void);
void TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(float32);
void TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(float32);
void TSC_HwAgTrajGenn_Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(float32);

/** Calibration Component Calibration Parameters */
float32  TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAMax_Val(void);
float32  TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennAgMax_Val(void);
float32  TSC_HwAgTrajGenn_Rte_Prm_HwAgTrajGennVelMax_Val(void);

/** Per Instance Memories */
float32 *TSC_HwAgTrajGenn_Rte_Pim_AMax(void);
float32 *TSC_HwAgTrajGenn_Rte_Pim_HwPosnIni(void);
float32 *TSC_HwAgTrajGenn_Rte_Pim_HwPosnOffs(void);
float32 *TSC_HwAgTrajGenn_Rte_Pim_SignHwPosnDelta(void);
float32 *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaA(void);
float32 *TSC_HwAgTrajGenn_Rte_Pim_TiDeltaVel(void);
float32 *TSC_HwAgTrajGenn_Rte_Pim_TiSt(void);
float32 *TSC_HwAgTrajGenn_Rte_Pim_VelMax(void);
HwAgTrajCmdSt1 *TSC_HwAgTrajGenn_Rte_Pim_CmdSt(void);
boolean *TSC_HwAgTrajGenn_Rte_Pim_CalcFlg(void);



