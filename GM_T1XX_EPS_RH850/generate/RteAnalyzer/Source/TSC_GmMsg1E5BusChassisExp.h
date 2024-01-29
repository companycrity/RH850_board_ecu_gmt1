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
 *          File:  TSC_GmMsg1E5BusChassisExp.h
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
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Read_HwAg_Val(float32 *data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Read_HwAgTrimPrfmd_Logl(boolean *data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Read_HwAgVldToSerlCom_Logl(boolean *data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Read_HwVel_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgAlvRollgCntBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgBusChassisExp_Val(uint16 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgGrdtBusChassisExp_Val(uint16 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgGrdtMaskBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgGrdtVldBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgMaskBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgSnsrCalStsBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgSnsrChksBusChassisExp_Val(uint16 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgSnsrTypBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_GmMsg1E5BusChassisExp_Rte_Write_SteerWhlAgVldBusChassisExp_Val(uint8 data);

/** Per Instance Memories */
uint8 *TSC_GmMsg1E5BusChassisExp_Rte_Pim_GmMsg1E5BusChassisExpRollgCntr(void);



