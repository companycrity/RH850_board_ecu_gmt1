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
 *          File:  TSC_Dem.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Service interfaces */
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_BattVltgEcu_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EcuIntT_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EngSpd_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpdMotOvldProtnCntr_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpsAgOvrlSts_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpsApaAgOvrlReq_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpsMotCurr_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpsMotCurrFb_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpsStopStrtSts_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpsTqOvrlReq_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_EpsTqOvrlSts_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_IgnCycCntr_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_SplrIntDtcInfo_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_SteerInpTq_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_SteerOutpTq_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_SteerWhlAg_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_SysPwrMod_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_TiIgnOn_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBReadData_VehSpd_ReadData(uint8 *Data);
Std_ReturnType TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew);
Std_ReturnType TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew);
Std_ReturnType TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew);




