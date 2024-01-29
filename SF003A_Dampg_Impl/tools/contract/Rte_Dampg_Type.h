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
 *          File:  Rte_Dampg_Type.h
 *     SW-C Type:  Dampg
 *  Generated at:  Wed Aug 26 10:43:00 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DAMPG_TYPE_H
# define _RTE_DAMPG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Frq7_LowerLimit (5)
# define Frq7_UpperLimit (100)

# define Frq8_LowerLimit (5)
# define Frq8_UpperLimit (31.25)

# define Frq9_LowerLimit (0.0039)
# define Frq9_UpperLimit (100)

# define Gain8_LowerLimit (0.0)
# define Gain8_UpperLimit (0.1)

# define Spd1_LowerLimit (0.0)
# define Spd1_UpperLimit (511.0)

# define T1_LowerLimit (-50.0)
# define T1_UpperLimit (150.0)

# define T8_LowerLimit (0.0)
# define T8_UpperLimit (10.0)

# define Tq1_LowerLimit (-8.8)
# define Tq1_UpperLimit (8.8)

# define Tq18_LowerLimit (0.0)
# define Tq18_UpperLimit (10.0)

# define Tq2_LowerLimit (-10.0)
# define Tq2_UpperLimit (10.0)

# define Uls2_LowerLimit (0.0)
# define Uls2_UpperLimit (1.0)

# define Uls21_LowerLimit (0)
# define Uls21_UpperLimit (2)

# define Uls22_LowerLimit (0.0)
# define Uls22_UpperLimit (10.0)

# define Uls5_LowerLimit (-1000000000.0)
# define Uls5_UpperLimit (1000000000.0)

# define Vel1_LowerLimit (-1350)
# define Vel1_UpperLimit (1350.0)

# define Vel8_LowerLimit (0)
# define Vel8_UpperLimit (128)

# define T7_LowerLimit (-6400)
# define T7_UpperLimit (19200)

# define Vel7_LowerLimit (0U)
# define Vel7_UpperLimit (84U)

# define Uls15_LowerLimit (0U)
# define Uls15_UpperLimit (0U)

# define Tq13_LowerLimit (0U)
# define Tq13_UpperLimit (0U)

# define Uls20_LowerLimit (0U)
# define Uls20_UpperLimit (0U)

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
#   if RTE_MAGIC_NUMBER != 1440599522
#    error "The magic number of the generated file <C:/component/SF003A_Dampg_Impl/tools/contract/Rte_Dampg_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1440599522
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_DAMPG_TYPE_H */
