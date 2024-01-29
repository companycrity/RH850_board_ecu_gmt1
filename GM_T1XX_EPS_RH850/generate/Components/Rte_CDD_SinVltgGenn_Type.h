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
 *          File:  Rte_CDD_SinVltgGenn_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_SinVltgGenn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_SINVLTGGENN_TYPE_H
# define _RTE_CDD_SINVLTGGENN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Ag3_LowerLimit (0.0F)
#  define Ag3_UpperLimit (0.999F)

#  define Ti8_LowerLimit (0.0F)
#  define Ti8_UpperLimit (71429.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Uls3_LowerLimit (-1)
#  define Uls3_UpperLimit (1)

#  define Ti3_LowerLimit (0U)
#  define Ti3_UpperLimit (71429U)

#  define Ti9_LowerLimit (0U)
#  define Ti9_UpperLimit (4294967295U)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_SINVLTGGENN_TYPE_H */
