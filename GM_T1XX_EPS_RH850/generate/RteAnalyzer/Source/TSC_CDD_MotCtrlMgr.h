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
 *          File:  TSC_CDD_MotCtrlMgr.h
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
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_AdcDiagcEndPtrOutp_Val(uint8 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_AdcDiagcStrtPtrOutp_Val(uint8 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_BrdgVltg_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_CurrMeasCorrlnSts_Val(uint8 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_CurrMeasLoaMtgtnEna_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_CurrMeasWrmIninTestCmpl_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_EcuTFild_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_LoopCntr2MilliSec_Val(uint16 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotAg0MeclQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotAg1MeclQlfr_Val(SigQlfr1 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotAgElecDly_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotAgElecDlyRpl_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotAgMecl0Polarity_Val(sint8 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotAgMecl1Polarity_Val(sint8 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotAgMeclCorrlnSt_Val(uint8 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotBackEmfVltg_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyAAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyBAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyCAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyDAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyEAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrAdcVlyFAdcFaild_Logl(boolean *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrDaxCmd_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrDaxMax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQaxCmd_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQaxToMotTqGain_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQlfr1_Val(SigQlfr1 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotCurrQlfr2_Val(SigQlfr1 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotDampgDax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotDampgQax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotElecMeclPolarity_Val(sint8 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotInduDaxEstimdIvs_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotInduQaxEstimdIvs_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotIntglGainDax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotIntglGainQax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotPropGainDax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotPropGainQax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotREstimd_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotReacncDax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotReacncQax_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder1Mgn_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder1Pha_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder2Mgn_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder2Pha_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder3Mgn_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotTqRplCoggOrder3Pha_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotVelMrf_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotVltgDaxFf_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_MotVltgQaxFf_Val(float32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Read_SysSt_Val(SysSt1 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup2Ref0_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup2Ref1_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup3Ref0_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Adc0ScanGroup3Ref1_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Adc0SelfDiag0_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Adc0SelfDiag2_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Adc0SelfDiag4_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_FastLoopCntr_Val(uint16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0ErrReg_Val(uint32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0Mecl_Val(u0p16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0MeclRollgCntr_Val(uint8 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0ParFltCnt_Val(uint16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg0VltgFltCnt_Val(uint16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1ErrReg_Val(uint32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1Mecl_Val(u0p16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1MeclRollgCntr_Val(uint8 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1ParFltCnt_Val(uint16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAg1VltgFltCnt_Val(uint16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAgBuf_Ary1D(const u0p16 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAgBufIdx_Val(uint8 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAgCumvAlgndMrfRev_Val(s15p16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAgCumvInid_Logl(boolean data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotAgTiBuf_Ary1D(const uint32 *data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyA_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyB_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyC_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyD_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyE_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrAdcVlyF_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdA_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdB_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdC_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdD_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdE_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrCorrdF_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrDax_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrQax_Val(float32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrRollgCntr1_Val(uint8 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_MotCurrRollgCntr2_Val(uint8 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Ntc5DErrCnt_Val(uint16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_Ntc6DErrCnt_Val(uint16 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_PhaOnTiSumA_Val(uint32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_PhaOnTiSumB_Val(uint32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_PhaOnTiSumC_Val(uint32 data);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Write_SlowLoopCntr_Val(uint16 data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Call_DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void);
Std_ReturnType TSC_CDD_MotCtrlMgr_Rte_Call_DmaEna2MilliSecToMotCtrlTrf_Oper(void);




