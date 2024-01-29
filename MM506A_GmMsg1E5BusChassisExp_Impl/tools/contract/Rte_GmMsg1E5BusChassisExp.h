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
 *          File:  Rte_GmMsg1E5BusChassisExp.h
 *     SW-C Type:  GmMsg1E5BusChassisExp
 *  Generated at:  Mon Jan  9 23:29:22 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1E5BusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1E5BUSCHASSISEXP_H
# define _RTE_GMMSG1E5BUSCHASSISEXP_H

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

# include "Rte_GmMsg1E5BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg1E5BusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E5BusChassisExpRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg1E5BusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg1E5BusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg1E5BusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgTrimPrfmd_Logl (FALSE)
# define Rte_InitValue_HwAgVldToSerlCom_Logl (FALSE)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_SteerWhlAgAlvRollgCntBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtMaskBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtVldBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgMaskBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrCalStsBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrChksBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrTypBusChassisExp_Val (0U)
# define Rte_InitValue_SteerWhlAgVldBusChassisExp_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusChassisExp_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG1E5BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusChassisExp_HwAgTrimPrfmd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG1E5BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusChassisExp_HwAgVldToSerlCom_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG1E5BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusChassisExp_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG1E5BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_GmMsg1E5BusChassisExp_HwAg_Val
# define Rte_Read_HwAgTrimPrfmd_Logl Rte_Read_GmMsg1E5BusChassisExp_HwAgTrimPrfmd_Logl
# define Rte_Read_HwAgVldToSerlCom_Logl Rte_Read_GmMsg1E5BusChassisExp_HwAgVldToSerlCom_Logl
# define Rte_Read_HwVel_Val Rte_Read_GmMsg1E5BusChassisExp_HwVel_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_SteerWhlAgAlvRollgCntBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgAlvRollgCntBusChassisExp_Val
# define Rte_Write_SteerWhlAgBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgBusChassisExp_Val
# define Rte_Write_SteerWhlAgGrdtBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtBusChassisExp_Val
# define Rte_Write_SteerWhlAgGrdtMaskBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtMaskBusChassisExp_Val
# define Rte_Write_SteerWhlAgGrdtVldBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgGrdtVldBusChassisExp_Val
# define Rte_Write_SteerWhlAgMaskBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgMaskBusChassisExp_Val
# define Rte_Write_SteerWhlAgSnsrCalStsBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrCalStsBusChassisExp_Val
# define Rte_Write_SteerWhlAgSnsrChksBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrChksBusChassisExp_Val
# define Rte_Write_SteerWhlAgSnsrTypBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgSnsrTypBusChassisExp_Val
# define Rte_Write_SteerWhlAgVldBusChassisExp_Val Rte_Write_GmMsg1E5BusChassisExp_SteerWhlAgVldBusChassisExp_Val


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg1E5BusChassisExpRollgCntr() (Rte_Inst_GmMsg1E5BusChassisExp->Pim_GmMsg1E5BusChassisExpRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_GmMsg1E5BusChassisExpRollgCntr(void)
 *
 *********************************************************************************************************************/


# define GmMsg1E5BusChassisExp_START_SEC_CODE
# include "GmMsg1E5BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1E5BusChassisExpPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrimPrfmd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgVldToSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SteerWhlAgAlvRollgCntBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtMaskBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtVldBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgMaskBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrCalStsBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrChksBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrTypBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgVldBusChassisExp_Val(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg1E5BusChassisExpPer1 GmMsg1E5BusChassisExpPer1
FUNC(void, GmMsg1E5BusChassisExp_CODE) GmMsg1E5BusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Msg1E5ChassisExpTxCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg1E5ChassisExpTxCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg1E5ChassisExpTxCallBack_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Msg1E5ChassisExpTxCallBack_Oper Msg1E5ChassisExpTxCallBack_Oper
FUNC(void, GmMsg1E5BusChassisExp_CODE) Msg1E5ChassisExpTxCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg1E5BusChassisExp_STOP_SEC_CODE
# include "GmMsg1E5BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1484023445
#    error "The magic number of the generated file <C:/Hari/Work/SynergyProjects/EA4/MM506A_GmMsg1E5BusChassisExp_Impl/tools/contract/Rte_GmMsg1E5BusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1484023445
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG1E5BUSCHASSISEXP_H */
