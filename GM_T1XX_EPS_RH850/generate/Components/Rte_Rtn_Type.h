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
 *          File:  Rte_Rtn_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <Rtn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_RTN_TYPE_H
# define _RTE_RTN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Ag15_LowerLimit (-1440.0F)
#  define Ag15_UpperLimit (1440.0F)

#  define Ag16_LowerLimit (0.0F)
#  define Ag16_UpperLimit (20.0F)

#  define Ag17_LowerLimit (0.0F)
#  define Ag17_UpperLimit (1440.0F)

#  define Rate4_LowerLimit (0.1F)
#  define Rate4_UpperLimit (10.0F)

#  define Spd1_LowerLimit (0.0F)
#  define Spd1_UpperLimit (511.0F)

#  define T1_LowerLimit (-50.0F)
#  define T1_UpperLimit (150.0F)

#  define Tq1_LowerLimit (-8.8F)
#  define Tq1_UpperLimit (8.8F)

#  define Tq2_LowerLimit (-10.0F)
#  define Tq2_UpperLimit (10.0F)

#  define Uls16_LowerLimit (0.1F)
#  define Uls16_UpperLimit (10.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Uls5_LowerLimit (-1000000000.0F)
#  define Uls5_UpperLimit (1000000000.0F)

#  define Vel3_LowerLimit (-42.0F)
#  define Vel3_UpperLimit (42.0F)

#  define Vel5_LowerLimit (0.0F)
#  define Vel5_UpperLimit (0.5F)

#  define T6_LowerLimit (-3)
#  define T6_UpperLimit (9)

#  define Ag18_LowerLimit (0U)
#  define Ag18_UpperLimit (90U)

#  define Tq14_LowerLimit (0U)
#  define Tq14_UpperLimit (1024U)

#  define Vel6_LowerLimit (0U)
#  define Vel6_UpperLimit (0U)

#  define Tq6_LowerLimit (0U)
#  define Tq6_UpperLimit (2560U)

#  define Uls17_LowerLimit (0U)
#  define Uls17_UpperLimit (256U)

#  define Uls19_LowerLimit (0U)
#  define Uls19_UpperLimit (640U)

#  define Uls23_LowerLimit (0U)
#  define Uls23_UpperLimit (256U)

#  define Spd2_LowerLimit (0U)
#  define Spd2_UpperLimit (65408U)

#  define Uls18_LowerLimit (0U)
#  define Uls18_UpperLimit (128U)

#  define Cnt16_LowerLimit (0U)
#  define Cnt16_UpperLimit (65535U)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_RTN_TYPE_H */
