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
 *     SW-C Type:  HowDetn
 *  Generated at:  Wed Nov 30 22:38:42 2016
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

# define Rte_TypeDef_s7p8
typedef sint16 s7p8;

# define Rte_TypeDef_u8p8
typedef uint16 u8p8;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_s7p8_5
typedef s7p8 Ary1D_s7p8_5[5];

# define Rte_TypeDef_Ary1D_s7p8_6
typedef s7p8 Ary1D_s7p8_6[6];

# define Rte_TypeDef_Ary1D_u8p8_5
typedef u8p8 Ary1D_u8p8_5[5];

# define Rte_TypeDef_Ary1D_u8p8_6
typedef u8p8 Ary1D_u8p8_6[6];

# define Rte_TypeDef_Ary1D_u8p8_7
typedef u8p8 Ary1D_u8p8_7[7];

# define Rte_TypeDef_Ary1D_u9p7_9
typedef u9p7 Ary1D_u9p7_9[9];

# define Rte_TypeDef_Ary2D_s7p8_9_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_9_5[9];

# define Rte_TypeDef_Ary2D_s7p8_9_6
typedef Ary1D_s7p8_6 Ary2D_s7p8_9_6[9];

# define Rte_TypeDef_Ary2D_u8p8_9_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_9_5[9];

# define Rte_TypeDef_Ary2D_u8p8_9_6
typedef Ary1D_u8p8_6 Ary2D_u8p8_9_6[9];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1480541505
#    error "The magic number of the generated file <C:/Component/SF044A_HowDetn_Impl_2.0.0/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1480541505
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
