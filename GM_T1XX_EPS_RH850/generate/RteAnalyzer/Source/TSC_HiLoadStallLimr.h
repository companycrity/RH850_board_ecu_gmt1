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
 *          File:  TSC_HiLoadStallLimr.h
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
Std_ReturnType TSC_HiLoadStallLimr_Rte_Read_MotTqCmdLimdPreStall_Val(float32 *data);
Std_ReturnType TSC_HiLoadStallLimr_Rte_Read_MotVelCrf_Val(float32 *data);
Std_ReturnType TSC_HiLoadStallLimr_Rte_Read_StallMotTqLimDi_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HiLoadStallLimr_Rte_Write_StallMotTqLim_Val(float32 data);

/** Calibration Component Calibration Parameters */
float32  TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val(void);
float32  TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrMotVelMgnThd_Val(void);
float32  TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Val(void);
Ary1D_u8p8_6 * TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D(void);
Ary1D_u8p8_6 * TSC_HiLoadStallLimr_Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_HiLoadStallLimr_Rte_Pim_StallMotTqLimPrev(void);
float32 *TSC_HiLoadStallLimr_Rte_Pim_dHiLoadStallLimrStallMotTqCmd(void);
float32 *TSC_HiLoadStallLimr_Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild(void);
float32 *TSC_HiLoadStallLimr_Rte_Pim_dHiLoadStallLimrStallMotTqLim(void);
FilLpRec1 *TSC_HiLoadStallLimr_Rte_Pim_StallMotTqCmdFil(void);



