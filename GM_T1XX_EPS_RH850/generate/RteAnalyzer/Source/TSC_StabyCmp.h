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
 *          File:  TSC_StabyCmp.h
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
Std_ReturnType TSC_StabyCmp_Rte_Read_AssiCmdBasSca_Val(float32 *data);
Std_ReturnType TSC_StabyCmp_Rte_Read_AssiCmdSum_Val(float32 *data);
Std_ReturnType TSC_StabyCmp_Rte_Read_AssiPahLimrActv_Val(float32 *data);
Std_ReturnType TSC_StabyCmp_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_StabyCmp_Rte_Read_VehSpd_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_StabyCmp_Rte_Write_AssiCmd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_StabyCmp_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_StabyCmp_Rte_Prm_StabyCmpHwTqLpFilFrq_Val(void);
Ary1D_u2p14_2 * TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndX_Ary1D(void);
Ary1D_u2p14_2 * TSC_StabyCmp_Rte_Prm_StabyCmpAssiScaBlndY_Ary1D(void);
Ary1D_u9p7_6 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(void);
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(void);
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(void);
Ary2D_u8p8_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(void);
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(void);
Ary2D_u8p8_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(void);
Ary2D_u2p14_6_5 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(void);
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil1Struct_Rec(void);
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil2Struct_Rec(void);
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil3Struct_Rec(void);
FilNotchGainRec1 * TSC_StabyCmp_Rte_Prm_StabyCmpNotchFil4Struct_Rec(void);

/** Per Instance Memories */
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpAssiScaCmpBlnd(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil02Blnd(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil04Blnd(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Blnd(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil12Outp(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil1Outp(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil2Outp(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Blnd(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil34Outp(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil3Outp(void);
float32 *TSC_StabyCmp_Rte_Pim_dStabyCmpNotchFil4Outp(void);
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch1Fil(void);
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch2Fil(void);
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch3Fil(void);
FilNotchStRec1 *TSC_StabyCmp_Rte_Pim_AssiNotch4Fil(void);
FilLpRec1 *TSC_StabyCmp_Rte_Pim_HwTqLpFil(void);



