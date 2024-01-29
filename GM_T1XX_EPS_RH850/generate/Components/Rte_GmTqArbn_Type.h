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
 *          File:  Rte_GmTqArbn_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <GmTqArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMTQARBN_TYPE_H
# define _RTE_GMTQARBN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef GMTQARBNESCST_INACTV
#   define GMTQARBNESCST_INACTV (0U)
#  endif

#  ifndef GMTQARBNESCST_ACTV
#   define GMTQARBNESCST_ACTV (1U)
#  endif

#  ifndef GMTQARBNESCST_TMPLIMD
#   define GMTQARBNESCST_TMPLIMD (2U)
#  endif

#  ifndef GMTQARBNESCST_PRMNTFAILD
#   define GMTQARBNESCST_PRMNTFAILD (3U)
#  endif

#  ifndef GMTQARBNESCST_MFGDI
#   define GMTQARBNESCST_MFGDI (4U)
#  endif

#  ifndef GMTQARBNLKAST_INACTV
#   define GMTQARBNLKAST_INACTV (0U)
#  endif

#  ifndef GMTQARBNLKAST_ACTV
#   define GMTQARBNLKAST_ACTV (1U)
#  endif

#  ifndef GMTQARBNLKAST_TMPLIMD
#   define GMTQARBNLKAST_TMPLIMD (2U)
#  endif

#  ifndef GMTQARBNLKAST_PRMNTFAILD
#   define GMTQARBNLKAST_PRMNTFAILD (3U)
#  endif

#  ifndef GMTQARBNLKAST_MFGDI
#   define GMTQARBNLKAST_MFGDI (4U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMTQARBN_TYPE_H */
