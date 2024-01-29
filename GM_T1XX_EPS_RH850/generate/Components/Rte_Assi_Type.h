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
 *          File:  Rte_Assi_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <Assi>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSI_TYPE_H
# define _RTE_ASSI_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Spd1_LowerLimit (0.0F)
#  define Spd1_UpperLimit (511.0F)

#  define Tq1_LowerLimit (-8.8F)
#  define Tq1_UpperLimit (8.8F)

#  define Tq10_LowerLimit (0.0F)
#  define Tq10_UpperLimit (8.8F)

#  define Tq2_LowerLimit (-10.0F)
#  define Tq2_UpperLimit (10.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Uls5_LowerLimit (-1000000000.0F)
#  define Uls5_UpperLimit (1000000000.0F)

#  define Uls6_LowerLimit (0.0F)
#  define Uls6_UpperLimit (200.0F)

#  define Tq11_LowerLimit (-2048)
#  define Tq11_UpperLimit (32748)

#  define Cnt26_LowerLimit (0U)
#  define Cnt26_UpperLimit (200U)

#  define Uls4_LowerLimit (0U)
#  define Uls4_UpperLimit (16384U)

#  define Tq12_LowerLimit (0U)
#  define Tq12_UpperLimit (18022U)

#  define Tq6_LowerLimit (0U)
#  define Tq6_UpperLimit (2560U)

#  define Spd2_LowerLimit (0U)
#  define Spd2_UpperLimit (65408U)

#  define Cnt16_LowerLimit (0U)
#  define Cnt16_UpperLimit (65535U)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ASSI_TYPE_H */
