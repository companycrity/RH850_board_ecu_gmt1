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
 *          File:  Rte_Type.h
 *     SW-C Type:  WhlImbRejctn
 *  Generated at:  Fri Feb  3 08:16:57 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_Ary1D_f32_30
typedef float32 Ary1D_f32_30[30];

# define Rte_TypeDef_WhlImbRejctnCmpPeakRec1
typedef struct
{
  float32 LePeakPrev;
  float32 RiPeakPrev;
  float32 MaxCompPerc;
  uint32 ActvCmpBand1;
  uint32 ActvCmpBand2;
  uint32 ActvCmpBand3;
} WhlImbRejctnCmpPeakRec1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;

# define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

# define Rte_TypeDef_s8p7
typedef sint16 s8p7;

# define Rte_TypeDef_u16p0
typedef uint16 u16p0;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u6p10
typedef uint16 u6p10;

# define Rte_TypeDef_u7p9
typedef uint16 u7p9;

# define Rte_TypeDef_Ary1D_s8p7_3
typedef s8p7 Ary1D_s8p7_3[3];

# define Rte_TypeDef_Ary1D_u1p15_6
typedef u1p15 Ary1D_u1p15_6[6];

# define Rte_TypeDef_Ary1D_u6p10_6
typedef u6p10 Ary1D_u6p10_6[6];

# define Rte_TypeDef_Ary1D_u7p9_3
typedef u7p9 Ary1D_u7p9_3[3];

# define Rte_TypeDef_PassFailCntrDiagcRec1
typedef struct
{
  float32 Cntr;
  float32 Thd;
  float32 NegStep;
  float32 PosStep;
  SigQlfr1 Sts;
} PassFailCntrDiagcRec1;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1486131525
#    error "The magic number of the generated file <C:/component/SF015A_WhlImbRejctn_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1486131525
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
