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
 *          File:  TSC_SerlComOutpProxy.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_SerlComOutpProxy.h"
#include "TSC_SerlComOutpProxy.h"















     // Client Server Interfaces:
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_CodSupported_Val(uint8 *data)
{
  return Rte_Read_CodSupported_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_CurrSts_Val(uint8 *data)
{
  return Rte_Read_CurrSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetd_Val(uint8 *data)
{
  return Rte_Read_DrvrSteerIntvDetd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetdProtnVal_Val(uint8 *data)
{
  return Rte_Read_DrvrSteerIntvDetdProtnVal_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetdRollgCntr_Val(uint8 *data)
{
  return Rte_Read_DrvrSteerIntvDetdRollgCntr_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DrvrSteerIntvDetdVld_Val(uint8 *data)
{
  return Rte_Read_DrvrSteerIntvDetdVld_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcFailrTyp_Val(uint8 *data)
{
  return Rte_Read_DtcFailrTyp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcFltTyp_Val(uint8 *data)
{
  return Rte_Read_DtcFltTyp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcNr_Val(uint16 *data)
{
  return Rte_Read_DtcNr_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcSrc_Val(uint8 *data)
{
  return Rte_Read_DtcSrc_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_DtcTrig_Val(uint8 *data)
{
  return Rte_Read_DtcTrig_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPowerSteerAvlSts_Val(uint8 *data)
{
  return Rte_Read_ElecPowerSteerAvlSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPowerSteerAvlStsProtnVal_Val(uint8 *data)
{
  return Rte_Read_ElecPowerSteerAvlStsProtnVal_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPowerSteerAvlStsRollgCntr_Val(uint8 *data)
{
  return Rte_Read_ElecPowerSteerAvlStsRollgCntr_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_ElecPwrSteerTotTqDlvd_Val(uint16 *data)
{
  return Rte_Read_ElecPwrSteerTotTqDlvd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HandsOffSteerWhlDetnMod_Val(uint8 *data)
{
  return Rte_Read_HandsOffSteerWhlDetnMod_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HandsOffSteerWhlDetnSt_Val(uint8 *data)
{
  return Rte_Read_HandsOffSteerWhlDetnSt_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HandsOffSteerWhlDetnStVld_Val(uint8 *data)
{
  return Rte_Read_HandsOffSteerWhlDetnStVld_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_HistSts_Val(uint8 *data)
{
  return Rte_Read_HistSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaDrvrAppldTq_Val(uint16 *data)
{
  return Rte_Read_LkaDrvrAppldTq_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaDrvrAppldTqVld_Val(uint8 *data)
{
  return Rte_Read_LkaDrvrAppldTqVld_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaElecPwrSteerTotTqDlvd_Val(uint16 *data)
{
  return Rte_Read_LkaElecPwrSteerTotTqDlvd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlDeltaTqDlvd_Val(uint16 *data)
{
  return Rte_Read_LkaTqOvrlDeltaTqDlvd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlDlvdRollgCntr_Val(uint8 *data)
{
  return Rte_Read_LkaTqOvrlDlvdRollgCntr_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlStsChks_Val(uint16 *data)
{
  return Rte_Read_LkaTqOvrlStsChks_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_LkaTqOvrlTqDlvdSts_Val(uint8 *data)
{
  return Rte_Read_LkaTqOvrlTqDlvdSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_PwrSteerIndcr_Val(uint8 *data)
{
  return Rte_Read_PwrSteerIndcr_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerAssiLimd_Val(uint8 *data)
{
  return Rte_Read_SteerAssiLimd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerAssiLimdLvl2_Val(uint8 *data)
{
  return Rte_Read_SteerAssiLimdLvl2_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerAssiLimdLvl3_Val(uint8 *data)
{
  return Rte_Read_SteerAssiLimdLvl3_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgAlvRollgCntBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgAlvRollgCntBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgAlvRollgCntBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgAlvRollgCntBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgBusChassisExp_Val(uint16 *data)
{
  return Rte_Read_SteerWhlAgBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgBusHiSpd_Val(uint16 *data)
{
  return Rte_Read_SteerWhlAgBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtBusChassisExp_Val(uint16 *data)
{
  return Rte_Read_SteerWhlAgGrdtBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtBusHiSpd_Val(uint16 *data)
{
  return Rte_Read_SteerWhlAgGrdtBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtMaskBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgGrdtMaskBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtMaskBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgGrdtMaskBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtVldBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgGrdtVldBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgGrdtVldBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgGrdtVldBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgMaskBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgMaskBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgMaskBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgMaskBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrCalStsBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgSnsrCalStsBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrCalStsBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgSnsrCalStsBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrChksBusChassisExp_Val(uint16 *data)
{
  return Rte_Read_SteerWhlAgSnsrChksBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrChksBusHiSpd_Val(uint16 *data)
{
  return Rte_Read_SteerWhlAgSnsrChksBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrTypBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgSnsrTypBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgSnsrTypBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgSnsrTypBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgVldBusChassisExp_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgVldBusChassisExp_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_SteerWhlAgVldBusHiSpd_Val(uint8 *data)
{
  return Rte_Read_SteerWhlAgVldBusHiSpd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlDeltaTqDlvd_Val(uint16 *data)
{
  return Rte_Read_TqOvrlDeltaTqDlvd_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlDlvdChks_Val(uint16 *data)
{
  return Rte_Read_TqOvrlDlvdChks_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlDlvdRollgCntr_Val(uint8 *data)
{
  return Rte_Read_TqOvrlDlvdRollgCntr_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TqOvrlTqDlvdSts_Val(uint8 *data)
{
  return Rte_Read_TqOvrlTqDlvdSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstFaildCodClrdSts_Val(uint8 *data)
{
  return Rte_Read_TstFaildCodClrdSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstFaildPwrUpSts_Val(uint8 *data)
{
  return Rte_Read_TstFaildPwrUpSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstNotPassdCodClrdSts_Val(uint8 *data)
{
  return Rte_Read_TstNotPassdCodClrdSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_TstNotPassdPwrUpSts_Val(uint8 *data)
{
  return Rte_Read_TstNotPassdPwrUpSts_Val(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Read_WarnIndcrReqdSts_Val(uint8 *data)
{
  return Rte_Read_WarnIndcrReqdSts_Val(data);
}




Std_ReturnType TSC_SerlComOutpProxy_Rte_Write_BusOffChassisExp_Logl(boolean data)
{
  return Rte_Write_BusOffChassisExp_Logl(data);
}

Std_ReturnType TSC_SerlComOutpProxy_Rte_Write_BusOffHiSpd_Logl(boolean data)
{
  return Rte_Write_BusOffHiSpd_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg184TxCallBack_Oper(void)
{
  return Rte_Call_Msg184TxCallBack_Oper();
}
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg1CATxCallBack_Oper(void)
{
  return Rte_Call_Msg1CATxCallBack_Oper();
}
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg1E5ChassisExpTxCallBack_Oper(void)
{
  return Rte_Call_Msg1E5ChassisExpTxCallBack_Oper();
}
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg1E5HiSpdTxCallBack_Oper(void)
{
  return Rte_Call_Msg1E5HiSpdTxCallBack_Oper();
}
Std_ReturnType TSC_SerlComOutpProxy_Rte_Call_Msg335TxCallBack_Oper(void)
{
  return Rte_Call_Msg335TxCallBack_Oper();
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





boolean  TSC_SerlComOutpProxy_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrApaMfgEna_Logl();
}
boolean  TSC_SerlComOutpProxy_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrEscMfgEna_Logl();
}
boolean  TSC_SerlComOutpProxy_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
{
  return (boolean ) Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl();
}


     /* SerlComOutpProxy */
      /* SerlComOutpProxy */

/** Per Instance Memories */
boolean *TSC_SerlComOutpProxy_Rte_Pim_BusOffChassisExp(void)
{
  return Rte_Pim_BusOffChassisExp();
}
boolean *TSC_SerlComOutpProxy_Rte_Pim_BusOffHiSpd(void)
{
  return Rte_Pim_BusOffHiSpd();
}


