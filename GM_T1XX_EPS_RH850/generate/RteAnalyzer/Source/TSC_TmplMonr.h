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
 *          File:  TSC_TmplMonr.h
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
Std_ReturnType TSC_TmplMonr_Rte_Read_StrtUpSt_Val(uint8 *data);
Std_ReturnType TSC_TmplMonr_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data);
Std_ReturnType TSC_TmplMonr_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);
Std_ReturnType TSC_TmplMonr_Rte_Read_StrtUpSt_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_TmplMonr_Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data);
Std_ReturnType TSC_TmplMonr_Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt);
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt);
Std_ReturnType TSC_TmplMonr_Rte_Call_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg);
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper(boolean *PinSt);
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt);
Std_ReturnType TSC_TmplMonr_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt);
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt);
Std_ReturnType TSC_TmplMonr_Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt);

/** Per Instance Memories */
uint8 *TSC_TmplMonr_Rte_Pim_TmplMonrIninCntr(void);
uint8 *TSC_TmplMonr_Rte_Pim_TmplMonrNtc40PrmByte(void);
uint8 *TSC_TmplMonr_Rte_Pim_TmplMonrWdgRstrtCnt(void);
boolean *TSC_TmplMonr_Rte_Pim_TmplMonrIninTestCmplFlg(void);
boolean *TSC_TmplMonr_Rte_Pim_TmplMonrSpiReadWrOrderFlg1(void);
boolean *TSC_TmplMonr_Rte_Pim_TmplMonrSpiReadWrOrderFlg2(void);



