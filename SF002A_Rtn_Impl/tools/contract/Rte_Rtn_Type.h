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
 *          File:  Rte_Rtn_Type.h
 *     SW-C Type:  Rtn
 *  Generated at:  Tue Nov 29 11:42:41 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_RTN_TYPE_H
# define _RTE_RTN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Ag15_LowerLimit (-1440.0)
# define Ag15_UpperLimit (1440.0)

# define Ag16_LowerLimit (0.0)
# define Ag16_UpperLimit (20.0)

# define Ag17_LowerLimit (0.0)
# define Ag17_UpperLimit (1440.0)

# define Rate4_LowerLimit (0.1)
# define Rate4_UpperLimit (10.0)

# define Spd1_LowerLimit (0.0)
# define Spd1_UpperLimit (511.0)

# define T1_LowerLimit (-50.0)
# define T1_UpperLimit (150.0)

# define Tq1_LowerLimit (-8.8)
# define Tq1_UpperLimit (8.8)

# define Tq2_LowerLimit (-10.0)
# define Tq2_UpperLimit (10.0)

# define Uls16_LowerLimit (0.1)
# define Uls16_UpperLimit (10.0)

# define Uls2_LowerLimit (0.0)
# define Uls2_UpperLimit (1.0)

# define Uls5_LowerLimit (-1000000000.0)
# define Uls5_UpperLimit (1000000000.0)

# define Vel3_LowerLimit (-42)
# define Vel3_UpperLimit (42)

# define Vel5_LowerLimit (0.0)
# define Vel5_UpperLimit (0.5)

# define T6_LowerLimit (-3)
# define T6_UpperLimit (9)

# define Ag18_LowerLimit (0U)
# define Ag18_UpperLimit (90U)

# define Tq14_LowerLimit (0U)
# define Tq14_UpperLimit (1024U)

# define Vel6_LowerLimit (0U)
# define Vel6_UpperLimit (0U)

# define Tq6_LowerLimit (0U)
# define Tq6_UpperLimit (2560U)

# define Uls17_LowerLimit (0U)
# define Uls17_UpperLimit (256U)

# define Uls19_LowerLimit (0U)
# define Uls19_UpperLimit (640U)

# define Uls23_LowerLimit (0U)
# define Uls23_UpperLimit (256U)

# define Spd2_LowerLimit (0U)
# define Spd2_UpperLimit (65408U)

# define Uls18_LowerLimit (0U)
# define Uls18_UpperLimit (128U)

# define Cnt16_LowerLimit (0U)
# define Cnt16_UpperLimit (65535U)


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1480405451
#    error "The magic number of the generated file <C:/Component/SF002A_Rtn_Impl_1.4.2/tools/contract/Rte_Rtn_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1480405451
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_RTN_TYPE_H */
