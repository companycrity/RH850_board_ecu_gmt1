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
 *          File:  TSC_CDD_MotAg0Meas.h
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
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Read_MotAg0ErrReg_Val(uint32 *data);
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Read_MotAg0ParFltCnt_Val(uint16 *data);
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Read_MotAg0VltgFltCnt_Val(uint16 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Write_MotAg0MeclQlfr_Val(SigQlfr1 data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr);
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Service interfaces */
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_MotAg0CoeffTbl_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg);
Std_ReturnType TSC_CDD_MotAg0Meas_Rte_Call_MotAg0CoeffTbl_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** SW-C local Calibration Parameters */
Ary1D_f32_26 * TSC_CDD_MotAg0Meas_Rte_CData_MotAg0CoeffTblDft(void);

/** Per Instance Memories */
uint32 *TSC_CDD_MotAg0Meas_Rte_Pim_dMotAg0MeasMotAg0RawAgReg(void);
uint32 *TSC_CDD_MotAg0Meas_Rte_Pim_dMotAg0MeasMotAg0RawErrReg(void);
uint32 *TSC_CDD_MotAg0Meas_Rte_Pim_dMotAg0MeasMotAg0RawTurnCntrReg(void);
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ErrParFltCntPrev(void);
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ErrParFltNtcStInfoCntPrev(void);
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ParFltCntPrev(void);
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ParFltNtcStInfoCntPrev(void);
u0p16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0RawMeclPrev(void);
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0VltgFltCntPrev(void);
uint16 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0VltgFltNtcStInfoCntPrev(void);
uint8 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0ErrPrev(void);
uint8 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0MeclRollgCntrPrev(void);
float32 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0CoeffTbl(void);
sm5p12 *TSC_CDD_MotAg0Meas_Rte_Pim_MotAg0CorrnTbl(void);



