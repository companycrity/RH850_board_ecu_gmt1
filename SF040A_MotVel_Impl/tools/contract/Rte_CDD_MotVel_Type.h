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
 *          File:  Rte_CDD_MotVel_Type.h
 *     SW-C Type:  CDD_MotVel
 *  Generated at:  Tue Dec  6 14:35:03 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTVEL_TYPE_H
# define _RTE_CDD_MOTVEL_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Ti7_LowerLimit (0)
# define Ti7_UpperLimit (4295)

# define Vel1_LowerLimit (-1350)
# define Vel1_UpperLimit (1350.0)

# define Uls3_LowerLimit (-1)
# define Uls3_UpperLimit (1)

# define Ag5_LowerLimit (0U)
# define Ag5_UpperLimit (65535U)

# define Cnt15_LowerLimit (0U)
# define Cnt15_UpperLimit (4294967295U)

# define Cnt18_LowerLimit (0U)
# define Cnt18_UpperLimit (31U)

# define Cnt22_LowerLimit (0U)
# define Cnt22_UpperLimit (7U)


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481048461
#    error "The magic number of the generated file <C:/Component/SF040A_MotVel_Impl/tools/contract/Rte_CDD_MotVel_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481048461
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_MOTVEL_TYPE_H */
