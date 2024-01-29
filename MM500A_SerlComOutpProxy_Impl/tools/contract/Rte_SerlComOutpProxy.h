/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_SerlComOutpProxy.h
 *     SW-C Type:  SerlComOutpProxy
 *  Generated at:  Tue Aug 30 14:29:29 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SerlComOutpProxy> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SERLCOMOUTPPROXY_H
# define _RTE_SERLCOMOUTPPROXY_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_SerlComOutpProxy_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_SerlComOutpProxy
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BusOffChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BusOffHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_SerlComOutpProxy, RTE_CONST, RTE_CONST) Rte_Inst_SerlComOutpProxy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_SerlComOutpProxy, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BusOffChassisExp_Logl (FALSE)
# define Rte_InitValue_BusOffHiSpd_Logl (FALSE)
# define Rte_InitValue_CodSupported_Val (0U)
# define Rte_InitValue_CurrSts_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetd_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetdProtnVal_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetdRollgCntr_Val (0U)
# define Rte_InitValue_DrvrSteerIntvDetdVld_Val (0U)
# define Rte_InitValue_DtcFailrTyp_Val (0U)
# define Rte_InitValue_DtcFltTyp_Val (0U)
# define Rte_InitValue_DtcNr_Val (0U)
# define Rte_InitValue_DtcSrc_Val (0U)
# define Rte_InitValue_DtcTrig_Val (0U)
# define Rte_InitValue_ElecPowerSteerAvlSts_Val (0U)
# define Rte_InitValue_ElecPowerSteerAvlStsProtnVal_Val (0U)
# define Rte_InitValue_ElecPowerSteerAvlStsRollgCntr_Val (0U)
# define Rte_InitValue_ElecPwrSteerTotTqDlvd_Val (0U)
# define Rte_InitValue_HandsOffSteerWhlDetnMod_Val (0U)
# define Rte_InitValue_HandsOffSteerWhlDetnSt_Val (0U)
# define Rte_InitValue_HandsOffSteerWhlDetnStVld_Val (0U)
# define Rte_InitValue_HistSts_Val (0U)
# define Rte_InitValue_LkaDrvrAppldTq_Val (0U)
# define Rte_InitValue_LkaDrvrAppldTqVld_Val (0U)
# define Rte_InitValue_LkaElecPwrSteerTotTqDlvd_Val (0U)
# define Rte_InitValue_LkaTqOvrlDeltaTqDlvd_Val (0U)
# define Rte_InitValue_LkaTqOvrlDlvdRollgCntr_Val (0U)
# define Rte_InitValue_LkaTqOvrlStsChks_Val (0U)
# define Rte_InitValue_LkaTqOvrlTqDlvdSts_Val (0U)
# define Rte_InitValue_PwrSteerIndcr_Val (0U)
# define Rte_InitValue_SteerAssiLimd_Val (0U)
# define Rte_InitValue_SteerAssiLimdLvl2_Val (0U)
# define Rte_InitValue_SteerAssiLimdLvl3_Val (0U)
# define Rte_InitValue_SteerWhlAgAlvRollgCntBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgAlvRollgCntBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtMaskBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtMaskBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtVldBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtVldBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgMaskBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgMaskBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrCalStsBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrCalStsBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrChksBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrChksBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrTypBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrTypBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgVldBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgVldBusHiSpd_Val (0U)
# define Rte_InitValue_TqOvrlDeltaTqDlvd_Val (0U)
# define Rte_InitValue_TqOvrlDlvdChks_Val (0U)
# define Rte_InitValue_TqOvrlDlvdRollgCntr_Val (0U)
# define Rte_InitValue_TqOvrlTqDlvdSts_Val (0U)
# define Rte_InitValue_TstFaildCodClrdSts_Val (0U)
# define Rte_InitValue_TstFaildPwrUpSts_Val (0U)
# define Rte_InitValue_TstNotPassdCodClrdSts_Val (0U)
# define Rte_InitValue_TstNotPassdPwrUpSts_Val (0U)
# define Rte_InitValue_WarnIndcrReqdSts_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_CodSupported_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_CurrSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdProtnVal_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdVld_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DtcFailrTyp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DtcFltTyp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DtcNr_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DtcSrc_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_DtcTrig_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsProtnVal_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_ElecPwrSteerTotTqDlvd_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnMod_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnSt_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnStVld_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_HistSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_LkaDrvrAppldTq_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_LkaDrvrAppldTqVld_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_LkaElecPwrSteerTotTqDlvd_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_LkaTqOvrlDeltaTqDlvd_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_LkaTqOvrlDlvdRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_LkaTqOvrlStsChks_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_LkaTqOvrlTqDlvdSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_PwrSteerIndcr_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerAssiLimd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl2_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl3_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgBusChassisExp_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgBusHiSpd_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusChassisExp_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusHiSpd_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusChassisExp_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusHiSpd_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusChassisExp_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusHiSpd_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TqOvrlDeltaTqDlvd_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TqOvrlDlvdChks_Val(P2VAR(uint16, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TqOvrlDlvdRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TqOvrlTqDlvdSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TstFaildCodClrdSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TstFaildPwrUpSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TstNotPassdCodClrdSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_TstNotPassdPwrUpSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComOutpProxy_WarnIndcrReqdSts_Val(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMOUTPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComOutpProxy_BusOffChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComOutpProxy_BusOffHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SerlComOutpProxy_Msg184TxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SerlComOutpProxy_Msg1CATxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SerlComOutpProxy_Msg1E5ChassisExpTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SerlComOutpProxy_Msg1E5HiSpdTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SerlComOutpProxy_Msg335TxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SerlComOutpProxy_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SerlComOutpProxy_GmOvrlStMgrApaMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SerlComOutpProxy_GmOvrlStMgrEscMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SerlComOutpProxy_GmOvrlStMgrLkaMfgEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CodSupported_Val Rte_Read_SerlComOutpProxy_CodSupported_Val
# define Rte_Read_CurrSts_Val Rte_Read_SerlComOutpProxy_CurrSts_Val
# define Rte_Read_DrvrSteerIntvDetd_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetd_Val
# define Rte_Read_DrvrSteerIntvDetdProtnVal_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdProtnVal_Val
# define Rte_Read_DrvrSteerIntvDetdRollgCntr_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdRollgCntr_Val
# define Rte_Read_DrvrSteerIntvDetdVld_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdVld_Val
# define Rte_Read_DtcFailrTyp_Val Rte_Read_SerlComOutpProxy_DtcFailrTyp_Val
# define Rte_Read_DtcFltTyp_Val Rte_Read_SerlComOutpProxy_DtcFltTyp_Val
# define Rte_Read_DtcNr_Val Rte_Read_SerlComOutpProxy_DtcNr_Val
# define Rte_Read_DtcSrc_Val Rte_Read_SerlComOutpProxy_DtcSrc_Val
# define Rte_Read_DtcTrig_Val Rte_Read_SerlComOutpProxy_DtcTrig_Val
# define Rte_Read_ElecPowerSteerAvlSts_Val Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlSts_Val
# define Rte_Read_ElecPowerSteerAvlStsProtnVal_Val Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsProtnVal_Val
# define Rte_Read_ElecPowerSteerAvlStsRollgCntr_Val Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsRollgCntr_Val
# define Rte_Read_ElecPwrSteerTotTqDlvd_Val Rte_Read_SerlComOutpProxy_ElecPwrSteerTotTqDlvd_Val
# define Rte_Read_HandsOffSteerWhlDetnMod_Val Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnMod_Val
# define Rte_Read_HandsOffSteerWhlDetnSt_Val Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnSt_Val
# define Rte_Read_HandsOffSteerWhlDetnStVld_Val Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnStVld_Val
# define Rte_Read_HistSts_Val Rte_Read_SerlComOutpProxy_HistSts_Val
# define Rte_Read_LkaDrvrAppldTq_Val Rte_Read_SerlComOutpProxy_LkaDrvrAppldTq_Val
# define Rte_Read_LkaDrvrAppldTqVld_Val Rte_Read_SerlComOutpProxy_LkaDrvrAppldTqVld_Val
# define Rte_Read_LkaElecPwrSteerTotTqDlvd_Val Rte_Read_SerlComOutpProxy_LkaElecPwrSteerTotTqDlvd_Val
# define Rte_Read_LkaTqOvrlDeltaTqDlvd_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlDeltaTqDlvd_Val
# define Rte_Read_LkaTqOvrlDlvdRollgCntr_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlDlvdRollgCntr_Val
# define Rte_Read_LkaTqOvrlStsChks_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlStsChks_Val
# define Rte_Read_LkaTqOvrlTqDlvdSts_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlTqDlvdSts_Val
# define Rte_Read_PwrSteerIndcr_Val Rte_Read_SerlComOutpProxy_PwrSteerIndcr_Val
# define Rte_Read_SteerAssiLimd_Val Rte_Read_SerlComOutpProxy_SteerAssiLimd_Val
# define Rte_Read_SteerAssiLimdLvl2_Val Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl2_Val
# define Rte_Read_SteerAssiLimdLvl3_Val Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl3_Val
# define Rte_Read_SteerWhlAgAlvRollgCntBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusChassisExp_Val
# define Rte_Read_SteerWhlAgAlvRollgCntBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusHiSpd_Val
# define Rte_Read_SteerWhlAgBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgBusChassisExp_Val
# define Rte_Read_SteerWhlAgBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgBusHiSpd_Val
# define Rte_Read_SteerWhlAgGrdtBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusChassisExp_Val
# define Rte_Read_SteerWhlAgGrdtBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusHiSpd_Val
# define Rte_Read_SteerWhlAgGrdtMaskBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusChassisExp_Val
# define Rte_Read_SteerWhlAgGrdtMaskBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusHiSpd_Val
# define Rte_Read_SteerWhlAgGrdtVldBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusChassisExp_Val
# define Rte_Read_SteerWhlAgGrdtVldBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusHiSpd_Val
# define Rte_Read_SteerWhlAgMaskBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusChassisExp_Val
# define Rte_Read_SteerWhlAgMaskBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusHiSpd_Val
# define Rte_Read_SteerWhlAgSnsrCalStsBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusChassisExp_Val
# define Rte_Read_SteerWhlAgSnsrCalStsBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusHiSpd_Val
# define Rte_Read_SteerWhlAgSnsrChksBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusChassisExp_Val
# define Rte_Read_SteerWhlAgSnsrChksBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusHiSpd_Val
# define Rte_Read_SteerWhlAgSnsrTypBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusChassisExp_Val
# define Rte_Read_SteerWhlAgSnsrTypBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusHiSpd_Val
# define Rte_Read_SteerWhlAgVldBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusChassisExp_Val
# define Rte_Read_SteerWhlAgVldBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusHiSpd_Val
# define Rte_Read_TqOvrlDeltaTqDlvd_Val Rte_Read_SerlComOutpProxy_TqOvrlDeltaTqDlvd_Val
# define Rte_Read_TqOvrlDlvdChks_Val Rte_Read_SerlComOutpProxy_TqOvrlDlvdChks_Val
# define Rte_Read_TqOvrlDlvdRollgCntr_Val Rte_Read_SerlComOutpProxy_TqOvrlDlvdRollgCntr_Val
# define Rte_Read_TqOvrlTqDlvdSts_Val Rte_Read_SerlComOutpProxy_TqOvrlTqDlvdSts_Val
# define Rte_Read_TstFaildCodClrdSts_Val Rte_Read_SerlComOutpProxy_TstFaildCodClrdSts_Val
# define Rte_Read_TstFaildPwrUpSts_Val Rte_Read_SerlComOutpProxy_TstFaildPwrUpSts_Val
# define Rte_Read_TstNotPassdCodClrdSts_Val Rte_Read_SerlComOutpProxy_TstNotPassdCodClrdSts_Val
# define Rte_Read_TstNotPassdPwrUpSts_Val Rte_Read_SerlComOutpProxy_TstNotPassdPwrUpSts_Val
# define Rte_Read_WarnIndcrReqdSts_Val Rte_Read_SerlComOutpProxy_WarnIndcrReqdSts_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_BusOffChassisExp_Logl Rte_Write_SerlComOutpProxy_BusOffChassisExp_Logl
# define Rte_Write_BusOffHiSpd_Logl Rte_Write_SerlComOutpProxy_BusOffHiSpd_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_Msg184TxCallBack_Oper Rte_Call_SerlComOutpProxy_Msg184TxCallBack_Oper
# define Rte_Call_Msg1CATxCallBack_Oper Rte_Call_SerlComOutpProxy_Msg1CATxCallBack_Oper
# define Rte_Call_Msg1E5ChassisExpTxCallBack_Oper Rte_Call_SerlComOutpProxy_Msg1E5ChassisExpTxCallBack_Oper
# define Rte_Call_Msg1E5HiSpdTxCallBack_Oper Rte_Call_SerlComOutpProxy_Msg1E5HiSpdTxCallBack_Oper
# define Rte_Call_Msg335TxCallBack_Oper Rte_Call_SerlComOutpProxy_Msg335TxCallBack_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_SerlComOutpProxy_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmOvrlStMgrApaMfgEna_Logl Rte_Prm_SerlComOutpProxy_GmOvrlStMgrApaMfgEna_Logl

