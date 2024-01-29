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
 *          File:  Rte_SnsrOffsCorrn.h
 *     SW-C Type:  SnsrOffsCorrn
 *  Generated at:  Mon Jan 25 08:48:58 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SnsrOffsCorrn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SNSROFFSCORRN_H
# define _RTE_SNSROFFSCORRN_H

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

# include "Rte_SnsrOffsCorrn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_SnsrOffsCorrn
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_SnsrOffsCorrn, RTE_CONST, RTE_CONST) Rte_Inst_SnsrOffsCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_SnsrOffsCorrn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgCorrd_Val (0.0F)
# define Rte_InitValue_HwAgOffs_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqCorrd_Val (0.0F)
# define Rte_InitValue_HwTqOffs_Val (0.0F)
# define Rte_InitValue_VehYawRate_Val (0.0F)
# define Rte_InitValue_VehYawRateCorrd_Val (0.0F)
# define Rte_InitValue_VehYawRateOffs_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsCorrn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSCORRN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsCorrn_HwAgOffs_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSCORRN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsCorrn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSCORRN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsCorrn_HwTqOffs_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSCORRN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsCorrn_VehYawRate_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSCORRN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SnsrOffsCorrn_VehYawRateOffs_Val(P2VAR(float32, AUTOMATIC, RTE_SNSROFFSCORRN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SnsrOffsCorrn_HwAgCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SnsrOffsCorrn_HwTqCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SnsrOffsCorrn_VehYawRateCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnHwAgLrndOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnHwTqLrndOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnVehYawRateLrndOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnOffsEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_SnsrOffsCorrn_HwAg_Val
# define Rte_Read_HwAgOffs_Val Rte_Read_SnsrOffsCorrn_HwAgOffs_Val
# define Rte_Read_HwTq_Val Rte_Read_SnsrOffsCorrn_HwTq_Val
# define Rte_Read_HwTqOffs_Val Rte_Read_SnsrOffsCorrn_HwTqOffs_Val
# define Rte_Read_VehYawRate_Val Rte_Read_SnsrOffsCorrn_VehYawRate_Val
# define Rte_Read_VehYawRateOffs_Val Rte_Read_SnsrOffsCorrn_VehYawRateOffs_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgCorrd_Val Rte_Write_SnsrOffsCorrn_HwAgCorrd_Val
# define Rte_Write_HwTqCorrd_Val Rte_Write_SnsrOffsCorrn_HwTqCorrd_Val
# define Rte_Write_VehYawRateCorrd_Val Rte_Write_SnsrOffsCorrn_VehYawRateCorrd_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnHwAgLrndOffsLim_Val

# define Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnHwTqLrndOffsLim_Val

# define Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnVehYawRateLrndOffsLim_Val

# define Rte_Prm_SnsrOffsCorrnOffsEna_Logl Rte_Prm_SnsrOffsCorrn_SnsrOffsCorrnOffsEna_Logl



/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SnsrOffsCorrnHwAgLrndOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsCorrnHwTqLrndOffsLim_Val(void)
 *   float32 Rte_Prm_SnsrOffsCorrnVehYawRateLrndOffsLim_Val(void)
 *   boolean Rte_Prm_SnsrOffsCorrnOffsEna_Logl(void)
 *
 *********************************************************************************************************************/


# define SnsrOffsCorrn_START_SEC_CODE
# include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsCorrnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SnsrOffsCorrnInit1 SnsrOffsCorrnInit1
FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SnsrOffsCorrnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRateOffs_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehYawRateCorrd_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SnsrOffsCorrnPer1 SnsrOffsCorrnPer1
FUNC(void, SnsrOffsCorrn_CODE) SnsrOffsCorrnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define SnsrOffsCorrn_STOP_SEC_CODE
# include "SnsrOffsCorrn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1453731960
#    error "The magic number of the generated file <C:/Component/SF052A_SnsrOffsCorrn_Impl/tools/contract/Rte_SnsrOffsCorrn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1453731960
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SNSROFFSCORRN_H */
