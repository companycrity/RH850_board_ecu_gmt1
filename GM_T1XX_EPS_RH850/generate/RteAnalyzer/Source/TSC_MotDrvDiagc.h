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
 *          File:  TSC_MotDrvDiagc.h
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
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdA_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdB_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdC_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdD_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdE_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiMeasdF_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiSumA_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiSumB_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_PhaOnTiSumC_Val(uint32 *data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Read_SysSt_Val(SysSt1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrA_Val(float32 data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrB_Val(float32 data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrC_Val(float32 data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrD_Val(float32 data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrE_Val(float32 data);
Std_ReturnType TSC_MotDrvDiagc_Rte_Write_MotDrvErrF_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_MotDrvDiagc_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_MotDrvDiagc_Rte_Prm_MotDrvDiagcErrFilFrq_Val(void);
uint32  TSC_MotDrvDiagc_Rte_Prm_MotDrvDiagcErrOffs_Val(void);
uint32  TSC_MotDrvDiagc_Rte_Prm_MotDrvDiagcErrThd_Val(void);

/** Per Instance Memories */
uint32 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaOnTiSumAPrev(void);
uint32 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaOnTiSumBPrev(void);
uint32 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaOnTiSumCPrev(void);
boolean *TSC_MotDrvDiagc_Rte_Pim_UnitDly(void);
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaAFilLp(void);
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaBFilLp(void);
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaCFilLp(void);
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaDFilLp(void);
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaEFilLp(void);
FilLpRec1 *TSC_MotDrvDiagc_Rte_Pim_MotDrvDiagcPhaFFilLp(void);



