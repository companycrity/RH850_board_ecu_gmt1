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
 *     SW-C Type:  SnsrOffsLrng
 *  Generated at:  Thu Dec  8 10:26:24 2016
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

# define Rte_TypeDef_Ary1D_f32_3
typedef float32 Ary1D_f32_3[3];

# define Rte_TypeDef_Ary1D_f32_72
typedef float32 Ary1D_f32_72[72];

# define Rte_TypeDef_Ary2D_f32_3_3
typedef Ary1D_f32_3 Ary2D_f32_3_3[3];

# define Rte_TypeDef_s10p5
typedef sint16 s10p5;

# define Rte_TypeDef_s11p4
typedef sint16 s11p4;

# define Rte_TypeDef_s3p12
typedef sint16 s3p12;

# define Rte_TypeDef_s5p10
typedef sint16 s5p10;

# define Rte_TypeDef_s6p9
typedef sint16 s6p9;

# define Rte_TypeDef_SnsrLrndOffsRec1
typedef struct
{
  float32 HwAgLrndTi;
  float32 YawRateElpdTi;
  Ary2D_f32_3_3 HwTqLrngCovariMtrx;
  Ary1D_f32_3 HwTqLrngEstimnVect;
  s6p9 YawRateOffs;
  s5p10 HwAgOffs;
  s3p12 HwTqOffs;
  s6p9 HwAgLrngYawOffsRef;
  s11p4 HwAgLrngHwAgFilSt;
  s10p5 HwAgLrngSysTqFilSt;
  s11p4 HwTqLrngHwAgRef;
  uint16 HwTqLrngSampleCntNeg;
  uint16 HwTqLrngSampleCntPos;
  uint8 HwTqLrngSts;
  boolean YawRateOffsVld;
} SnsrLrndOffsRec1;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481211048
#    error "The magic number of the generated file <C:/component/SF051A_SnsrOffsLrng_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481211048
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
