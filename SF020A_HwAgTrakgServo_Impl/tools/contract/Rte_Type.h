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
 *     SW-C Type:  HwAgTrakgServo
 *  Generated at:  Wed Aug 17 16:26:34 2016
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

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u10p6
typedef uint16 u10p6;

# define Rte_TypeDef_u11p5
typedef uint16 u11p5;

# define Rte_TypeDef_u12p4
typedef uint16 u12p4;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u2p14
typedef uint16 u2p14;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_u7p9
typedef uint16 u7p9;

# define Rte_TypeDef_u8p8
typedef uint16 u8p8;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_u0p16_3
typedef u0p16 Ary1D_u0p16_3[3];

# define Rte_TypeDef_Ary1D_u10p6_3
typedef u10p6 Ary1D_u10p6_3[3];

# define Rte_TypeDef_Ary1D_u10p6_7
typedef u10p6 Ary1D_u10p6_7[7];

# define Rte_TypeDef_Ary1D_u11p5_13
typedef u11p5 Ary1D_u11p5_13[13];

# define Rte_TypeDef_Ary1D_u12p4_7
typedef u12p4 Ary1D_u12p4_7[7];

# define Rte_TypeDef_Ary1D_u1p15_10
typedef u1p15 Ary1D_u1p15_10[10];

# define Rte_TypeDef_Ary1D_u2p14_3
typedef u2p14 Ary1D_u2p14_3[3];

# define Rte_TypeDef_Ary1D_u4p12_13
typedef u4p12 Ary1D_u4p12_13[13];

# define Rte_TypeDef_Ary1D_u4p12_4
typedef u4p12 Ary1D_u4p12_4[4];

# define Rte_TypeDef_Ary1D_u4p12_6
typedef u4p12 Ary1D_u4p12_6[6];

# define Rte_TypeDef_Ary1D_u7p9_6
typedef u7p9 Ary1D_u7p9_6[6];

# define Rte_TypeDef_Ary1D_u8p8_4
typedef u8p8 Ary1D_u8p8_4[4];

# define Rte_TypeDef_Ary1D_u9p7_3
typedef u9p7 Ary1D_u9p7_3[3];

# define Rte_TypeDef_Ary2D_u10p6_3_7
typedef Ary1D_u10p6_7 Ary2D_u10p6_3_7[3];

# define Rte_TypeDef_Ary2D_u4p12_3_13
typedef Ary1D_u4p12_13 Ary2D_u4p12_3_13[3];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1471468612
#    error "The magic number of the generated file <C:/Component/SF020A_HwAgTrakgServo_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1471468612
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
