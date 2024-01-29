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
 *          File:  Rte_MotCurrRegCfg_Type.h
 *     SW-C Type:  MotCurrRegCfg
 *  Generated at:  Fri Nov 18 14:31:28 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTCURRREGCFG_TYPE_H
# define _RTE_MOTCURRREGCFG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Ag12_LowerLimit (-1.62)
# define Ag12_UpperLimit (1.62)

# define Frq2_LowerLimit (1.0)
# define Frq2_UpperLimit (200.0)

# define Indu1_LowerLimit (0.00003)
# define Indu1_UpperLimit (0.00041)

# define R1_LowerLimit (0.0)
# define R1_UpperLimit (0.2)

# define R2_LowerLimit (0.0)
# define R2_UpperLimit (45.0)

# define R3_LowerLimit (0.0)
# define R3_UpperLimit (2.25)

# define R4_LowerLimit (0.0)
# define R4_UpperLimit (3.6)

# define R5_LowerLimit (0.005)
# define R5_UpperLimit (0.125)

# define Spd1_LowerLimit (0.0)
# define Spd1_UpperLimit (511.0)

# define Spd3_LowerLimit (0.0)
# define Spd3_UpperLimit (255.0)

# define Ti10_LowerLimit (0.0)
# define Ti10_UpperLimit (0.0002)

# define Ti11_LowerLimit (0.000091)
# define Ti11_UpperLimit (0.000143)

# define Uls10_LowerLimit (0.0)
# define Uls10_UpperLimit (20.0)

# define Vel1_LowerLimit (-1350)
# define Vel1_UpperLimit (1350.0)

# define Frq3_LowerLimit (0U)
# define Frq3_UpperLimit (48000U)

# define Frq4_LowerLimit (0U)
# define Frq4_UpperLimit (64000U)

# define Vel4_LowerLimit (0U)
# define Vel4_UpperLimit (43200U)

# define Frq5_LowerLimit (0U)
# define Frq5_UpperLimit (64000U)

# define Frq6_LowerLimit (0U)
# define Frq6_UpperLimit (51200U)

# define Cnt14_LowerLimit (2U)
# define Cnt14_UpperLimit (12U)

# ifndef MCECS_OFFSCMDSTRT
#  define MCECS_OFFSCMDSTRT (0U)
# endif

# ifndef MCECS_OFFSCMDHI
#  define MCECS_OFFSCMDHI (1U)
# endif

# ifndef MCECS_OFFSCMDLO
#  define MCECS_OFFSCMDLO (2U)
# endif

# ifndef MCECS_OFFSCMDZERO
#  define MCECS_OFFSCMDZERO (3U)
# endif

# ifndef MCECS_OFFSCMDEND
#  define MCECS_OFFSCMDEND (4U)
# endif

# ifndef MCECS_GAINCMDAD
#  define MCECS_GAINCMDAD (5U)
# endif

# ifndef MCECS_GAINCMDBE
#  define MCECS_GAINCMDBE (6U)
# endif

# ifndef MCECS_GAINCMDCF
#  define MCECS_GAINCMDCF (7U)
# endif

# ifndef MCECS_CMDSAFEST
#  define MCECS_CMDSAFEST (8U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1479494669
#    error "The magic number of the generated file <C:/component/SF104A_MotCurrRegCfg_Impl/tools/contract/Rte_MotCurrRegCfg_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1479494669
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTCURRREGCFG_TYPE_H */
