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
 *     SW-C Type:  DutyCycThermProtn
 *  Generated at:  Mon Aug 15 13:15:35 2016
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

# define Rte_TypeDef_DutyCycThermProtnFilStValRec1
typedef struct
{
  uint8 Fil3StVal;
  uint8 Fil4StVal;
  uint8 Fil5StVal;
  uint8 Fil6StVal;
} DutyCycThermProtnFilStValRec1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_s15p0
typedef sint16 s15p0;

# define Rte_TypeDef_u16p0
typedef uint16 u16p0;

# define Rte_TypeDef_u3p13
typedef uint16 u3p13;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_s15p0_4
typedef s15p0 Ary1D_s15p0_4[4];

# define Rte_TypeDef_Ary1D_s15p0_5
typedef s15p0 Ary1D_s15p0_5[5];

# define Rte_TypeDef_Ary1D_u16p0_8
typedef u16p0 Ary1D_u16p0_8[8];

# define Rte_TypeDef_Ary1D_u3p13_5
typedef u3p13 Ary1D_u3p13_5[5];

# define Rte_TypeDef_Ary1D_u9p7_4
typedef u9p7 Ary1D_u9p7_4[4];

# define Rte_TypeDef_Ary1D_u9p7_5
typedef u9p7 Ary1D_u9p7_5[5];

# define Rte_TypeDef_Ary1D_u9p7_8
typedef u9p7 Ary1D_u9p7_8[8];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1471278345
#    error "The magic number of the generated file <C:/Component/SF009A_DutyCycThermProtn_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1471278345
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
