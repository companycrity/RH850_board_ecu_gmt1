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
 *          File:  Rte_MotCurrRegCfg_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <MotCurrRegCfg>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTCURRREGCFG_TYPE_H
# define _RTE_MOTCURRREGCFG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Ag12_LowerLimit (-1.62F)
#  define Ag12_UpperLimit (1.62F)

#  define Frq2_LowerLimit (1.0F)
#  define Frq2_UpperLimit (200.0F)

#  define Indu1_LowerLimit (0.00003F)
#  define Indu1_UpperLimit (0.00041F)

#  define R1_LowerLimit (0.0F)
#  define R1_UpperLimit (0.2F)

#  define R2_LowerLimit (0.0F)
#  define R2_UpperLimit (45.0F)

#  define R3_LowerLimit (0.0F)
#  define R3_UpperLimit (2.25F)

#  define R4_LowerLimit (0.0F)
#  define R4_UpperLimit (3.6F)

#  define R5_LowerLimit (0.005F)
#  define R5_UpperLimit (0.125F)

#  define Spd1_LowerLimit (0.0F)
#  define Spd1_UpperLimit (511.0F)

#  define Spd3_LowerLimit (0.0F)
#  define Spd3_UpperLimit (255.0F)

#  define Ti10_LowerLimit (0.0F)
#  define Ti10_UpperLimit (0.0002F)

#  define Ti11_LowerLimit (0.000091F)
#  define Ti11_UpperLimit (0.000143F)

#  define Uls10_LowerLimit (0.0F)
#  define Uls10_UpperLimit (20.0F)

#  define Vel1_LowerLimit (-1350.0F)
#  define Vel1_UpperLimit (1350.0F)

#  define Frq3_LowerLimit (0U)
#  define Frq3_UpperLimit (48000U)

#  define Frq4_LowerLimit (0U)
#  define Frq4_UpperLimit (64000U)

#  define Vel4_LowerLimit (0U)
#  define Vel4_UpperLimit (43200U)

#  define Frq5_LowerLimit (0U)
#  define Frq5_UpperLimit (64000U)

#  define Frq6_LowerLimit (0U)
#  define Frq6_UpperLimit (51200U)

#  define Cnt14_LowerLimit (2U)
#  define Cnt14_UpperLimit (12U)

#  ifndef MCECS_OFFSCMDSTRT
#   define MCECS_OFFSCMDSTRT (0U)
#  endif

#  ifndef MCECS_OFFSCMDHI
#   define MCECS_OFFSCMDHI (1U)
#  endif

#  ifndef MCECS_OFFSCMDLO
#   define MCECS_OFFSCMDLO (2U)
#  endif

#  ifndef MCECS_OFFSCMDZERO
#   define MCECS_OFFSCMDZERO (3U)
#  endif

#  ifndef MCECS_OFFSCMDEND
#   define MCECS_OFFSCMDEND (4U)
#  endif

#  ifndef MCECS_GAINCMDAD
#   define MCECS_GAINCMDAD (5U)
#  endif

#  ifndef MCECS_GAINCMDBE
#   define MCECS_GAINCMDBE (6U)
#  endif

#  ifndef MCECS_GAINCMDCF
#   define MCECS_GAINCMDCF (7U)
#  endif

#  ifndef MCECS_CMDSAFEST
#   define MCECS_CMDSAFEST (8U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTCURRREGCFG_TYPE_H */
