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
 *          File:  TSC_GmMsg148BusHiSpd.h
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
Std_ReturnType TSC_GmMsg148BusHiSpd_Rte_Read_SysSt_Val(SysSt1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg148BusHiSpd_Rte_Write_PwrSteerIndcr_Val(uint8 data);
Std_ReturnType TSC_GmMsg148BusHiSpd_Rte_Write_SteerAssiLimd_Val(uint8 data);
Std_ReturnType TSC_GmMsg148BusHiSpd_Rte_Write_SteerAssiLimdLvl2_Val(uint8 data);
Std_ReturnType TSC_GmMsg148BusHiSpd_Rte_Write_SteerAssiLimdLvl3_Val(uint8 data);




