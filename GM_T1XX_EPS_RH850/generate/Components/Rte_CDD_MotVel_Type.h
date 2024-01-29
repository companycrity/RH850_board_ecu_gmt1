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
 *          File:  Rte_CDD_MotVel_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_MotVel>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTVEL_TYPE_H
# define _RTE_CDD_MOTVEL_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Ti7_LowerLimit (0.0F)
#  define Ti7_UpperLimit (4295.0F)

#  define Vel1_LowerLimit (-1350.0F)
#  define Vel1_UpperLimit (1350.0F)

#  define Uls3_LowerLimit (-1)
#  define Uls3_UpperLimit (1)

#  define Ag5_LowerLimit (0U)
#  define Ag5_UpperLimit (65535U)

#  define Cnt15_LowerLimit (0U)
#  define Cnt15_UpperLimit (4294967295U)

#  define Cnt18_LowerLimit (0U)
#  define Cnt18_UpperLimit (31U)

#  define Cnt22_LowerLimit (0U)
#  define Cnt22_UpperLimit (7U)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTVEL_TYPE_H */
