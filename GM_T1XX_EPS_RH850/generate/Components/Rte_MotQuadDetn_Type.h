/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_MotQuadDetn_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <MotQuadDetn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTQUADDETN_TYPE_H
# define _RTE_MOTQUADDETN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Tq1_LowerLimit (-8.8F)
#  define Tq1_UpperLimit (8.8F)

#  define Ag6_LowerLimit (0)
#  define Ag6_UpperLimit (51200)

#  define Ag7_LowerLimit (-2147483647 - 1)
#  define Ag7_UpperLimit (2147483646)

#  define Cnt2_LowerLimit (-1)
#  define Cnt2_UpperLimit (1)

#  ifndef MOTQUAD_QUAD1
#   define MOTQUAD_QUAD1 (1U)
#  endif

#  ifndef MOTQUAD_QUAD2
#   define MOTQUAD_QUAD2 (2U)
#  endif

#  ifndef MOTQUAD_QUAD3
#   define MOTQUAD_QUAD3 (3U)
#  endif

#  ifndef MOTQUAD_QUAD4
#   define MOTQUAD_QUAD4 (4U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTQUADDETN_TYPE_H */
