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
 *          File:  Rte_Assi_Type.h
 *     SW-C Type:  Assi
 *  Generated at:  Tue Aug  9 09:18:13 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSI_TYPE_H
# define _RTE_ASSI_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Spd1_LowerLimit (0.0)
# define Spd1_UpperLimit (511.0)

# define Tq1_LowerLimit (-8.8)
# define Tq1_UpperLimit (8.8)

# define Tq10_LowerLimit (0)
# define Tq10_UpperLimit (8.8)

# define Tq2_LowerLimit (-10.0)
# define Tq2_UpperLimit (10.0)

# define Uls2_LowerLimit (0.0)
# define Uls2_UpperLimit (1.0)

# define Uls5_LowerLimit (-1000000000.0)
# define Uls5_UpperLimit (1000000000.0)

# define Uls6_LowerLimit (0.0)
# define Uls6_UpperLimit (200.0)

# define Tq11_LowerLimit (-2048)
# define Tq11_UpperLimit (32748)

# define Cnt26_LowerLimit (0U)
# define Cnt26_UpperLimit (200U)

# define Uls4_LowerLimit (0U)
# define Uls4_UpperLimit (16384U)

# define Tq12_LowerLimit (0U)
# define Tq12_UpperLimit (18022U)

# define Tq6_LowerLimit (0U)
# define Tq6_UpperLimit (2560U)

# define Spd2_LowerLimit (0U)
# define Spd2_UpperLimit (65408U)

# define Cnt16_LowerLimit (0U)
# define Cnt16_UpperLimit (65535U)


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1470746583
#    error "The magic number of the generated file <C:/Component/SF001A_Assi_Impl/tools/contract/Rte_Assi_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1470746583
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_ASSI_TYPE_H */
