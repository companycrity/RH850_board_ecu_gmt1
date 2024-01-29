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
 *          File:  Rte_MotQuadDetn_Type.h
 *     SW-C Type:  MotQuadDetn
 *  Generated at:  Wed Jun  3 13:43:22 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTQUADDETN_TYPE_H
# define _RTE_MOTQUADDETN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Tq1_LowerLimit (-8.8)
# define Tq1_UpperLimit (8.8)

# define Ag6_LowerLimit (0)
# define Ag6_UpperLimit (51200)

# define Ag7_LowerLimit (-2147483648)
# define Ag7_UpperLimit (2147483646)

# define Cnt2_LowerLimit (-1)
# define Cnt2_UpperLimit (1)

# ifndef MOTQUAD_QUAD1
#  define MOTQUAD_QUAD1 (1U)
# endif

# ifndef MOTQUAD_QUAD2
#  define MOTQUAD_QUAD2 (2U)
# endif

# ifndef MOTQUAD_QUAD3
#  define MOTQUAD_QUAD3 (3U)
# endif

# ifndef MOTQUAD_QUAD4
#  define MOTQUAD_QUAD4 (4U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1433343525
#    error "The magic number of the generated file <C:/Component/SF101A_MotQuadDetn_Impl/tools/contract/Rte_MotQuadDetn_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1433343525
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTQUADDETN_TYPE_H */
