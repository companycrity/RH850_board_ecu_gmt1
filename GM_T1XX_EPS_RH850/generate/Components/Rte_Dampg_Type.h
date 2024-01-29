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
 *          File:  Rte_Dampg_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <Dampg>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DAMPG_TYPE_H
# define _RTE_DAMPG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Frq7_LowerLimit (5.0F)
#  define Frq7_UpperLimit (100.0F)

#  define Frq8_LowerLimit (5.0F)
#  define Frq8_UpperLimit (31.25F)

#  define Frq9_LowerLimit (0.0039F)
#  define Frq9_UpperLimit (100.0F)

#  define Gain8_LowerLimit (0.0F)
#  define Gain8_UpperLimit (0.1F)

#  define Spd1_LowerLimit (0.0F)
#  define Spd1_UpperLimit (511.0F)

#  define T1_LowerLimit (-50.0F)
#  define T1_UpperLimit (150.0F)

#  define T8_LowerLimit (0.0F)
#  define T8_UpperLimit (10.0F)

#  define Tq1_LowerLimit (-8.8F)
#  define Tq1_UpperLimit (8.8F)

#  define Tq18_LowerLimit (0.0F)
#  define Tq18_UpperLimit (10.0F)

#  define Tq2_LowerLimit (-10.0F)
#  define Tq2_UpperLimit (10.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Uls21_LowerLimit (0.0F)
#  define Uls21_UpperLimit (2.0F)

#  define Uls22_LowerLimit (0.0F)
#  define Uls22_UpperLimit (10.0F)

#  define Uls5_LowerLimit (-1000000000.0F)
#  define Uls5_UpperLimit (1000000000.0F)

#  define Vel1_LowerLimit (-1350.0F)
#  define Vel1_UpperLimit (1350.0F)

#  define Vel8_LowerLimit (0.0F)
#  define Vel8_UpperLimit (128.0F)

#  define T7_LowerLimit (-6400)
#  define T7_UpperLimit (19200)

#  define Vel7_LowerLimit (0U)
#  define Vel7_UpperLimit (84U)

#  define Uls15_LowerLimit (0U)
#  define Uls15_UpperLimit (0U)

#  define Tq13_LowerLimit (0U)
#  define Tq13_UpperLimit (0U)

#  define Uls20_LowerLimit (0U)
#  define Uls20_UpperLimit (0U)

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

#endif /* _RTE_DAMPG_TYPE_H */
