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
 *          File:  Rte_CmnMfgSrvIf.h
 *     SW-C Type:  CmnMfgSrvIf
 *  Generated at:  Tue Dec 20 14:20:43 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CmnMfgSrvIf> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CMNMFGSRVIF_H
# define _RTE_CMNMFGSRVIF_H

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

# include "Rte_CmnMfgSrvIf_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CmnMfgSrvIf
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmnMfgSrvUnlckd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_CmnMfgSrvIf, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DataBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CmnMfgSrvIf, RTE_CONST, RTE_CONST) Rte_Inst_CmnMfgSrvIf; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CmnMfgSrvIf, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MfgEnaSt_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrvIf_MfgEnaSt_Val(P2VAR(MfgEnaSt1, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrvIf_CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_VAR) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_VAR) CmnMfgSrvCmnMfgSrvRespLen, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_VAR) CmnMfgSrvCmnMfgSrvRespCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MfgEnaSt_Val Rte_Read_CmnMfgSrvIf_MfgEnaSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper Rte_Call_CmnMfgSrvIf_CmnMfgSrvCmnMfgSrvMaiFct_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CmnMfgSrvUnlckd() (Rte_Inst_CmnMfgSrvIf->Pim_CmnMfgSrvUnlckd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DataBuf() (*Rte_Inst_CmnMfgSrvIf->Pim_DataBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DataBuf() (Rte_Inst_CmnMfgSrvIf->Pim_DataBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_CmnMfgSrvUnlckd(void)
 *   uint8 *Rte_Pim_DataBuf(void)
 *
 *********************************************************************************************************************/


# define CmnMfgSrvIf_START_SEC_CODE
# include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CmnMfgSrvIfCmnMfgSrvIfImdtTx>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(const uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(uint8, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(Ary1D_u8_CmnMfgSrvIf, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvIfInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, uint16 *CmnMfgSrvCmnMfgSrvRespLen, uint8 *CmnMfgSrvCmnMfgSrvRespCod)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CmnMfgSrvIfInit1 CmnMfgSrvIfInit1
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CmnMfgSrvIf_STOP_SEC_CODE
# include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1482269879
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/NM002A_CmnMfgSrvIf_Impl-kzdyfh/NM002A_CmnMfgSrvIf_Impl/tools/contract/Rte_CmnMfgSrvIf.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1482269879
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CMNMFGSRVIF_H */