# define Rte_Prm_GmOvrlStMgrEscMfgEna_Logl Rte_Prm_SerlComOutpProxy_GmOvrlStMgrEscMfgEna_Logl

# define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl Rte_Prm_SerlComOutpProxy_GmOvrlStMgrLkaMfgEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_BusOffChassisExp() (Rte_Inst_SerlComOutpProxy->Pim_BusOffChassisExp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BusOffHiSpd() (Rte_Inst_SerlComOutpProxy->Pim_BusOffHiSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_BusOffChassisExp(void)
 *   boolean *Rte_Pim_BusOffHiSpd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   boolean Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void)
 *   boolean Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void)
 *
 *********************************************************************************************************************/


# define SerlComOutpProxy_START_SEC_CODE
# include "SerlComOutpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComOutpProxyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SerlComOutpProxyInit1 SerlComOutpProxyInit1
FUNC(void, SerlComOutpProxy_CODE) SerlComOutpProxyInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComOutpProxyPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CodSupported_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DrvrSteerIntvDetd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DrvrSteerIntvDetdProtnVal_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DrvrSteerIntvDetdRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DrvrSteerIntvDetdVld_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DtcFailrTyp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DtcFltTyp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DtcNr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_DtcSrc_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DtcTrig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ElecPowerSteerAvlSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ElecPowerSteerAvlStsProtnVal_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ElecPowerSteerAvlStsRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ElecPwrSteerTotTqDlvd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_HandsOffSteerWhlDetnMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HandsOffSteerWhlDetnSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HandsOffSteerWhlDetnStVld_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HistSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaDrvrAppldTq_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LkaDrvrAppldTqVld_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaElecPwrSteerTotTqDlvd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LkaTqOvrlDeltaTqDlvd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LkaTqOvrlDlvdRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_LkaTqOvrlStsChks_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_LkaTqOvrlTqDlvdSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PwrSteerIndcr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerAssiLimd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerAssiLimdLvl2_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerAssiLimdLvl3_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgAlvRollgCntBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgAlvRollgCntBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgBusChassisExp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgBusHiSpd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgGrdtBusChassisExp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgGrdtBusHiSpd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgGrdtMaskBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgGrdtMaskBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgGrdtVldBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgGrdtVldBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgMaskBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgMaskBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgSnsrCalStsBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgSnsrCalStsBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgSnsrChksBusChassisExp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgSnsrChksBusHiSpd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgSnsrTypBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgSnsrTypBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgVldBusChassisExp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SteerWhlAgVldBusHiSpd_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TqOvrlDeltaTqDlvd_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_TqOvrlDlvdChks_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_TqOvrlDlvdRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TqOvrlTqDlvdSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TstFaildCodClrdSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TstFaildPwrUpSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TstNotPassdCodClrdSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_TstNotPassdPwrUpSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WarnIndcrReqdSts_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BusOffChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_BusOffHiSpd_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Msg184TxCallBack_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_Msg1CATxCallBack_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_Msg1E5ChassisExpTxCallBack_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_Msg1E5HiSpdTxCallBack_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_Msg335TxCallBack_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SerlComOutpProxyPer1 SerlComOutpProxyPer1
FUNC(void, SerlComOutpProxy_CODE) SerlComOutpProxyPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define SerlComOutpProxy_STOP_SEC_CODE
# include "SerlComOutpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1472581057
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Sandbox/MM500A_SerlComOutpProxy_Impl/tools/contract/Rte_SerlComOutpProxy.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1472581057
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SERLCOMOUTPPROXY_H */
