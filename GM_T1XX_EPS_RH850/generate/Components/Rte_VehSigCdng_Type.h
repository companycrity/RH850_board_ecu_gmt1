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
 *          File:  Rte_VehSigCdng_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <VehSigCdng>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_VEHSIGCDNG_TYPE_H
# define _RTE_VEHSIGCDNG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define A1_LowerLimit (-10.0F)
#  define A1_UpperLimit (10.0F)

#  define A2_LowerLimit (-180.0F)
#  define A2_UpperLimit (180.0F)

#  define A3_LowerLimit (-50.0F)
#  define A3_UpperLimit (50.0F)

#  define A4_LowerLimit (0.1F)
#  define A4_UpperLimit (10.0F)

#  define A5_LowerLimit (0.1F)
#  define A5_UpperLimit (10.0F)

#  define Frq10_LowerLimit (1.0F)
#  define Frq10_UpperLimit (100.0F)

#  define Rate10_LowerLimit (1.0F)
#  define Rate10_UpperLimit (1200.0F)

#  define Rate5_LowerLimit (-120.0F)
#  define Rate5_UpperLimit (120.0F)

#  define Rate6_LowerLimit (0.1F)
#  define Rate6_UpperLimit (400.0F)

#  define Rate7_LowerLimit (0.1F)
#  define Rate7_UpperLimit (500.0F)

#  define Rate8_LowerLimit (1.0F)
#  define Rate8_UpperLimit (50.0F)

#  define Rate9_LowerLimit (0.1F)
#  define Rate9_UpperLimit (120.0F)

#  define Spd1_LowerLimit (0.0F)
#  define Spd1_UpperLimit (511.0F)

#  define Spd4_LowerLimit (0.1F)
#  define Spd4_UpperLimit (511.0F)

#  define Uls5_LowerLimit (-1000000000.0F)
#  define Uls5_UpperLimit (1000000000.0F)

#  define Cnt16_LowerLimit (0U)
#  define Cnt16_UpperLimit (65535U)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_VEHSIGCDNG_TYPE_H */
