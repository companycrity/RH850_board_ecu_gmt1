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
 *          File:  TSC_CmplncErr.h
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
Std_ReturnType TSC_CmplncErr_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_CmplncErr_Rte_Read_MotTqCmdCrf_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CmplncErr_Rte_Write_CmplncErrMotToPinion_Val(float32 data);
Std_ReturnType TSC_CmplncErr_Rte_Write_CmplncErrPinionToHw_Val(float32 data);

/** Calibration Component Calibration Parameters */
Ary1D_u1p15_6 * TSC_CmplncErr_Rte_Prm_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D(void);
Ary1D_u5p11_6 * TSC_CmplncErr_Rte_Prm_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D(void);
Ary1D_u8p8_6 * TSC_CmplncErr_Rte_Prm_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D(void);
Ary1D_u5p11_6 * TSC_CmplncErr_Rte_Prm_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D(void);




