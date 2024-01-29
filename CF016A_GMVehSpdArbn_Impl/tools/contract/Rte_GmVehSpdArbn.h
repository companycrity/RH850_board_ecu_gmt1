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
 *          File:  Rte_GmVehSpdArbn.h
 *     SW-C Type:  GmVehSpdArbn
 *  Generated at:  Tue Mar 15 15:46:30 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmVehSpdArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMVEHSPDARBN_H
# define _RTE_GMVEHSPDARBN_H

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

# include "Rte_GmVehSpdArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmVehSpdArbn
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmVehSpdArbnLeDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmVehSpdArbnLeNonDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmVehSpdArbnRiDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGmVehSpdArbnRiNonDrvnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmVehSpdArbn, RTE_CONST, RTE_CONST) Rte_Inst_GmVehSpdArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmVehSpdArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_VehPwrModDftVehSpdEna_Logl (FALSE)
# define Rte_InitValue_VehSpdArbd_Val (0.0F)
# define Rte_InitValue_VehSpdArbdVld_Logl (FALSE)
# define Rte_InitValue_VehSpdMaxSecur_Val (0.0F)
# define Rte_InitValue_VehSpdMaxSecurVld_Logl (FALSE)
# define Rte_InitValue_VehSpdMinSecur_Val (0.0F)
# define Rte_InitValue_VehSpdMinSecurVld_Logl (FALSE)
# define Rte_InitValue_VehSpdSnsrVld_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeDrvnVldBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeNonDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiDrvnVldBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnBusChassisExp_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiNonDrvnBusHiSpd_Val (0.0F)
# define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldBusChassisExp_Logl (FALSE)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldBusHiSpd_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_VehPwrModDftVehSpdEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusChassisExp_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusHiSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusChassisExp_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusHiSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusChassisExp_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusHiSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusChassisExp_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusHiSpd_Val(P2VAR(float32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehSpdArbn_VehSpdArbd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehSpdArbn_VehSpdArbdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehSpdArbn_VehSpdMaxSecur_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehSpdArbn_VehSpdMaxSecurVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehSpdArbn_VehSpdMinSecur_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehSpdArbn_VehSpdMinSecurVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmVehSpdArbn_VehSpdSnsrVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmVehSpdArbn_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmVehSpdArbn_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_GMVEHSPDARBN_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmVehSpdArbn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_VehPwrModDftVehSpdEna_Logl Rte_Read_GmVehSpdArbn_VehPwrModDftVehSpdEna_Logl
# define Rte_Read_WhlGndVelLeDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusChassisExp_Val
# define Rte_Read_WhlGndVelLeDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnBusHiSpd_Val
# define Rte_Read_WhlGndVelLeDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusChassisExp_Logl
# define Rte_Read_WhlGndVelLeDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnStuckBusHiSpd_Logl
# define Rte_Read_WhlGndVelLeDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusChassisExp_Logl
# define Rte_Read_WhlGndVelLeDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeDrvnVldBusHiSpd_Logl
# define Rte_Read_WhlGndVelLeNonDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusChassisExp_Val
# define Rte_Read_WhlGndVelLeNonDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnBusHiSpd_Val
# define Rte_Read_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl
# define Rte_Read_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl
# define Rte_Read_WhlGndVelLeNonDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusChassisExp_Logl
# define Rte_Read_WhlGndVelLeNonDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelLeNonDrvnVldBusHiSpd_Logl
# define Rte_Read_WhlGndVelRiDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusChassisExp_Val
# define Rte_Read_WhlGndVelRiDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnBusHiSpd_Val
# define Rte_Read_WhlGndVelRiDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusChassisExp_Logl
# define Rte_Read_WhlGndVelRiDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnStuckBusHiSpd_Logl
# define Rte_Read_WhlGndVelRiDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusChassisExp_Logl
# define Rte_Read_WhlGndVelRiDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiDrvnVldBusHiSpd_Logl
# define Rte_Read_WhlGndVelRiNonDrvnBusChassisExp_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusChassisExp_Val
# define Rte_Read_WhlGndVelRiNonDrvnBusHiSpd_Val Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnBusHiSpd_Val
# define Rte_Read_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl
# define Rte_Read_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl
# define Rte_Read_WhlGndVelRiNonDrvnVldBusChassisExp_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusChassisExp_Logl
# define Rte_Read_WhlGndVelRiNonDrvnVldBusHiSpd_Logl Rte_Read_GmVehSpdArbn_WhlGndVelRiNonDrvnVldBusHiSpd_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_VehSpdArbd_Val Rte_Write_GmVehSpdArbn_VehSpdArbd_Val
# define Rte_Write_VehSpdArbdVld_Logl Rte_Write_GmVehSpdArbn_VehSpdArbdVld_Logl
# define Rte_Write_VehSpdMaxSecur_Val Rte_Write_GmVehSpdArbn_VehSpdMaxSecur_Val
# define Rte_Write_VehSpdMaxSecurVld_Logl Rte_Write_GmVehSpdArbn_VehSpdMaxSecurVld_Logl
# define Rte_Write_VehSpdMinSecur_Val Rte_Write_GmVehSpdArbn_VehSpdMinSecur_Val
# define Rte_Write_VehSpdMinSecurVld_Logl Rte_Write_GmVehSpdArbn_VehSpdMinSecurVld_Logl
# define Rte_Write_VehSpdSnsrVld_Logl Rte_Write_GmVehSpdArbn_VehSpdSnsrVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmVehSpdArbn_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmVehSpdArbn_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmVehSpdArbn_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_DiagcRefTi() (Rte_Inst_GmVehSpdArbn->Pim_DiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmVehSpdArbnLeDrvnVld() (Rte_Inst_GmVehSpdArbn->Pim_dGmVehSpdArbnLeDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmVehSpdArbnLeNonDrvnVld() (Rte_Inst_GmVehSpdArbn->Pim_dGmVehSpdArbnLeNonDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmVehSpdArbnRiDrvnVld() (Rte_Inst_GmVehSpdArbn->Pim_dGmVehSpdArbnRiDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGmVehSpdArbnRiNonDrvnVld() (Rte_Inst_GmVehSpdArbn->Pim_dGmVehSpdArbnRiNonDrvnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_DiagcRefTi(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnLeDrvnVld(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnLeNonDrvnVld(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnRiDrvnVld(void)
 *   boolean *Rte_Pim_dGmVehSpdArbnRiNonDrvnVld(void)
 *
 *********************************************************************************************************************/


# define GmVehSpdArbn_START_SEC_CODE
# include "GmVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehSpdArbnInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmVehSpdArbnInit1 GmVehSpdArbnInit1
FUNC(void, GmVehSpdArbn_CODE) GmVehSpdArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehSpdArbnPer1
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
 *   Std_ReturnType Rte_Read_VehPwrModDftVehSpdEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeDrvnVldBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelLeNonDrvnVldBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiDrvnVldBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnBusChassisExp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnBusHiSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnStuckBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnStuckBusHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnVldBusChassisExp_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlGndVelRiNonDrvnVldBusHiSpd_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehSpdArbd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdArbdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdMaxSecur_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdMaxSecurVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdMinSecur_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdMinSecurVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdSnsrVld_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmVehSpdArbnPer1 GmVehSpdArbnPer1
FUNC(void, GmVehSpdArbn_CODE) GmVehSpdArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmVehSpdArbn_STOP_SEC_CODE
# include "GmVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
#   if RTE_MAGIC_NUMBER != 1458076044
#    error "The magic number of the generated file <C:/Component/CF016A_GMVehSpdArbn_Impl/tools/contract/Rte_GmVehSpdArbn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1458076044
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMVEHSPDARBN_H */
