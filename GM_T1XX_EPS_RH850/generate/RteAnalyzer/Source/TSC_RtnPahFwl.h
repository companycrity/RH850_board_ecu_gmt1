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
 *          File:  TSC_RtnPahFwl.h
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
Std_ReturnType TSC_RtnPahFwl_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_RtnPahFwl_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data);
Std_ReturnType TSC_RtnPahFwl_Rte_Read_RtnCmd_Val(float32 *data);
Std_ReturnType TSC_RtnPahFwl_Rte_Read_RtnCmdDi_Logl(boolean *data);
Std_ReturnType TSC_RtnPahFwl_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_RtnPahFwl_Rte_Write_RtnCmdLimd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_RtnPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_RtnPahFwl_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Calibration Component Calibration Parameters */
Ary1D_s11p4_11 * TSC_RtnPahFwl_Rte_Prm_RtnPahFwlUpprBndTblX_Ary1D(void);
Ary2D_s4p11_11_8 * TSC_RtnPahFwl_Rte_Prm_RtnPahFwlUpprBndTblY_Ary2D(void);
Ary1D_u9p7_8 * TSC_RtnPahFwl_Rte_Prm_RtnPahFwlVehSpd_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_RtnPahFwl_Rte_Pim_dRtnPahFwlLowrBnd(void);
float32 *TSC_RtnPahFwl_Rte_Pim_dRtnPahFwlUpprBnd(void);
boolean *TSC_RtnPahFwl_Rte_Pim_dRtnPahFwlOverBnd(void);



