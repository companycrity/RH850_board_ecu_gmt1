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
 *          File:  TSC_HysCmp.h
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
Std_ReturnType TSC_HysCmp_Rte_Read_AssiCmdBas_Val(float32 *data);
Std_ReturnType TSC_HysCmp_Rte_Read_AssiMechT_Val(float32 *data);
Std_ReturnType TSC_HysCmp_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_HysCmp_Rte_Read_HwTqOvrl_Val(float32 *data);
Std_ReturnType TSC_HysCmp_Rte_Read_HysCmpCmdDi_Logl(boolean *data);
Std_ReturnType TSC_HysCmp_Rte_Read_SysFricOffs_Val(float32 *data);
Std_ReturnType TSC_HysCmp_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_HysCmp_Rte_Read_WhlImbRejctnAmp_Val(float32 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_HysCmp_Rte_Write_HysCmpCmd_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_HysCmp_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_HysCmp_Rte_Prm_HysCmpAssiCmdLpFilFrq_Val(void);
float32  TSC_HysCmp_Rte_Prm_HysCmpFinalOutpLpFilFrq_Val(void);
float32  TSC_HysCmp_Rte_Prm_HysCmpHwTqLpFilFrq_Val(void);
float32  TSC_HysCmp_Rte_Prm_HysCmpOutpLim_Val(void);
float32  TSC_HysCmp_Rte_Prm_HysCmpRevGain_Val(void);
float32  TSC_HysCmp_Rte_Prm_SysGlbPrmSysTqRat_Val(void);
u9p7  TSC_HysCmp_Rte_Prm_HysCmpAssiInpLim_Val(void);
Ary1D_u4p12_12 * TSC_HysCmp_Rte_Prm_HysCmpEffLossY_Ary1D(void);
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpEffOffsY_Ary1D(void);
Ary1D_s14p1_8 * TSC_HysCmp_Rte_Prm_HysCmpFricTScaX_Ary1D(void);
Ary1D_u9p7_8 * TSC_HysCmp_Rte_Prm_HysCmpFricTScaY_Ary1D(void);
Ary1D_u8p8_6 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(void);
Ary1D_u2p14_6 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(void);
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(void);
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(void);
Ary2D_u4p12_12_8 * TSC_HysCmp_Rte_Prm_HysCmpHwTqScaX_Ary2D(void);
Ary2D_u4p12_12_8 * TSC_HysCmp_Rte_Prm_HysCmpHwTqScaY_Ary2D(void);
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_HysCmpHysSatnY_Ary1D(void);
Ary1D_u9p7_5 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(void);
Ary1D_u2p14_5 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(void);
Ary1D_u8p8_8 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpX_Ary1D(void);
Ary1D_u9p7_8 * TSC_HysCmp_Rte_Prm_HysCmpNegHysCmpY_Ary1D(void);
Ary1D_u2p14_6 * TSC_HysCmp_Rte_Prm_HysCmpRiseX_Ary1D(void);
Ary1D_u2p14_6 * TSC_HysCmp_Rte_Prm_HysCmpRiseY_Ary1D(void);
Ary1D_u9p7_12 * TSC_HysCmp_Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void);

/** Per Instance Memories */
float32 *TSC_HysCmp_Rte_Pim_PrevAssiCmdFildVal(void);
float32 *TSC_HysCmp_Rte_Pim_PrevHwTqFildVal(void);
float32 *TSC_HysCmp_Rte_Pim_PrevRiseX(void);
float32 *TSC_HysCmp_Rte_Pim_PrevRiseY(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpAssiCmdFild(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpAvl(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpEffCmpTq(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpFric(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpHwTqFild(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpNegAvl(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpPosAvl(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpRawVal(void);
float32 *TSC_HysCmp_Rte_Pim_dHysCmpRiseYFac(void);
FilLpRec1 *TSC_HysCmp_Rte_Pim_AssiCmdLpFil(void);
FilLpRec1 *TSC_HysCmp_Rte_Pim_FinalOutpLpFil(void);
FilLpRec1 *TSC_HysCmp_Rte_Pim_HwTqLpFil(void);



