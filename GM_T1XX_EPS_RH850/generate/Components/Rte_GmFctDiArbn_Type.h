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
 *          File:  Rte_GmFctDiArbn_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <GmFctDiArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMFCTDIARBN_TYPE_H
# define _RTE_GMFCTDIARBN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef GMFCTDIARBNSTS_WAIT
#   define GMFCTDIARBNSTS_WAIT (0U)
#  endif

#  ifndef GMFCTDIARBNSTS_INPROC
#   define GMFCTDIARBNSTS_INPROC (1U)
#  endif

#  ifndef GMFCTDIARBNSTS_PASSD
#   define GMFCTDIARBNSTS_PASSD (2U)
#  endif

#  ifndef GMFCTDIARBNSTS_SWBASDMTGTNFAIL
#   define GMFCTDIARBNSTS_SWBASDMTGTNFAIL (3U)
#  endif

#  ifndef GMFCTDIARBNSTS_TIMEOUTFAIL
#   define GMFCTDIARBNSTS_TIMEOUTFAIL (4U)
#  endif

#  ifndef LOAST_NORM
#   define LOAST_NORM (0U)
#  endif

#  ifndef LOAST_LIMD
#   define LOAST_LIMD (1U)
#  endif

#  ifndef LOAST_SWBASDMTGTN
#   define LOAST_SWBASDMTGTN (2U)
#  endif

#  ifndef LOAST_FADEOUT
#   define LOAST_FADEOUT (3U)
#  endif

#  ifndef LOAST_CTRLDSHTDWNREQD
#   define LOAST_CTRLDSHTDWNREQD (4U)
#  endif

#  ifndef LOAST_IMDTSHTDWNREQD
#   define LOAST_IMDTSHTDWNREQD (5U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMFCTDIARBN_TYPE_H */
