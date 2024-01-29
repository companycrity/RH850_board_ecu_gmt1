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
 *          File:  TSC_CmnMfgSrvIf.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CmnMfgSrvIf.h"
#include "TSC_CmnMfgSrvIf.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_CmnMfgSrvIf_Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
{
  return Rte_Read_MfgEnaSt_Val(data);
}








     // Client Server Interfaces:
Std_ReturnType TSC_CmnMfgSrvIf_Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, uint16 *CmnMfgSrvCmnMfgSrvRespLen, uint8 *CmnMfgSrvCmnMfgSrvRespCod)
{
  return Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(CmnMfgSrvCmnMfgSrvSrvId, CmnMfgSrvCmnMfgSrvSubFct, CmnMfgSrvCmnMfgSrvPrmId, CmnMfgSrvCmnMfgSrvDataBufferPtr, CmnMfgSrvCmnMfgSrvReqLen, CmnMfgSrvCmnMfgSrvRespLen, CmnMfgSrvCmnMfgSrvRespCod);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables







     /* CmnMfgSrvIf */
      /* CmnMfgSrvIf */

/** Per Instance Memories */
boolean *TSC_CmnMfgSrvIf_Rte_Pim_CmnMfgSrvUnlckd(void)
{
  return Rte_Pim_CmnMfgSrvUnlckd();
}
uint8 *TSC_CmnMfgSrvIf_Rte_Pim_DataBuf(void)
{
  return Rte_Pim_DataBuf();
}


