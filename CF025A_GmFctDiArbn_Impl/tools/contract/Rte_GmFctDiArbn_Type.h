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
 *          File:  Rte_GmFctDiArbn_Type.h
 *     SW-C Type:  GmFctDiArbn
 *  Generated at:  Thu Jun 30 10:59:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMFCTDIARBN_TYPE_H
# define _RTE_GMFCTDIARBN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef GMFCTDIARBNSTS_WAIT
#  define GMFCTDIARBNSTS_WAIT (0U)
# endif

# ifndef GMFCTDIARBNSTS_INPROC
#  define GMFCTDIARBNSTS_INPROC (1U)
# endif

# ifndef GMFCTDIARBNSTS_PASSD
#  define GMFCTDIARBNSTS_PASSD (2U)
# endif

# ifndef GMFCTDIARBNSTS_SWBASDMTGTNFAIL
#  define GMFCTDIARBNSTS_SWBASDMTGTNFAIL (3U)
# endif

# ifndef GMFCTDIARBNSTS_TIMEOUTFAIL
#  define GMFCTDIARBNSTS_TIMEOUTFAIL (4U)
# endif

# ifndef LOAST_NORM
#  define LOAST_NORM (0U)
# endif

# ifndef LOAST_LIMD
#  define LOAST_LIMD (1U)
# endif

# ifndef LOAST_SWBASDMTGTN
#  define LOAST_SWBASDMTGTN (2U)
# endif

# ifndef LOAST_FADEOUT
#  define LOAST_FADEOUT (3U)
# endif

# ifndef LOAST_CTRLDSHTDWNREQD
#  define LOAST_CTRLDSHTDWNREQD (4U)
# endif

# ifndef LOAST_IMDTSHTDWNREQD
#  define LOAST_IMDTSHTDWNREQD (5U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467289908
#    error "The magic number of the generated file <C:/Component/CF025A_GmFctDiArbn_Impl/tools/contract/Rte_GmFctDiArbn_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467289908
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMFCTDIARBN_TYPE_H */
