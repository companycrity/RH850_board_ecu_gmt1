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
 *          File:  TSC_DiagcMgrProxyAppl6.h
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
Std_ReturnType TSC_DiagcMgrProxyAppl6_Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data);

/** Client server interfaces */
Std_ReturnType TSC_DiagcMgrProxyAppl6_Rte_Call_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl6_Rte_Call_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl6_Rte_Call_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl6_Rte_Call_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl6_Rte_Call_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg);

/** Calibration Component Calibration Parameters */
Ary1D_u32_512 * TSC_DiagcMgrProxyAppl6_Rte_Prm_DiagcMgrFltResp_Ary1D(void);

/** Exclusive Areas */
void TSC_DiagcMgrProxyAppl6_Rte_Enter_DiagcMgrProxyAppl6(void);
void TSC_DiagcMgrProxyAppl6_Rte_Exit_DiagcMgrProxyAppl6(void);

/** Per Instance Memories */
uint8 *TSC_DiagcMgrProxyAppl6_Rte_Pim_PrevClrNtcFlg6(void);
NtcInfoRec4 *TSC_DiagcMgrProxyAppl6_Rte_Pim_DiagcMgrNtcInfo6Ary(void);
sint16 *TSC_DiagcMgrProxyAppl6_Rte_Pim_DiagcMgrNtcInfo6DebCntrAry(void);
DiagcDataRec1 *TSC_DiagcMgrProxyAppl6_Rte_Pim_DiagcData6(void);
DiagcDataRec1 *TSC_DiagcMgrProxyAppl6_Rte_Pim_ProxySetNtcData6(void);



