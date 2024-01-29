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
 *          File:  Rte_HwAg0Meas.h
 *     SW-C Type:  HwAg0Meas
 *  Generated at:  Mon Jun 27 11:09:42 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAg0Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAG0MEAS_H
# define _RTE_HWAG0MEAS_H

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

# include "Rte_HwAg0Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAg0Meas
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0InitStepSeqNrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwAgOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0PrevHwAg0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0PrevRollCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0PrevStepSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0RawDataAvlStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr0IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr0NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr1IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0Snsr1NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg0SnsrTrigNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SigQlfr1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg0Qlfr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg0Snsr0Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg0Snsr0TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg0Snsr1Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg0Snsr1TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr0Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr0CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr0FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr0Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr1Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr1CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr1FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg0MeasSnsr1Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAg0Meas, RTE_CONST, RTE_CONST) Rte_Inst_HwAg0Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAg0Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg0_Val (0.0F)
# define Rte_InitValue_HwAg0Polarity_Val (1)
# define Rte_InitValue_HwAg0Qlfr_Val (0U)
# define Rte_InitValue_HwAg0RollgCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAg0Meas_HwAg0Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAg0Meas_HwAg0_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAg0Meas_HwAg0Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAg0Meas_HwAg0RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) NtcQlfr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_HwAg0Offs_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_IoHwAb_SetFctPrphlHwAg0_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg0Meas_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0IfFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0IfFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasVrnrErrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasSnsr0Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_22, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasSnsr0Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasSnsr1Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_22, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasSnsr1Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(sint16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasStep_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s16_22, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg0Meas_HwAg0MeasStep_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer2_HwAg0Snsr0Raw(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer2_HwAg0Snsr0TestOk(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer3_HwAg0Snsr1Raw(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer3_HwAg0Snsr1TestOk(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr0Raw(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr0TestOk(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr1Raw(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr1TestOk(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(HwAgOffsRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_HwAg0Meas_HwAg0OffsDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg0Polarity_Val Rte_Read_HwAg0Meas_HwAg0Polarity_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAg0_Val Rte_Write_HwAg0Meas_HwAg0_Val
# define Rte_Write_HwAg0Qlfr_Val Rte_Write_HwAg0Meas_HwAg0Qlfr_Val
# define Rte_Write_HwAg0RollgCntr_Val Rte_Write_HwAg0Meas_HwAg0RollgCntr_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_HwAg0Meas_FltInj_f32_Oper
# define Rte_Call_FltInj_u08_Oper Rte_Call_HwAg0Meas_FltInj_u08_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwAg0Meas_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_HwAg0Meas_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_HwAg0Meas_GetTiSpan1MicroSec32bit_Oper
# define Rte_Call_HwAg0Offs_SetRamBlockStatus Rte_Call_HwAg0Meas_HwAg0Offs_SetRamBlockStatus
# define Rte_Call_IoHwAb_SetFctPrphlHwAg0_Oper Rte_Call_HwAg0Meas_IoHwAb_SetFctPrphlHwAg0_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwAg0Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0Raw(data) \
  Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer2_HwAg0Snsr0Raw(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0TestOk(data) \
  Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer2_HwAg0Snsr0TestOk(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1Raw(data) \
  Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer3_HwAg0Snsr1Raw(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1TestOk(data) \
  Rte_IrvWrite_HwAg0Meas_HwAg0MeasPer3_HwAg0Snsr1TestOk(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0Raw() \
  Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr0Raw()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0TestOk() \
  Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr0TestOk()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1Raw() \
  Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr1Raw()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1TestOk() \
  Rte_IrvRead_HwAg0Meas_HwAg0MeasPer4_HwAg0Snsr1TestOk()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_HwAg0OffsDft Rte_CData_HwAg0Meas_HwAg0OffsDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAg0MeasHwAg0IfFltFailStep_Val Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0IfFltFailStep_Val

# define Rte_Prm_HwAg0MeasHwAg0IfFltPassStep_Val Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0IfFltPassStep_Val

# define Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val

# define Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val

# define Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val

# define Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val Rte_Prm_HwAg0Meas_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val

# define Rte_Prm_HwAg0MeasVrnrErrThd_Val Rte_Prm_HwAg0Meas_HwAg0MeasVrnrErrThd_Val

# define Rte_Prm_HwAg0MeasSnsr0Rev_Ary1D Rte_Prm_HwAg0Meas_HwAg0MeasSnsr0Rev_Ary1D

# define Rte_Prm_HwAg0MeasSnsr1Rev_Ary1D Rte_Prm_HwAg0Meas_HwAg0MeasSnsr1Rev_Ary1D

# define Rte_Prm_HwAg0MeasStep_Ary1D Rte_Prm_HwAg0Meas_HwAg0MeasStep_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAg0PrevHwAg0() (Rte_Inst_HwAg0Meas->Pim_HwAg0PrevHwAg0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg0() (Rte_Inst_HwAg0Meas->Pim_PrevHwAg0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr0Abs() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr0Abs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr0Rel() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr0Rel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr1Abs() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr1Abs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr1Rel() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr1Rel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0RawDataAvlStrtTi() (Rte_Inst_HwAg0Meas->Pim_HwAg0RawDataAvlStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr0CS() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr0CS) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr0FRXD() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr0FRXD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr1CS() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr1CS) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg0MeasSnsr1FRXD() (Rte_Inst_HwAg0Meas->Pim_dHwAg0MeasSnsr1FRXD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg0Snsr0Raw() (Rte_Inst_HwAg0Meas->Pim_PrevHwAg0Snsr0Raw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg0Snsr1Raw() (Rte_Inst_HwAg0Meas->Pim_PrevHwAg0Snsr1Raw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0PrevRollCnt() (Rte_Inst_HwAg0Meas->Pim_HwAg0PrevRollCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0PrevStepSeqNr() (Rte_Inst_HwAg0Meas->Pim_HwAg0PrevStepSeqNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr0ComStsErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr0ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr0IdErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr0IdErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr0IntSnsrErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr0IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr0NoMsgErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr0NoMsgErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr1ComStsErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr1ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr1IdErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr1IdErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr1IntSnsrErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr1IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Snsr1NoMsgErrCntr() (Rte_Inst_HwAg0Meas->Pim_HwAg0Snsr1NoMsgErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0SnsrTrigNr() (Rte_Inst_HwAg0Meas->Pim_HwAg0SnsrTrigNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg0Qlfr() (Rte_Inst_HwAg0Meas->Pim_PrevHwAg0Qlfr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg0Snsr0TestOk() (Rte_Inst_HwAg0Meas->Pim_PrevHwAg0Snsr0TestOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg0Snsr1TestOk() (Rte_Inst_HwAg0Meas->Pim_PrevHwAg0Snsr1TestOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0InitStepSeqNrCmpl() (Rte_Inst_HwAg0Meas->Pim_HwAg0InitStepSeqNrCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg0Offs() (Rte_Inst_HwAg0Meas->Pim_HwAg0Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAg0PrevHwAg0(void)
 *   float32 *Rte_Pim_PrevHwAg0(void)
 *   float32 *Rte_Pim_dHwAg0MeasSnsr0Abs(void)
 *   float32 *Rte_Pim_dHwAg0MeasSnsr0Rel(void)
 *   float32 *Rte_Pim_dHwAg0MeasSnsr1Abs(void)
 *   float32 *Rte_Pim_dHwAg0MeasSnsr1Rel(void)
 *   uint32 *Rte_Pim_HwAg0RawDataAvlStrtTi(void)
 *   uint32 *Rte_Pim_dHwAg0MeasSnsr0CS(void)
 *   uint32 *Rte_Pim_dHwAg0MeasSnsr0FRXD(void)
 *   uint32 *Rte_Pim_dHwAg0MeasSnsr1CS(void)
 *   uint32 *Rte_Pim_dHwAg0MeasSnsr1FRXD(void)
 *   uint16 *Rte_Pim_PrevHwAg0Snsr0Raw(void)
 *   uint16 *Rte_Pim_PrevHwAg0Snsr1Raw(void)
 *   uint8 *Rte_Pim_HwAg0PrevRollCnt(void)
 *   uint8 *Rte_Pim_HwAg0PrevStepSeqNr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr0ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr0IdErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr0IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr0NoMsgErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr1ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr1IdErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr1IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0Snsr1NoMsgErrCntr(void)
 *   uint8 *Rte_Pim_HwAg0SnsrTrigNr(void)
 *   SigQlfr1 *Rte_Pim_PrevHwAg0Qlfr(void)
 *   uint8 *Rte_Pim_PrevHwAg0Snsr0TestOk(void)
 *   uint8 *Rte_Pim_PrevHwAg0Snsr1TestOk(void)
 *   boolean *Rte_Pim_HwAg0InitStepSeqNrCmpl(void)
 *   HwAgOffsRec1 *Rte_Pim_HwAg0Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   HwAgOffsRec1 *Rte_CData_HwAg0OffsDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwAg0MeasHwAg0IfFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg0MeasHwAg0IfFltPassStep_Val(void)
 *   uint16 Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg0MeasHwAg0Snsr0PrtclFltPassStep_Val(void)
 *   uint16 Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg0MeasHwAg0Snsr1PrtclFltPassStep_Val(void)
 *   uint8 Rte_Prm_HwAg0MeasVrnrErrThd_Val(void)
 *   uint8 *Rte_Prm_HwAg0MeasSnsr0Rev_Ary1D(void)
 *   uint8 *Rte_Prm_HwAg0MeasSnsr1Rev_Ary1D(void)
 *   sint16 *Rte_Prm_HwAg0MeasStep_Ary1D(void)
 *
 *********************************************************************************************************************/


# define HwAg0Meas_START_SEC_CODE
# include "HwAg0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasHwAg0AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg0MeasHwAg0AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg0Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg0MeasHwAg0AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasHwAg0AutTrim_Oper HwAg0MeasHwAg0AutTrim_Oper
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasHwAg0ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg0MeasHwAg0ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg0Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg0MeasHwAg0ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasHwAg0ClrTrim_Oper HwAg0MeasHwAg0ClrTrim_Oper
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasHwAg0ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg0MeasHwAg0ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg0MeasHwAg0ReadTrim_Oper(float32 *HwAgReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasHwAg0ReadTrim_Oper HwAg0MeasHwAg0ReadTrim_Oper
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) HwAgReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasHwAg0TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg0MeasHwAg0TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg0MeasHwAg0TrimPrfmdSts_Oper(boolean *HwAgOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasHwAg0TrimPrfmdSts_Oper HwAg0MeasHwAg0TrimPrfmdSts_Oper
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWAG0MEAS_APPL_VAR) HwAgOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasHwAg0WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg0MeasHwAg0WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg0Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg0MeasHwAg0WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasHwAg0WrTrim_Oper HwAg0MeasHwAg0WrTrim_Oper
FUNC(void, HwAg0Meas_CODE) HwAg0MeasHwAg0WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwAg0_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasInit1 HwAg0MeasInit1
FUNC(void, HwAg0Meas_CODE) HwAg0MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasPer1 HwAg0MeasPer1
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0Raw(uint16 data)
 *   void Rte_IrvWrite_HwAg0MeasPer2_HwAg0Snsr0TestOk(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasPer2 HwAg0MeasPer2
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasPer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1Raw(uint16 data)
 *   void Rte_IrvWrite_HwAg0MeasPer3_HwAg0Snsr1TestOk(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasPer3 HwAg0MeasPer3
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasPer4
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
 *   Std_ReturnType Rte_Read_HwAg0Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAg0_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAg0Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwAg0RollgCntr_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0Raw(void)
 *   uint8 Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr0TestOk(void)
 *   uint16 Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1Raw(void)
 *   uint8 Rte_IrvRead_HwAg0MeasPer4_HwAg0Snsr1TestOk(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasPer4 HwAg0MeasPer4
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer4(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg0MeasPer5
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg0MeasPer5 HwAg0MeasPer5
FUNC(void, HwAg0Meas_CODE) HwAg0MeasPer5(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAg0Meas_STOP_SEC_CODE
# include "HwAg0Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467046821
#    error "The magic number of the generated file <C:/Component/CM690A_HwAg0Meas_Impl/tools/contract/Rte_HwAg0Meas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467046821
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAG0MEAS_H */
