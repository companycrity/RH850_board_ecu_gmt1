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
 *     SW-C Type:  PwrLimr
 *  Generated at:  Sun Aug 16 13:09:55 2015
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

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_s11p4
typedef sint16 s11p4;

# define Rte_TypeDef_u11p5
typedef uint16 u11p5;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_u5p11
typedef uint16 u5p11;

# define Rte_TypeDef_Ary1D_s11p4_14
typedef s11p4 Ary1D_s11p4_14[14];

# define Rte_TypeDef_Ary1D_u11p5_10
typedef u11p5 Ary1D_u11p5_10[10];

# define Rte_TypeDef_Ary1D_u11p5_6
typedef u11p5 Ary1D_u11p5_6[6];

# define Rte_TypeDef_Ary1D_u4p12_6
typedef u4p12 Ary1D_u4p12_6[6];

# define Rte_TypeDef_Ary1D_u5p11_10
typedef u5p11 Ary1D_u5p11_10[10];

# define Rte_TypeDef_Ary1D_u5p11_14
typedef u5p11 Ary1D_u5p11_14[14];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1439750506
#    error "The magic number of the generated file <C:/Component/SF019B_PwrLimr_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1439750506
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
