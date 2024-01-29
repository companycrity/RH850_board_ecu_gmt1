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
 *          File:  Rte_SerlComOutpProxy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SerlComOutpProxy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SERLCOMOUTPPROXY_H
# define _RTE_SERLCOMOUTPPROXY_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_SerlComOutpProxy_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_SerlComOutpProxy_BusOffChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SerlComOutpProxy_BusOffHiSpd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CodSupported_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_CurrSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFailrTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcFltTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcNr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcSrc_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_DtcTrig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_HistSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_PwrSteerIndcr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl2_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl3_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgAlvRollgCntBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtMaskBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtVldBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgMaskBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrCalStsBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrChksBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrTypBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1E5BusHiSpd_SteerWhlAgVldBusHiSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BusOffChassisExp_Logl (FALSE)
#  define Rte_InitValue_BusOffHiSpd_Logl (FALSE)
#  define Rte_InitValue_CodSupported_Val (0U)
#  define Rte_InitValue_CurrSts_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetd_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetdProtnVal_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetdRollgCntr_Val (0U)
#  define Rte_InitValue_DrvrSteerIntvDetdVld_Val (0U)
#  define Rte_InitValue_DtcFailrTyp_Val (0U)
#  define Rte_InitValue_DtcFltTyp_Val (0U)
#  define Rte_InitValue_DtcNr_Val (0U)
#  define Rte_InitValue_DtcSrc_Val (0U)
#  define Rte_InitValue_DtcTrig_Val (0U)
#  define Rte_InitValue_ElecPowerSteerAvlSts_Val (0U)
#  define Rte_InitValue_ElecPowerSteerAvlStsProtnVal_Val (0U)
#  define Rte_InitValue_ElecPowerSteerAvlStsRollgCntr_Val (0U)
#  define Rte_InitValue_ElecPwrSteerTotTqDlvd_Val (0U)
#  define Rte_InitValue_HandsOffSteerWhlDetnMod_Val (0U)
#  define Rte_InitValue_HandsOffSteerWhlDetnSt_Val (0U)
#  define Rte_InitValue_HandsOffSteerWhlDetnStVld_Val (0U)
#  define Rte_InitValue_HistSts_Val (0U)
#  define Rte_InitValue_LkaDrvrAppldTq_Val (0U)
#  define Rte_InitValue_LkaDrvrAppldTqVld_Val (0U)
#  define Rte_InitValue_LkaElecPwrSteerTotTqDlvd_Val (0U)
#  define Rte_InitValue_LkaTqOvrlDeltaTqDlvd_Val (0U)
#  define Rte_InitValue_LkaTqOvrlDlvdRollgCntr_Val (0U)
#  define Rte_InitValue_LkaTqOvrlStsChks_Val (0U)
#  define Rte_InitValue_LkaTqOvrlTqDlvdSts_Val (0U)
#  define Rte_InitValue_PwrSteerIndcr_Val (0U)
#  define Rte_InitValue_SteerAssiLimd_Val (0U)
#  define Rte_InitValue_SteerAssiLimdLvl2_Val (0U)
#  define Rte_InitValue_SteerAssiLimdLvl3_Val (0U)
#  define Rte_InitValue_SteerWhlAgAlvRollgCntBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgAlvRollgCntBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtMaskBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtMaskBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtVldBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgGrdtVldBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgMaskBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgMaskBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrCalStsBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrCalStsBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrChksBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrChksBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrTypBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgSnsrTypBusHiSpd_Val (0U)
#  define Rte_InitValue_SteerWhlAgVldBusChassisExp_Val (0U)
#  define Rte_InitValue_SteerWhlAgVldBusHiSpd_Val (0U)
#  define Rte_InitValue_TqOvrlDeltaTqDlvd_Val (0U)
#  define Rte_InitValue_TqOvrlDlvdChks_Val (0U)
#  define Rte_InitValue_TqOvrlDlvdRollgCntr_Val (0U)
#  define Rte_InitValue_TqOvrlTqDlvdSts_Val (0U)
#  define Rte_InitValue_TstFaildCodClrdSts_Val (0U)
#  define Rte_InitValue_TstFaildPwrUpSts_Val (0U)
#  define Rte_InitValue_TstNotPassdCodClrdSts_Val (0U)
#  define Rte_InitValue_TstNotPassdPwrUpSts_Val (0U)
#  define Rte_InitValue_WarnIndcrReqdSts_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CodSupported_Val Rte_Read_SerlComOutpProxy_CodSupported_Val
#  define Rte_Read_SerlComOutpProxy_CodSupported_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_CodSupported_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CurrSts_Val Rte_Read_SerlComOutpProxy_CurrSts_Val
#  define Rte_Read_SerlComOutpProxy_CurrSts_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_CurrSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DrvrSteerIntvDetd_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetd_Val
#  define Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetd_Val(data) (*(data) = Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DrvrSteerIntvDetdProtnVal_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdProtnVal_Val
#  define Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdProtnVal_Val(data) (*(data) = Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdProtnVal_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DrvrSteerIntvDetdRollgCntr_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdRollgCntr_Val
#  define Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdRollgCntr_Val(data) (*(data) = Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdRollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DrvrSteerIntvDetdVld_Val Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdVld_Val
#  define Rte_Read_SerlComOutpProxy_DrvrSteerIntvDetdVld_Val(data) (*(data) = Rte_GmMsg335BusChassisExp_DrvrSteerIntvDetdVld_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DtcFailrTyp_Val Rte_Read_SerlComOutpProxy_DtcFailrTyp_Val
#  define Rte_Read_SerlComOutpProxy_DtcFailrTyp_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_DtcFailrTyp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DtcFltTyp_Val Rte_Read_SerlComOutpProxy_DtcFltTyp_Val
#  define Rte_Read_SerlComOutpProxy_DtcFltTyp_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_DtcFltTyp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DtcNr_Val Rte_Read_SerlComOutpProxy_DtcNr_Val
#  define Rte_Read_SerlComOutpProxy_DtcNr_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_DtcNr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DtcSrc_Val Rte_Read_SerlComOutpProxy_DtcSrc_Val
#  define Rte_Read_SerlComOutpProxy_DtcSrc_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_DtcSrc_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DtcTrig_Val Rte_Read_SerlComOutpProxy_DtcTrig_Val
#  define Rte_Read_SerlComOutpProxy_DtcTrig_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_DtcTrig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ElecPowerSteerAvlSts_Val Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlSts_Val
#  define Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlSts_Val(data) (*(data) = Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ElecPowerSteerAvlStsProtnVal_Val Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsProtnVal_Val
#  define Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsProtnVal_Val(data) (*(data) = Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsProtnVal_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ElecPowerSteerAvlStsRollgCntr_Val Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsRollgCntr_Val
#  define Rte_Read_SerlComOutpProxy_ElecPowerSteerAvlStsRollgCntr_Val(data) (*(data) = Rte_GmMsg335BusChassisExp_ElecPowerSteerAvlStsRollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ElecPwrSteerTotTqDlvd_Val Rte_Read_SerlComOutpProxy_ElecPwrSteerTotTqDlvd_Val
#  define Rte_Read_SerlComOutpProxy_ElecPwrSteerTotTqDlvd_Val(data) (*(data) = Rte_GmMsg1CABusChassisExp_ElecPwrSteerTotTqDlvd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HandsOffSteerWhlDetnMod_Val Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnMod_Val
#  define Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnMod_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HandsOffSteerWhlDetnSt_Val Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnSt_Val
#  define Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnSt_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HandsOffSteerWhlDetnStVld_Val Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnStVld_Val
#  define Rte_Read_SerlComOutpProxy_HandsOffSteerWhlDetnStVld_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_HandsOffSteerWhlDetnStVld_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HistSts_Val Rte_Read_SerlComOutpProxy_HistSts_Val
#  define Rte_Read_SerlComOutpProxy_HistSts_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_HistSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaDrvrAppldTq_Val Rte_Read_SerlComOutpProxy_LkaDrvrAppldTq_Val
#  define Rte_Read_SerlComOutpProxy_LkaDrvrAppldTq_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_LkaDrvrAppldTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaDrvrAppldTqVld_Val Rte_Read_SerlComOutpProxy_LkaDrvrAppldTqVld_Val
#  define Rte_Read_SerlComOutpProxy_LkaDrvrAppldTqVld_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_LkaDrvrAppldTqVld_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaElecPwrSteerTotTqDlvd_Val Rte_Read_SerlComOutpProxy_LkaElecPwrSteerTotTqDlvd_Val
#  define Rte_Read_SerlComOutpProxy_LkaElecPwrSteerTotTqDlvd_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_LkaElecPwrSteerTotTqDlvd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaTqOvrlDeltaTqDlvd_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlDeltaTqDlvd_Val
#  define Rte_Read_SerlComOutpProxy_LkaTqOvrlDeltaTqDlvd_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_LkaTqOvrlDeltaTqDlvd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaTqOvrlDlvdRollgCntr_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlDlvdRollgCntr_Val
#  define Rte_Read_SerlComOutpProxy_LkaTqOvrlDlvdRollgCntr_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_LkaTqOvrlDlvdRollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaTqOvrlStsChks_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlStsChks_Val
#  define Rte_Read_SerlComOutpProxy_LkaTqOvrlStsChks_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_LkaTqOvrlStsChks_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LkaTqOvrlTqDlvdSts_Val Rte_Read_SerlComOutpProxy_LkaTqOvrlTqDlvdSts_Val
#  define Rte_Read_SerlComOutpProxy_LkaTqOvrlTqDlvdSts_Val(data) (*(data) = Rte_GmMsg184BusHiSpd_LkaTqOvrlTqDlvdSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PwrSteerIndcr_Val Rte_Read_SerlComOutpProxy_PwrSteerIndcr_Val
#  define Rte_Read_SerlComOutpProxy_PwrSteerIndcr_Val(data) (*(data) = Rte_GmMsg148BusHiSpd_PwrSteerIndcr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerAssiLimd_Val Rte_Read_SerlComOutpProxy_SteerAssiLimd_Val
#  define Rte_Read_SerlComOutpProxy_SteerAssiLimd_Val(data) (*(data) = Rte_GmMsg148BusHiSpd_SteerAssiLimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerAssiLimdLvl2_Val Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl2_Val
#  define Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl2_Val(data) (*(data) = Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl2_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerAssiLimdLvl3_Val Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl3_Val
#  define Rte_Read_SerlComOutpProxy_SteerAssiLimdLvl3_Val(data) (*(data) = Rte_GmMsg148BusHiSpd_SteerAssiLimdLvl3_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgAlvRollgCntBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgAlvRollgCntBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgAlvRollgCntBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgAlvRollgCntBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgGrdtBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgGrdtBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgGrdtMaskBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgGrdtMaskBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtMaskBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtMaskBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgGrdtVldBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgGrdtVldBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgGrdtVldBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgGrdtVldBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgMaskBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgMaskBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgMaskBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgMaskBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgSnsrCalStsBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgSnsrCalStsBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrCalStsBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrCalStsBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgSnsrChksBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgSnsrChksBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrChksBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrChksBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgSnsrTypBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgSnsrTypBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgSnsrTypBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgSnsrTypBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgVldBusChassisExp_Val Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusChassisExp_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusChassisExp_Val(data) (*(data) = Rte_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteerWhlAgVldBusHiSpd_Val Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusHiSpd_Val
#  define Rte_Read_SerlComOutpProxy_SteerWhlAgVldBusHiSpd_Val(data) (*(data) = Rte_GmMsg1E5BusHiSpd_SteerWhlAgVldBusHiSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TqOvrlDeltaTqDlvd_Val Rte_Read_SerlComOutpProxy_TqOvrlDeltaTqDlvd_Val
#  define Rte_Read_SerlComOutpProxy_TqOvrlDeltaTqDlvd_Val(data) (*(data) = Rte_GmMsg1CABusChassisExp_TqOvrlDeltaTqDlvd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TqOvrlDlvdChks_Val Rte_Read_SerlComOutpProxy_TqOvrlDlvdChks_Val
#  define Rte_Read_SerlComOutpProxy_TqOvrlDlvdChks_Val(data) (*(data) = Rte_GmMsg1CABusChassisExp_TqOvrlDlvdChks_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TqOvrlDlvdRollgCntr_Val Rte_Read_SerlComOutpProxy_TqOvrlDlvdRollgCntr_Val
#  define Rte_Read_SerlComOutpProxy_TqOvrlDlvdRollgCntr_Val(data) (*(data) = Rte_GmMsg1CABusChassisExp_TqOvrlDlvdRollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TqOvrlTqDlvdSts_Val Rte_Read_SerlComOutpProxy_TqOvrlTqDlvdSts_Val
#  define Rte_Read_SerlComOutpProxy_TqOvrlTqDlvdSts_Val(data) (*(data) = Rte_GmMsg1CABusChassisExp_TqOvrlTqDlvdSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TstFaildCodClrdSts_Val Rte_Read_SerlComOutpProxy_TstFaildCodClrdSts_Val
#  define Rte_Read_SerlComOutpProxy_TstFaildCodClrdSts_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_TstFaildCodClrdSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TstFaildPwrUpSts_Val Rte_Read_SerlComOutpProxy_TstFaildPwrUpSts_Val
#  define Rte_Read_SerlComOutpProxy_TstFaildPwrUpSts_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_TstFaildPwrUpSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TstNotPassdCodClrdSts_Val Rte_Read_SerlComOutpProxy_TstNotPassdCodClrdSts_Val
#  define Rte_Read_SerlComOutpProxy_TstNotPassdCodClrdSts_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_TstNotPassdCodClrdSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TstNotPassdPwrUpSts_Val Rte_Read_SerlComOutpProxy_TstNotPassdPwrUpSts_Val
#  define Rte_Read_SerlComOutpProxy_TstNotPassdPwrUpSts_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_TstNotPassdPwrUpSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WarnIndcrReqdSts_Val Rte_Read_SerlComOutpProxy_WarnIndcrReqdSts_Val
#  define Rte_Read_SerlComOutpProxy_WarnIndcrReqdSts_Val(data) (*(data) = Rte_GmMsg778BusHiSpd_WarnIndcrReqdSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_BusOffChassisExp_Logl Rte_Write_SerlComOutpProxy_BusOffChassisExp_Logl
#  define Rte_Write_SerlComOutpProxy_BusOffChassisExp_Logl(data) (Rte_SerlComOutpProxy_BusOffChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_BusOffHiSpd_Logl Rte_Write_SerlComOutpProxy_BusOffHiSpd_Logl
#  define Rte_Write_SerlComOutpProxy_BusOffHiSpd_Logl(data) (Rte_SerlComOutpProxy_BusOffHiSpd_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_GMMSG184BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMMSG184BUSHISPD_APPL_CODE) MsgTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMMSG184BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Msg184TxCallBack_Oper() (MsgTxCallBack_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_GMMSG1CABUSCHASSISEXP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMMSG1CABUSCHASSISEXP_APPL_CODE) Msg1CATxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMMSG1CABUSCHASSISEXP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Msg1CATxCallBack_Oper() (Msg1CATxCallBack_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_GMMSG1E5BUSCHASSISEXP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMMSG1E5BUSCHASSISEXP_APPL_CODE) Msg1E5ChassisExpTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMMSG1E5BUSCHASSISEXP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Msg1E5ChassisExpTxCallBack_Oper() (Msg1E5ChassisExpTxCallBack_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_GMMSG1E5BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMMSG1E5BUSHISPD_APPL_CODE) Msg1E5HiSpdCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMMSG1E5BUSHISPD_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Msg1E5HiSpdTxCallBack_Oper() (Msg1E5HiSpdCallBack_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_GMMSG335BUSCHASSISEXP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_GMMSG335BUSCHASSISEXP_APPL_CODE) Msg335TxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_GMMSG335BUSCHASSISEXP_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Msg335TxCallBack_Oper() (Msg335TxCallBack_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts6_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmOvrlStMgrApaMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrApaMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrEscMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrEscMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP])->GmOvrlStMgrLkaMfgEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_SerlComOutpProxy_BusOffChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_SerlComOutpProxy_BusOffHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_BusOffChassisExp() \
  (&Rte_SerlComOutpProxy_BusOffChassisExp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BusOffHiSpd() \
  (&Rte_SerlComOutpProxy_BusOffHiSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define SerlComOutpProxy_START_SEC_CODE
# include "SerlComOutpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_SerlComOutpProxyInit1 SerlComOutpProxyInit1
#  define RTE_RUNNABLE_SerlComOutpProxyPer1 SerlComOutpProxyPer1
# endif

FUNC(void, SerlComOutpProxy_CODE) SerlComOutpProxyInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, SerlComOutpProxy_CODE) SerlComOutpProxyPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define SerlComOutpProxy_STOP_SEC_CODE
# include "SerlComOutpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_SERLCOMOUTPPROXY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
