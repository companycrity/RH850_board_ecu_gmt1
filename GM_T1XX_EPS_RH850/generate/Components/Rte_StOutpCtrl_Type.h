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
 *          File:  Rte_StOutpCtrl_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <StOutpCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STOUTPCTRL_TYPE_H
# define _RTE_STOUTPCTRL_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Rate1_LowerLimit (0.1F)
#  define Rate1_UpperLimit (500.0F)

#  define Rate2_LowerLimit (0.0F)
#  define Rate2_UpperLimit (500.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Cnt21_LowerLimit (1U)
#  define Cnt21_UpperLimit (3U)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STOUTPCTRL_TYPE_H */
