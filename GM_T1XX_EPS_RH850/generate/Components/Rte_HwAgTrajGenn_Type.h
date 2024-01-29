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
 *          File:  Rte_HwAgTrajGenn_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <HwAgTrajGenn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGTRAJGENN_TYPE_H
# define _RTE_HWAGTRAJGENN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef HWAGTRAJCMDST_WAIT
#   define HWAGTRAJCMDST_WAIT (0U)
#  endif

#  ifndef HWAGTRAJCMDST_HWAGA
#   define HWAGTRAJCMDST_HWAGA (1U)
#  endif

#  ifndef HWAGTRAJCMDST_CONVEL
#   define HWAGTRAJCMDST_CONVEL (2U)
#  endif

#  ifndef HWAGTRAJCMDST_HWAGDECEL
#   define HWAGTRAJCMDST_HWAGDECEL (3U)
#  endif

#  ifndef HWAGTRAJCMDST_HLD
#   define HWAGTRAJCMDST_HLD (4U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWAGTRAJGENN_TYPE_H */
