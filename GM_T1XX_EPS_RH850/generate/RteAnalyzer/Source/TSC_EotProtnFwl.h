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
 *          File:  TSC_EotProtnFwl.h
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
Std_ReturnType TSC_EotProtnFwl_Rte_Read_EotActvCmd_Val(float32 *data);
Std_ReturnType TSC_EotProtnFwl_Rte_Read_EotDampgCmd_Val(float32 *data);
Std_ReturnType TSC_EotProtnFwl_Rte_Read_EotProtnDi_Logl(boolean *data);
Std_ReturnType TSC_EotProtnFwl_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_EotProtnFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data);
Std_ReturnType TSC_EotProtnFwl_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_EotProtnFwl_Rte_Read_PinionAgConf_Val(float32 *data);
Std_ReturnType TSC_EotProtnFwl_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_EotProtnFwl_Rte_Write_EotActvCmdLimd_Val(float32 data);
Std_ReturnType TSC_EotProtnFwl_Rte_Write_EotDampgCmdLimd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_EotProtnFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_EotProtnFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_EotProtnFwl_Rte_Prm_EotProtnFwlInactvLim_Val(void);
float32  TSC_EotProtnFwl_Rte_Prm_EotProtnHwAgMin_Val(void);
float32  TSC_EotProtnFwl_Rte_Prm_EotProtnRackTrvlLimrRng_Val(void);
float32  TSC_EotProtnFwl_Rte_Prm_EotProtnSoftEndStopAuthyThd_Val(void);
Ary1D_s4p11_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlActvCmdLowrBnd_Ary1D(void);
Ary1D_s4p11_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlActvCmdUpprBnd_Ary1D(void);
Ary1D_s11p4_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlEotDampgActvBndX_Ary1D(void);
Ary2D_s7p8_4_5 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlEotDampgActvBndY_Ary2D(void);
Ary1D_u9p7_4 * TSC_EotProtnFwl_Rte_Prm_EotProtnFwlVehSpd_Ary1D(void);
Ary2D_u12p4_4_2 * TSC_EotProtnFwl_Rte_Prm_EotProtnHwDegDampgX_Ary2D(void);

/** Per Instance Memories */
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdActvLowrBnd(void);
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdActvUpprBnd(void);
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgActvLowrBnd(void);
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgActvUpprBnd(void);
float32 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgFwX0(void);
uint8 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdMod(void);
uint8 *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgMod(void);
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdOverActvLim(void);
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotActvCmdOverInactvLim(void);
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgOverActvLim(void);
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlEotDampgOverInactvLim(void);
boolean *TSC_EotProtnFwl_Rte_Pim_dEotProtnFwlPinionAgConfSts(void);



