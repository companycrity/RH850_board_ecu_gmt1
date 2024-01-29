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
 *          File:  TSC_DampgPahFwl.h
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
Std_ReturnType TSC_DampgPahFwl_Rte_Read_AssiPahLimrActv_Val(float32 *data);
Std_ReturnType TSC_DampgPahFwl_Rte_Read_DampgCmdBas_Val(float32 *data);
Std_ReturnType TSC_DampgPahFwl_Rte_Read_DampgCmdBasDi_Logl(boolean *data);
Std_ReturnType TSC_DampgPahFwl_Rte_Read_InertiaCmpVelCmd_Val(float32 *data);
Std_ReturnType TSC_DampgPahFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data);
Std_ReturnType TSC_DampgPahFwl_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_DampgPahFwl_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_DampgPahFwl_Rte_Write_DampgCmd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_DampgPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_DampgPahFwl_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_DampgPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlActvFwlLpFilFrq_Val(void);
float32  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdLpFilFrq_Val(void);
float32  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpLpFilFrq_Val(void);
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcFailStep_Val(void);
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdFwlOverLimDiagcPassStep_Val(void);
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep_Val(void);
uint16  TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep_Val(void);
Ary1D_u11p5_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlAssiAddlDampgX_Ary1D(void);
Ary1D_u5p11_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlAssiAddlDampgY_Ary1D(void);
Ary1D_u11p5_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdAddlDampgX_Ary1D(void);
Ary1D_u5p11_8 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdAddlDampgY_Ary1D(void);
Ary1D_s11p4_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdUpprLimX_Ary1D(void);
Ary2D_s7p8_12_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDampgCmdUpprLimY_Ary2D(void);
Ary1D_u11p5_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDftDampgX_Ary1D(void);
Ary1D_u5p11_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlDftDampgY_Ary1D(void);
Ary1D_s11p4_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpUpprLimX_Ary1D(void);
Ary2D_s7p8_12_11 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlInertiaCmpUpprLimY_Ary2D(void);
Ary1D_u9p7_12 * TSC_DampgPahFwl_Rte_Prm_DampgPahFwlVehSpd_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlActvRaw(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlAddDampg(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdLimd(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdLowrLimFild(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdUpprLimFild(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpHpPah(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpLowrLimFild(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpLpLimd(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpLpPah(void);
float32 *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpUpprLimFild(void);
boolean *TSC_DampgPahFwl_Rte_Pim_DampgDecPrfmncPrev(void);
boolean *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlDampgCmdOverLim(void);
boolean *TSC_DampgPahFwl_Rte_Pim_dDampgPahFwlInertiaCmpOverLim(void);
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_DampgCmdLpFilLowrLim(void);
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_DampgCmdLpFilUpprLim(void);
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_FwlActvLpFil(void);
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_InertiaCmpLpFil(void);
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_InertiaCmpLpFilLowrLim(void);
FilLpRec1 *TSC_DampgPahFwl_Rte_Pim_InertiaCmpLpFilUpprLim(void);



