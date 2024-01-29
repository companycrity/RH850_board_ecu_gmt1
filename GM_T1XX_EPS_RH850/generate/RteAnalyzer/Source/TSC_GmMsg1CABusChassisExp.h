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
 *          File:  TSC_GmMsg1CABusChassisExp.h
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
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Read_EscSt_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Read_EscTqDlvd_Val(float32 *data);
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Read_HwTq_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_ElecPwrSteerTotTqDlvd_Val(uint16 data);
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlDeltaTqDlvd_Val(uint16 data);
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlDlvdChks_Val(uint16 data);
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlDlvdRollgCntr_Val(uint8 data);
Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlTqDlvdSts_Val(uint8 data);

/** Calibration Component Calibration Parameters */
sint8  TSC_GmMsg1CABusChassisExp_Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val(void);

/** Per Instance Memories */
uint8 *TSC_GmMsg1CABusChassisExp_Rte_Pim_GmMsg1CABusChassisExpRollgCntr(void);



