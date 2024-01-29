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
 *          File:  Rte_CDD_MotCtrlMgr_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_MotCtrlMgr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTCTRLMGR_TYPE_H
# define _RTE_CDD_MOTCTRLMGR_TYPE_H

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

#  define Curr1_LowerLimit (-145.0F)
#  define Curr1_UpperLimit (145.0F)

#  define Curr6_LowerLimit (0.0F)
#  define Curr6_UpperLimit (200.0F)

#  define Curr7_LowerLimit (-200.0F)
#  define Curr7_UpperLimit (200.0F)

#  define R2_LowerLimit (0.0F)
#  define R2_UpperLimit (45.0F)

#  define R3_LowerLimit (0.0F)
#  define R3_UpperLimit (2.25F)

#  define R4_LowerLimit (0.0F)
#  define R4_UpperLimit (3.6F)

#  define R7_LowerLimit (-0.5F)
#  define R7_UpperLimit (0.5F)

#  define T1_LowerLimit (-50.0F)
#  define T1_UpperLimit (150.0F)

#  define Vel1_LowerLimit (-1350.0F)
#  define Vel1_UpperLimit (1350.0F)

#  define Volt1_LowerLimit (6.0F)
#  define Volt1_UpperLimit (26.5F)

#  define Volt17_LowerLimit (-26.5F)
#  define Volt17_UpperLimit (26.5F)

#  define Volt3_LowerLimit (0.0F)
#  define Volt3_UpperLimit (5.0F)

#  define Ag8_LowerLimit (-2147483647 - 1)
#  define Ag8_UpperLimit (2147483647)

#  define Uls3_LowerLimit (-1)
#  define Uls3_UpperLimit (1)

#  define Ag5_LowerLimit (0U)
#  define Ag5_UpperLimit (65535U)

#  define Cnt16_LowerLimit (0U)
#  define Cnt16_UpperLimit (65535U)

#  define Cnt15_LowerLimit (0U)
#  define Cnt15_UpperLimit (4294967295U)

#  define Cnt17_LowerLimit (0U)
#  define Cnt17_UpperLimit (67108863U)

#  define Cnt22_LowerLimit (0U)
#  define Cnt22_UpperLimit (7U)

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

#  ifndef SIGQLFR_NORES
#   define SIGQLFR_NORES (0U)
#  endif

#  ifndef SIGQLFR_PASSD
#   define SIGQLFR_PASSD (1U)
#  endif

#  ifndef SIGQLFR_FAILD
#   define SIGQLFR_FAILD (2U)
#  endif

#  ifndef SYSST_DI
#   define SYSST_DI (0U)
#  endif

#  ifndef SYSST_OFF
#   define SYSST_OFF (1U)
#  endif

#  ifndef SYSST_ENA
#   define SYSST_ENA (2U)
#  endif

#  ifndef SYSST_WRMININ
#   define SYSST_WRMININ (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTCTRLMGR_TYPE_H */
