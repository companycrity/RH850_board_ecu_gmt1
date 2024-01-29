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
 *          File:  Rte_HwAgTrajGenn_Type.h
 *     SW-C Type:  HwAgTrajGenn
 *  Generated at:  Tue Feb  9 12:14:53 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGTRAJGENN_TYPE_H
# define _RTE_HWAGTRAJGENN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef HWAGTRAJCMDST_WAIT
#  define HWAGTRAJCMDST_WAIT (0U)
# endif

# ifndef HWAGTRAJCMDST_HWAGA
#  define HWAGTRAJCMDST_HWAGA (1U)
# endif

# ifndef HWAGTRAJCMDST_CONVEL
#  define HWAGTRAJCMDST_CONVEL (2U)
# endif

# ifndef HWAGTRAJCMDST_HWAGDECEL
#  define HWAGTRAJCMDST_HWAGDECEL (3U)
# endif

# ifndef HWAGTRAJCMDST_HLD
#  define HWAGTRAJCMDST_HLD (4U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1455045380
#    error "The magic number of the generated file <C:/component/SF021A_HwAgTrajGenn_Impl/tools/contract/Rte_HwAgTrajGenn_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455045380
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAGTRAJGENN_TYPE_H */
