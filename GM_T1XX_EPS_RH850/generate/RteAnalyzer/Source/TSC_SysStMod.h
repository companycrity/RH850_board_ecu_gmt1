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
 *          File:  TSC_SysStMod.h
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
Std_ReturnType TSC_SysStMod_Rte_Read_PwrSplyEnaReq_Logl(boolean *data);
Std_ReturnType TSC_SysStMod_Rte_Read_StrtUpSt_Val(uint8 *data);
Std_ReturnType TSC_SysStMod_Rte_Read_SysStFltOutpReqDi_Logl(boolean *data);
Std_ReturnType TSC_SysStMod_Rte_Read_SysStImdtTranReqOff_Logl(boolean *data);
Std_ReturnType TSC_SysStMod_Rte_Read_SysStReqDi_Logl(boolean *data);
Std_ReturnType TSC_SysStMod_Rte_Read_SysStReqEna_Logl(boolean *data);
Std_ReturnType TSC_SysStMod_Rte_Read_SysStWrmIninCmpl_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_SysStMod_Rte_Write_SysSt_Val(SysSt1 data);

/** Per Instance Memories */
uint16 *TSC_SysStMod_Rte_Pim_dSysStModTranVect(void);
SysSt1 *TSC_SysStMod_Rte_Pim_SysStModPrevSysSt(void);



