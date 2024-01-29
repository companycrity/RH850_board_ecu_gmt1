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
 *          File:  TSC_GmVehSpdArbn.h
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
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_VehPwrModDftVehSpdEna_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeDrvnBusChassisExp_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeDrvnBusHiSpd_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeDrvnStuckBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeDrvnStuckBusHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeDrvnVldBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeDrvnVldBusHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeNonDrvnBusChassisExp_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeNonDrvnBusHiSpd_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiDrvnBusChassisExp_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiDrvnBusHiSpd_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiDrvnStuckBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiDrvnStuckBusHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiDrvnVldBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiDrvnVldBusHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiNonDrvnBusChassisExp_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiNonDrvnBusHiSpd_Val(float32 *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(boolean *data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Read_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmVehSpdArbn_Rte_Write_VehSpdArbd_Val(float32 data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Write_VehSpdArbdVld_Logl(boolean data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Write_VehSpdMaxSecur_Val(float32 data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Write_VehSpdMaxSecurVld_Logl(boolean data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Write_VehSpdMinSecur_Val(float32 data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Write_VehSpdMinSecurVld_Logl(boolean data);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Write_VehSpdSnsrVld_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmVehSpdArbn_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_GmVehSpdArbn_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Per Instance Memories */
uint32 *TSC_GmVehSpdArbn_Rte_Pim_DiagcRefTi(void);
boolean *TSC_GmVehSpdArbn_Rte_Pim_dGmVehSpdArbnLeDrvnVld(void);
boolean *TSC_GmVehSpdArbn_Rte_Pim_dGmVehSpdArbnLeNonDrvnVld(void);
boolean *TSC_GmVehSpdArbn_Rte_Pim_dGmVehSpdArbnRiDrvnVld(void);
boolean *TSC_GmVehSpdArbn_Rte_Pim_dGmVehSpdArbnRiNonDrvnVld(void);



