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
 *          File:  Rte_CDD_MotCurrRegVltgLimr_Type.h
 *     SW-C Type:  CDD_MotCurrRegVltgLimr
 *  Generated at:  Wed Jan  4 13:42:55 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTCURRREGVLTGLIMR_TYPE_H
# define _RTE_CDD_MOTCURRREGVLTGLIMR_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Ag10_LowerLimit (0)
# define Ag10_UpperLimit (6.2832)

# define Curr4_LowerLimit (-450)
# define Curr4_UpperLimit (450)

# define Curr5_LowerLimit (-1000)
# define Curr5_UpperLimit (1000)

# define R1_LowerLimit (0.0)
# define R1_UpperLimit (0.2)

# define Rate3_LowerLimit (0.0)
# define Rate3_UpperLimit (1000.0)

# define Uls2_LowerLimit (0.0)
# define Uls2_UpperLimit (1.0)

# define Uls7_LowerLimit (-25)
# define Uls7_UpperLimit (25)

# define Uls8_LowerLimit (-200)
# define Uls8_UpperLimit (200)

# define Uls9_LowerLimit (0.98)
# define Uls9_UpperLimit (1)

# define Volt17_LowerLimit (-26.5)
# define Volt17_UpperLimit (26.5)


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1483562755
#    error "The magic number of the generated file <C:/component/SF105A_MotCurrRegVltgLimr_Impl/tools/contract/Rte_CDD_MotCurrRegVltgLimr_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1483562755
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_MOTCURRREGVLTGLIMR_TYPE_H */
