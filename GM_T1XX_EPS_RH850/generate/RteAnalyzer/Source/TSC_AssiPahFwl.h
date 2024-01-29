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
 *          File:  TSC_AssiPahFwl.h
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
Std_ReturnType TSC_AssiPahFwl_Rte_Read_AssiCmdBas_Val(float32 *data);
Std_ReturnType TSC_AssiPahFwl_Rte_Read_AssiHiFrqCmd_Val(float32 *data);
Std_ReturnType TSC_AssiPahFwl_Rte_Read_AssiLnrGainEna_Logl(boolean *data);
Std_ReturnType TSC_AssiPahFwl_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_AssiPahFwl_Rte_Read_HwTqOvrl_Val(float32 *data);
Std_ReturnType TSC_AssiPahFwl_Rte_Read_HysCmpCmd_Val(float32 *data);
Std_ReturnType TSC_AssiPahFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data);
Std_ReturnType TSC_AssiPahFwl_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_AssiPahFwl_Rte_Write_AssiCmdSum_Val(float32 data);
Std_ReturnType TSC_AssiPahFwl_Rte_Write_AssiPahLimrActv_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_AssiPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_AssiPahFwl_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_AssiPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlCmdSplitLpFilFrq_Val(void);
float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlFwlActvLpFilFrq_Val(void);
float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlHysCmpLim_Val(void);
float32  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlRestoreThd_Val(void);
uint16  TSC_AssiPahFwl_Rte_Prm_BasAssiPahFwlOverLimDiagcFailStep_Val(void);
uint16  TSC_AssiPahFwl_Rte_Prm_BasAssiPahFwlOverLimDiagcPassStep_Val(void);
uint16  TSC_AssiPahFwl_Rte_Prm_HiFrqAssiPahFwlOverLimDiagcFailStep_Val(void);
uint16  TSC_AssiPahFwl_Rte_Prm_HiFrqAssiPahFwlOverLimDiagcPassStep_Val(void);
boolean  TSC_AssiPahFwl_Rte_Prm_AssiPahFwlDiRcvr_Logl(void);
Ary1D_u8p8_20 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlDftAssiX_Ary1D(void);
Ary1D_s4p11_20 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlDftAssiY_Ary1D(void);
Ary2D_s4p11_12_11 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlHiFrqUpprLimY_Ary2D(void);
Ary2D_s4p11_12_11 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlUpprLimX_Ary2D(void);
Ary2D_s4p11_12_11 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlUpprLimY_Ary2D(void);
Ary1D_u9p7_12 * TSC_AssiPahFwl_Rte_Prm_AssiPahFwlVehSpd_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_AssiPahFwl_Rte_Pim_CombdAssiPrev(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlActvRaw(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiLimd(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiLowrLim(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiUpprLim(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqAssiLowrLimFild(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqAssiUpprLimFild(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqCmdHpPah(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqCmdLpPah(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqLpLimd(void);
float32 *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlSumInp(void);
boolean *TSC_AssiPahFwl_Rte_Pim_AssiPrfmncPrev(void);
boolean *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlBasAssiCmdOverLim(void);
boolean *TSC_AssiPahFwl_Rte_Pim_dAssiPahFwlHiFrqCmdOverLim(void);
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_FwlActvLpFilStVari(void);
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_HiFrqCmdLpFilStVari(void);
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_LowrLimLpFilStVari(void);
FilLpRec1 *TSC_AssiPahFwl_Rte_Pim_UpprLimLpFilStVari(void);



