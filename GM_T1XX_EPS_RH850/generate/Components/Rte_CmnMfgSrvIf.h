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
 *          File:  Rte_CmnMfgSrvIf.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CmnMfgSrvIf>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CMNMFGSRVIF_H
# define _RTE_CMNMFGSRVIF_H

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

# include "Rte_CmnMfgSrvIf_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_MfgEnaSt_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_MfgEnaSt_Val Rte_Read_CmnMfgSrvIf_MfgEnaSt_Val
#  define Rte_Read_CmnMfgSrvIf_MfgEnaSt_Val(data) (*(data) = Rte_CmnMfgSrv_MfgEnaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CMNMFGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CMNMFGSRV_APPL_CODE) CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespLen, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CMNMFGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7) (CmnMfgSrvCmnMfgSrvMaiFct_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrvIf_CmnMfgSrvUnlckd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_CmnMfgSrvIf, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_CmnMfgSrvIf_DataBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CmnMfgSrvUnlckd() \
  (&Rte_CmnMfgSrvIf_CmnMfgSrvUnlckd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DataBuf() (&((*RtePim_DataBuf())[0]))
#  else
#   define Rte_Pim_DataBuf() RtePim_DataBuf()
#  endif
#  define RtePim_DataBuf() \
  (&Rte_CmnMfgSrvIf_DataBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CmnMfgSrvIf_START_SEC_CODE
# include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
#  define RTE_RUNNABLE_CmnMfgSrvIfInit1 CmnMfgSrvIfInit1
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(uint8, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(Ary1D_u8_CmnMfgSrvIf, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CmnMfgSrvIf_STOP_SEC_CODE
# include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CMNMFGSRVIF_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
